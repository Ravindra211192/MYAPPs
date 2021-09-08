// fuer Version 840b

#include "p33EP32GS502.h"
#include "840_header.h"
#include "math.h"

// Variablen fuer die Stromberechnung
volatile unsigned int Ilm=0;					// in 1 A Anstieg vom Magentisirungsstrom ueber Lm des Trafos
volatile signed int Stellwert_1;
volatile unsigned int PWMH;						// PWM in ns verfolgt gemessene Werte vom Komparator mit Zeitfilter
volatile unsigned int pwm_z;
volatile unsigned int  DLsv=2000;				// Delay vom Ls des Trafos x100
volatile unsigned int  Uaus;					// Ausgangsspannung in 0,1V
volatile unsigned int  Uaus_alt;				// Ausgangsspannung in 0,1V vorher
volatile signed int    Ulb;						// Ausgangsspannung am Brenner ohne Lkreis, in 0,1V
volatile unsigned int RampeKorr=1;				// Strom diff. von der Rampenzeit alle Einfluesse
volatile unsigned int Uampl=10;					// Ausgangsspannung - Amplitude, UZK/Ue. Init mit 10!!!! fuer Rechnung
volatile unsigned int Ist_wert_alt;	
volatile unsigned int  Iramp;
volatile unsigned int  Isoll_alt ,Isoll_alt2;	
volatile signed int Istwert_Fehler;
volatile signed int Integral;
volatile signed int esum;
volatile signed int Regelung;
volatile unsigned int trig2;
volatile unsigned int Isoll;

volatile unsigned int pdc1 = PWM_D;					// max PWM 
volatile unsigned int PWM1_temp = 0;
volatile unsigned int PWM2_temp = 0;

volatile unsigned int ZeitMessWert;					// gemessene PWM in Stritten
volatile unsigned int Ist_wert=5;					// gemessener Stromwert, min 5
volatile unsigned int Ioffset=0;					// Strom - Offset vom Wandler bei Aus
volatile unsigned int Lmess=150,Ll, Lzeit,lrechnen=0;
volatile unsigned int t1=8300/128;
volatile unsigned int t22=200;
volatile unsigned int t2=800;	// t22*4

volatile unsigned int per_z;						// Perioden Zaehler bei Start, L - Messung
volatile unsigned int IL1=65, IL2=26;				// Strom bei Zeit 0, Strom nach 3 Per absenkung ( fuer R, L Berechnung)
volatile unsigned int pwm_werte[8];
volatile unsigned int Ianf;
volatile unsigned int pwm_cap, pwm_capAlt1; 
volatile unsigned int merker;
const   int d=(PWM_P>>1)+DTv+DTh;

//new from Root test
volatile unsigned int Shortcircuit_detected = 0;
volatile unsigned int constant_Isoll_cnt = 0;
volatile unsigned int constant_PWM_cnt = 0;
volatile unsigned int old_Isoll = 0;
volatile unsigned int I50_delay_active = 0;
volatile unsigned int I50_delay_cnt = 0;
volatile unsigned int uist_filtered = 0;

//variables Root with U/I/R filtering --> > v19.07
volatile unsigned int sum_old_uist = 0;
volatile unsigned int sum_new_Iist = 0;
volatile unsigned int sum_old_Iist = 0;
volatile unsigned int y_new_Rist = 0;
volatile unsigned int new_R = 0;
volatile unsigned int constant_Iactive = 0;

volatile unsigned int I2_UART = 140;
volatile unsigned int PWM_counter = 0;
volatile unsigned int trigger_root = 0;
volatile unsigned int alu_mode_activ = 0;
volatile unsigned int PWM_count_current = 0;  //##PWM pulse count
volatile unsigned int regel_diff = 0; //##Regel difference for current
volatile unsigned int kp = 1; //##coefficient for regel_diff
volatile signed int P_Stell_wert; //##Proportional stell value after the regler
volatile signed int error;  //####Regel difference for current
volatile signed int P_Regelung; //##

void UI_filtering(void);
void PI_Regulator_M(void);

