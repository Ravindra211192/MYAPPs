/**********************************************************************
* FileName:        840Haupt_P.c
* Processor:       dsPIC33EP23GS502
***********************************************************************/
// TCY 64MHz

// 25.06.2018
// Version 501 fuer EPxxGS502, nur fuer 840d/e mit Umbau pin 9 gegen pin 5 !!!!!!!!!!!!!!!!
//basiert auf V501 von EPxxGS202 mit 2 Komparatoren als Symmetrie. Fuer Prozessor 502
// Komparatoren 3 u 4 zum Stromregeln, Komparator 2 fuer Imax. Komparator 1 koennte Uist auswerten, noch nicht aktiv.
// 24V, 15V Sendungen neue Nummer
// Treppen richtig rechnen.
// regler "Integral 2 mal schneller. /4 .weniger Nachschwinger.
// Version 502
// ADC Initialiesierung als nicht Synchron, scannt besser und wartet nicht auf Perioden.
// Version 503 fuer EP32GS502 am 11.07.2018


#include "p33EP32GS502.h"
#include "840_header.h"
#include "math.h"
//////////////////////////////Routine e Prototyp////////////////////////////////
void InitOsc(void);
void Konfig (void);
void COMP_DAC (void);
void InitIO (void);
void Init_ADC(void);
void Sollwert_korrigieren(void);				// INV_Enable steuern, QuelleStromwertn -> EIN(opto), Stromwert<3A, Befehl on/off
void PWM_Konfig(void);
void InitDaten(void);							// Daten vom LT initialisieren
void pruefen(void);

volatile unsigned int INV_Enable;				// Freigabe vom PWM (Inverter) -> Leistung ein
volatile unsigned int Freigabe; 				// nach Check freigeben wenn ok
volatile unsigned int MaxAnzahl; 				// Zaehler fuer Uzkmax
volatile unsigned int UmaxTimer; 				// Uzkmax suchen, um 100ms lang
volatile unsigned int Uzkmax; 					// Netzspannung ueber 100ms gemittelt
volatile unsigned int UzkmaxSum; 				// Netzspannung ueber 100ms gemittelt alle 100 Werte
volatile unsigned int ueberstrom=0;				// Zaehler , bei 1 mal LT aus. Reset mit Signal EIN=1 ( heisst "aus")
volatile unsigned int F_ueberstrom=0;
      
volatile signed int Poti_Strom = 0; //pm
volatile unsigned int F_Poti = 0;   //pm
volatile unsigned int temp = 0;   //pm

volatile unsigned int Ut=5000;					// Uampl*t1
volatile unsigned int IL3=32;					// (IL1+IL2)²/256
volatile unsigned int K1=50;					// Ut/t2
volatile unsigned int K=230;					// 128/IL3*K1
volatile unsigned int Rmess=20;					// SchweisskreisKurzschlussWiderstand in mOhm
volatile unsigned int IL11;						// IL1 verrechnet um Ianf
volatile unsigned int UZK_loaded = 0;
volatile unsigned int error_reg1_read=0;
volatile unsigned int error_reg2_read=0;
volatile unsigned int error_reg1_write=0;
volatile unsigned int error_reg2_write=0;
//	8 BIT unsigned
volatile unsigned char Inhib=1;					// LT Sperre bei Unsymmetrie, Ueberspannung ....
volatile unsigned int Failure_code=0;
volatile unsigned int aux_on_cnt = 0;
volatile unsigned int aux_off_cnt = 0;
volatile unsigned int Isoll_old = 0;   //##

const unsigned int Error_register1 __attribute__((space(prog),address(0x2B00)))=0x0000;
const unsigned int Error_register2 __attribute__((space(prog),address(0x2B10)))=0x0000;
//_FOSCSEL(FNOSC_FRCPLL & IESO_OFF)			// interne RC-Oscilator mit PLL
//_FOSC(FCKSM_CSECMD & OSCIOFNC_ON)
// FOSC

#pragma config FNOSC = FRCPLL           // Oscillator Source Selection (Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) )
#pragma config IESO = OFF               // Two-speed Oscillator Start-up Enable bit (Start up with user-selected oscillator source)


