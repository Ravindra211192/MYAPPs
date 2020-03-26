#include <msp430.h>				
#include <msp430f5529.h>
/**
 * blink.c
 */
void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;		// stop watchdog timer
	P1DIR |= BIT0;					// configure P1.0 as output

	P4DIR |= BIT7;                  //P4.7 as output

	volatile unsigned int i;		// volatile to prevent optimization
	volatile unsigned int j;

	while(1)
	{
		for(i=10000; i>0; i--){    // delay
		    P1OUT ^= 0x01;              // toggle P1.0

		for(j=0;j<20000;j++){
		    P4OUT ^= 0x80;              //toggle P4.7
		}
	}
	}
}