void PI_regulator(void)
{
    //****************** P-I - Regler 12 bit **************************************//
    // Fehler, Stromdifferenz
    //##Istwert_Fehler=(signed int)(Isoll_alt- Ist_wert);
    Istwert_Fehler=(signed int)(Isoll- Ist_wert);
    esum=esum+Istwert_Fehler;
    if(esum<-500) 
    {
        esum=-500;
    }
    else if(esum > 500)
    {
        esum = 500;
    }
    
    if(Istwert_Fehler < 0) Istwert_Fehler = 0;
    
    Istwert_Fehler = Istwert_Fehler >> 4;
    //if(Istwert_Fehler > 1000) Istwert_Fehler = 1000;
    
    if(esum < 0)
    {
        Integral = 0 - esum;
        Integral = (Integral >> 8);
        Integral = 0 - Integral;
    }
    else
    {
        Integral=esum>>6;	// Verstaerkung /16, EP, dadurch max. Eingriff von 400/16 ->25 um +/-6A ( bei IGBTs wegen toff!
    }
    
    //Regelung = (signed int)(Isoll_alt + IDC + Iramp + Integral);
    //Regelung = (signed int)(Isoll + Integral +P_Stell_wert);
    Regelung = Istwert_Fehler +Integral +Isoll;//(signed int)(Isoll+P_Stell_wert);
    
    if (PWM_count_current < n_PWM_Pulse){ Regelung = Regelung + (PWM_count_current/n_PWM_Pulse) * SC;}

    if (Regelung > IMAX)	Stellwert_1 = IMAX;                 // um 850A
    else if (Regelung < IDC)	Stellwert_1 = IDC;
    else	Stellwert_1 = Regelung;

#ifdef PWM_Ausgabe
    Stellwert_1 = 1000;
#endif
    
    if(INV_Enable==1)       // nur im Betrieb
    {
        if(Poti_Strom == 0)
        {
            pdc1 = 0;
            Komparator_1 = 0;
            Komparator_2 = 0;
        }
        else
        {            
            //pdc1 = 1000; //##
            Komparator_1 = Stellwert_1  ;
            Komparator_2 = Stellwert_1 ; // + Sym_relative; 
        }
    }			
    P5_Daten[ID_P5_IST_STROM] = Ist_wert;           // in A
    P5_Daten[ID_P5_IST_SPANNUNG]=Uist>>2;           // in 0,1V
}

void __attribute__((__interrupt__, no_auto_psv)) _PWMSecSpEventMatchInterrupt(void)    // PWM Sp - interrupt, Eintritt 240ns
{ RF=0;
  RF=0;  
  RF=0;RF=0;
  RF=1; // RF hat hier 220ns

  //if(IFS6bits.AC2IF==1)
   //{ //ueberstrom++; IFS6bits.AC2IF=0;
   // IFS6bits.AC2IF=0;  //##deaktivate the interrupt
   // if(ueberstrom>1) 
   // {
     //   INV_Enable=0;
     //   F_ueberstrom = 1;
   // }
   // }
  IFS4bits.PSESIF=0;

}
/****************************************************** StromRegler ************************************************************/
/***************************************************   im Interrupt PWM    *******************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _PWMSpEventMatchInterrupt(void)   // PWM Sp Iinterrupt, Eintritt 370ns
{  	
  // die Zeilen Zeitkritisch weil RF Signal ueber Port. Bei neuem Prozessor PWM - nutzen, wird genauer!!!
    RF=0;
    RF=0;
    RF=0;RF=0;
    RF=1;
   pwm_cap=PWMCAP1;
   //##test when it comes!!!
    PORTBbits.RB5 = 1;
    
    if (Isoll_old != Isoll){   //## For new current
            PWM_count_current = Reset;
            Isoll_old = Isoll;
        }
   
    PWM_count_current++;
    
	switch(INV_Enable)
	{ 
	case 1:                                 	// wenn Betrieb ein
        
#ifdef PWM_Ausgabe
        PDC1 = PWM1_temp; 
        SDC2 = PWM2_temp;
#else        
        if(Poti_Strom == 0) pdc1 = 0;
		PDC1 = SDC2 = pdc1;             // wenn Spannungsbegrenzer aktiv
#endif  
        /*if (PWM_count_current > n_PWM_Pulse){
          StromRegler(pwm_cap); //##          
        }else{}*/
        
        StromRegler(pwm_cap); //##  
        pwm_capAlt1=pwm_cap;
    break;

	case 3:											// um 40us abwarten um R zu messen
	if(per_z==0){ IL1=Ist_wert; t1=(4150+pwm_cap)>>7; }   // SC als 12 bit

		per_z++; 

		if((per_z >4) )                              // nach 4 Perioden (4*14us)
		{ 	t2=t22*per_z;
            IL2=Ist_wert;
            INV_Enable=1;
            if(IL2<IL1){lrechnen=1;	}				// erlauben, weil Daten da und richtig
            PDC1 = PWM_D;								// normale Werte wiederherstellen
            SDC2 = PWM_D; //pm 0;                     			// Copy noch keine
		}
		else {PDC1=0; SDC2=0;  }					// zwei Testimpulse dann warten

		if(per_z>8)									// zu lange, abbrechen ohne Lmess
			{
			INV_Enable=1;
			PDC1 = PWM_D;
			SDC2 = PWM_D; //pm 0;
			}
        //##
        StromRegler(pwm_cap);
	break;
	case 2:											// fest Copy zuerst als´´ls Messimpuls von L
        INV_Enable=1; 
        //##
        StromRegler(pwm_cap);
	break;

	case 0:											// Inverter aus
		PDC1=0;
		SDC2=0;
		merker=0;
		//pm Komparator_3 = 400;                           // 100A
//		ZeitMessWert=0;
		Uaus=800;
		ZeitMessWert = PWM_D;
	
		Iramp=0;
		per_z=0; 
//		ueberstrom=0;
		Ist_wert=0;

		if(SC<40 && SC>0) { Ioffset=(Ioffset+SC)>>1;}       // wenn Strom kleiner als 10A, Mittelwert aus 2
        StromRegler(pwm_cap); //##
	break;
	}
    