#pragma config POSCMD = NONE            // Primary Oscillator Mode Select bits (Primary Oscillator disabled)
#pragma config OSCIOFNC = ON            // OSC2 Pin Function bit (OSC2 is general purpose digital I/O pin)
#pragma config IOL1WAY = ON             // Peripheral pin select configuration bit (Allow only one reconfiguration)
#pragma config FCKSM = CSECMD           // Clock Switching Mode bits (Clock switching is enabled,Fail-safe Clock Monitor is disabled)
#pragma config PLLKEN = ON              // PLL Lock Enable Bit (Clock switch to PLL source will wait until the PLL lock signal is valid)

#pragma config PWMLOCK = 0              // kein PWM schutz

// FWDT
#pragma config WDTPOST = PS32768        // Watchdog Timer Postscaler bits (1:32,768)
#pragma config WDTPRE = PR128           // Watchdog Timer Prescaler bit (1:128)
#pragma config WDTEN = OFF              // Watchdog Timer Enable bits (WDT and SWDTEN disabled)
#pragma config WINDIS = OFF             // Watchdog Timer Window Enable bit (Watchdog Timer in Non-Window mode)
#pragma config WDTWIN = WIN25           // Watchdog Timer Window Select bits (WDT Window is 25% of WDT period)

// FICD
#pragma config ICS = PGD2               // ICD Communication Channel Select bits (Communicate on PGEC1 and PGED2)
#pragma config JTAGEN = OFF             // JTAG Enable bit (JTAG is disabled)
//#pragma config BTSWP = OFF              // BOOTSWP Instruction Enable/Disable bit (BOOTSWP instruction is disabled)

//_FPOR(FPWRT_PWR128)							// Power ON 128ms
//_FICD(ICS_PGD2& JTAGEN_OFF)

