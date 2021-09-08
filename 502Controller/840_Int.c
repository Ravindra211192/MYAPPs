
#include "p33EP32GS502.h"
#include "840_header.h"

volatile unsigned int Uzk_mid1=10;				// obere Spannung, Uzk(SPI)-Uzk21. bei 748 Uzk-Uzk21
volatile unsigned int Uzk_mid2=10;				// untere Spannung, Uzk22_p.  bei 748 zusammen, gleicher Wert wie Uzk_mid2
volatile unsigned int Uzk=10;					// gesamt, oben, nach Relais
volatile unsigned int Uzk_p=10;					// primaer, vor Relais, bei 747 ueber PFC SPI
volatile unsigned int UzkAvr=10;				// Mittelwert der beiden UZK(mid1, mid2), fuer Reglerkorrektur
volatile signed int Sym_relative=0;			// Abweichung in ns zu PWM - Copy

volatile unsigned int Timer_cut_off;			// Sendung der Daten Ueberwachung, Alive
volatile unsigned int NetzAusfall=0;			// 0-> ok, 1 -> keine Halbewelle in ueber 100ms

volatile unsigned int Duty;
volatile unsigned int ProtokollTimer;			// Sendungen ueber UART trigern, erlauben 
volatile unsigned int LaufTimer;				// Messzeit fuer test der Kurzschluesse ,1ms
volatile unsigned int TimerLk;					// alle 10ms Drossel ermitteln
volatile unsigned int Rampe=1;					// sonfte Aenderung vom Strom
volatile signed int Istep = 10;					// max. Stromsprung bei Rampe
volatile signed int Pol=1;                      // Richtung vom Sollert zu vorher
volatile signed int Trepp=8;                    // bis 8 Treppen vom Sollwert
volatile unsigned int aux_i2=0;
volatile unsigned int Alive_timeout_cnt =0;
volatile unsigned int dummy=0;
volatile unsigned int Dum_fix=0;
// Datensatz zum Senden//
											
volatile unsigned int PFC_UZK_cnt = 0;		
				
// empfangener Datensatz

//// INTERRUPT LEVEL 4

//
void __attribute__((__interrupt__, no_auto_psv)) _ISR _T2Interrupt(void)	// Timer2 Interrupt  Zeitkonstante (360ms)
	{ 
	IFS0bits.T2IF=0; 
	}

//// INTERRUPT LEVEL 2
void __attribute__((__interrupt__, no_auto_psv)) _ISR _T3Interrupt(void)		// Timer3 Interrupt  Zeitkonstante	(1ms)
	{
	static int tt;
	TMR3=0;																		// Timer_Zuruecksetzen
	Timer++;																	// Haupt Timer+1ms																// UART Timer+1ms
	if(tt)
	{tt=0; TimerUART++;}
	else	tt=1;
    
	Timer_cut_off++;															// UART Fehlertimer +1ms
	LaufTimer++;
	IFS0bits.T3IF=0;
	TimerRelais++;                                                              // Wartezeit auf Relais wieder ein
    
    dummy++;
    if(dummy >= 1023)
    {
        dummy = 0;
        Dum_fix=Fault_pwm_code;
        //Dum_fix = 250;
    }
    Timer_LED_R++;

    PFC_UZK_cnt++;
	}
//
void __attribute__((__interrupt__, no_auto_psv)) _ISR _T1Interrupt(void)		// Timer1 Interrupt timerzaehler sehen PR1 fuer die Zeitkonstant (23us)
	{																			// nach der erste angekommende 8 bit, die weiterer 24 bit sollen innerhalb 20 us gekommen sein 
	T1CONbits.TON=0;         														// stoppt timer
	TMR1=0;                             										// zuruecksetzung der Zaehler
	UARTinit();																	// clear der UART Buffer
	IFS0bits.T1IF=0;					
	}
//
void __attribute__((__interrupt__, no_auto_psv)) _U1RXInterrupt(void)			// UART Buffer voll, die 4 Byte sind gekommen 7,7us 64MHz
	{
	TMR1=0; T1CONbits.TON=0;       IFS0bits.T1IF=0;             								// Timer stoppt, weil Sendung rechtzeitig da

	unsigned int Flag_UARTi=done;												// Init Flag
	if (U1STAbits.PERR==1)														// check nach paritaetfehler
		{Flag_UARTi=none;}
	UART_1=U1RXREG;					//Byte 1
	if (U1STAbits.PERR==1)
		{Flag_UARTi=none;}
	UART_2=U1RXREG;					//Byte 2
	if (U1STAbits.PERR==1)
		{Flag_UARTi=none;}
	UART_3=U1RXREG;					//Byte 3
	if (U1STAbits.PERR==1)
		{Flag_UARTi=none;}
	UART_4=U1RXREG;					//Byte 4
	CkS=UART_1+UART_2+UART_3;		// Checksumme
	if (CkS!=UART_4)				// Checksumme check
		{Flag_UARTi=none;}


	if (Flag_UARTi==done)			// gueltige Daten empfangen
		{ 
		if(UART_1< 16)												// wenn allg. Kommand
		RxDaten.Cmd=UART_1	;									
		else
		RxDaten.Cmd=(UART_1 | Page);								//  Kommando speichern mit Page 
		
		RxDaten.Wert=(UART_2<<8) + UART_3;							// Speichern von beiden bytes

		if (RxDaten.Cmd==0 && RxDaten.Wert==0)
			{
			Flag_UART=none;
			TxDaten.Wert=UART_1 & MASK_CMD;							// Fehler noACK senden
			TxDaten.Cmd=ACK;
			TxDaten.Ack=1;											// Fehler CS senden
			UARTinit();
			}														// Checksumme Fehler, noACK senden
		else
			{	
			if(Timer_cut_off>2000 && OnOff_Strom) {OnOff_Strom=0; OnOff=0;}
			Timer_cut_off=none; 									// Kommunikation erfolgt, timeout=0;
#ifdef _TestPanel
            if (RxDaten.Cmd==0xA0 || RxDaten.Cmd==0x5A0)
            {
                P5_Daten[ID_P5_LT_ONOFF]=RxDaten.Wert;				// speichern in die Matrix
                OnOff=RxDaten.Wert;									// speichern in die Variable

                TxDaten.Wert=0x0100 | (LT_ONOFF & MASK_CMD);
                TxDaten.Cmd=ACK;
                TxDaten.Ack=1;										//  senden
            }
            if (RxDaten.Cmd==0x81)			// Stromsollwert angekommen
#else
            if (RxDaten.Cmd==SOLL_STROM_I1 && Page==0x500)			// Stromsollwert angekommen
#endif			
				{ 	
				
				}
            else if (RxDaten.Cmd==SOLL_STROM_I2 && Page==0x500)			// Stromsollwert angekommen
            { 	
				if((RxDaten.Wert & 0x03FF)<100)						// nur wenn Strom kleiner, uebernehmen
                {
                    aux_i2 =(RxDaten.Wert &0x03ff);	
                    I2_UART = (aux_i2 << 2);
                    P5_Daten[ID_P5_SOLL_STROM_I2] = I2_UART;
				}		
                Alive_timeout_cnt = 0;
            }
			else
			{	Flag_UART=done; 	}			// keine Stromdaten, weiter bearbeiten
                Alive_timeout_cnt = 0;
			}
		}
	else
		{
		UARTinit();
		}

IFS0bits.U1RXIF=0;							// Interrupt Rx Flag loeschen	
}	
//