//	Sym=(signed int)Uzk_mid1-(signed int)Uzk_mid2; 		// Symmetrie berechnen erlauben
	ProtokollTimer++;									// UART - Sendungen synchron zu PWM
	SPI_Timer++;										// PWM steuert SPI
//	IFS5bits.PWM1IF=0;
   
    //##Output PortB
    PORTBbits.RB5 = 0;
    //##
    //StromRegler(pwm_cap);								// Durchlaufzeit 5,5us FJ

    if(uart_change_start_done == 1)
    {
        PWM_counter++;
    }
    trigger_root = 1;
    IFS3bits.PSEMIF=0;
// bis da 6,15us
    
}
//
void StromRegler (unsigned int ZeitMessWert)
{ 
// Hilfsvariablen	
unsigned int TastV;										// Tastverhaeltnis der PWM
unsigned int DPWM=0,DPWMu=0;							// PWM am Ausgang =PWM-DLsv
signed int tempS;
static  signed long PWMH_summe;

    //while(ADSTATLbits.AN1RDY==0){}
    Ist_wert=SC;							// Warten auf A/D fertig
    Isoll_alt=Isoll;                        //##
    UI_filtering();                         //##


   //##if((SC+Korr) > Ioffset)	Ist_wert=(SC+Korr)-Ioffset;          	// Wert uebernehmen, 5A*4 bei 12 bit Fehler von AD!!?
//else Ist_wert=0;


// Zeit mitteln, wenn es schwingt bei viel PWM, in Takt (1,06ns)
    if(pwm_z==4) pwm_z=0;								// von Vorne, nicht mehr als 8 Werte
	PWMH_summe-=pwm_werte[pwm_z];						// alten Wert abziehen
    pwm_werte[pwm_z]=ZeitMessWert;              		// dafuer den neuen
    if(PWMH_summe<0) PWMH_summe=0;
	PWMH_summe+=pwm_werte[pwm_z];
	pwm_z++;
	PWMH=PWMH_summe>>2;                                 // laufender Wert

// Ls-Trafo Verzoergerung in Takt (1,06ns)
	DLsv=__builtin_divud(__builtin_muluu(Ist_wert,LsUe),UzkAvr);	// berechnet vom gemesenen Strom, LS korrigiert um Uebersetung weil Ist_wert auch
	if(DLsv>2700) DLsv=2700;										// max. 2,7us bei 750A? und 5uH?

// echte Pulsbreite am Trafoausgang	 in Takt
	tempS=(signed)(DLsv+DTv-DTh);

		if(tempS < PWMH)
		DPWM=PWMH-tempS;										// mal 8, danach leichtere Berechnungen
		else 
		DPWM=0;

		if(tempS < ZeitMessWert)
		DPWMu=ZeitMessWert-tempS;								// mal 8, danach leichtere Berechnungen
		else 
		DPWMu=0;
  trig2=((PWMH+DTv+DTh+DLsv)>>1)+1410;                              // Messung +1,5us (Filter 10nF)steigende Flanke-Mitte

// Tastverhaeltins der Trafospannung ( fuer Spannungsberechnung)	TastV=DPWM/8*1887/PTPER -> TastV=DPWM/C4, wo C4=PTPER*8/1887. 1887-> 2000/1.06
	TastV=__builtin_divud((DPWMu<<3),C4);                           // vereinfachte Rechnung wegen Geschwindigkeit. 300 ->30%

// Uaus bestimmen ohne Ruecksicht auf Lkreis, Ausgang der Stromquelle
	Uaus=__builtin_divud(__builtin_muluu(Uampl,TastV),1000)+1;	// in 0,1V Schritten, min. 0,1V fuer Rechnungen
//##if (Rampe == 0))
	if (Rampe==0)   // Stromrampe interpoliert fuer 100us (genau 8*14us)                                            // Stromrampe interpoliert fuer 100us (genau 8*14us). Kann abgeschaltet werden
	{
		if(Isoll>(Isoll_alt+Istep)) Isoll_alt+=Istep;							// steigende
		else if(Isoll<(Isoll_alt-Istep) && Isoll_alt>(Istep)) Isoll_alt-=Istep;	// falende
		else Isoll_alt=Isoll;													// Rest
	}
	//##else Isoll_alt=Isoll;

// Kunstrampe RC

   //## UI_filtering();
}

void UI_filtering(void)
{

     

    if((old_Isoll == Isoll) && (Isoll > 40))  //borders 10A -200A
    {
        constant_Isoll_cnt++;
    }
    else
    {
        constant_Isoll_cnt = 0;
    }
    old_Isoll = Isoll;
 
    Shortcircuit_detected = 0;
    //LED_R = 0;
    constant_Iactive = 0;
    //LED_G = 0;
    Info = 0;
    I50_delay_active = 0;
    I50_delay_cnt = 0;
    constant_PWM_cnt = 0;
    Iramp = (__builtin_divud(Isoll_alt,12)) + 10;
    
    PI_regulator();    
}