int main (void)
{
	t22=(__builtin_divud(__builtin_muluu(PWM_P,106),100))>>8;               // Periode/256=54ns?

    InitOsc();								// Oszillatoren Initialisierung
	Konfig();								// Konfig Ports, Timer ...
	COMP_DAC();								// Konfig Komparatoren und DAC
	InitIO();								// Virtual pin verbinden
	Init_ADC();								// ADC Init
	InitDaten();							// initialisieren der Daten
	SPI_Konfig_Master();
	PWM_Konfig();
    
	IEC0bits.T1IE=1;						// Enable Timer1 Frame UART
	IEC0bits.T3IE=1;						// Start T3 Interrupt fuer Zeit-Zaehler
	IEC0bits.T2IE=1;						// Enable Timer2 , Synchro?
	UARTinit();
	Sollwert_korrigieren();							// Verwendet als Startfunktion
  
 	RF=1;									// SW Ausgang offen. Strom - Messung
   	Fehler.bits.SPN=0;

	//Komparator_2 = Imax3PH;                 // Abschaltgrenze fuer Strom setzen, hier nicht mehr

	//LED_R=1;								// noch Fehler
	Freigabe=1;								// noch zu machen!!!! dass Uart einschaltet die Freigabe	  
	TxDaten.Ack=5;                          // Sendungen taetigen
    Delay_ms(1);

    ODCB		= 0B0000000000000000;			// Port B  kein o.D
	ODCA		= 0B0000000000001000;			// SW als OpenDrain A3
    
    //##test when it comes!!!
    TRISBbits.TRISB5 = 0;
    PORTBbits.RB5 = 0;
    
	while (Freigabe==0)						// Freigabe -Wartenzeit ueber USART
	    {	Kommunikation();}
    
// ******************************************************** Hauptschleife **********************************************************	
  while(1)
{ 
    PWM1_temp = Sym << 5;
    PWM2_temp = AB_Sym << 5;
    
    if(F_Poti == 0)
    {
        while(U_Poti > 0)
        {
            INV_Enable = 0;
            pdc1 = 0;
            Stellwert_1 = 0;
            pruefen();
        }
        F_Poti = 1;
        F_ueberstrom = 0;
        Failure_code = 0;
    }
    
	if (U1STAbits.RIDLE==0 && T1CONbits.TON==0   )      // pruefen ob Rx da, dann Zeit starten
    {
        T1CONbits.TON=1;                       			// Messung der Zeit in einer Sendung, wenn alle 4 bytes nicht rechzeitig kommen ->Fehler
    }
    
    if(IFS0bits.T1IF) { IFS0bits.T1IF=0; TMR1=0; } 
    
	if(!INV_Enable || P5_Daten[ID_P5_IST_STROM]==0)  LaufTimer=0;

	SPI_Kom_Master(PFC_Kommando);			//  SPI senden

// UZK Mittelwert ueber beide Haelften
	if(Uzk_mid1>10 || Uzk_mid2>10)								//  aber nicht kleiner als 10!! , wegen Rechnung
	UzkAvr=((Uzk_mid1+Uzk_mid2)>>1);
	else 
	UzkAvr=10;

	Ilm=__builtin_divud(PWMH,1000);								// vereifachte Rechnung vom Ilm (0,5us)

// Berechnung der Variablen fuer L-Messung 
if(lrechnen) Lrechnen();

Uampl=__builtin_divud(__builtin_muluu(UzkAvr,96),Ue1);		// in 0,1V Schritten, Anpassung zu echt deswegen 92. PWMH in Schritten

unsigned int DutyC;
DutyC = PWM_D;
pdc1 = DutyC;
Kommunikation();	// Uart, (zwischen 0,4 us)
 if(baud_change_needed ==1 && PWM_counter >= 20)
{
    Init_UART();   
    uart_change_start_done = 0;
    baud_change_needed = 0;
    PWM_counter = 0;
}
 
 Sollwert_korrigieren();
 FSym();														// Symmetrie pruefen (0,4us)
//root start
 if(trigger_root == 1)
{
    //LED_G = 1;
    sum_old_Iist = sum_old_Iist + Ist_wert - sum_new_Iist;
    sum_new_Iist = __builtin_divud(sum_old_Iist,3); 

    sum_old_uist = sum_old_uist + Uist - uist_filtered;
    uist_filtered = __builtin_divud(sum_old_uist,3);    

    if(sum_new_Iist > 0)
    {
        new_R = __builtin_divud(__builtin_mulus(uist_filtered,1000),sum_new_Iist);        
    }   
    trigger_root = 0;
 }
	
// Uzk max rechnen ueber 64 Messungen
  	if(Timer!=UmaxTimer)
   	{
		UmaxTimer=Timer;
		UzkmaxSum+=P5_Daten[ID_P5_NETZSPANNUNG];
		MaxAnzahl++;
		if(MaxAnzahl==64)
			{
			Uzkmax=UzkmaxSum>>6;
			MaxAnzahl=0;
			UzkmaxSum=0;
			}
   	}
 
pruefen();
}	// Ende while(1)
}	// Ende Main 
// *************************************************************** main ende ***********************************************

