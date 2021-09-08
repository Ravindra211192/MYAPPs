/////MAIN DEFINE
#include "LeistungsteilComKommando.h"

//##define pwm pulse count along with the reset
#define n_PWM_Pulse 100
#define Reset 0
//#define PWM_Ausgabe 1
#define _ForcedIsoll_1  40
#define _ForcedIsoll_2  240
#define _ForcedIsoll_3  240
#define _ForcedIsoll_4  320
#define _ForcedIsoll_5  400
#define _ForcedIsoll_6  240
#define _ForcedIsoll_7  280
#define _ForcedIsoll_max 320     // Ist-Wert = X/4
#define ADC_0  10
#define ADC_1  512
#define ADC_2  1024
#define ADC_3  1536
#define ADC_4  2048
#define ADC_5  2560
#define ADC_6  3072
#define ADC_7  3584
#define ADC_max 4095
#define Jitter 0

#define SW_VERSION_HAUPT					0       //  max 99
#define SW_VERSION_NEBEN					5       //  max 99
#define SW_VERSION_REVISION					8       //  max 99
#define SW_VERSION_BUILD					8       //  max 99

// Multiplikations Faktoren der einzelnen Versions Nummern (Haupt, Neben, Revision, Build)

#define FAKTOR_SW_VERSION_HAUPT				1000000
#define FAKTOR_SW_VERSION_NEBEN				10000
#define FAKTOR_SW_VERSION_REVISION			100

#define SW_VERSION			((SW_VERSION_HAUPT * FAKTOR_SW_VERSION_HAUPT) + \
							(SW_VERSION_NEBEN * FAKTOR_SW_VERSION_NEBEN) + \
							(SW_VERSION_REVISION * FAKTOR_SW_VERSION_REVISION) + \
							SW_VERSION_BUILD)

/*******************************************************************************/
/*********************je nach Model einstellen**********************************/
#define Korr  0              // Korrekturwert fuer Iist wegen EP32GS502 ADC-Problem


/////////////////////////////////////// AD  //////////////////////////////////////
// Label der analogen Kanaele

// 12 bit Werte!
#define Uist					(ADCBUF0)
#define SC						(ADCBUF1)		// Schweissstrom vom Wandler sek. 1024A 3,3V. Version vom Prozessor "FJ" 1,65V (R13 500R !!!!!!!
#define U24     				(ADCBUF4)		// 24V Messung
#define U15         			(ADCBUF5)		// +15V , -15V Ueberwachung
#define U_Poti					(ADCBUF7)		// Sollwert vom Poti

///////////////////////////////////////Schwelle//////////////////////////////////
#define done							1
#define none							0

// Werte mal 4 weil 12 bit Wandler
#define U15_soll						750             // 16V/-16V  mit Spannungsteiler 100k/200k//10k, ueberwachter Wert
#define U15_toll						240             // 2V mit Spannungsteiler 100k/200k/10k, Toleranzbereich der Spannung
#define U24_soll						2710			// 24V mit 100k/10k
#define U24_toll						240				// plus um 10%

// die Werte sind als 10 bit (V)
#define _Sym_Toll_m						-50				// max. Symmetrieabweihung minus in V
#define _Sym_Toll_p						50				// max. Symmetrieabweihung plus in V
#define Uzk_max_3Ph						800				// maximal Spannung 3Ph
#define Uzk_min_3Ph  	      			200				// minimal Spannung 3Ph (177Vac)
#define Uzk_be_max_3Ph					800				// maximal Spannung 3Ph im Betrieb (565VAC)
#define BULK_MAX						420

#define _1ms							250             // x 4us

/////////////////////////////////////// Trafo, Drossel //////////////////////////////////
#define DTv								225				// Treiberverzoergerung vorn 240us, bei Ein 225ns /1.066
#define DTh								300				// Treiberverzoergerung hinten 320us, bei Aus (dovon IGBT um 180!))
//

#define LS							2300			// in nH Streuung vom Trafo  
#define LM							1400			// in uH Trafo-Hauptinduktivitaet
#define Ue1							45				// Uebesetzung vom Trafo in 0,1 Schritten
#define LsUe						135         	// LS/Ue1 (nH/(N*4))/*Takt (1,06ns) .4 weil 12bit
#define IMAX                        2000            // um 850A

