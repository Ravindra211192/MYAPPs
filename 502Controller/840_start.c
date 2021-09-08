#include "p33EP32GS502.h"
#include "840_header.h"
#include "math.h"
//#include "stdlib.h"

volatile unsigned int Timer;				// Haupttimer in ms

FEHLER Fehler;								// structur fuer Fehlermeldungen 

volatile unsigned int NTC_On_Grenze;
volatile unsigned int NTC_Off_Grenze;
volatile signed int AB_Sym;                 // Absolutwert der Symmetrieabweichung
volatile unsigned int UzkAnLauf;			// Spannung hinter dem Relais im Anlauf
volatile unsigned int TimeAnlauf;
volatile unsigned int Time_Summe;			// Timer
volatile unsigned int PFC_Kommando;			// an PFC Befehle
volatile unsigned int Periode_tmp;
volatile unsigned int Relais=0;
volatile unsigned int TimerRelais;			// 1 Sek Wartezeit nach ok.

volatile unsigned int init_stored_1=0;
volatile unsigned int init_stored_2=0;
volatile unsigned int init_stored_3=0;
volatile unsigned int init_stored_4=0;
volatile unsigned int init_stored_5=0;

volatile unsigned int Fault_pwm_code=0;
volatile unsigned int Fault_saved=0;
volatile unsigned int Timer_LED_R = 0;
volatile unsigned int one_time_failure = 0;

void Write_NMV();
volatile long LongSym;
volatile signed int Sym,Sym2,Sym3,Sym4,Sym5;				// Spannungsdifferenz von beiden Zwischenkreisen
void FSym(void);
unsigned int FehlerAnzeigen_LED_Booster(unsigned int Entry);


//***************** Auswertung der Spannungsdifferenz zwischen den beiden UZKs. **************************
void FSym(void)
{ 
	// sonstige analoge Werte uebernehmen
		P5_Daten[ID_P5_SPG_15V_1]=__builtin_divud(U15,11);  // SST hat es als 0,1V Aufloesung
        P5_Daten[ID_P5_SPG_24V_1]=111;//__builtin_divud(U24,11); 
        
		P1_Daten[ID_BG_HW_SW] = 100;//Vers;                 // hier fest, weil dort 15v - Messung

		AB_Sym=__builtin_divsd(Sym + Sym2 + Sym3 + Sym4 + Sym5, 5);                 // Mittelwert aus zwei, sonst Schwingungen
		Sym5 = Sym4; 
        Sym4 = Sym3; 
        Sym3 = Sym2; 
        Sym2 = Sym;


	if (AB_Sym > _Sym_Toll_p)							// Max erreicht, begrenzen
		{ } // AB_Sym = _Sym_Toll_p; }
	if (AB_Sym < _Sym_Toll_m)							// Min. erreicht, begrenzen
		{ } //AB_Sym = _Sym_Toll_m; }

		Sym_relative=AB_Sym;//__builtin_mulus(10,AB_Sym);   		// umrechnen in Zeit ,10ns Schritt pro 1V-delta, max also 500ns
}
//

void Write_NMV(void)
{
    volatile unsigned long progADDR = 0x002B00;
    init_stored_1 = IEC0;
    init_stored_2 = IEC1;
    init_stored_3 = IEC3;
    init_stored_4 = IEC4;
    init_stored_5 = IEC5;
    
    IEC0 = 0;
    IEC1 = 0;
    IEC3 = 0;
    IEC4 = 0;
    IEC5 = 0;
    
    NVMCON = 0x4003;
    NVMADRU = progADDR >> 16;
    NVMADR = progADDR & 0xFFFF;
    __builtin_disi(5);															// Disable Interrupt f?r 5 Takte
    __builtin_write_NVM();
    Delay_ms(1);
    
    TBLPAG=0xFA;																	// Set page to 
    NVMCON = 0x4001;												// Word Schreiben in Flash aktiv
    NVMADRU = progADDR >> 16;
    NVMADR = progADDR & 0xFFFF;
    __builtin_tblwtl(0, Fehler.Val);									// schreiben 16bit Low of 24, neuen Neigungswert schreiben. 
    __builtin_tblwth(0, 0x00);									// schreiben 16bit Hi of 24
    __builtin_disi(5);															// Disable Interrupt f?r 5 Takte
    __builtin_write_NVM();														// Unlock code f?r Flash schreiben und Flash schreiben starten.
       	
    IEC0 = init_stored_1;
    IEC1 = init_stored_2;
    IEC3 = init_stored_3;
    IEC4 = init_stored_4;
    IEC5 = init_stored_5;  
}


unsigned int FehlerAnzeigen_LED_Booster(unsigned int Entry)
	{
	static unsigned int StepLED=0;
	static unsigned int out;
        static unsigned int onetime = 0; 
        
        if(onetime == 0){
            Timer_LED_R = 0;
            onetime = 1;
        }
       
	if (StepLED<Entry)														// Blink "Entry" mal
		{ 
		if (Timer_LED_R<500)													// 0,5 Sek ein
			{
			out=1;															// LED vrd einschalten
			}
		else
			{
			out=0;															// LED vrd ausschalten
			if (Timer_LED_R>1000)												// 0,5 Sek aus
				{
				Timer_LED_R=0;
				StepLED++;
				}
			}
		}
	else
		{
            
            if (Timer_LED_R>2000)													// Blink pause 2 Sek
            {
                StepLED=0;
                Timer_LED_R=0;
            }  
            if(Entry == 0)
            {                
                out=0;
                StepLED=0;
                Timer_LED_R=0;
            }
        }        
	return(out);
	}