void pruefen(void)
{
    if((Stellwert_1 > 0) && (INV_Enable == 1))
    //if(INV_Enable == 1) 
    {
        LED_G = 1;
    }
    else 
    {
        LED_G = 0;
    }

//15V-Versorgung    
    if (U15 < (U15_soll - U15_toll)) 
    { 
        Fehler.bits.VERS = 1;  
        Failure_code = 1;    
    }
    if (U15 > (U15_soll + U15_toll))
    { 
        Fehler.bits.VERS = 1;  
        Failure_code = 2;    
    }

// 24V-Versorgung    
    if (U24 < (U24_soll - U24_toll)) 
    { 
        Fehler.bits.VERS = 1;  
        Failure_code = 3;
    }
    if (U24 > (U24_soll + U24_toll)) 
    { 
        Fehler.bits.VERS = 1;  
        Failure_code = 4;
    }

    if (AB_Sym > _Sym_Toll_p || AB_Sym < _Sym_Toll_m )
    { 
        Fehler.bits.SYM = 1;
        Failure_code = 5;
    }	
    
    if (F_ueberstrom == 1)
    { 
        Fehler.bits.STR = 1; ///####primär strom fehler
        Failure_code = 6;
    }
    
    
    
    /*
     	if (Uzk_mid1  >BULK_MAX)	
    {
        Inhib = done; Fehler.bits.UZK = 1;
        if(one_time_failure == 0)
            {
                //one_time_failure = 1;
                //Failure_code=12;
            }
       
    }	// sperren, Uzk nicht ok
	if (Uzk_mid2 > BULK_MAX)	
    {
        Inhib = done; Fehler.bits.UZK = 1;
        if(one_time_failure == 0)
            {
                //one_time_failure = 1;
                //Failure_code=13;
            }
    }	// sperren, Uzk nicht ok

     */
    
    if(Failure_code > 0 && Failure_code < 7)
    {
        LED_R = FehlerAnzeigen_LED_Booster(Failure_code);
        pdc1 = 0;
        INV_Enable = 0;
        F_Poti = 0;
    }
    else
    {
        LED_R=0;
        Fehler.Val = 0;
    }

    //Failure_code = 0;
}

void Sollwert_korrigieren(void)							// Inverter ein/auschalten
{
    if(ueberstrom == 0 && Fehler.Val == 0)
    {
        INV_Enable=1;
        PFC_Kommando=_PFC_Ein; 
        
        if(U_Poti < ADC_0) Poti_Strom = 0;
        if(U_Poti >= ADC_0) {
            Poti_Strom = _ForcedIsoll_1;
            Isoll = Poti_Strom;
            Delay_ms(10);
                      
            Poti_Strom = _ForcedIsoll_2;
            Isoll = Poti_Strom;
            Delay_ms(10);
             
            /*Poti_Strom = _ForcedIsoll_3;
            Isoll = Poti_Strom;
            Delay_ms(2000);
            
            Poti_Strom = _ForcedIsoll_4;
            Isoll = Poti_Strom;
            Delay_ms(2000);
            
            Poti_Strom = _ForcedIsoll_5;
            Isoll = Poti_Strom;
            Delay_ms(2000);
            
            /*Poti_Strom = _ForcedIsoll_6;
            Isoll = Poti_Strom;
            Delay_ms(2000);
            
            Poti_Strom = _ForcedIsoll_7;
            Isoll = Poti_Strom;
            Delay_ms(2000);
            
            Poti_Strom = _ForcedIsoll_max;
            Isoll = Poti_Strom;
            Delay_ms(2000);*/
        }       
    }
    else 
    {
        INV_Enable=0;
    }
    //##
 
}
//
void Kommunikation()							// UART  bei PFC
{ 
	UART_Manangement();
	if (ProtokollTimer>_SendTimer)				// jede 42us, also 3 * 14us, zum 
		{ 
		ProtokollTimer=0;
		Protokoll();							//  wird eine Sendung gemacht
		}
}

void Delay_ms (unsigned int Mx)
{ unsigned long  i=0,j, k=6000;
for(j=0;j<Mx;j++)
    {
    while(i<k){ i++;}
    j++; i=0;
    }
}
//
void Lrechnen(void)
	{ 
	Ut=__builtin_muluu(Uampl,t1);								// Hilfswert
	if(IL1>Ianf) IL11=IL1-Ianf;
		else IL11=1;												// wegen Uebelauf der Folgerechnung

	Lmess=(Ut/IL11)>>3;											// (Ut/IL1)/8

	P5_Daten[ID_P5_INDUKTIVITAET] =Lmess;

	K1=Ut/t2;													// Faktor K1=Ut/t2 fuer die Berechnung
	IL3=((IL1+IL2)*(IL1+IL2))>>5;								// Hilfswert (IL1+IL2)²/32
	K=(K1<<7)/IL3;
	Rmess=(K*IL1)-(K*IL2/IL1*IL2);									// (K*IL1-K*(IL2²/IL1))/4
	Rmess=Rmess>>2;
	P5_Daten[ID_P5_WIDERSTAND] =Rmess;
	lrechnen=0; 
	}