#define Imax3PH                			3750            // 190A -auf Prim. 
//
// ///////////////////  andere Konstanten fuer Stromberechnung EP Version ///////////////
#define IDC								0 //27				// in A*4, feste Vorspannung vom Komparator, um 22mV (3,3V und 100k_pull-up/0,667k)
#define IRAMP							3000			// in A*4/us x100  ,kuenstliche Rampe am Komparator, (9Vss ueber 56k auf 1k||2k1 in 6,38us)
#define C4								55				// C4=PTPER*8/1887. Mal 8 fuer leichtere Rechnung von TastV

///////////// NTC Schwelle gerechnet mit Pull Up Widerstand von 2k2 noch FJ auf Prim.
#define NTC_Auf                       1022 	 			// NTC offen
#define NTC_KS                        40				// NTC Kurzschluss
#define NTC_C110                      190//140      //AG: value taken from PFC SW
#define NTC_C125                      136//92       //AG: value taken from PFC SW

/////////////////////////////////////// Ports /////////////////////////////////////
#define LED_R					LATBbits.LATB8			// LED Fehler
#define LED_G					LATBbits.LATB0			// LED Betrieb
#define RF						LATAbits.LATA3			// SW -Ausgang, als Open Col zum fuer Stromwandler2
#define Info					LATBbits.LATB15			// Info" an Verfahren ueber opto, Uaus>8V bei 1
#define Aux						PORTBbits.RB5			// Ein Aus von aussen ueber Opto. Bei low ->ein, jetzt 
      
extern volatile unsigned int one_time_failure;
extern volatile unsigned int Timer_LED_R;
extern volatile unsigned int Timer;
extern volatile signed int Stellwert_1, Soll_k;
extern volatile signed int AB_Sym;
extern volatile unsigned int Uzk_mid1;
extern volatile unsigned int Uzk_mid2;	
extern volatile unsigned int Uzk;
extern volatile unsigned int UzkAvr;
extern volatile unsigned int Uaus;
extern volatile unsigned int NetzAusfall;
extern volatile unsigned int power;
extern volatile unsigned int Uzkmax;
extern UART_DATA TxDaten;
extern UART_DATA RxDaten;	
extern DATEN P5_Sendungen[];

extern volatile unsigned int Timer_cut_off;		// max Zeit zwischen Kommunikation - Packeten
extern volatile unsigned int INV_Enable;
extern volatile unsigned int PFC_Kommando;
extern volatile unsigned int Freigabe;
extern volatile unsigned int Isoll;
extern volatile unsigned int UZK_loaded;

extern volatile unsigned int TimerUART;
extern volatile unsigned char CkS;
extern volatile unsigned int UART_1,UART_2,UART_3,UART_4;
extern volatile unsigned int Flag_UART;
extern volatile unsigned int Cmd;
extern volatile unsigned int RampeKorr;
extern volatile unsigned int PWMH;
extern volatile unsigned int ProtokollTimer;
extern volatile signed int Sym_relative;
extern volatile unsigned int State_Sym;
extern volatile unsigned int P5_Daten[];
extern  unsigned int P1_Daten[];
extern volatile unsigned int trig2;

extern volatile unsigned int pdc1;
extern volatile unsigned int temp;
extern volatile unsigned int F_Poti;
extern volatile signed int Poti_Strom;
extern volatile unsigned int PWM1_temp;
extern volatile unsigned int PWM2_temp;

extern volatile unsigned int Uampl;

extern volatile unsigned char Inhib;
extern volatile unsigned char PFC_Status;
extern volatile signed int Sym,Sym2;
extern volatile unsigned int OnOff, OnOff_Strom;
extern volatile unsigned int maxTimerUART;
extern volatile unsigned int  DLsv;
extern volatile unsigned int LaufTimer;

extern volatile unsigned int Wert;
extern volatile unsigned int Lmess;
extern volatile unsigned int lrechnen;
extern volatile unsigned int t1, t2, IL1, IL2;
extern volatile unsigned int Rmess;
extern volatile unsigned int K1,K, IL3,Ut;
extern volatile unsigned int Ianf;
extern volatile unsigned int t22;

extern volatile unsigned int ueberstrom;
extern volatile unsigned int F_ueberstrom;
extern volatile unsigned int TimerRelais;
extern volatile unsigned int Isoll_alt;	
extern volatile unsigned int Rampe;
extern volatile signed int   Istep;

extern volatile unsigned int Err;
extern volatile unsigned int Relais;

extern volatile unsigned int Ilm;
extern volatile unsigned int Timer_cut_off;
extern volatile unsigned int SPI_Timer;

extern volatile unsigned int maxTimerUART;

extern volatile unsigned int Hold_M;
extern volatile unsigned int Page;

extern volatile unsigned int I2_UART;
extern volatile unsigned int baud_rq;
extern volatile unsigned int baud_change_needed;
extern volatile unsigned int uart_change_start_done;
extern volatile unsigned int PWM_counter;
extern volatile unsigned int Failure_code;
extern volatile unsigned int PFC_UZK_cnt;

extern volatile unsigned int sum_old_uist;
extern volatile unsigned int sum_new_Iist;
extern volatile unsigned int sum_old_Iist;
extern volatile unsigned int y_new_Rist;
extern volatile unsigned int new_R;
extern volatile unsigned int Ist_wert;
extern volatile unsigned int uist_filtered;
extern volatile unsigned int trigger_root;
extern volatile unsigned int alu_mode_activ;
extern volatile unsigned int Alive_timeout_cnt;
extern volatile unsigned int Fault_pwm_code;
extern volatile unsigned int aux_on_cnt;
extern volatile unsigned int aux_off_cnt;
extern volatile unsigned int Isoll_old; //##for comparing the isoll value

void FSym(void);
void ioUnlock (void);
void SPI_Kom_Master(unsigned int PFC_Kommand);		// Kommandos Senden ueber SPI
void SPI_Konfig_Master (void);
void UART_Manangement(void);
void UARTinit(void);
void Senden4Byte(void);									// Senden der 4 Bytes
void InitSST(void);										// Datem zum Initialisieren der SST vorbereiten
void Operation(void);									// Daten von oder zu SST empfangen oder senden
void EmpfangOperation(void);							// Empfangene Daten von SST im Operation - Modus bearbeiten
void TimeSendung(void);									// welche Daten gerade zu senden sind
void StromRegler (unsigned int ZeitMessWert);
void Kommunikation(void);								// Uart, Protokoll Aufruf
void Lrechnen(void);
void Init_UART(void);

#define Komparator_1						CMP1DAC		// Uist dedektor
#define Komparator_2						CMP2DAC		// fuer Strom Ueberwachung, max.
#define Komparator_3						CMP3DAC     // Strom Regelung PWM1
#define Komparator_4						CMP4DAC     // Strom Regelung PWM2

//UART SET UP DEFINITION
#define CLOCK_FREQ_D4						17500000    // frequenza di clock divisa per 4 (68MHz/4)

#define BAUD								4000000		// fuer UART ,um 4M Baut

// PWM def.
#define PWM_P				13000							// 
#define PWM_D				6000							// max. duty PWM1 6,36us	46,15% ==>  6000 * 1,06ns
#define _InterruptZeit		6150                        	//PWM Period/2 - 600 - 500 -> . Interrupt ausloesen fuer PWM. 520ns Inerrupt Ausfuehrung!? In der Summe um 150ns vom Ende der Periode um Port lesen zu koennen.

#define _SendTimer			3								// alle 3 PWM - Perioden

void Delay_ms (unsigned int Mx);
void Protokoll(void);				// sendet Daten
									

typedef struct Fb
 {
  unsigned int PFC:1;		// PFC
  unsigned int ANL:1;		// Anlauf
  unsigned int STR:1;		// prim. Strom
  unsigned int UZK:1;		// UZK
  unsigned int SYM:1;		// Symmetrie
  unsigned int SPN:1;		// Spannung abgeschaltet
  unsigned int NTC1:1;		// Temp. NTC1, INV IMS
  unsigned int NTC2:1;		// Temp. NTC2, PFC IMS
  unsigned int VERS:1;		// Versorgung +15/-15
 } Fbits;					// Fehlerbits

typedef union Fby
 {
  unsigned int Val;			// wenn 0 keine Fehler
  Fbits bits;
 } FEHLER;

extern FEHLER Fehler;

#define _PFC_Ein	1

