/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33EP32GS502 processor header
 *
 * (c) Copyright 1999-2015 Microchip Technology, All rights reserved
 * Part support version 1.25.A(30-Jun-2015)
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef __dsPIC33EP32GS502__
#error "Include file does not match processor setting"
#endif

#ifndef __33EP32GS502_H
#define __33EP32GS502_H

#define __XC16_PART_SUPPORT_VERSION 1025
#define __XC16_PART_SUPPORT_UPDATE 'A'

#define __write_to_IEC(X) \
   ( (void)(X), \
     __builtin_nop(), \
     __builtin_nop() \
   )

#define WREG0 WREG0
extern volatile unsigned int  WREG0 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG1 WREG1
extern volatile unsigned int  WREG1 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG2 WREG2
extern volatile unsigned int  WREG2 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG3 WREG3
extern volatile unsigned int  WREG3 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG4 WREG4
extern volatile unsigned int  WREG4 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG5 WREG5
extern volatile unsigned int  WREG5 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG6 WREG6
extern volatile unsigned int  WREG6 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG7 WREG7
extern volatile unsigned int  WREG7 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG8 WREG8
extern volatile unsigned int  WREG8 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG9 WREG9
extern volatile unsigned int  WREG9 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG10 WREG10
extern volatile unsigned int  WREG10 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG11 WREG11
extern volatile unsigned int  WREG11 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG12 WREG12
extern volatile unsigned int  WREG12 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG13 WREG13
extern volatile unsigned int  WREG13 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG14 WREG14
extern volatile unsigned int  WREG14 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG15 WREG15
extern volatile unsigned int  WREG15 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define SPLIM SPLIM
extern volatile unsigned int  SPLIM __attribute__((__sfr__));
#define ACCAL ACCAL
extern volatile unsigned int  ACCAL __attribute__((__sfr__));
#define ACCAH ACCAH
extern volatile unsigned int  ACCAH __attribute__((__sfr__));
#define ACCAU ACCAU
extern volatile unsigned char ACCAU __attribute__((__sfr__));
#define ACCBL ACCBL
extern volatile unsigned int  ACCBL __attribute__((__sfr__));
#define ACCBH ACCBH
extern volatile unsigned int  ACCBH __attribute__((__sfr__));
#define ACCBU ACCBU
extern volatile unsigned char ACCBU __attribute__((__sfr__));
#define PCL PCL
extern volatile unsigned int  PCL __attribute__((__sfr__));
#define PCH PCH
extern volatile unsigned char PCH __attribute__((__sfr__));
#define DSRPAG DSRPAG
extern volatile unsigned int  DSRPAG __attribute__((__sfr__));
typedef struct tagDSRPAGBITS {
  unsigned DSRPAG:10;
} DSRPAGBITS;
extern volatile DSRPAGBITS DSRPAGbits __attribute__((__sfr__));

#define DSWPAG DSWPAG
extern volatile unsigned int  DSWPAG __attribute__((__sfr__));
typedef struct tagDSWPAGBITS {
  unsigned DSWPAG:9;
} DSWPAGBITS;
extern volatile DSWPAGBITS DSWPAGbits __attribute__((__sfr__));

#define RCOUNT RCOUNT
extern volatile unsigned int  RCOUNT __attribute__((__sfr__));
#define DCOUNT DCOUNT
extern volatile unsigned int  DCOUNT __attribute__((__sfr__));
#define DOSTARTL DOSTARTL
extern volatile unsigned int  DOSTARTL __attribute__((__sfr__));
#define DOSTARTH DOSTARTH
extern volatile unsigned int  DOSTARTH __attribute__((__sfr__));
#define DOENDL DOENDL
extern volatile unsigned int  DOENDL __attribute__((__sfr__));
#define DOENDH DOENDH
extern volatile unsigned int  DOENDH __attribute__((__sfr__));
#define SR SR
extern volatile unsigned int  SR __attribute__((__sfr__));
__extension__ typedef struct tagSRBITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL:3;
      unsigned DC:1;
      unsigned DA:1;
      unsigned SAB:1;
      unsigned OAB:1;
      unsigned SB:1;
      unsigned SA:1;
      unsigned OB:1;
      unsigned OA:1;
    };
    struct {
      unsigned :5;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
    };
  };
} SRBITS;
extern volatile SRBITS SRbits __attribute__((__sfr__));

#define CORCON CORCON
extern volatile unsigned int  CORCON __attribute__((__sfr__));
__extension__ typedef struct tagCORCONBITS {
  union {
    struct {
      unsigned IF:1;
      unsigned RND:1;
      unsigned SFA:1;
      unsigned IPL3:1;
      unsigned ACCSAT:1;
      unsigned SATDW:1;
      unsigned SATB:1;
      unsigned SATA:1;
      unsigned DL:3;
      unsigned EDT:1;
      unsigned US:2;
      unsigned :1;
      unsigned VAR:1;
    };
    struct {
      unsigned :8;
      unsigned DL0:1;
      unsigned DL1:1;
      unsigned DL2:1;
      unsigned :1;
      unsigned US0:1;
      unsigned US1:1;
    };
  };
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define MODCON MODCON
extern volatile unsigned int  MODCON __attribute__((__sfr__));
__extension__ typedef struct tagMODCONBITS {
  union {
    struct {
      unsigned XWM:4;
      unsigned YWM:4;
      unsigned BWM:4;
      unsigned :2;
      unsigned YMODEN:1;
      unsigned XMODEN:1;
    };
    struct {
      unsigned XWM0:1;
      unsigned XWM1:1;
      unsigned XWM2:1;
      unsigned XWM3:1;
      unsigned YWM0:1;
      unsigned YWM1:1;
      unsigned YWM2:1;
      unsigned YWM3:1;
      unsigned BWM0:1;
      unsigned BWM1:1;
      unsigned BWM2:1;
      unsigned BWM3:1;
    };
  };
} MODCONBITS;
extern volatile MODCONBITS MODCONbits __attribute__((__sfr__));

#define XMODSRT XMODSRT
extern volatile unsigned int  XMODSRT __attribute__((__sfr__));
#define XMODEND XMODEND
extern volatile unsigned int  XMODEND __attribute__((__sfr__));
#define YMODSRT YMODSRT
extern volatile unsigned int  YMODSRT __attribute__((__sfr__));
#define YMODEND YMODEND
extern volatile unsigned int  YMODEND __attribute__((__sfr__));
#define XBREV XBREV
extern volatile unsigned int  XBREV __attribute__((__sfr__));
__extension__ typedef struct tagXBREVBITS {
  union {
    struct {
      unsigned XB:15;
      unsigned BREN:1;
    };
    struct {
      unsigned XB0:1;
      unsigned XB1:1;
      unsigned XB2:1;
      unsigned XB3:1;
      unsigned XB4:1;
      unsigned XB5:1;
      unsigned XB6:1;
      unsigned XB7:1;
      unsigned XB8:1;
      unsigned XB9:1;
      unsigned XB10:1;
      unsigned XB11:1;
      unsigned XB12:1;
      unsigned XB13:1;
      unsigned XB14:1;
    };
  };
} XBREVBITS;
extern volatile XBREVBITS XBREVbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile unsigned int  DISICNT __attribute__((__sfr__));
#define TBLPAG TBLPAG
extern volatile unsigned int  TBLPAG __attribute__((__sfr__));
typedef struct tagTBLPAGBITS {
  unsigned TBLPAG:8;
} TBLPAGBITS;
extern volatile TBLPAGBITS TBLPAGbits __attribute__((__sfr__));

#define CTXTSTAT CTXTSTAT
extern volatile unsigned int  CTXTSTAT __attribute__((__sfr__));
typedef struct tagCTXTSTATBITS {
  unsigned MCTXI:3;
  unsigned :5;
  unsigned CCTXI:3;
} CTXTSTATBITS;
extern volatile CTXTSTATBITS CTXTSTATbits __attribute__((__sfr__));

#define TMR1 TMR1
extern volatile unsigned int  TMR1 __attribute__((__sfr__));
#define PR1 PR1
extern volatile unsigned int  PR1 __attribute__((__sfr__));
#define T1CON T1CON
extern volatile unsigned int  T1CON __attribute__((__sfr__));
__extension__ typedef struct tagT1CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned TSYNC:1;
      unsigned :1;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define TMR2 TMR2
extern volatile unsigned int  TMR2 __attribute__((__sfr__));
#define TMR3HLD TMR3HLD
extern volatile unsigned int  TMR3HLD __attribute__((__sfr__));
#define TMR3 TMR3
extern volatile unsigned int  TMR3 __attribute__((__sfr__));
#define PR2 PR2
extern volatile unsigned int  PR2 __attribute__((__sfr__));
#define PR3 PR3
extern volatile unsigned int  PR3 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile unsigned int  T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned :1;
      unsigned T32:1;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define T3CON T3CON
extern volatile unsigned int  T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned :2;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

#define TMR4 TMR4
extern volatile unsigned int  TMR4 __attribute__((__sfr__));
#define TMR5HLD TMR5HLD
extern volatile unsigned int  TMR5HLD __attribute__((__sfr__));
#define TMR5 TMR5
extern volatile unsigned int  TMR5 __attribute__((__sfr__));
#define PR4 PR4
extern volatile unsigned int  PR4 __attribute__((__sfr__));
#define PR5 PR5
extern volatile unsigned int  PR5 __attribute__((__sfr__));
#define T4CON T4CON
extern volatile unsigned int  T4CON __attribute__((__sfr__));
__extension__ typedef struct tagT4CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned :1;
      unsigned T32:1;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T4CONBITS;
extern volatile T4CONBITS T4CONbits __attribute__((__sfr__));

#define T5CON T5CON
extern volatile unsigned int  T5CON __attribute__((__sfr__));
__extension__ typedef struct tagT5CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned :2;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T5CONBITS;
extern volatile T5CONBITS T5CONbits __attribute__((__sfr__));

#define IC1CON1 IC1CON1
extern volatile unsigned int  IC1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC1CON1BITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned :3;
      unsigned ICTSEL:3;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
      unsigned :3;
      unsigned ICTSEL0:1;
      unsigned ICTSEL1:1;
      unsigned ICTSEL2:1;
    };
  };
} IC1CON1BITS;
extern volatile IC1CON1BITS IC1CON1bits __attribute__((__sfr__));

#define IC1CON2 IC1CON2
extern volatile unsigned int  IC1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC1CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC1CON2BITS;
extern volatile IC1CON2BITS IC1CON2bits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Input Capture modules */
typedef struct tagIC {
        unsigned int icxbuf;
        unsigned int icxcon;
} IC, *PIC;

/* SFR blocks for Input Capture modules */
#define IC1 ACC1
extern volatile IC IC1 __attribute__((__sfr__));
#define IC2 ACC2
extern volatile IC IC2 __attribute__((__sfr__));
#define IC3 ACC3
extern volatile IC IC3 __attribute__((__sfr__));
#define IC4 ACC4
extern volatile IC IC4 __attribute__((__sfr__));
#define IC5 ACC5
extern volatile IC IC5 __attribute__((__sfr__));
#define IC6 ACC6
extern volatile IC IC6 __attribute__((__sfr__));
#define IC7 ACC7
extern volatile IC IC7 __attribute__((__sfr__));
#define IC8 ACC8
extern volatile IC IC8 __attribute__((__sfr__));

#define IC1BUF IC1BUF
extern volatile unsigned int  IC1BUF __attribute__((__sfr__));
#define IC1TMR IC1TMR
extern volatile unsigned int  IC1TMR __attribute__((__sfr__));
#define IC2CON1 IC2CON1
extern volatile unsigned int  IC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC2CON1BITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned :3;
      unsigned ICTSEL:3;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
      unsigned :3;
      unsigned ICTSEL0:1;
      unsigned ICTSEL1:1;
      unsigned ICTSEL2:1;
    };
  };
} IC2CON1BITS;
extern volatile IC2CON1BITS IC2CON1bits __attribute__((__sfr__));

#define IC2CON2 IC2CON2
extern volatile unsigned int  IC2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC2CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC2CON2BITS;
extern volatile IC2CON2BITS IC2CON2bits __attribute__((__sfr__));

#define IC2BUF IC2BUF
extern volatile unsigned int  IC2BUF __attribute__((__sfr__));
#define IC2TMR IC2TMR
extern volatile unsigned int  IC2TMR __attribute__((__sfr__));
#define IC3CON1 IC3CON1
extern volatile unsigned int  IC3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC3CON1BITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned :3;
      unsigned ICTSEL:3;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
      unsigned :3;
      unsigned ICTSEL0:1;
      unsigned ICTSEL1:1;
      unsigned ICTSEL2:1;
    };
  };
} IC3CON1BITS;
extern volatile IC3CON1BITS IC3CON1bits __attribute__((__sfr__));

#define IC3CON2 IC3CON2
extern volatile unsigned int  IC3CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC3CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC3CON2BITS;
extern volatile IC3CON2BITS IC3CON2bits __attribute__((__sfr__));

#define IC3BUF IC3BUF
extern volatile unsigned int  IC3BUF __attribute__((__sfr__));
#define IC3TMR IC3TMR
extern volatile unsigned int  IC3TMR __attribute__((__sfr__));
#define IC4CON1 IC4CON1
extern volatile unsigned int  IC4CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC4CON1BITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned :3;
      unsigned ICTSEL:3;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
      unsigned :3;
      unsigned ICTSEL0:1;
      unsigned ICTSEL1:1;
      unsigned ICTSEL2:1;
    };
  };
} IC4CON1BITS;
extern volatile IC4CON1BITS IC4CON1bits __attribute__((__sfr__));

#define IC4CON2 IC4CON2
extern volatile unsigned int  IC4CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC4CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC4CON2BITS;
extern volatile IC4CON2BITS IC4CON2bits __attribute__((__sfr__));

#define IC4BUF IC4BUF
extern volatile unsigned int  IC4BUF __attribute__((__sfr__));
#define IC4TMR IC4TMR
extern volatile unsigned int  IC4TMR __attribute__((__sfr__));
#define I2C1CON1 I2C1CON1
extern volatile unsigned int  I2C1CON1 __attribute__((__sfr__));
typedef struct tagI2C1CON1BITS {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned STRICT:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C1CON1BITS;
extern volatile I2C1CON1BITS I2C1CON1bits __attribute__((__sfr__));

#define I2C1CONL I2C1CONL
extern volatile unsigned int  I2C1CONL __attribute__((__sfr__));
typedef struct tagI2C1CONLBITS {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned STRICT:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C1CONLBITS;
extern volatile I2C1CONLBITS I2C1CONLbits __attribute__((__sfr__));

#define I2C1CON2 I2C1CON2
extern volatile unsigned int  I2C1CON2 __attribute__((__sfr__));
typedef struct tagI2C1CON2BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
} I2C1CON2BITS;
extern volatile I2C1CON2BITS I2C1CON2bits __attribute__((__sfr__));

#define I2C1CONH I2C1CONH
extern volatile unsigned int  I2C1CONH __attribute__((__sfr__));
typedef struct tagI2C1CONHBITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
} I2C1CONHBITS;
extern volatile I2C1CONHBITS I2C1CONHbits __attribute__((__sfr__));

#define I2C1STAT I2C1STAT
extern volatile unsigned int  I2C1STAT __attribute__((__sfr__));
typedef struct tagI2C1STATBITS {
  unsigned TBF:1;
  unsigned RBF:1;
  unsigned R_W:1;
  unsigned S:1;
  unsigned P:1;
  unsigned D_A:1;
  unsigned I2COV:1;
  unsigned IWCOL:1;
  unsigned ADD10:1;
  unsigned GCSTAT:1;
  unsigned BCL:1;
  unsigned :2;
  unsigned ACKTIM:1;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
typedef struct tagI2C1ADDBITS {
  unsigned ADD:10;
} I2C1ADDBITS;
extern volatile I2C1ADDBITS I2C1ADDbits __attribute__((__sfr__));

#define I2C1MSK I2C1MSK
extern volatile unsigned int  I2C1MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C1MSKBITS {
  union {
    struct {
      unsigned AMSK:10;
    };
    struct {
      unsigned AMSK0:1;
      unsigned AMSK1:1;
      unsigned AMSK2:1;
      unsigned AMSK3:1;
      unsigned AMSK4:1;
      unsigned AMSK5:1;
      unsigned AMSK6:1;
      unsigned AMSK7:1;
      unsigned AMSK8:1;
      unsigned AMSK9:1;
    };
  };
} I2C1MSKBITS;
extern volatile I2C1MSKBITS I2C1MSKbits __attribute__((__sfr__));

#define I2C1BRG I2C1BRG
extern volatile unsigned int  I2C1BRG __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile unsigned int  I2C1TRN __attribute__((__sfr__));
typedef struct tagI2C1TRNBITS {
  unsigned I2CTXDATA:8;
} I2C1TRNBITS;
extern volatile I2C1TRNBITS I2C1TRNbits __attribute__((__sfr__));

#define I2C1RCV I2C1RCV
extern volatile unsigned int  I2C1RCV __attribute__((__sfr__));
typedef struct tagI2C1RCVBITS {
  unsigned I2CRXDATA:8;
} I2C1RCVBITS;
extern volatile I2C1RCVBITS I2C1RCVbits __attribute__((__sfr__));

#define I2C2CON1 I2C2CON1
extern volatile unsigned int  I2C2CON1 __attribute__((__sfr__));
typedef struct tagI2C2CON1BITS {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned STRICT:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C2CON1BITS;
extern volatile I2C2CON1BITS I2C2CON1bits __attribute__((__sfr__));

#define I2C2CONL I2C2CONL
extern volatile unsigned int  I2C2CONL __attribute__((__sfr__));
typedef struct tagI2C2CONLBITS {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned STRICT:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C2CONLBITS;
extern volatile I2C2CONLBITS I2C2CONLbits __attribute__((__sfr__));

#define I2C2CON2 I2C2CON2
extern volatile unsigned int  I2C2CON2 __attribute__((__sfr__));
typedef struct tagI2C2CON2BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
} I2C2CON2BITS;
extern volatile I2C2CON2BITS I2C2CON2bits __attribute__((__sfr__));

#define I2C2CONH I2C2CONH
extern volatile unsigned int  I2C2CONH __attribute__((__sfr__));
typedef struct tagI2C2CONHBITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
} I2C2CONHBITS;
extern volatile I2C2CONHBITS I2C2CONHbits __attribute__((__sfr__));

#define I2C2STAT I2C2STAT
extern volatile unsigned int  I2C2STAT __attribute__((__sfr__));
typedef struct tagI2C2STATBITS {
  unsigned TBF:1;
  unsigned RBF:1;
  unsigned R_W:1;
  unsigned S:1;
  unsigned P:1;
  unsigned D_A:1;
  unsigned I2COV:1;
  unsigned IWCOL:1;
  unsigned ADD10:1;
  unsigned GCSTAT:1;
  unsigned BCL:1;
  unsigned :2;
  unsigned ACKTIM:1;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C2STATBITS;
extern volatile I2C2STATBITS I2C2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile unsigned int  I2C2ADD __attribute__((__sfr__));
typedef struct tagI2C2ADDBITS {
  unsigned ADD:10;
} I2C2ADDBITS;
extern volatile I2C2ADDBITS I2C2ADDbits __attribute__((__sfr__));

#define I2C2MSK I2C2MSK
extern volatile unsigned int  I2C2MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C2MSKBITS {
  union {
    struct {
      unsigned AMSK:10;
    };
    struct {
      unsigned AMSK0:1;
      unsigned AMSK1:1;
      unsigned AMSK2:1;
      unsigned AMSK3:1;
      unsigned AMSK4:1;
      unsigned AMSK5:1;
      unsigned AMSK6:1;
      unsigned AMSK7:1;
      unsigned AMSK8:1;
      unsigned AMSK9:1;
    };
  };
} I2C2MSKBITS;
extern volatile I2C2MSKBITS I2C2MSKbits __attribute__((__sfr__));

#define I2C2BRG I2C2BRG
extern volatile unsigned int  I2C2BRG __attribute__((__sfr__));
#define I2C2TRN I2C2TRN
extern volatile unsigned int  I2C2TRN __attribute__((__sfr__));
typedef struct tagI2C2TRNBITS {
  unsigned I2CTXDATA:8;
} I2C2TRNBITS;
extern volatile I2C2TRNBITS I2C2TRNbits __attribute__((__sfr__));

#define I2C2RCV I2C2RCV
extern volatile unsigned int  I2C2RCV __attribute__((__sfr__));
typedef struct tagI2C2RCVBITS {
  unsigned I2CRXDATA:8;
} I2C2RCVBITS;
extern volatile I2C2RCVBITS I2C2RCVbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
        unsigned int uxmode;
        unsigned int uxsta;
        unsigned int uxtxreg;
        unsigned int uxrxreg;
        unsigned int uxbrg;
} UART, *PUART;

#define UxMODEBITS U1MODEBITS
#define UxSTABITS U1STABITS
#define UxTXREGBITS U1TXREGBITS
#define UxRXREGBITS U1RXREGBITS
#define UxBRGBITS U1BRGBITS

/* SFR blocks for each UART module */
#define UART1 UART1
extern volatile UART UART1 __attribute__((__sfr__));
#define UART2 UART2
extern volatile UART UART2 __attribute__((__sfr__));

#define U1MODE U1MODE
extern volatile unsigned int  U1MODE __attribute__((__sfr__));
__extension__ typedef struct tagU1MODEBITS {
  union {
    struct {
      unsigned STSEL:1;
      unsigned PDSEL:2;
      unsigned BRGH:1;
      unsigned URXINV:1;
      unsigned ABAUD:1;
      unsigned LPBACK:1;
      unsigned WAKE:1;
      unsigned UEN:2;
      unsigned :1;
      unsigned RTSMD:1;
      unsigned IREN:1;
      unsigned USIDL:1;
      unsigned :1;
      unsigned UARTEN:1;
    };
    struct {
      unsigned :1;
      unsigned PDSEL0:1;
      unsigned PDSEL1:1;
      unsigned :1;
      unsigned RXINV:1;
      unsigned :3;
      unsigned UEN0:1;
      unsigned UEN1:1;
    };
  };
} U1MODEBITS;
extern volatile U1MODEBITS U1MODEbits __attribute__((__sfr__));

#define U1STA U1STA
extern volatile unsigned int  U1STA __attribute__((__sfr__));
__extension__ typedef struct tagU1STABITS {
  union {
    struct {
      unsigned URXDA:1;
      unsigned OERR:1;
      unsigned FERR:1;
      unsigned PERR:1;
      unsigned RIDLE:1;
      unsigned ADDEN:1;
      unsigned URXISEL:2;
      unsigned TRMT:1;
      unsigned UTXBF:1;
      unsigned UTXEN:1;
      unsigned UTXBRK:1;
      unsigned :1;
      unsigned UTXISEL0:1;
      unsigned UTXINV:1;
      unsigned UTXISEL1:1;
    };
    struct {
      unsigned :6;
      unsigned URXISEL0:1;
      unsigned URXISEL1:1;
      unsigned :6;
      unsigned TXINV:1;
    };
  };
} U1STABITS;
extern volatile U1STABITS U1STAbits __attribute__((__sfr__));

#define U1TXREG U1TXREG
extern volatile unsigned int  U1TXREG __attribute__((__sfr__));
#define U1RXREG U1RXREG
extern volatile unsigned int  U1RXREG __attribute__((__sfr__));
#define U1BRG U1BRG
extern volatile unsigned int  U1BRG __attribute__((__sfr__));
#define U2MODE U2MODE
extern volatile unsigned int  U2MODE __attribute__((__sfr__));
__extension__ typedef struct tagU2MODEBITS {
  union {
    struct {
      unsigned STSEL:1;
      unsigned PDSEL:2;
      unsigned BRGH:1;
      unsigned URXINV:1;
      unsigned ABAUD:1;
      unsigned LPBACK:1;
      unsigned WAKE:1;
      unsigned UEN:2;
      unsigned :1;
      unsigned RTSMD:1;
      unsigned IREN:1;
      unsigned USIDL:1;
      unsigned :1;
      unsigned UARTEN:1;
    };
    struct {
      unsigned :1;
      unsigned PDSEL0:1;
      unsigned PDSEL1:1;
      unsigned :1;
      unsigned RXINV:1;
      unsigned :3;
      unsigned UEN0:1;
      unsigned UEN1:1;
    };
  };
} U2MODEBITS;
extern volatile U2MODEBITS U2MODEbits __attribute__((__sfr__));

#define U2STA U2STA
extern volatile unsigned int  U2STA __attribute__((__sfr__));
__extension__ typedef struct tagU2STABITS {
  union {
    struct {
      unsigned URXDA:1;
      unsigned OERR:1;
      unsigned FERR:1;
      unsigned PERR:1;
      unsigned RIDLE:1;
      unsigned ADDEN:1;
      unsigned URXISEL:2;
      unsigned TRMT:1;
      unsigned UTXBF:1;
      unsigned UTXEN:1;
      unsigned UTXBRK:1;
      unsigned :1;
      unsigned UTXISEL0:1;
      unsigned UTXINV:1;
      unsigned UTXISEL1:1;
    };
    struct {
      unsigned :6;
      unsigned URXISEL0:1;
      unsigned URXISEL1:1;
      unsigned :6;
      unsigned TXINV:1;
    };
  };
} U2STABITS;
extern volatile U2STABITS U2STAbits __attribute__((__sfr__));

#define U2TXREG U2TXREG
extern volatile unsigned int  U2TXREG __attribute__((__sfr__));
#define U2RXREG U2RXREG
extern volatile unsigned int  U2RXREG __attribute__((__sfr__));
#define U2BRG U2BRG
extern volatile unsigned int  U2BRG __attribute__((__sfr__));

/* Generic structure of entire SFR area for each SPI module */
typedef struct tagSPI {
        unsigned int spixstat;
        unsigned int spixcon1;
        unsigned int spixcon2;
        unsigned int unused;
        unsigned int spixbuf;
} SPI, *PSPI;

#define SPIxSTATBITS SPI1STATBITS
#define SPIxCONBITS SPI1CONBITS

/* SFR blocks for each SPI module */
#define SPI1 SPI1
extern volatile SPI SPI1 __attribute__((__sfr__));
#define SPI2 SPI2
extern volatile SPI SPI2 __attribute__((__sfr__));

#define SPI1STAT SPI1STAT
extern volatile unsigned int  SPI1STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI1STATBITS {
  union {
    struct {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned SISEL:3;
      unsigned SRXMPT:1;
      unsigned SPIROV:1;
      unsigned SRMPT:1;
      unsigned SPIBEC:3;
      unsigned :2;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :2;
      unsigned SISEL0:1;
      unsigned SISEL1:1;
      unsigned SISEL2:1;
      unsigned :3;
      unsigned SPIBEC0:1;
      unsigned SPIBEC1:1;
      unsigned SPIBEC2:1;
    };
  };
} SPI1STATBITS;
extern volatile SPI1STATBITS SPI1STATbits __attribute__((__sfr__));

#define SPI1CON1 SPI1CON1
extern volatile unsigned int  SPI1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI1CON1BITS {
  union {
    struct {
      unsigned PPRE:2;
      unsigned SPRE:3;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned DISSDO:1;
      unsigned DISSCK:1;
    };
    struct {
      unsigned PPRE0:1;
      unsigned PPRE1:1;
      unsigned SPRE0:1;
      unsigned SPRE1:1;
      unsigned SPRE2:1;
    };
  };
} SPI1CON1BITS;
extern volatile SPI1CON1BITS SPI1CON1bits __attribute__((__sfr__));

#define SPI1CON2 SPI1CON2
extern volatile unsigned int  SPI1CON2 __attribute__((__sfr__));
typedef struct tagSPI1CON2BITS {
  unsigned SPIBEN:1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI1CON2BITS;
extern volatile SPI1CON2BITS SPI1CON2bits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
#define SPI2STAT SPI2STAT
extern volatile unsigned int  SPI2STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI2STATBITS {
  union {
    struct {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned SISEL:3;
      unsigned SRXMPT:1;
      unsigned SPIROV:1;
      unsigned SRMPT:1;
      unsigned SPIBEC:3;
      unsigned :2;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :2;
      unsigned SISEL0:1;
      unsigned SISEL1:1;
      unsigned SISEL2:1;
      unsigned :3;
      unsigned SPIBEC0:1;
      unsigned SPIBEC1:1;
      unsigned SPIBEC2:1;
    };
  };
} SPI2STATBITS;
extern volatile SPI2STATBITS SPI2STATbits __attribute__((__sfr__));

#define SPI2CON1 SPI2CON1
extern volatile unsigned int  SPI2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI2CON1BITS {
  union {
    struct {
      unsigned PPRE:2;
      unsigned SPRE:3;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned DISSDO:1;
      unsigned DISSCK:1;
    };
    struct {
      unsigned PPRE0:1;
      unsigned PPRE1:1;
      unsigned SPRE0:1;
      unsigned SPRE1:1;
      unsigned SPRE2:1;
    };
  };
} SPI2CON1BITS;
extern volatile SPI2CON1BITS SPI2CON1bits __attribute__((__sfr__));

#define SPI2CON2 SPI2CON2
extern volatile unsigned int  SPI2CON2 __attribute__((__sfr__));
typedef struct tagSPI2CON2BITS {
  unsigned SPIBEN:1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI2CON2BITS;
extern volatile SPI2CON2BITS SPI2CON2bits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile unsigned int  SPI2BUF __attribute__((__sfr__));
#define ADCON1L ADCON1L
extern volatile unsigned int  ADCON1L __attribute__((__sfr__));
typedef struct tagADCON1LBITS {
  unsigned :12;
  unsigned PUMPEN:1;
  unsigned ADSIDL:1;
  unsigned :1;
  unsigned ADON:1;
} ADCON1LBITS;
extern volatile ADCON1LBITS ADCON1Lbits __attribute__((__sfr__));

#define ADCON1H ADCON1H
extern volatile unsigned int  ADCON1H __attribute__((__sfr__));
__extension__ typedef struct tagADCON1HBITS {
  union {
    struct {
      unsigned :5;
      unsigned SHRRES:2;
      unsigned FORM:1;
    };
    struct {
      unsigned :5;
      unsigned SHRRES0:1;
      unsigned SHRRES1:1;
    };
  };
} ADCON1HBITS;
extern volatile ADCON1HBITS ADCON1Hbits __attribute__((__sfr__));

#define ADCON2L ADCON2L
extern volatile unsigned int  ADCON2L __attribute__((__sfr__));
__extension__ typedef struct tagADCON2LBITS {
  union {
    struct {
      unsigned SHRADCS:7;
      unsigned :1;
      unsigned SHREISEL:3;
      unsigned :1;
      unsigned EIEN:1;
      unsigned :1;
      unsigned REFERCIE:1;
      unsigned REFCIE:1;
    };
    struct {
      unsigned SHRADCS0:1;
      unsigned SHRADCS1:1;
      unsigned SHRADCS2:1;
      unsigned SHRADCS3:1;
      unsigned SHRADCS4:1;
      unsigned SHRADCS5:1;
      unsigned SHRADCS6:1;
      unsigned :1;
      unsigned SHREISEL0:1;
      unsigned SHREISEL1:1;
      unsigned SHREISEL2:1;
    };
  };
} ADCON2LBITS;
extern volatile ADCON2LBITS ADCON2Lbits __attribute__((__sfr__));

#define ADCON2H ADCON2H
extern volatile unsigned int  ADCON2H __attribute__((__sfr__));
__extension__ typedef struct tagADCON2HBITS {
  union {
    struct {
      unsigned SHRSAMC:10;
      unsigned :4;
      unsigned REFERR:1;
      unsigned REFRDY:1;
    };
    struct {
      unsigned SHRSAMC0:1;
      unsigned SHRSAMC1:1;
      unsigned SHRSAMC2:1;
      unsigned SHRSAMC3:1;
      unsigned SHRSAMC4:1;
      unsigned SHRSAMC5:1;
      unsigned SHRSAMC6:1;
      unsigned SHRSAMC7:1;
      unsigned SHRSAMC8:1;
      unsigned SHRSAMC9:1;
    };
  };
} ADCON2HBITS;
extern volatile ADCON2HBITS ADCON2Hbits __attribute__((__sfr__));

#define ADCON3L ADCON3L
extern volatile unsigned int  ADCON3L __attribute__((__sfr__));
__extension__ typedef struct tagADCON3LBITS {
  union {
    struct {
      unsigned CNVCHSEL:6;
      unsigned SWCTRG:1;
      unsigned SWLCTRG:1;
      unsigned CNVRTCH:1;
      unsigned SHRSAMP:1;
      unsigned SUSPRDY:1;
      unsigned SUSPCIE:1;
      unsigned SUSPEND:1;
      unsigned REFSEL:3;
    };
    struct {
      unsigned CNVCHSEL0:1;
      unsigned CNVCHSEL1:1;
      unsigned CNVCHSEL2:1;
      unsigned CNVCHSEL3:1;
      unsigned CNVCHSEL4:1;
      unsigned CNVCHSEL5:1;
      unsigned :7;
      unsigned REFSEL0:1;
      unsigned REFSEL1:1;
      unsigned REFSEL2:1;
    };
  };
} ADCON3LBITS;
extern volatile ADCON3LBITS ADCON3Lbits __attribute__((__sfr__));

#define ADCON3H ADCON3H
extern volatile unsigned int  ADCON3H __attribute__((__sfr__));
__extension__ typedef struct tagADCON3HBITS {
  union {
    struct {
      unsigned C0EN:1;
      unsigned C1EN:1;
      unsigned C2EN:1;
      unsigned C3EN:1;
      unsigned :3;
      unsigned SHREN:1;
      unsigned CLKDIV:6;
      unsigned CLKSEL:2;
    };
    struct {
      unsigned :8;
      unsigned CLKDIV0:1;
      unsigned CLKDIV1:1;
      unsigned CLKDIV2:1;
      unsigned CLKDIV3:1;
      unsigned CLKDIV4:1;
      unsigned CLKDIV5:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
    };
  };
} ADCON3HBITS;
extern volatile ADCON3HBITS ADCON3Hbits __attribute__((__sfr__));

#define ADCON4L ADCON4L
extern volatile unsigned int  ADCON4L __attribute__((__sfr__));
typedef struct tagADCON4LBITS {
  unsigned SAMC0EN:1;
  unsigned SAMC1EN:1;
  unsigned SAMC2EN:1;
  unsigned SAMC3EN:1;
  unsigned :4;
  unsigned SYNCTRG0:1;
  unsigned SYNCTRG1:1;
  unsigned SYNCTRG2:1;
  unsigned SYNCTRG3:1;
} ADCON4LBITS;
extern volatile ADCON4LBITS ADCON4Lbits __attribute__((__sfr__));

#define ADCON4H ADCON4H
extern volatile unsigned int  ADCON4H __attribute__((__sfr__));
__extension__ typedef struct tagADCON4HBITS {
  union {
    struct {
      unsigned C0CHS:2;
      unsigned C1CHS:2;
      unsigned C2CHS:2;
      unsigned C3CHS:2;
    };
    struct {
      unsigned C0CHS0:1;
      unsigned C0CHS1:1;
      unsigned C1CHS0:1;
      unsigned C1CHS1:1;
      unsigned C2CHS0:1;
      unsigned C2CHS1:1;
      unsigned C3CHS0:1;
      unsigned C3CHS1:1;
    };
  };
} ADCON4HBITS;
extern volatile ADCON4HBITS ADCON4Hbits __attribute__((__sfr__));

#define ADMOD0L ADMOD0L
extern volatile unsigned int  ADMOD0L __attribute__((__sfr__));
typedef struct tagADMOD0LBITS {
  unsigned SIGN0:1;
  unsigned DIFF0:1;
  unsigned SIGN1:1;
  unsigned DIFF1:1;
  unsigned SIGN2:1;
  unsigned DIFF2:1;
  unsigned SIGN3:1;
  unsigned DIFF3:1;
  unsigned SIGN4:1;
  unsigned DIFF4:1;
  unsigned SIGN5:1;
  unsigned DIFF5:1;
  unsigned SIGN6:1;
  unsigned DIFF6:1;
  unsigned SIGN7:1;
  unsigned DIFF7:1;
} ADMOD0LBITS;
extern volatile ADMOD0LBITS ADMOD0Lbits __attribute__((__sfr__));

#define ADMOD1L ADMOD1L
extern volatile unsigned int  ADMOD1L __attribute__((__sfr__));
typedef struct tagADMOD1LBITS {
  unsigned :4;
  unsigned SIGN18:1;
  unsigned DIFF18:1;
  unsigned SIGN19:1;
  unsigned DIFF19:1;
  unsigned SIGN20:1;
  unsigned DIFF20:1;
  unsigned SIGN21:1;
  unsigned DIFF21:1;
} ADMOD1LBITS;
extern volatile ADMOD1LBITS ADMOD1Lbits __attribute__((__sfr__));

#define ADIEL ADIEL
extern volatile unsigned int  ADIEL __attribute__((__sfr__));
typedef struct tagADIELBITS {
  unsigned IE0:1;
  unsigned IE1:1;
  unsigned IE2:1;
  unsigned IE3:1;
  unsigned IE4:1;
  unsigned IE5:1;
  unsigned IE6:1;
  unsigned IE7:1;
} ADIELBITS;
extern volatile ADIELBITS ADIELbits __attribute__((__sfr__));

#define ADIEH ADIEH
extern volatile unsigned int  ADIEH __attribute__((__sfr__));
typedef struct tagADIEHBITS {
  unsigned :2;
  unsigned IE18:1;
  unsigned IE19:1;
  unsigned IE20:1;
  unsigned IE21:1;
} ADIEHBITS;
extern volatile ADIEHBITS ADIEHbits __attribute__((__sfr__));

#define ADSTATL ADSTATL
extern volatile unsigned int  ADSTATL __attribute__((__sfr__));
typedef struct tagADSTATLBITS {
  unsigned AN0RDY:1;
  unsigned AN1RDY:1;
  unsigned AN2RDY:1;
  unsigned AN3RDY:1;
  unsigned AN4RDY:1;
  unsigned AN5RDY:1;
  unsigned AN6RDY:1;
  unsigned AN7RDY:1;
} ADSTATLBITS;
extern volatile ADSTATLBITS ADSTATLbits __attribute__((__sfr__));

#define ADSTATH ADSTATH
extern volatile unsigned int  ADSTATH __attribute__((__sfr__));
typedef struct tagADSTATHBITS {
  unsigned :2;
  unsigned AN18RDY:1;
  unsigned AN19RDY:1;
  unsigned AN20RDY:1;
  unsigned AN21RDY:1;
} ADSTATHBITS;
extern volatile ADSTATHBITS ADSTATHbits __attribute__((__sfr__));

#define ADCMP0ENL ADCMP0ENL
extern volatile unsigned int  ADCMP0ENL __attribute__((__sfr__));
typedef struct tagADCMP0ENLBITS {
  unsigned CMPEN0:1;
  unsigned CMPEN1:1;
  unsigned CMPEN2:1;
  unsigned CMPEN3:1;
  unsigned CMPEN4:1;
  unsigned CMPEN5:1;
  unsigned CMPEN6:1;
  unsigned CMPEN7:1;
} ADCMP0ENLBITS;
extern volatile ADCMP0ENLBITS ADCMP0ENLbits __attribute__((__sfr__));

#define ADCMP0ENH ADCMP0ENH
extern volatile unsigned int  ADCMP0ENH __attribute__((__sfr__));
typedef struct tagADCMP0ENHBITS {
  unsigned :2;
  unsigned CMPEN18:1;
  unsigned CMPEN19:1;
  unsigned CMPEN20:1;
  unsigned CMPEN21:1;
} ADCMP0ENHBITS;
extern volatile ADCMP0ENHBITS ADCMP0ENHbits __attribute__((__sfr__));

#define ADCMP0LO ADCMP0LO
extern volatile unsigned int  ADCMP0LO __attribute__((__sfr__));
#define ADCMP0HI ADCMP0HI
extern volatile unsigned int  ADCMP0HI __attribute__((__sfr__));
#define ADCMP1ENL ADCMP1ENL
extern volatile unsigned int  ADCMP1ENL __attribute__((__sfr__));
typedef struct tagADCMP1ENLBITS {
  unsigned CMPEN0:1;
  unsigned CMPEN1:1;
  unsigned CMPEN2:1;
  unsigned CMPEN3:1;
  unsigned CMPEN4:1;
  unsigned CMPEN5:1;
  unsigned CMPEN6:1;
  unsigned CMPEN7:1;
} ADCMP1ENLBITS;
extern volatile ADCMP1ENLBITS ADCMP1ENLbits __attribute__((__sfr__));

#define ADCMP1ENH ADCMP1ENH
extern volatile unsigned int  ADCMP1ENH __attribute__((__sfr__));
typedef struct tagADCMP1ENHBITS {
  unsigned :2;
  unsigned CMPEN18:1;
  unsigned CMPEN19:1;
  unsigned CMPEN20:1;
  unsigned CMPEN21:1;
} ADCMP1ENHBITS;
extern volatile ADCMP1ENHBITS ADCMP1ENHbits __attribute__((__sfr__));

#define ADCMP1LO ADCMP1LO
extern volatile unsigned int  ADCMP1LO __attribute__((__sfr__));
#define ADCMP1HI ADCMP1HI
extern volatile unsigned int  ADCMP1HI __attribute__((__sfr__));
#define ADFL0DAT ADFL0DAT
extern volatile unsigned int  ADFL0DAT __attribute__((__sfr__));
#define ADFL0CON ADFL0CON
extern volatile unsigned int  ADFL0CON __attribute__((__sfr__));
__extension__ typedef struct tagADFL0CONBITS {
  union {
    struct {
      unsigned FLCHSEL:5;
      unsigned :3;
      unsigned RDY:1;
      unsigned IE:1;
      unsigned OVRSAM:3;
      unsigned MODE:2;
      unsigned FLEN:1;
    };
    struct {
      unsigned FLCHSEL0:1;
      unsigned FLCHSEL1:1;
      unsigned FLCHSEL2:1;
      unsigned FLCHSEL3:1;
      unsigned FLCHSEL4:1;
      unsigned :5;
      unsigned OVRSAM0:1;
      unsigned OVRSAM1:1;
      unsigned OVRSAM2:1;
    };
  };
} ADFL0CONBITS;
extern volatile ADFL0CONBITS ADFL0CONbits __attribute__((__sfr__));

#define ADFL1DAT ADFL1DAT
extern volatile unsigned int  ADFL1DAT __attribute__((__sfr__));
#define ADFL1CON ADFL1CON
extern volatile unsigned int  ADFL1CON __attribute__((__sfr__));
__extension__ typedef struct tagADFL1CONBITS {
  union {
    struct {
      unsigned FLCHSEL:5;
      unsigned :3;
      unsigned RDY:1;
      unsigned IE:1;
      unsigned OVRSAM:3;
      unsigned MODE:2;
      unsigned FLEN:1;
    };
    struct {
      unsigned FLCHSEL0:1;
      unsigned FLCHSEL1:1;
      unsigned FLCHSEL2:1;
      unsigned FLCHSEL3:1;
      unsigned FLCHSEL4:1;
      unsigned :5;
      unsigned OVRSAM0:1;
      unsigned OVRSAM1:1;
      unsigned OVRSAM2:1;
    };
  };
} ADFL1CONBITS;
extern volatile ADFL1CONBITS ADFL1CONbits __attribute__((__sfr__));

#define ADTRIG0L ADTRIG0L
extern volatile unsigned int  ADTRIG0L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG0LBITS {
  union {
    struct {
      unsigned TRGSRC0:5;
      unsigned :3;
      unsigned TRGSRC1:5;
    };
    struct {
      unsigned TRIGSRC00:1;
      unsigned TRIGSRC01:1;
      unsigned TRIGSRC02:1;
      unsigned TRIGSRC03:1;
      unsigned TRIGSRC04:1;
      unsigned :3;
      unsigned TRGSRC10:1;
      unsigned TRGSRC11:1;
      unsigned TRGSRC12:1;
      unsigned TRGSRC13:1;
      unsigned TRGSRC14:1;
    };
  };
} ADTRIG0LBITS;
extern volatile ADTRIG0LBITS ADTRIG0Lbits __attribute__((__sfr__));

#define ADTRIG0H ADTRIG0H
extern volatile unsigned int  ADTRIG0H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG0HBITS {
  union {
    struct {
      unsigned TRGSRC2:5;
      unsigned :3;
      unsigned TRGSRC3:5;
    };
    struct {
      unsigned TRIGSRC20:1;
      unsigned TRIGSRC21:1;
      unsigned TRIGSRC22:1;
      unsigned TRIGSRC23:1;
      unsigned TRIGSRC24:1;
      unsigned :3;
      unsigned TRGSRC30:1;
      unsigned TRGSRC31:1;
      unsigned TRGSRC32:1;
      unsigned TRGSRC33:1;
      unsigned TRGSRC34:1;
    };
  };
} ADTRIG0HBITS;
extern volatile ADTRIG0HBITS ADTRIG0Hbits __attribute__((__sfr__));

#define ADTRIG1L ADTRIG1L
extern volatile unsigned int  ADTRIG1L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG1LBITS {
  union {
    struct {
      unsigned TRGSRC4:5;
      unsigned :3;
      unsigned TRGSRC5:5;
    };
    struct {
      unsigned TRIGSRC40:1;
      unsigned TRIGSRC41:1;
      unsigned TRIGSRC42:1;
      unsigned TRIGSRC43:1;
      unsigned TRIGSRC44:1;
      unsigned :3;
      unsigned TRGSRC50:1;
      unsigned TRGSRC51:1;
      unsigned TRGSRC52:1;
      unsigned TRGSRC53:1;
      unsigned TRGSRC54:1;
    };
  };
} ADTRIG1LBITS;
extern volatile ADTRIG1LBITS ADTRIG1Lbits __attribute__((__sfr__));

#define ADTRIG1H ADTRIG1H
extern volatile unsigned int  ADTRIG1H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG1HBITS {
  union {
    struct {
      unsigned TRGSRC6:5;
      unsigned :3;
      unsigned TRGSRC7:5;
    };
    struct {
      unsigned TRIGSRC60:1;
      unsigned TRIGSRC61:1;
      unsigned TRIGSRC62:1;
      unsigned TRIGSRC63:1;
      unsigned TRIGSRC64:1;
      unsigned :3;
      unsigned TRGSRC70:1;
      unsigned TRGSRC71:1;
      unsigned TRGSRC72:1;
      unsigned TRGSRC73:1;
      unsigned TRGSRC74:1;
    };
  };
} ADTRIG1HBITS;
extern volatile ADTRIG1HBITS ADTRIG1Hbits __attribute__((__sfr__));

#define ADTRIG4H ADTRIG4H
extern volatile unsigned int  ADTRIG4H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG4HBITS {
  union {
    struct {
      unsigned TRGSRC18:5;
      unsigned :3;
      unsigned TRGSRC19:5;
    };
    struct {
      unsigned TRIGSRC180:1;
      unsigned TRIGSRC181:1;
      unsigned TRIGSRC182:1;
      unsigned TRIGSRC183:1;
      unsigned TRIGSRC184:1;
      unsigned :3;
      unsigned TRGSRC190:1;
      unsigned TRGSRC191:1;
      unsigned TRGSRC192:1;
      unsigned TRGSRC193:1;
      unsigned TRGSRC194:1;
    };
  };
} ADTRIG4HBITS;
extern volatile ADTRIG4HBITS ADTRIG4Hbits __attribute__((__sfr__));

#define ADTRIG5L ADTRIG5L
extern volatile unsigned int  ADTRIG5L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG5LBITS {
  union {
    struct {
      unsigned TRGSRC20:5;
      unsigned :3;
      unsigned TRGSRC21:5;
    };
    struct {
      unsigned TRIGSRC200:1;
      unsigned TRIGSRC201:1;
      unsigned TRIGSRC202:1;
      unsigned TRIGSRC203:1;
      unsigned TRIGSRC204:1;
      unsigned :3;
      unsigned TRGSRC210:1;
      unsigned TRGSRC211:1;
      unsigned TRGSRC212:1;
      unsigned TRGSRC213:1;
      unsigned TRGSRC214:1;
    };
  };
} ADTRIG5LBITS;
extern volatile ADTRIG5LBITS ADTRIG5Lbits __attribute__((__sfr__));

#define ADCMP0CON ADCMP0CON
extern volatile unsigned int  ADCMP0CON __attribute__((__sfr__));
__extension__ typedef struct tagADCMP0CONBITS {
  union {
    struct {
      unsigned LOLO:1;
      unsigned LOHI:1;
      unsigned HILO:1;
      unsigned HIHI:1;
      unsigned BTWN:1;
      unsigned STAT:1;
      unsigned IE:1;
      unsigned CMPEN:1;
      unsigned CHNL:5;
    };
    struct {
      unsigned :8;
      unsigned CHNL0:1;
      unsigned CHNL1:1;
      unsigned CHNL2:1;
      unsigned CHNL3:1;
      unsigned CHNL4:1;
    };
  };
} ADCMP0CONBITS;
extern volatile ADCMP0CONBITS ADCMP0CONbits __attribute__((__sfr__));

#define ADCMP1CON ADCMP1CON
extern volatile unsigned int  ADCMP1CON __attribute__((__sfr__));
__extension__ typedef struct tagADCMP1CONBITS {
  union {
    struct {
      unsigned LOLO:1;
      unsigned LOHI:1;
      unsigned HILO:1;
      unsigned HIHI:1;
      unsigned BTWN:1;
      unsigned STAT:1;
      unsigned IE:1;
      unsigned CMPEN:1;
      unsigned CHNL:5;
    };
    struct {
      unsigned :8;
      unsigned CHNL0:1;
      unsigned CHNL1:1;
      unsigned CHNL2:1;
      unsigned CHNL3:1;
      unsigned CHNL4:1;
    };
  };
} ADCMP1CONBITS;
extern volatile ADCMP1CONBITS ADCMP1CONbits __attribute__((__sfr__));

#define ADLVLTRGL ADLVLTRGL
extern volatile unsigned int  ADLVLTRGL __attribute__((__sfr__));
typedef struct tagADLVLTRGLBITS {
  unsigned LVLEN0:1;
  unsigned LVLEN1:1;
  unsigned LVLEN2:1;
  unsigned LVLEN3:1;
  unsigned LVLEN4:1;
  unsigned LVLEN5:1;
  unsigned LVLEN6:1;
  unsigned LVLEN7:1;
} ADLVLTRGLBITS;
extern volatile ADLVLTRGLBITS ADLVLTRGLbits __attribute__((__sfr__));

#define ADLVLTRGH ADLVLTRGH
extern volatile unsigned int  ADLVLTRGH __attribute__((__sfr__));
typedef struct tagADLVLTRGHBITS {
  unsigned :2;
  unsigned LVLEN18:1;
  unsigned LVLEN19:1;
  unsigned LVLEN20:1;
  unsigned LVLEN21:1;
} ADLVLTRGHBITS;
extern volatile ADLVLTRGHBITS ADLVLTRGHbits __attribute__((__sfr__));

#define ADCORE0L ADCORE0L
extern volatile unsigned int  ADCORE0L __attribute__((__sfr__));
__extension__ typedef struct tagADCORE0LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} ADCORE0LBITS;
extern volatile ADCORE0LBITS ADCORE0Lbits __attribute__((__sfr__));

#define ADCORE0H ADCORE0H
extern volatile unsigned int  ADCORE0H __attribute__((__sfr__));
__extension__ typedef struct tagADCORE0HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} ADCORE0HBITS;
extern volatile ADCORE0HBITS ADCORE0Hbits __attribute__((__sfr__));

#define ADCORE1L ADCORE1L
extern volatile unsigned int  ADCORE1L __attribute__((__sfr__));
__extension__ typedef struct tagADCORE1LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} ADCORE1LBITS;
extern volatile ADCORE1LBITS ADCORE1Lbits __attribute__((__sfr__));

#define ADCORE1H ADCORE1H
extern volatile unsigned int  ADCORE1H __attribute__((__sfr__));
__extension__ typedef struct tagADCORE1HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} ADCORE1HBITS;
extern volatile ADCORE1HBITS ADCORE1Hbits __attribute__((__sfr__));

#define ADCORE2L ADCORE2L
extern volatile unsigned int  ADCORE2L __attribute__((__sfr__));
__extension__ typedef struct tagADCORE2LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} ADCORE2LBITS;
extern volatile ADCORE2LBITS ADCORE2Lbits __attribute__((__sfr__));

#define ADCORE2H ADCORE2H
extern volatile unsigned int  ADCORE2H __attribute__((__sfr__));
__extension__ typedef struct tagADCORE2HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} ADCORE2HBITS;
extern volatile ADCORE2HBITS ADCORE2Hbits __attribute__((__sfr__));

#define ADCORE3L ADCORE3L
extern volatile unsigned int  ADCORE3L __attribute__((__sfr__));
__extension__ typedef struct tagADCORE3LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} ADCORE3LBITS;
extern volatile ADCORE3LBITS ADCORE3Lbits __attribute__((__sfr__));

#define ADCORE3H ADCORE3H
extern volatile unsigned int  ADCORE3H __attribute__((__sfr__));
__extension__ typedef struct tagADCORE3HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} ADCORE3HBITS;
extern volatile ADCORE3HBITS ADCORE3Hbits __attribute__((__sfr__));

#define ADEIEL ADEIEL
extern volatile unsigned int  ADEIEL __attribute__((__sfr__));
typedef struct tagADEIELBITS {
  unsigned EIEN0:1;
  unsigned EIEN1:1;
  unsigned EIEN2:1;
  unsigned EIEN3:1;
  unsigned EIEN4:1;
  unsigned EIEN5:1;
  unsigned EIEN6:1;
  unsigned EIEN7:1;
} ADEIELBITS;
extern volatile ADEIELBITS ADEIELbits __attribute__((__sfr__));

#define ADEIEH ADEIEH
extern volatile unsigned int  ADEIEH __attribute__((__sfr__));
typedef struct tagADEIEHBITS {
  unsigned :2;
  unsigned EIEN18:1;
  unsigned EIEN19:1;
  unsigned EIEN20:1;
  unsigned EIEN21:1;
} ADEIEHBITS;
extern volatile ADEIEHBITS ADEIEHbits __attribute__((__sfr__));

#define ADEISTATL ADEISTATL
extern volatile unsigned int  ADEISTATL __attribute__((__sfr__));
typedef struct tagADEISTATLBITS {
  unsigned EISTAT0:1;
  unsigned EISTAT1:1;
  unsigned EISTAT2:1;
  unsigned EISTAT3:1;
  unsigned EISTAT4:1;
  unsigned EISTAT5:1;
  unsigned EISTAT6:1;
  unsigned EISTAT7:1;
} ADEISTATLBITS;
extern volatile ADEISTATLBITS ADEISTATLbits __attribute__((__sfr__));

#define ADEISTATH ADEISTATH
extern volatile unsigned int  ADEISTATH __attribute__((__sfr__));
typedef struct tagADEISTATHBITS {
  unsigned :2;
  unsigned EISTAT18:1;
  unsigned EISTAT19:1;
  unsigned EISTAT20:1;
  unsigned EISTAT21:1;
} ADEISTATHBITS;
extern volatile ADEISTATHBITS ADEISTATHbits __attribute__((__sfr__));

#define ADCON5L ADCON5L
extern volatile unsigned int  ADCON5L __attribute__((__sfr__));
typedef struct tagADCON5LBITS {
  unsigned C0PWR:1;
  unsigned C1PWR:1;
  unsigned C2PWR:1;
  unsigned C3PWR:1;
  unsigned :3;
  unsigned SHRPWR:1;
  unsigned C0RDY:1;
  unsigned C1RDY:1;
  unsigned C2RDY:1;
  unsigned C3RDY:1;
  unsigned :3;
  unsigned SHRRDY:1;
} ADCON5LBITS;
extern volatile ADCON5LBITS ADCON5Lbits __attribute__((__sfr__));

#define ADCON5H ADCON5H
extern volatile unsigned int  ADCON5H __attribute__((__sfr__));
typedef struct tagADCON5HBITS {
  unsigned C0C1E:1;
  unsigned C1C1E:1;
  unsigned C2C1E:1;
  unsigned C3C1E:1;
  unsigned :3;
  unsigned SHRCIE:1;
  unsigned WARMTIME:4;
} ADCON5HBITS;
extern volatile ADCON5HBITS ADCON5Hbits __attribute__((__sfr__));

#define ADCAL0L ADCAL0L
extern volatile unsigned int  ADCAL0L __attribute__((__sfr__));
typedef struct tagADCAL0LBITS {
  unsigned CAL0RUN:1;
  unsigned CAL0EN:1;
  unsigned CAL0DIFF:1;
  unsigned CAL0SKIP:1;
  unsigned :3;
  unsigned CAL0RDY:1;
  unsigned CAL1RUN:1;
  unsigned CAL1EN:1;
  unsigned CAL1DIFF:1;
  unsigned CAL1SKIP:1;
  unsigned :3;
  unsigned CAL1RDY:1;
} ADCAL0LBITS;
extern volatile ADCAL0LBITS ADCAL0Lbits __attribute__((__sfr__));

#define ADCAL0H ADCAL0H
extern volatile unsigned int  ADCAL0H __attribute__((__sfr__));
typedef struct tagADCAL0HBITS {
  unsigned CAL2RUN:1;
  unsigned CAL2EN:1;
  unsigned CAL2DIFF:1;
  unsigned CAL2SKIP:1;
  unsigned :3;
  unsigned CAL2RDY:1;
  unsigned CAL3RUN:1;
  unsigned CAL3EN:1;
  unsigned CAL3DIFF:1;
  unsigned CAL3SKIP:1;
  unsigned :3;
  unsigned CAL3RDY:1;
} ADCAL0HBITS;
extern volatile ADCAL0HBITS ADCAL0Hbits __attribute__((__sfr__));

#define ADCAL1H ADCAL1H
extern volatile unsigned int  ADCAL1H __attribute__((__sfr__));
typedef struct tagADCAL1HBITS {
  unsigned :8;
  unsigned CSHRRUN:1;
  unsigned CSHREN:1;
  unsigned CSHRDIFF:1;
  unsigned CSHRSKIP:1;
  unsigned :3;
  unsigned CSHRRDY:1;
} ADCAL1HBITS;
extern volatile ADCAL1HBITS ADCAL1Hbits __attribute__((__sfr__));

#define ADCBUF0 ADCBUF0
extern volatile unsigned int  ADCBUF0 __attribute__((__sfr__));
#define ADCBUF1 ADCBUF1
extern volatile unsigned int  ADCBUF1 __attribute__((__sfr__));
#define ADCBUF2 ADCBUF2
extern volatile unsigned int  ADCBUF2 __attribute__((__sfr__));
#define ADCBUF3 ADCBUF3
extern volatile unsigned int  ADCBUF3 __attribute__((__sfr__));
#define ADCBUF4 ADCBUF4
extern volatile unsigned int  ADCBUF4 __attribute__((__sfr__));
#define ADCBUF5 ADCBUF5
extern volatile unsigned int  ADCBUF5 __attribute__((__sfr__));
#define ADCBUF6 ADCBUF6
extern volatile unsigned int  ADCBUF6 __attribute__((__sfr__));
#define ADCBUF7 ADCBUF7
extern volatile unsigned int  ADCBUF7 __attribute__((__sfr__));
#define ADCBUF18 ADCBUF18
extern volatile unsigned int  ADCBUF18 __attribute__((__sfr__));
#define ADCBUF19 ADCBUF19
extern volatile unsigned int  ADCBUF19 __attribute__((__sfr__));
#define ADCBUF20 ADCBUF20
extern volatile unsigned int  ADCBUF20 __attribute__((__sfr__));
#define ADCBUF21 ADCBUF21
extern volatile unsigned int  ADCBUF21 __attribute__((__sfr__));
#define ISRCCON ISRCCON
extern volatile unsigned int  ISRCCON __attribute__((__sfr__));
__extension__ typedef struct tagISRCCONBITS {
  union {
    struct {
      unsigned ISRCCAL:6;
      unsigned :2;
      unsigned OUTSEL:3;
      unsigned :4;
      unsigned ISRCEN:1;
    };
    struct {
      unsigned ISRCCAL0:1;
      unsigned ISRCCAL1:1;
      unsigned ISRCCAL2:1;
      unsigned ISRCCAL3:1;
      unsigned ISRCCAL4:1;
      unsigned ISRCCAL5:1;
      unsigned :2;
      unsigned OUTSEL0:1;
      unsigned OUTSEL1:1;
      unsigned OUTSEL2:1;
    };
  };
} ISRCCONBITS;
extern volatile ISRCCONBITS ISRCCONbits __attribute__((__sfr__));

#define PGA1CON PGA1CON
extern volatile unsigned int  PGA1CON __attribute__((__sfr__));
__extension__ typedef struct tagPGA1CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned PGAOEN:1;
      unsigned PGAEN:1;
    };
    struct {
      unsigned GAIN0:1;
      unsigned GAIN1:1;
      unsigned GAIN2:1;
      unsigned :5;
      unsigned SELNI0:1;
      unsigned SELNI1:1;
      unsigned SELNI2:1;
      unsigned SELPI0:1;
      unsigned SELPI1:1;
      unsigned SELPI2:1;
    };
  };
} PGA1CONBITS;
extern volatile PGA1CONBITS PGA1CONbits __attribute__((__sfr__));

#define PGA1CAL PGA1CAL
extern volatile unsigned int  PGA1CAL __attribute__((__sfr__));
typedef struct tagPGA1CALBITS {
  unsigned PGACAL:6;
} PGA1CALBITS;
extern volatile PGA1CALBITS PGA1CALbits __attribute__((__sfr__));

#define PGA2CON PGA2CON
extern volatile unsigned int  PGA2CON __attribute__((__sfr__));
__extension__ typedef struct tagPGA2CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned PGAOEN:1;
      unsigned PGAEN:1;
    };
    struct {
      unsigned GAIN0:1;
      unsigned GAIN1:1;
      unsigned GAIN2:1;
      unsigned :5;
      unsigned SELNI0:1;
      unsigned SELNI1:1;
      unsigned SELNI2:1;
      unsigned SELPI0:1;
      unsigned SELPI1:1;
      unsigned SELPI2:1;
    };
  };
} PGA2CONBITS;
extern volatile PGA2CONBITS PGA2CONbits __attribute__((__sfr__));

#define PGA2CAL PGA2CAL
extern volatile unsigned int  PGA2CAL __attribute__((__sfr__));
typedef struct tagPGA2CALBITS {
  unsigned PGACAL:6;
} PGA2CALBITS;
extern volatile PGA2CALBITS PGA2CALbits __attribute__((__sfr__));

#define CMP1CON CMP1CON
extern volatile unsigned int  CMP1CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP1CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} CMP1CONBITS;
extern volatile CMP1CONBITS CMP1CONbits __attribute__((__sfr__));

#define CMP1DAC CMP1DAC
extern volatile unsigned int  CMP1DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP1DACBITS {
  union {
    struct {
      unsigned CMREF:12;
    };
    struct {
      unsigned CMREF0:1;
      unsigned CMREF1:1;
      unsigned CMREF2:1;
      unsigned CMREF3:1;
      unsigned CMREF4:1;
      unsigned CMREF5:1;
      unsigned CMREF6:1;
      unsigned CMREF7:1;
      unsigned CMREF8:1;
      unsigned CMREF9:1;
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} CMP1DACBITS;
extern volatile CMP1DACBITS CMP1DACbits __attribute__((__sfr__));

#define CMP2CON CMP2CON
extern volatile unsigned int  CMP2CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP2CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} CMP2CONBITS;
extern volatile CMP2CONBITS CMP2CONbits __attribute__((__sfr__));

#define CMP2DAC CMP2DAC
extern volatile unsigned int  CMP2DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP2DACBITS {
  union {
    struct {
      unsigned CMREF:12;
    };
    struct {
      unsigned CMREF0:1;
      unsigned CMREF1:1;
      unsigned CMREF2:1;
      unsigned CMREF3:1;
      unsigned CMREF4:1;
      unsigned CMREF5:1;
      unsigned CMREF6:1;
      unsigned CMREF7:1;
      unsigned CMREF8:1;
      unsigned CMREF9:1;
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} CMP2DACBITS;
extern volatile CMP2DACBITS CMP2DACbits __attribute__((__sfr__));

#define CMP3CON CMP3CON
extern volatile unsigned int  CMP3CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP3CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} CMP3CONBITS;
extern volatile CMP3CONBITS CMP3CONbits __attribute__((__sfr__));

#define CMP3DAC CMP3DAC
extern volatile unsigned int  CMP3DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP3DACBITS {
  union {
    struct {
      unsigned CMREF:12;
    };
    struct {
      unsigned CMREF0:1;
      unsigned CMREF1:1;
      unsigned CMREF2:1;
      unsigned CMREF3:1;
      unsigned CMREF4:1;
      unsigned CMREF5:1;
      unsigned CMREF6:1;
      unsigned CMREF7:1;
      unsigned CMREF8:1;
      unsigned CMREF9:1;
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} CMP3DACBITS;
extern volatile CMP3DACBITS CMP3DACbits __attribute__((__sfr__));

#define CMP4CON CMP4CON
extern volatile unsigned int  CMP4CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP4CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} CMP4CONBITS;
extern volatile CMP4CONBITS CMP4CONbits __attribute__((__sfr__));

#define CMP4DAC CMP4DAC
extern volatile unsigned int  CMP4DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP4DACBITS {
  union {
    struct {
      unsigned CMREF:12;
    };
    struct {
      unsigned CMREF0:1;
      unsigned CMREF1:1;
      unsigned CMREF2:1;
      unsigned CMREF3:1;
      unsigned CMREF4:1;
      unsigned CMREF5:1;
      unsigned CMREF6:1;
      unsigned CMREF7:1;
      unsigned CMREF8:1;
      unsigned CMREF9:1;
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} CMP4DACBITS;
extern volatile CMP4DACBITS CMP4DACbits __attribute__((__sfr__));

#define RPOR0 RPOR0
extern volatile unsigned int  RPOR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP32R:6;
      unsigned :2;
      unsigned RP33R:6;
    };
    struct {
      unsigned RP32R0:1;
      unsigned RP32R1:1;
      unsigned RP32R2:1;
      unsigned RP32R3:1;
      unsigned RP32R4:1;
      unsigned RP32R5:1;
      unsigned :2;
      unsigned RP33R0:1;
      unsigned RP33R1:1;
      unsigned RP33R2:1;
      unsigned RP33R3:1;
      unsigned RP33R4:1;
      unsigned RP33R5:1;
    };
  };
} RPOR0BITS;
extern volatile RPOR0BITS RPOR0bits __attribute__((__sfr__));

#define RPOR1 RPOR1
extern volatile unsigned int  RPOR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR1BITS {
  union {
    struct {
      unsigned RP34R:6;
      unsigned :2;
      unsigned RP35R:6;
    };
    struct {
      unsigned RP34R0:1;
      unsigned RP34R1:1;
      unsigned RP34R2:1;
      unsigned RP34R3:1;
      unsigned RP34R4:1;
      unsigned RP34R5:1;
      unsigned :2;
      unsigned RP35R0:1;
      unsigned RP35R1:1;
      unsigned RP35R2:1;
      unsigned RP35R3:1;
      unsigned RP35R4:1;
      unsigned RP35R5:1;
    };
  };
} RPOR1BITS;
extern volatile RPOR1BITS RPOR1bits __attribute__((__sfr__));

#define RPOR2 RPOR2
extern volatile unsigned int  RPOR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR2BITS {
  union {
    struct {
      unsigned RP36R:6;
      unsigned :2;
      unsigned RP37R:6;
    };
    struct {
      unsigned RP36R0:1;
      unsigned RP36R1:1;
      unsigned RP36R2:1;
      unsigned RP36R3:1;
      unsigned RP36R4:1;
      unsigned RP36R5:1;
      unsigned :2;
      unsigned RP37R0:1;
      unsigned RP37R1:1;
      unsigned RP37R2:1;
      unsigned RP37R3:1;
      unsigned RP37R4:1;
      unsigned RP37R5:1;
    };
  };
} RPOR2BITS;
extern volatile RPOR2BITS RPOR2bits __attribute__((__sfr__));

#define RPOR3 RPOR3
extern volatile unsigned int  RPOR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR3BITS {
  union {
    struct {
      unsigned RP38R:6;
      unsigned :2;
      unsigned RP39R:6;
    };
    struct {
      unsigned RP38R0:1;
      unsigned RP38R1:1;
      unsigned RP38R2:1;
      unsigned RP38R3:1;
      unsigned RP38R4:1;
      unsigned RP38R5:1;
      unsigned :2;
      unsigned RP39R0:1;
      unsigned RP39R1:1;
      unsigned RP39R2:1;
      unsigned RP39R3:1;
      unsigned RP39R4:1;
      unsigned RP39R5:1;
    };
  };
} RPOR3BITS;
extern volatile RPOR3BITS RPOR3bits __attribute__((__sfr__));

#define RPOR4 RPOR4
extern volatile unsigned int  RPOR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR4BITS {
  union {
    struct {
      unsigned RP40R:6;
      unsigned :2;
      unsigned RP41R:6;
    };
    struct {
      unsigned RP40R0:1;
      unsigned RP40R1:1;
      unsigned RP40R2:1;
      unsigned RP40R3:1;
      unsigned RP40R4:1;
      unsigned RP40R5:1;
      unsigned :2;
      unsigned RP41R0:1;
      unsigned RP41R1:1;
      unsigned RP41R2:1;
      unsigned RP41R3:1;
      unsigned RP41R4:1;
      unsigned RP41R5:1;
    };
  };
} RPOR4BITS;
extern volatile RPOR4BITS RPOR4bits __attribute__((__sfr__));

#define RPOR5 RPOR5
extern volatile unsigned int  RPOR5 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR5BITS {
  union {
    struct {
      unsigned RP42R:6;
      unsigned :2;
      unsigned RP43R:6;
    };
    struct {
      unsigned RP42R0:1;
      unsigned RP42R1:1;
      unsigned RP42R2:1;
      unsigned RP42R3:1;
      unsigned RP42R4:1;
      unsigned RP42R5:1;
      unsigned :2;
      unsigned RP43R0:1;
      unsigned RP43R1:1;
      unsigned RP43R2:1;
      unsigned RP43R3:1;
      unsigned RP43R4:1;
      unsigned RP43R5:1;
    };
  };
} RPOR5BITS;
extern volatile RPOR5BITS RPOR5bits __attribute__((__sfr__));

#define RPOR6 RPOR6
extern volatile unsigned int  RPOR6 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP44R:6;
      unsigned :2;
      unsigned RP45R:6;
    };
    struct {
      unsigned RP44R0:1;
      unsigned RP44R1:1;
      unsigned RP44R2:1;
      unsigned RP44R3:1;
      unsigned RP44R4:1;
      unsigned RP44R5:1;
      unsigned :2;
      unsigned RP45R0:1;
      unsigned RP45R1:1;
      unsigned RP45R2:1;
      unsigned RP45R3:1;
      unsigned RP45R4:1;
      unsigned RP45R5:1;
    };
  };
} RPOR6BITS;
extern volatile RPOR6BITS RPOR6bits __attribute__((__sfr__));

#define RPOR7 RPOR7
extern volatile unsigned int  RPOR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP46R:6;
      unsigned :2;
      unsigned RP47R:6;
    };
    struct {
      unsigned RP46R0:1;
      unsigned RP46R1:1;
      unsigned RP46R2:1;
      unsigned RP46R3:1;
      unsigned RP46R4:1;
      unsigned RP46R5:1;
      unsigned :2;
      unsigned RP47R0:1;
      unsigned RP47R1:1;
      unsigned RP47R2:1;
      unsigned RP47R3:1;
      unsigned RP47R4:1;
      unsigned RP47R5:1;
    };
  };
} RPOR7BITS;
extern volatile RPOR7BITS RPOR7bits __attribute__((__sfr__));

#define RPOR8 RPOR8
extern volatile unsigned int  RPOR8 __attribute__((__sfr__));
#define RPOR9 RPOR9
extern volatile unsigned int  RPOR9 __attribute__((__sfr__));
#define RPOR10 RPOR10
extern volatile unsigned int  RPOR10 __attribute__((__sfr__));
#define RPOR11 RPOR11
extern volatile unsigned int  RPOR11 __attribute__((__sfr__));
#define RPOR12 RPOR12
extern volatile unsigned int  RPOR12 __attribute__((__sfr__));
#define RPOR13 RPOR13
extern volatile unsigned int  RPOR13 __attribute__((__sfr__));
#define RPOR14 RPOR14
extern volatile unsigned int  RPOR14 __attribute__((__sfr__));
#define RPOR15 RPOR15
extern volatile unsigned int  RPOR15 __attribute__((__sfr__));
#define RPOR16 RPOR16
extern volatile unsigned int  RPOR16 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR16BITS {
  union {
    struct {
      unsigned RP176R:6;
      unsigned :2;
      unsigned RP177R:6;
    };
    struct {
      unsigned RP176R0:1;
      unsigned RP176R1:1;
      unsigned RP176R2:1;
      unsigned RP176R3:1;
      unsigned RP176R4:1;
      unsigned RP176R5:1;
      unsigned :2;
      unsigned RP177R0:1;
      unsigned RP177R1:1;
      unsigned RP177R2:1;
      unsigned RP177R3:1;
      unsigned RP177R4:1;
      unsigned RP177R5:1;
    };
  };
} RPOR16BITS;
extern volatile RPOR16BITS RPOR16bits __attribute__((__sfr__));

#define RPOR17 RPOR17
extern volatile unsigned int  RPOR17 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR17BITS {
  union {
    struct {
      unsigned RP178R:6;
      unsigned :2;
      unsigned RP179R:6;
    };
    struct {
      unsigned RP178R0:1;
      unsigned RP178R1:1;
      unsigned RP178R2:1;
      unsigned RP178R3:1;
      unsigned RP178R4:1;
      unsigned RP178R5:1;
      unsigned :2;
      unsigned RP179R0:1;
      unsigned RP179R1:1;
      unsigned RP179R2:1;
      unsigned RP179R3:1;
      unsigned RP179R4:1;
      unsigned RP179R5:1;
    };
  };
} RPOR17BITS;
extern volatile RPOR17BITS RPOR17bits __attribute__((__sfr__));

#define RPOR18 RPOR18
extern volatile unsigned int  RPOR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR18BITS {
  union {
    struct {
      unsigned RP180R:6;
      unsigned :2;
      unsigned RP181R:6;
    };
    struct {
      unsigned RP180R0:1;
      unsigned RP180R1:1;
      unsigned RP180R2:1;
      unsigned RP180R3:1;
      unsigned RP180R4:1;
      unsigned RP180R5:1;
      unsigned :2;
      unsigned RP181R0:1;
      unsigned RP181R1:1;
      unsigned RP181R2:1;
      unsigned RP181R3:1;
      unsigned RP181R4:1;
      unsigned RP181R5:1;
    };
  };
} RPOR18BITS;
extern volatile RPOR18BITS RPOR18bits __attribute__((__sfr__));

#define RPINR0 RPINR0
extern volatile unsigned int  RPINR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT1R:8;
    };
    struct {
      unsigned :8;
      unsigned INT1R0:1;
      unsigned INT1R1:1;
      unsigned INT1R2:1;
      unsigned INT1R3:1;
      unsigned INT1R4:1;
      unsigned INT1R5:1;
      unsigned INT1R6:1;
      unsigned INT1R7:1;
    };
  };
} RPINR0BITS;
extern volatile RPINR0BITS RPINR0bits __attribute__((__sfr__));

#define RPINR1 RPINR1
extern volatile unsigned int  RPINR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:8;
    };
    struct {
      unsigned INT2R0:1;
      unsigned INT2R1:1;
      unsigned INT2R2:1;
      unsigned INT2R3:1;
      unsigned INT2R4:1;
      unsigned INT2R5:1;
      unsigned INT2R6:1;
      unsigned INT2R7:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR2 RPINR2
extern volatile unsigned int  RPINR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR2BITS {
  union {
    struct {
      unsigned :8;
      unsigned T1CKRR:8;
    };
    struct {
      unsigned :8;
      unsigned T1CKRR0:1;
      unsigned T1CKRR1:1;
      unsigned T1CKRR2:1;
      unsigned T1CKRR3:1;
      unsigned T1CKRR4:1;
      unsigned T1CKRR5:1;
      unsigned T1CKRR6:1;
      unsigned T1CKRR7:1;
    };
  };
} RPINR2BITS;
extern volatile RPINR2BITS RPINR2bits __attribute__((__sfr__));

#define RPINR3 RPINR3
extern volatile unsigned int  RPINR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:8;
      unsigned T3CKR:8;
    };
    struct {
      unsigned T2CKR0:1;
      unsigned T2CKR1:1;
      unsigned T2CKR2:1;
      unsigned T2CKR3:1;
      unsigned T2CKR4:1;
      unsigned T2CKR5:1;
      unsigned T2CKR6:1;
      unsigned T2CKR7:1;
      unsigned T3CKR0:1;
      unsigned T3CKR1:1;
      unsigned T3CKR2:1;
      unsigned T3CKR3:1;
      unsigned T3CKR4:1;
      unsigned T3CKR5:1;
      unsigned T3CKR6:1;
      unsigned T3CKR7:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR7 RPINR7
extern volatile unsigned int  RPINR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:8;
      unsigned IC2R:8;
    };
    struct {
      unsigned IC1R0:1;
      unsigned IC1R1:1;
      unsigned IC1R2:1;
      unsigned IC1R3:1;
      unsigned IC1R4:1;
      unsigned IC1R5:1;
      unsigned IC1R6:1;
      unsigned IC1R7:1;
      unsigned IC2R0:1;
      unsigned IC2R1:1;
      unsigned IC2R2:1;
      unsigned IC2R3:1;
      unsigned IC2R4:1;
      unsigned IC2R5:1;
      unsigned IC2R6:1;
      unsigned IC2R7:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR8 RPINR8
extern volatile unsigned int  RPINR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:8;
      unsigned IC4R:8;
    };
    struct {
      unsigned IC3R0:1;
      unsigned IC3R1:1;
      unsigned IC3R2:1;
      unsigned IC3R3:1;
      unsigned IC3R4:1;
      unsigned IC3R5:1;
      unsigned IC3R6:1;
      unsigned IC3R7:1;
      unsigned IC4R0:1;
      unsigned IC4R1:1;
      unsigned IC4R2:1;
      unsigned IC4R3:1;
      unsigned IC4R4:1;
      unsigned IC4R5:1;
      unsigned IC4R6:1;
      unsigned IC4R7:1;
    };
  };
} RPINR8BITS;
extern volatile RPINR8BITS RPINR8bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile unsigned int  RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:8;
    };
    struct {
      unsigned OCFAR0:1;
      unsigned OCFAR1:1;
      unsigned OCFAR2:1;
      unsigned OCFAR3:1;
      unsigned OCFAR4:1;
      unsigned OCFAR5:1;
      unsigned OCFAR6:1;
      unsigned OCFAR7:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

#define RPINR12 RPINR12
extern volatile unsigned int  RPINR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR12BITS {
  union {
    struct {
      unsigned FLT1R:8;
      unsigned FLT2R:8;
    };
    struct {
      unsigned FLT1R0:1;
      unsigned FLT1R1:1;
      unsigned FLT1R2:1;
      unsigned FLT1R3:1;
      unsigned FLT1R4:1;
      unsigned FLT1R5:1;
      unsigned FLT1R6:1;
      unsigned FLT1R7:1;
      unsigned FLT2R0:1;
      unsigned FLT2R1:1;
      unsigned FLT2R2:1;
      unsigned FLT2R3:1;
      unsigned FLT2R4:1;
      unsigned FLT2R5:1;
      unsigned FLT2R6:1;
      unsigned FLT2R7:1;
    };
  };
} RPINR12BITS;
extern volatile RPINR12BITS RPINR12bits __attribute__((__sfr__));

#define RPINR13 RPINR13
extern volatile unsigned int  RPINR13 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR13BITS {
  union {
    struct {
      unsigned FLT3R:8;
      unsigned FLT4R:8;
    };
    struct {
      unsigned FLT3R0:1;
      unsigned FLT3R1:1;
      unsigned FLT3R2:1;
      unsigned FLT3R3:1;
      unsigned FLT3R4:1;
      unsigned FLT3R5:1;
      unsigned FLT3R6:1;
      unsigned FLT3R7:1;
      unsigned FLT4R0:1;
      unsigned FLT4R1:1;
      unsigned FLT4R2:1;
      unsigned FLT4R3:1;
      unsigned FLT4R4:1;
      unsigned FLT4R5:1;
      unsigned FLT4R6:1;
      unsigned FLT4R7:1;
    };
  };
} RPINR13BITS;
extern volatile RPINR13BITS RPINR13bits __attribute__((__sfr__));

#define RPINR18 RPINR18
extern volatile unsigned int  RPINR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:8;
      unsigned U1CTSR:8;
    };
    struct {
      unsigned U1RXR0:1;
      unsigned U1RXR1:1;
      unsigned U1RXR2:1;
      unsigned U1RXR3:1;
      unsigned U1RXR4:1;
      unsigned U1RXR5:1;
      unsigned U1RXR6:1;
      unsigned U1RXR7:1;
      unsigned U1CTSR0:1;
      unsigned U1CTSR1:1;
      unsigned U1CTSR2:1;
      unsigned U1CTSR3:1;
      unsigned U1CTSR4:1;
      unsigned U1CTSR5:1;
      unsigned U1CTSR6:1;
      unsigned U1CTSR7:1;
    };
  };
} RPINR18BITS;
extern volatile RPINR18BITS RPINR18bits __attribute__((__sfr__));

#define RPINR19 RPINR19
extern volatile unsigned int  RPINR19 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR:8;
      unsigned U2CTSR:8;
    };
    struct {
      unsigned U2RXR0:1;
      unsigned U2RXR1:1;
      unsigned U2RXR2:1;
      unsigned U2RXR3:1;
      unsigned U2RXR4:1;
      unsigned U2RXR5:1;
      unsigned U2RXR6:1;
      unsigned U2RXR7:1;
      unsigned U2CTSR0:1;
      unsigned U2CTSR1:1;
      unsigned U2CTSR2:1;
      unsigned U2CTSR3:1;
      unsigned U2CTSR4:1;
      unsigned U2CTSR5:1;
      unsigned U2CTSR6:1;
      unsigned U2CTSR7:1;
    };
  };
} RPINR19BITS;
extern volatile RPINR19BITS RPINR19bits __attribute__((__sfr__));

#define RPINR20 RPINR20
extern volatile unsigned int  RPINR20 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR20BITS {
  union {
    struct {
      unsigned SDI1R:8;
      unsigned SCK1INR:8;
    };
    struct {
      unsigned SDI1R0:1;
      unsigned SDI1R1:1;
      unsigned SDI1R2:1;
      unsigned SDI1R3:1;
      unsigned SDI1R4:1;
      unsigned SDI1R5:1;
      unsigned SDI1R6:1;
      unsigned SDI1R7:1;
      unsigned SCK1INR0:1;
      unsigned SCK1INR1:1;
      unsigned SCK1INR2:1;
      unsigned SCK1INR3:1;
      unsigned SCK1INR4:1;
      unsigned SCK1INR5:1;
      unsigned SCK1INR6:1;
      unsigned SCK1INR7:1;
    };
  };
} RPINR20BITS;
extern volatile RPINR20BITS RPINR20bits __attribute__((__sfr__));

#define RPINR21 RPINR21
extern volatile unsigned int  RPINR21 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR21BITS {
  union {
    struct {
      unsigned SS1R:8;
    };
    struct {
      unsigned SS1R0:1;
      unsigned SS1R1:1;
      unsigned SS1R2:1;
      unsigned SS1R3:1;
      unsigned SS1R4:1;
      unsigned SS1R5:1;
      unsigned SS1R6:1;
      unsigned SS1R7:1;
    };
  };
} RPINR21BITS;
extern volatile RPINR21BITS RPINR21bits __attribute__((__sfr__));

#define RPINR22 RPINR22
extern volatile unsigned int  RPINR22 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR22BITS {
  union {
    struct {
      unsigned SDI2R:8;
      unsigned SCK2INR:8;
    };
    struct {
      unsigned SDI2R0:1;
      unsigned SDI2R1:1;
      unsigned SDI2R2:1;
      unsigned SDI2R3:1;
      unsigned SDI2R4:1;
      unsigned SDI2R5:1;
      unsigned SDI2R6:1;
      unsigned SDI2R7:1;
      unsigned SCK2INR0:1;
      unsigned SCK2INR1:1;
      unsigned SCK2INR2:1;
      unsigned SCK2INR3:1;
      unsigned SCK2INR4:1;
      unsigned SCK2INR5:1;
      unsigned SCK2INR6:1;
      unsigned SCK2INR7:1;
    };
  };
} RPINR22BITS;
extern volatile RPINR22BITS RPINR22bits __attribute__((__sfr__));

#define RPINR23 RPINR23
extern volatile unsigned int  RPINR23 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2R:8;
    };
    struct {
      unsigned SS2R0:1;
      unsigned SS2R1:1;
      unsigned SS2R2:1;
      unsigned SS2R3:1;
      unsigned SS2R4:1;
      unsigned SS2R5:1;
      unsigned SS2R6:1;
      unsigned SS2R7:1;
    };
  };
} RPINR23BITS;
extern volatile RPINR23BITS RPINR23bits __attribute__((__sfr__));

#define RPINR37 RPINR37
extern volatile unsigned int  RPINR37 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR37BITS {
  union {
    struct {
      unsigned :8;
      unsigned SYCI1R:8;
    };
    struct {
      unsigned :8;
      unsigned SYCI1R0:1;
      unsigned SYCI1R1:1;
      unsigned SYCI1R2:1;
      unsigned SYCI1R3:1;
      unsigned SYCI1R4:1;
      unsigned SYCI1R5:1;
      unsigned SYCI1R6:1;
      unsigned SYCI1R7:1;
    };
  };
} RPINR37BITS;
extern volatile RPINR37BITS RPINR37bits __attribute__((__sfr__));

#define RPINR38 RPINR38
extern volatile unsigned int  RPINR38 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR38BITS {
  union {
    struct {
      unsigned SYCI2R:8;
    };
    struct {
      unsigned SYCI2R0:1;
      unsigned SYCI2R1:1;
      unsigned SYCI2R2:1;
      unsigned SYCI2R3:1;
      unsigned SYCI2R4:1;
      unsigned SYCI2R5:1;
      unsigned SYCI2R6:1;
      unsigned SYCI2R7:1;
    };
  };
} RPINR38BITS;
extern volatile RPINR38BITS RPINR38bits __attribute__((__sfr__));

#define RPINR42 RPINR42
extern volatile unsigned int  RPINR42 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR42BITS {
  union {
    struct {
      unsigned FLT5R:8;
      unsigned FLT6R:8;
    };
    struct {
      unsigned FLT5R0:1;
      unsigned FLT5R1:1;
      unsigned FLT5R2:1;
      unsigned FLT5R3:1;
      unsigned FLT5R4:1;
      unsigned FLT5R5:1;
      unsigned FLT5R6:1;
      unsigned FLT5R7:1;
      unsigned FLT6R0:1;
      unsigned FLT6R1:1;
      unsigned FLT6R2:1;
      unsigned FLT6R3:1;
      unsigned FLT6R4:1;
      unsigned FLT6R5:1;
      unsigned FLT6R6:1;
      unsigned FLT6R7:1;
    };
  };
} RPINR42BITS;
extern volatile RPINR42BITS RPINR42bits __attribute__((__sfr__));

#define RPINR43 RPINR43
extern volatile unsigned int  RPINR43 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR43BITS {
  union {
    struct {
      unsigned FLT7R:8;
      unsigned FLT8R:8;
    };
    struct {
      unsigned FLT7R0:1;
      unsigned FLT7R1:1;
      unsigned FLT7R2:1;
      unsigned FLT7R3:1;
      unsigned FLT7R4:1;
      unsigned FLT7R5:1;
      unsigned FLT7R6:1;
      unsigned FLT7R7:1;
      unsigned FLT8R0:1;
      unsigned FLT8R1:1;
      unsigned FLT8R2:1;
      unsigned FLT8R3:1;
      unsigned FLT8R4:1;
      unsigned FLT8R5:1;
      unsigned FLT8R6:1;
      unsigned FLT8R7:1;
    };
  };
} RPINR43BITS;
extern volatile RPINR43BITS RPINR43bits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile unsigned int  NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :4;
      unsigned URERR:1;
      unsigned RPDF:1;
      unsigned P2ACTIV:1;
      unsigned SFTSWP:1;
      unsigned NVMSIDL:1;
      unsigned WRERR:1;
      unsigned WREN:1;
      unsigned WR:1;
    };
    struct {
      unsigned NVMOP0:1;
      unsigned NVMOP1:1;
      unsigned NVMOP2:1;
      unsigned NVMOP3:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMADR NVMADR
extern volatile unsigned int  NVMADR __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMADL:15;
    };
    struct {
      unsigned :1;
      unsigned NVMADR:15;
    };
  };
} NVMADRBITS;
extern volatile NVMADRBITS NVMADRbits __attribute__((__sfr__));

#define NVMADRL NVMADRL
extern volatile unsigned int  NVMADRL __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRLBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMADL:15;
    };
    struct {
      unsigned :1;
      unsigned NVMADR:15;
    };
  };
} NVMADRLBITS;
extern volatile NVMADRLBITS NVMADRLbits __attribute__((__sfr__));

#define NVMADRH NVMADRH
extern volatile unsigned int  NVMADRH __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRHBITS {
  union {
    struct {
      unsigned NVMADRH:8;
    };
    struct {
      unsigned NVMADRU:8;
    };
  };
} NVMADRHBITS;
extern volatile NVMADRHBITS NVMADRHbits __attribute__((__sfr__));

#define NVMADRU NVMADRU
extern volatile unsigned int  NVMADRU __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRUBITS {
  union {
    struct {
      unsigned NVMADRH:8;
    };
    struct {
      unsigned NVMADRU:8;
    };
  };
} NVMADRUBITS;
extern volatile NVMADRUBITS NVMADRUbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
#define NVMSRCADRL NVMSRCADRL
extern volatile unsigned int  NVMSRCADRL __attribute__((__sfr__));
typedef struct tagNVMSRCADRLBITS {
  unsigned :1;
  unsigned NVMSRCADRL:15;
} NVMSRCADRLBITS;
extern volatile NVMSRCADRLBITS NVMSRCADRLbits __attribute__((__sfr__));

#define NVMSRCADRH NVMSRCADRH
extern volatile unsigned int  NVMSRCADRH __attribute__((__sfr__));
typedef struct tagNVMSRCADRHBITS {
  unsigned NVMSRCADRH:8;
} NVMSRCADRHBITS;
extern volatile NVMSRCADRHBITS NVMSRCADRHbits __attribute__((__sfr__));

#define RCON RCON
extern volatile unsigned int  RCON __attribute__((__sfr__));
typedef struct tagRCONBITS {
  unsigned POR:1;
  unsigned BOR:1;
  unsigned IDLE:1;
  unsigned SLEEP:1;
  unsigned WDTO:1;
  unsigned SWDTEN:1;
  unsigned SWR:1;
  unsigned EXTR:1;
  unsigned VREGS:1;
  unsigned CM:1;
  unsigned :1;
  unsigned VREGSF:1;
  unsigned :2;
  unsigned IOPUWR:1;
  unsigned TRAPR:1;
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

#define OSCCON OSCCON
extern volatile unsigned int  OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      unsigned OSWEN:1;
      unsigned :2;
      unsigned CF:1;
      unsigned :1;
      unsigned LOCK:1;
      unsigned IOLOCK:1;
      unsigned CLKLOCK:1;
      unsigned NOSC:3;
      unsigned :1;
      unsigned COSC:3;
    };
    struct {
      unsigned :8;
      unsigned NOSC0:1;
      unsigned NOSC1:1;
      unsigned NOSC2:1;
      unsigned :1;
      unsigned COSC0:1;
      unsigned COSC1:1;
      unsigned COSC2:1;
    };
  };
} OSCCONBITS;
extern volatile OSCCONBITS OSCCONbits __attribute__((__sfr__));

#define OSCCONL OSCCONL
extern volatile unsigned char OSCCONL __attribute__((__sfr__));
#define OSCCONH OSCCONH
extern volatile unsigned char OSCCONH __attribute__((__sfr__));
#define CLKDIV CLKDIV
extern volatile unsigned int  CLKDIV __attribute__((__sfr__));
__extension__ typedef struct tagCLKDIVBITS {
  union {
    struct {
      unsigned PLLPRE:5;
      unsigned :1;
      unsigned PLLPOST:2;
      unsigned FRCDIV:3;
      unsigned DOZEN:1;
      unsigned DOZE:3;
      unsigned ROI:1;
    };
    struct {
      unsigned PLLPRE0:1;
      unsigned PLLPRE1:1;
      unsigned PLLPRE2:1;
      unsigned PLLPRE3:1;
      unsigned PLLPRE4:1;
      unsigned :1;
      unsigned PLLPOST0:1;
      unsigned PLLPOST1:1;
      unsigned FRCDIV0:1;
      unsigned FRCDIV1:1;
      unsigned FRCDIV2:1;
      unsigned :1;
      unsigned DOZE0:1;
      unsigned DOZE1:1;
      unsigned DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

#define PLLFBD PLLFBD
extern volatile unsigned int  PLLFBD __attribute__((__sfr__));
__extension__ typedef struct tagPLLFBDBITS {
  union {
    struct {
      unsigned PLLDIV:9;
    };
    struct {
      unsigned PLLDIV0:1;
      unsigned PLLDIV1:1;
      unsigned PLLDIV2:1;
      unsigned PLLDIV3:1;
      unsigned PLLDIV4:1;
      unsigned PLLDIV5:1;
      unsigned PLLDIV6:1;
      unsigned PLLDIV7:1;
      unsigned PLLDIV8:1;
    };
  };
} PLLFBDBITS;
extern volatile PLLFBDBITS PLLFBDbits __attribute__((__sfr__));

#define OSCTUN OSCTUN
extern volatile unsigned int  OSCTUN __attribute__((__sfr__));
__extension__ typedef struct tagOSCTUNBITS {
  union {
    struct {
      unsigned TUN:6;
    };
    struct {
      unsigned TUN0:1;
      unsigned TUN1:1;
      unsigned TUN2:1;
      unsigned TUN3:1;
      unsigned TUN4:1;
      unsigned TUN5:1;
    };
  };
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

#define LFSR LFSR
extern volatile unsigned int  LFSR __attribute__((__sfr__));
typedef struct tagLFSRBITS {
  unsigned LFSR:15;
} LFSRBITS;
extern volatile LFSRBITS LFSRbits __attribute__((__sfr__));

#define REFOCON REFOCON
extern volatile unsigned int  REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned RODIV:4;
      unsigned ROSEL:1;
      unsigned ROSSLP:1;
      unsigned :1;
      unsigned ROON:1;
    };
    struct {
      unsigned :8;
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define ACLKCON ACLKCON
extern volatile unsigned int  ACLKCON __attribute__((__sfr__));
__extension__ typedef struct tagACLKCONBITS {
  union {
    struct {
      unsigned :6;
      unsigned FRCSEL:1;
      unsigned ASRCSEL:1;
      unsigned APSTSCLR:3;
      unsigned :2;
      unsigned SELACLK:1;
      unsigned APLLCK:1;
      unsigned ENAPLL:1;
    };
    struct {
      unsigned :8;
      unsigned APSTSCLR0:1;
      unsigned APSTSCLR1:1;
      unsigned APSTSCLR2:1;
    };
  };
} ACLKCONBITS;
extern volatile ACLKCONBITS ACLKCONbits __attribute__((__sfr__));

#define PMD1 PMD1
extern volatile unsigned int  PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  unsigned ADCMD:1;
  unsigned :2;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned I2C1MD:1;
  unsigned :1;
  unsigned PWMMD:1;
  unsigned :1;
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
  unsigned T4MD:1;
  unsigned T5MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile unsigned int  PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  unsigned OC1MD:1;
  unsigned OC2MD:1;
  unsigned OC3MD:1;
  unsigned OC4MD:1;
  unsigned :4;
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
  unsigned IC4MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  unsigned :1;
  unsigned I2C2MD:1;
  unsigned :8;
  unsigned CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :3;
  unsigned REFOMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile unsigned int  PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  unsigned :8;
  unsigned PWM1MD:1;
  unsigned PWM2MD:1;
  unsigned PWM3MD:1;
  unsigned PWM4MD:1;
  unsigned PWM5MD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));

#define PMD7 PMD7
extern volatile unsigned int  PMD7 __attribute__((__sfr__));
typedef struct tagPMD7BITS {
  unsigned :1;
  unsigned PGA1MD:1;
  unsigned :6;
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned CMP3MD:1;
  unsigned CMP4MD:1;
} PMD7BITS;
extern volatile PMD7BITS PMD7bits __attribute__((__sfr__));

#define PMD8 PMD8
extern volatile unsigned int  PMD8 __attribute__((__sfr__));
typedef struct tagPMD8BITS {
  unsigned :1;
  unsigned CCSMD:1;
  unsigned :7;
  unsigned ABGMD:1;
  unsigned PGA2MD:1;
} PMD8BITS;
extern volatile PMD8BITS PMD8bits __attribute__((__sfr__));

#define IFS0 IFS0
extern volatile unsigned int  IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  unsigned INT0IF:1;
  unsigned IC1IF:1;
  unsigned OC1IF:1;
  unsigned T1IF:1;
  unsigned :1;
  unsigned IC2IF:1;
  unsigned OC2IF:1;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned SPI1EIF:1;
  unsigned SPI1IF:1;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned ADCIF:1;
  unsigned :1;
  unsigned NVMIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile unsigned int  IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  unsigned SI2C1IF:1;
  unsigned MI2C1IF:1;
  unsigned AC1IF:1;
  unsigned CNIF:1;
  unsigned INT1IF:1;
  unsigned :4;
  unsigned OC3IF:1;
  unsigned OC4IF:1;
  unsigned T4IF:1;
  unsigned T5IF:1;
  unsigned INT2IF:1;
  unsigned U2RXIF:1;
  unsigned U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile unsigned int  IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  unsigned SPI2EIF:1;
  unsigned SPI2IF:1;
  unsigned :3;
  unsigned IC3IF:1;
  unsigned IC4IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned :1;
  unsigned SI2C2IF:1;
  unsigned MI2C2IF:1;
  unsigned :3;
  unsigned INT4IF:1;
  unsigned :2;
  unsigned PSEMIF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1EIF:1;
  unsigned U2EIF:1;
  unsigned :6;
  unsigned PSESIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile unsigned int  IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  unsigned :14;
  unsigned PWM1IF:1;
  unsigned PWM2IF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile unsigned int  IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  unsigned PWM3IF:1;
  unsigned PWM4IF:1;
  unsigned PWM5IF:1;
  unsigned :4;
  unsigned AC2IF:1;
  unsigned AC3IF:1;
  unsigned AC4IF:1;
  unsigned :4;
  unsigned ADCAN0IF:1;
  unsigned ADCAN1IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IFS7 IFS7
extern volatile unsigned int  IFS7 __attribute__((__sfr__));
typedef struct tagIFS7BITS {
  unsigned ADCAN2IF:1;
  unsigned ADCAN3IF:1;
  unsigned ADCAN4IF:1;
  unsigned ADCAN5IF:1;
  unsigned ADCAN6IF:1;
  unsigned ADCAN7IF:1;
} IFS7BITS;
extern volatile IFS7BITS IFS7bits __attribute__((__sfr__));

#define IFS8 IFS8
extern volatile unsigned int  IFS8 __attribute__((__sfr__));
typedef struct tagIFS8BITS {
  unsigned :14;
  unsigned ICDIF:1;
  unsigned JTAGIF:1;
} IFS8BITS;
extern volatile IFS8BITS IFS8bits __attribute__((__sfr__));

#define IFS9 IFS9
extern volatile unsigned int  IFS9 __attribute__((__sfr__));
#define IFS10 IFS10
extern volatile unsigned int  IFS10 __attribute__((__sfr__));
typedef struct tagIFS10BITS {
  unsigned :1;
  unsigned ADCAN18IF:1;
  unsigned ADCAN19IF:1;
  unsigned ADCAN20IF:1;
  unsigned ADCAN21IF:1;
  unsigned :8;
  unsigned I2C1BCIF:1;
  unsigned I2C2BCIF:1;
} IFS10BITS;
extern volatile IFS10BITS IFS10bits __attribute__((__sfr__));

#define IFS11 IFS11
extern volatile unsigned int  IFS11 __attribute__((__sfr__));
typedef struct tagIFS11BITS {
  unsigned :1;
  unsigned ADCMP0IF:1;
  unsigned ADCMP1IF:1;
  unsigned ADFLTR0IF:1;
  unsigned ADFLTR1IF:1;
} IFS11BITS;
extern volatile IFS11BITS IFS11bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned IC1IE:1;
  unsigned OC1IE:1;
  unsigned T1IE:1;
  unsigned :1;
  unsigned IC2IE:1;
  unsigned OC2IE:1;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned SPI1EIE:1;
  unsigned SPI1IE:1;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned ADCIE:1;
  unsigned :1;
  unsigned NVMIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile unsigned int  IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  unsigned SI2C1IE:1;
  unsigned MI2C1IE:1;
  unsigned AC1IE:1;
  unsigned CNIE:1;
  unsigned INT1IE:1;
  unsigned :4;
  unsigned OC3IE:1;
  unsigned OC4IE:1;
  unsigned T4IE:1;
  unsigned T5IE:1;
  unsigned INT2IE:1;
  unsigned U2RXIE:1;
  unsigned U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile unsigned int  IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  unsigned SPI2EIE:1;
  unsigned SPI2IE:1;
  unsigned :3;
  unsigned IC3IE:1;
  unsigned IC4IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned :1;
  unsigned SI2C2IE:1;
  unsigned MI2C2IE:1;
  unsigned :3;
  unsigned INT4IE:1;
  unsigned :2;
  unsigned PSEMIE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1EIE:1;
  unsigned U2EIE:1;
  unsigned :6;
  unsigned PSESIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile unsigned int  IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  unsigned :14;
  unsigned PWM1IE:1;
  unsigned PWM2IE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile unsigned int  IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  unsigned PWM3IE:1;
  unsigned PWM4IE:1;
  unsigned PWM5IE:1;
  unsigned :4;
  unsigned AC2IE:1;
  unsigned AC3IE:1;
  unsigned AC4IE:1;
  unsigned :4;
  unsigned ADCAN0IE:1;
  unsigned ADCAN1IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IEC7 IEC7
extern volatile unsigned int  IEC7 __attribute__((__sfr__));
typedef struct tagIEC7BITS {
  unsigned ADCAN2IE:1;
  unsigned ADCAN3IE:1;
  unsigned ADCAN4IE:1;
  unsigned ADCAN5IE:1;
  unsigned ADCAN6IE:1;
  unsigned ADCAN7IE:1;
} IEC7BITS;
extern volatile IEC7BITS IEC7bits __attribute__((__sfr__));

#define IEC8 IEC8
extern volatile unsigned int  IEC8 __attribute__((__sfr__));
typedef struct tagIEC8BITS {
  unsigned :14;
  unsigned ICDIF:1;
  unsigned JTAGIE:1;
} IEC8BITS;
extern volatile IEC8BITS IEC8bits __attribute__((__sfr__));

#define IEC9 IEC9
extern volatile unsigned int  IEC9 __attribute__((__sfr__));
#define IEC10 IEC10
extern volatile unsigned int  IEC10 __attribute__((__sfr__));
typedef struct tagIEC10BITS {
  unsigned :1;
  unsigned ADCAN18IE:1;
  unsigned ADCAN19IE:1;
  unsigned ADCAN20IE:1;
  unsigned ADCAN21IE:1;
  unsigned :8;
  unsigned I2C1BCIE:1;
  unsigned I2C2BCIE:1;
} IEC10BITS;
extern volatile IEC10BITS IEC10bits __attribute__((__sfr__));

#define IEC11 IEC11
extern volatile unsigned int  IEC11 __attribute__((__sfr__));
typedef struct tagIEC11BITS {
  unsigned :1;
  unsigned ADCMP0IE:1;
  unsigned ADCMP1IE:1;
  unsigned ADFLTR0IE:1;
  unsigned ADFLTR1IE:1;
} IEC11BITS;
extern volatile IEC11BITS IEC11bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile unsigned int  IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      unsigned INT0IP:3;
      unsigned :1;
      unsigned IC1IP:3;
      unsigned :1;
      unsigned OC1IP:3;
      unsigned :1;
      unsigned T1IP:3;
    };
    struct {
      unsigned INT0IP0:1;
      unsigned INT0IP1:1;
      unsigned INT0IP2:1;
      unsigned :1;
      unsigned IC1IP0:1;
      unsigned IC1IP1:1;
      unsigned IC1IP2:1;
      unsigned :1;
      unsigned OC1IP0:1;
      unsigned OC1IP1:1;
      unsigned OC1IP2:1;
      unsigned :1;
      unsigned T1IP0:1;
      unsigned T1IP1:1;
      unsigned T1IP2:1;
    };
  };
} IPC0BITS;
extern volatile IPC0BITS IPC0bits __attribute__((__sfr__));

#define IPC1 IPC1
extern volatile unsigned int  IPC1 __attribute__((__sfr__));
__extension__ typedef struct tagIPC1BITS {
  union {
    struct {
      unsigned :4;
      unsigned IC2IP:3;
      unsigned :1;
      unsigned OC2IP:3;
      unsigned :1;
      unsigned T2IP:3;
    };
    struct {
      unsigned :4;
      unsigned IC2IP0:1;
      unsigned IC2IP1:1;
      unsigned IC2IP2:1;
      unsigned :1;
      unsigned OC2IP0:1;
      unsigned OC2IP1:1;
      unsigned OC2IP2:1;
      unsigned :1;
      unsigned T2IP0:1;
      unsigned T2IP1:1;
      unsigned T2IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile unsigned int  IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      unsigned T3IP:3;
      unsigned :1;
      unsigned SPI1EIP:3;
      unsigned :1;
      unsigned SPI1IP:3;
      unsigned :1;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned T3IP0:1;
      unsigned T3IP1:1;
      unsigned T3IP2:1;
      unsigned :1;
      unsigned SPI1EIP0:1;
      unsigned SPI1EIP1:1;
      unsigned SPI1EIP2:1;
      unsigned :1;
      unsigned SPI1IP0:1;
      unsigned SPI1IP1:1;
      unsigned SPI1IP2:1;
      unsigned :1;
      unsigned U1RXIP0:1;
      unsigned U1RXIP1:1;
      unsigned U1RXIP2:1;
    };
  };
} IPC2BITS;
extern volatile IPC2BITS IPC2bits __attribute__((__sfr__));

#define IPC3 IPC3
extern volatile unsigned int  IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      unsigned U1TXIP:3;
      unsigned :1;
      unsigned ADCIP:3;
      unsigned :5;
      unsigned NVMIP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned ADCIP0:1;
      unsigned ADCIP1:1;
      unsigned ADCIP2:1;
      unsigned :5;
      unsigned NVMIP0:1;
      unsigned NVMIP1:1;
      unsigned NVMIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile unsigned int  IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      unsigned SI2C1IP:3;
      unsigned :1;
      unsigned MI2C1IP:3;
      unsigned :1;
      unsigned AC1IP:3;
      unsigned :1;
      unsigned CNIP:3;
    };
    struct {
      unsigned SI2C1IP0:1;
      unsigned SI2C1IP1:1;
      unsigned SI2C1IP2:1;
      unsigned :1;
      unsigned MI2C1IP0:1;
      unsigned MI2C1IP1:1;
      unsigned MI2C1IP2:1;
      unsigned :1;
      unsigned AC1IP0:1;
      unsigned AC1IP1:1;
      unsigned AC1IP2:1;
      unsigned :1;
      unsigned CNIP0:1;
      unsigned CNIP1:1;
      unsigned CNIP2:1;
    };
  };
} IPC4BITS;
extern volatile IPC4BITS IPC4bits __attribute__((__sfr__));

#define IPC5 IPC5
extern volatile unsigned int  IPC5 __attribute__((__sfr__));
__extension__ typedef struct tagIPC5BITS {
  union {
    struct {
      unsigned INT1IP:3;
    };
    struct {
      unsigned INT1IP0:1;
      unsigned INT1IP1:1;
      unsigned INT1IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile unsigned int  IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      unsigned :4;
      unsigned OC3IP:3;
      unsigned :1;
      unsigned OC4IP:3;
      unsigned :1;
      unsigned T4IP:3;
    };
    struct {
      unsigned :4;
      unsigned OC3IP0:1;
      unsigned OC3IP1:1;
      unsigned OC3IP2:1;
      unsigned :1;
      unsigned OC4IP0:1;
      unsigned OC4IP1:1;
      unsigned OC4IP2:1;
      unsigned :1;
      unsigned T4IP0:1;
      unsigned T4IP1:1;
      unsigned T4IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile unsigned int  IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      unsigned T5IP:3;
      unsigned :1;
      unsigned INT2IP:3;
      unsigned :1;
      unsigned U2RXIP:3;
      unsigned :1;
      unsigned U2TXIP:3;
    };
    struct {
      unsigned T5IP0:1;
      unsigned T5IP1:1;
      unsigned T5IP2:1;
      unsigned :1;
      unsigned INT2IP0:1;
      unsigned INT2IP1:1;
      unsigned INT2IP2:1;
      unsigned :1;
      unsigned U2RXIP0:1;
      unsigned U2RXIP1:1;
      unsigned U2RXIP2:1;
      unsigned :1;
      unsigned U2TXIP0:1;
      unsigned U2TXIP1:1;
      unsigned U2TXIP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC8 IPC8
extern volatile unsigned int  IPC8 __attribute__((__sfr__));
__extension__ typedef struct tagIPC8BITS {
  union {
    struct {
      unsigned SPI2EIP:3;
      unsigned :1;
      unsigned SPI2IP:3;
    };
    struct {
      unsigned SPI2EIP0:1;
      unsigned SPI2EIP1:1;
      unsigned SPI2EIP2:1;
      unsigned :1;
      unsigned SPI2IP0:1;
      unsigned SPI2IP1:1;
      unsigned SPI2IP2:1;
    };
  };
} IPC8BITS;
extern volatile IPC8BITS IPC8bits __attribute__((__sfr__));

#define IPC9 IPC9
extern volatile unsigned int  IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      unsigned :4;
      unsigned IC3IP:3;
      unsigned :1;
      unsigned IC4IP:3;
    };
    struct {
      unsigned :4;
      unsigned IC3IP0:1;
      unsigned IC3IP1:1;
      unsigned IC3IP2:1;
      unsigned :1;
      unsigned IC4IP0:1;
      unsigned IC4IP1:1;
      unsigned IC4IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile unsigned int  IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      unsigned :4;
      unsigned SI2C2IP:3;
      unsigned :1;
      unsigned MI2C2IP:3;
    };
    struct {
      unsigned :4;
      unsigned SI2C2IP0:1;
      unsigned SI2C2IP1:1;
      unsigned SI2C2IP2:1;
      unsigned :1;
      unsigned MI2C2IP0:1;
      unsigned MI2C2IP1:1;
      unsigned MI2C2IP2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC13 IPC13
extern volatile unsigned int  IPC13 __attribute__((__sfr__));
__extension__ typedef struct tagIPC13BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT4IP:3;
    };
    struct {
      unsigned :8;
      unsigned INT4IP0:1;
      unsigned INT4IP1:1;
      unsigned INT4IP2:1;
    };
  };
} IPC13BITS;
extern volatile IPC13BITS IPC13bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile unsigned int  IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSEMIP:3;
    };
    struct {
      unsigned :4;
      unsigned PSEMIP0:1;
      unsigned PSEMIP1:1;
      unsigned PSEMIP2:1;
    };
  };
} IPC14BITS;
extern volatile IPC14BITS IPC14bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile unsigned int  IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned :4;
      unsigned U1EIP:3;
      unsigned :1;
      unsigned U2EIP:3;
    };
    struct {
      unsigned :4;
      unsigned U1EIP0:1;
      unsigned U1EIP1:1;
      unsigned U1EIP2:1;
      unsigned :1;
      unsigned U2EIP0:1;
      unsigned U2EIP1:1;
      unsigned U2EIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile unsigned int  IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSESIP:3;
    };
    struct {
      unsigned :4;
      unsigned PSESIP0:1;
      unsigned PSESIP1:1;
      unsigned PSESIP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

#define IPC23 IPC23
extern volatile unsigned int  IPC23 __attribute__((__sfr__));
__extension__ typedef struct tagIPC23BITS {
  union {
    struct {
      unsigned :8;
      unsigned PWM1IP:3;
      unsigned :1;
      unsigned PWM2IP:3;
    };
    struct {
      unsigned :8;
      unsigned PWM1IP0:1;
      unsigned PWM1IP1:1;
      unsigned PWM1IP2:1;
      unsigned :1;
      unsigned PWM2IP0:1;
      unsigned PWM2IP1:1;
      unsigned PWM2IP2:1;
    };
  };
} IPC23BITS;
extern volatile IPC23BITS IPC23bits __attribute__((__sfr__));

#define IPC24 IPC24
extern volatile unsigned int  IPC24 __attribute__((__sfr__));
__extension__ typedef struct tagIPC24BITS {
  union {
    struct {
      unsigned PWM3IP:3;
      unsigned :1;
      unsigned PWM4IP:3;
      unsigned :1;
      unsigned PWM5IP:3;
    };
    struct {
      unsigned PWM3IP0:1;
      unsigned PWM3IP1:1;
      unsigned PWM3IP2:1;
      unsigned :1;
      unsigned PWM4IP0:1;
      unsigned PWM4IP1:1;
      unsigned PWM4IP2:1;
      unsigned :1;
      unsigned PWM5IP0:1;
      unsigned PWM5IP1:1;
      unsigned PWM5IP2:1;
    };
  };
} IPC24BITS;
extern volatile IPC24BITS IPC24bits __attribute__((__sfr__));

#define IPC25 IPC25
extern volatile unsigned int  IPC25 __attribute__((__sfr__));
__extension__ typedef struct tagIPC25BITS {
  union {
    struct {
      unsigned :12;
      unsigned AC2IP:3;
    };
    struct {
      unsigned :12;
      unsigned AC2IP0:1;
      unsigned AC2IP1:1;
      unsigned AC2IP2:1;
    };
  };
} IPC25BITS;
extern volatile IPC25BITS IPC25bits __attribute__((__sfr__));

#define IPC26 IPC26
extern volatile unsigned int  IPC26 __attribute__((__sfr__));
__extension__ typedef struct tagIPC26BITS {
  union {
    struct {
      unsigned AC3IP:3;
      unsigned :1;
      unsigned AC4IP:3;
    };
    struct {
      unsigned AC3IP0:1;
      unsigned AC3IP1:1;
      unsigned AC3IP2:1;
      unsigned :1;
      unsigned AC4IP0:1;
      unsigned AC4IP1:1;
      unsigned AC4IP2:1;
    };
  };
} IPC26BITS;
extern volatile IPC26BITS IPC26bits __attribute__((__sfr__));

#define IPC27 IPC27
extern volatile unsigned int  IPC27 __attribute__((__sfr__));
__extension__ typedef struct tagIPC27BITS {
  union {
    struct {
      unsigned :8;
      unsigned ADCAN0IP:3;
      unsigned :1;
      unsigned ADCAN1IP:3;
    };
    struct {
      unsigned :8;
      unsigned ADCAN0IP0:1;
      unsigned ADCAN0IP1:1;
      unsigned ADCAN0IP2:1;
      unsigned :1;
      unsigned ADCAN1IP0:1;
      unsigned ADCAN1IP1:1;
      unsigned ADCAN1IP2:1;
    };
  };
} IPC27BITS;
extern volatile IPC27BITS IPC27bits __attribute__((__sfr__));

#define IPC28 IPC28
extern volatile unsigned int  IPC28 __attribute__((__sfr__));
__extension__ typedef struct tagIPC28BITS {
  union {
    struct {
      unsigned ADCAN2IP:3;
      unsigned :1;
      unsigned ADCAN3IP:3;
      unsigned :1;
      unsigned ADCAN4IP:3;
      unsigned :1;
      unsigned ADCAN5IP:3;
    };
    struct {
      unsigned ADCAN2IP0:1;
      unsigned ADCAN2IP1:1;
      unsigned ADCAN2IP2:1;
      unsigned :1;
      unsigned ADCAN3IP0:1;
      unsigned ADCAN3IP1:1;
      unsigned ADCAN3IP2:1;
      unsigned :1;
      unsigned ADCAN4IP0:1;
      unsigned ADCAN4IP1:1;
      unsigned ADCAN4IP2:1;
      unsigned :1;
      unsigned ADCAN5IP0:1;
      unsigned ADCAN5IP1:1;
      unsigned ADCAN5IP2:1;
    };
  };
} IPC28BITS;
extern volatile IPC28BITS IPC28bits __attribute__((__sfr__));

#define IPC29 IPC29
extern volatile unsigned int  IPC29 __attribute__((__sfr__));
__extension__ typedef struct tagIPC29BITS {
  union {
    struct {
      unsigned ADCAN6IP:3;
      unsigned :1;
      unsigned ADCAN7IP:3;
    };
    struct {
      unsigned ADCAN6IP0:1;
      unsigned ADCAN6IP1:1;
      unsigned ADCAN6IP2:1;
      unsigned :1;
      unsigned ADCAN7IP0:1;
      unsigned ADCAN7IP1:1;
      unsigned ADCAN7IP2:1;
    };
  };
} IPC29BITS;
extern volatile IPC29BITS IPC29bits __attribute__((__sfr__));

#define IPC35 IPC35
extern volatile unsigned int  IPC35 __attribute__((__sfr__));
__extension__ typedef struct tagIPC35BITS {
  union {
    struct {
      unsigned :8;
      unsigned ICDIP:3;
      unsigned :1;
      unsigned JTAGIP:3;
    };
    struct {
      unsigned :8;
      unsigned ICDIP0:1;
      unsigned ICDIP1:1;
      unsigned ICDIP2:1;
      unsigned :1;
      unsigned JTAGIP0:1;
      unsigned JTAGIP1:1;
      unsigned JTAGIP2:1;
    };
  };
} IPC35BITS;
extern volatile IPC35BITS IPC35bits __attribute__((__sfr__));

#define IPC37 IPC37
extern volatile unsigned int  IPC37 __attribute__((__sfr__));
#define IPC38 IPC38
extern volatile unsigned int  IPC38 __attribute__((__sfr__));
#define IPC39 IPC39
extern volatile unsigned int  IPC39 __attribute__((__sfr__));
#define IPC40 IPC40
extern volatile unsigned int  IPC40 __attribute__((__sfr__));
__extension__ typedef struct tagIPC40BITS {
  union {
    struct {
      unsigned :4;
      unsigned ADCAN18IP:3;
      unsigned :1;
      unsigned ADCAN19IP:3;
      unsigned :1;
      unsigned ADCAN20IP:3;
    };
    struct {
      unsigned :4;
      unsigned ADCAN18IP0:1;
      unsigned ADCAN18IP1:1;
      unsigned ADCAN18IP2:1;
      unsigned :1;
      unsigned ADCAN19IP0:1;
      unsigned ADCAN19IP1:1;
      unsigned ADCAN19IP2:1;
      unsigned :1;
      unsigned ADCAN20IP0:1;
      unsigned ADCAN20IP1:1;
      unsigned ADCAN20IP2:1;
    };
  };
} IPC40BITS;
extern volatile IPC40BITS IPC40bits __attribute__((__sfr__));

#define IPC41 IPC41
extern volatile unsigned int  IPC41 __attribute__((__sfr__));
__extension__ typedef struct tagIPC41BITS {
  union {
    struct {
      unsigned ADCAN21IP:3;
    };
    struct {
      unsigned ADCAN21IP0:1;
      unsigned ADCAN21IP1:1;
      unsigned ADCAN21IP2:1;
    };
  };
} IPC41BITS;
extern volatile IPC41BITS IPC41bits __attribute__((__sfr__));

#define IPC43 IPC43
extern volatile unsigned int  IPC43 __attribute__((__sfr__));
__extension__ typedef struct tagIPC43BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIP:3;
      unsigned :1;
      unsigned I2C2BCIP:3;
    };
    struct {
      unsigned :4;
      unsigned I2C1BCIP0:1;
      unsigned I2C1BCIP1:1;
      unsigned I2C1BCIP2:1;
      unsigned :1;
      unsigned I2C2BCIP0:1;
      unsigned I2C2BCIP1:1;
      unsigned I2C2BCIP2:1;
    };
  };
} IPC43BITS;
extern volatile IPC43BITS IPC43bits __attribute__((__sfr__));

#define IPC44 IPC44
extern volatile unsigned int  IPC44 __attribute__((__sfr__));
__extension__ typedef struct tagIPC44BITS {
  union {
    struct {
      unsigned :4;
      unsigned ADCMP0IP:3;
      unsigned :1;
      unsigned ADCMP1IP:3;
      unsigned :1;
      unsigned ADFLTR0IP:3;
    };
    struct {
      unsigned :4;
      unsigned ADCMP0IP0:1;
      unsigned ADCMP0IP1:1;
      unsigned ADCMP0IP2:1;
      unsigned :1;
      unsigned ADCMP1IP0:1;
      unsigned ADCMP1IP1:1;
      unsigned ADCMP1IP2:1;
      unsigned :1;
      unsigned ADFLTR0IP0:1;
      unsigned ADFLTR0IP1:1;
      unsigned ADFLTR0IP2:1;
    };
  };
} IPC44BITS;
extern volatile IPC44BITS IPC44bits __attribute__((__sfr__));

#define IPC45 IPC45
extern volatile unsigned int  IPC45 __attribute__((__sfr__));
__extension__ typedef struct tagIPC45BITS {
  union {
    struct {
      unsigned ADFLTR1IP:3;
    };
    struct {
      unsigned ADFLTR1IP0:1;
      unsigned ADFLTR1IP1:1;
      unsigned ADFLTR1IP2:1;
    };
  };
} IPC45BITS;
extern volatile IPC45BITS IPC45bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile unsigned int  INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  unsigned :1;
  unsigned OSCFAIL:1;
  unsigned STKERR:1;
  unsigned ADDRERR:1;
  unsigned MATHERR:1;
  unsigned :1;
  unsigned DIV0ERR:1;
  unsigned SFTACERR:1;
  unsigned COVTE:1;
  unsigned OVBTE:1;
  unsigned OVATE:1;
  unsigned COVBERR:1;
  unsigned COVAERR:1;
  unsigned OVBERR:1;
  unsigned OVAERR:1;
  unsigned NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile unsigned int  INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned :1;
  unsigned INT4EP:1;
  unsigned :3;
  unsigned AIVTEN:1;
  unsigned :4;
  unsigned SWTRAP:1;
  unsigned DISI:1;
  unsigned GIE:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

#define INTCON3 INTCON3
extern volatile unsigned int  INTCON3 __attribute__((__sfr__));
typedef struct tagINTCON3BITS {
  unsigned APLL:1;
  unsigned :3;
  unsigned DOOVR:1;
  unsigned :3;
  unsigned NAE:1;
} INTCON3BITS;
extern volatile INTCON3BITS INTCON3bits __attribute__((__sfr__));

#define INTCON4 INTCON4
extern volatile unsigned int  INTCON4 __attribute__((__sfr__));
typedef struct tagINTCON4BITS {
  unsigned SGHT:1;
} INTCON4BITS;
extern volatile INTCON4BITS INTCON4bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile unsigned int  INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:8;
      unsigned ILR:4;
    };
    struct {
      unsigned VECNUM0:1;
      unsigned VECNUM1:1;
      unsigned VECNUM2:1;
      unsigned VECNUM3:1;
      unsigned VECNUM4:1;
      unsigned VECNUM5:1;
      unsigned VECNUM6:1;
      unsigned VECNUM7:1;
      unsigned ILR0:1;
      unsigned ILR1:1;
      unsigned ILR2:1;
      unsigned ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

#define OC1CON1 OC1CON1
extern volatile unsigned int  OC1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC1CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned :2;
      unsigned ENFLTA:1;
      unsigned :2;
      unsigned OCTSEL:3;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
      unsigned :1;
      unsigned OCFLT:3;
      unsigned ENFLT:3;
      unsigned OCTSEL0:1;
      unsigned OCTSEL1:1;
      unsigned OCTSEL2:1;
    };
    struct {
      unsigned :4;
      unsigned OCFLT0:1;
      unsigned :2;
      unsigned ENFLT0:1;
    };
  };
} OC1CON1BITS;
extern volatile OC1CON1BITS OC1CON1bits __attribute__((__sfr__));

#define OC1CON2 OC1CON2
extern volatile unsigned int  OC1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC1CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned OCTRIS:1;
      unsigned TRIGSTAT:1;
      unsigned OCTRIG:1;
      unsigned OC32:1;
      unsigned :3;
      unsigned OCINV:1;
      unsigned FLTTRIEN:1;
      unsigned FLTOUT:1;
      unsigned FLTMD:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} OC1CON2BITS;
extern volatile OC1CON2BITS OC1CON2bits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Output Compare modules */
typedef struct tagOC {
        unsigned int ocxrs;
        unsigned int ocxr;
        unsigned int ocxcon;
} OC, *POC;

/* SFR blocks for Output Compare modules */
#define OC1 OC1
extern volatile OC OC1 __attribute__((__sfr__));
#define OC2 OC2
extern volatile OC OC2 __attribute__((__sfr__));
#define OC3 OC3
extern volatile OC OC3 __attribute__((__sfr__));
#define OC4 OC4
extern volatile OC OC4 __attribute__((__sfr__));
#define OC5 OC5
extern volatile OC OC5 __attribute__((__sfr__));
#define OC6 OC6
extern volatile OC OC6 __attribute__((__sfr__));
#define OC7 OC7
extern volatile OC OC7 __attribute__((__sfr__));
#define OC8 OC8
extern volatile OC OC8 __attribute__((__sfr__));

#define OC1RS OC1RS
extern volatile unsigned int  OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile unsigned int  OC1R __attribute__((__sfr__));
#define OC1TMR OC1TMR
extern volatile unsigned int  OC1TMR __attribute__((__sfr__));
#define OC2CON1 OC2CON1
extern volatile unsigned int  OC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned :2;
      unsigned ENFLTA:1;
      unsigned :2;
      unsigned OCTSEL:3;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
      unsigned :1;
      unsigned OCFLT:3;
      unsigned ENFLT:3;
      unsigned OCTSEL0:1;
      unsigned OCTSEL1:1;
      unsigned OCTSEL2:1;
    };
    struct {
      unsigned :4;
      unsigned OCFLT0:1;
      unsigned :2;
      unsigned ENFLT0:1;
    };
  };
} OC2CON1BITS;
extern volatile OC2CON1BITS OC2CON1bits __attribute__((__sfr__));

#define OC2CON2 OC2CON2
extern volatile unsigned int  OC2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned OCTRIS:1;
      unsigned TRIGSTAT:1;
      unsigned OCTRIG:1;
      unsigned OC32:1;
      unsigned :3;
      unsigned OCINV:1;
      unsigned FLTTRIEN:1;
      unsigned FLTOUT:1;
      unsigned FLTMD:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} OC2CON2BITS;
extern volatile OC2CON2BITS OC2CON2bits __attribute__((__sfr__));

#define OC2RS OC2RS
extern volatile unsigned int  OC2RS __attribute__((__sfr__));
#define OC2R OC2R
extern volatile unsigned int  OC2R __attribute__((__sfr__));
#define OC2TMR OC2TMR
extern volatile unsigned int  OC2TMR __attribute__((__sfr__));
#define OC3CON1 OC3CON1
extern volatile unsigned int  OC3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC3CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned :2;
      unsigned ENFLTA:1;
      unsigned :2;
      unsigned OCTSEL:3;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
      unsigned :1;
      unsigned OCFLT:3;
      unsigned ENFLT:3;
      unsigned OCTSEL0:1;
      unsigned OCTSEL1:1;
      unsigned OCTSEL2:1;
    };
    struct {
      unsigned :4;
      unsigned OCFLT0:1;
      unsigned :2;
      unsigned ENFLT0:1;
    };
  };
} OC3CON1BITS;
extern volatile OC3CON1BITS OC3CON1bits __attribute__((__sfr__));

#define OC3CON2 OC3CON2
extern volatile unsigned int  OC3CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC3CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned OCTRIS:1;
      unsigned TRIGSTAT:1;
      unsigned OCTRIG:1;
      unsigned OC32:1;
      unsigned :3;
      unsigned OCINV:1;
      unsigned FLTTRIEN:1;
      unsigned FLTOUT:1;
      unsigned FLTMD:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} OC3CON2BITS;
extern volatile OC3CON2BITS OC3CON2bits __attribute__((__sfr__));

#define OC3RS OC3RS
extern volatile unsigned int  OC3RS __attribute__((__sfr__));
#define OC3R OC3R
extern volatile unsigned int  OC3R __attribute__((__sfr__));
#define OC3TMR OC3TMR
extern volatile unsigned int  OC3TMR __attribute__((__sfr__));
#define OC4CON1 OC4CON1
extern volatile unsigned int  OC4CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC4CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned :2;
      unsigned ENFLTA:1;
      unsigned :2;
      unsigned OCTSEL:3;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
      unsigned :1;
      unsigned OCFLT:3;
      unsigned ENFLT:3;
      unsigned OCTSEL0:1;
      unsigned OCTSEL1:1;
      unsigned OCTSEL2:1;
    };
    struct {
      unsigned :4;
      unsigned OCFLT0:1;
      unsigned :2;
      unsigned ENFLT0:1;
    };
  };
} OC4CON1BITS;
extern volatile OC4CON1BITS OC4CON1bits __attribute__((__sfr__));

#define OC4CON2 OC4CON2
extern volatile unsigned int  OC4CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC4CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned OCTRIS:1;
      unsigned TRIGSTAT:1;
      unsigned OCTRIG:1;
      unsigned OC32:1;
      unsigned :3;
      unsigned OCINV:1;
      unsigned FLTTRIEN:1;
      unsigned FLTOUT:1;
      unsigned FLTMD:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} OC4CON2BITS;
extern volatile OC4CON2BITS OC4CON2bits __attribute__((__sfr__));

#define OC4RS OC4RS
extern volatile unsigned int  OC4RS __attribute__((__sfr__));
#define OC4R OC4R
extern volatile unsigned int  OC4R __attribute__((__sfr__));
#define OC4TMR OC4TMR
extern volatile unsigned int  OC4TMR __attribute__((__sfr__));
#define PTCON PTCON
extern volatile unsigned int  PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      unsigned SEVTPS:4;
      unsigned SYNCSRC:3;
      unsigned SYNCEN:1;
      unsigned SYNCOEN:1;
      unsigned SYNCPOL:1;
      unsigned EIPU:1;
      unsigned SEIEN:1;
      unsigned SESTAT:1;
      unsigned PTSIDL:1;
      unsigned :1;
      unsigned PTEN:1;
    };
    struct {
      unsigned SEVTPS0:1;
      unsigned SEVTPS1:1;
      unsigned SEVTPS2:1;
      unsigned SEVTPS3:1;
      unsigned SYNCSRC0:1;
      unsigned SYNCSRC1:1;
      unsigned SYNCSRC2:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define PTCON2 PTCON2
extern volatile unsigned int  PTCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPTCON2BITS {
  union {
    struct {
      unsigned PCLKDIV:3;
    };
    struct {
      unsigned PCLKDIV0:1;
      unsigned PCLKDIV1:1;
      unsigned PCLKDIV2:1;
    };
  };
} PTCON2BITS;
extern volatile PTCON2BITS PTCON2bits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile unsigned int  PTPER __attribute__((__sfr__));
#define SEVTCMP SEVTCMP
extern volatile unsigned int  SEVTCMP __attribute__((__sfr__));
typedef struct tagSEVTCMPBITS {
  unsigned :3;
  unsigned SEVTCMP:13;
} SEVTCMPBITS;
extern volatile SEVTCMPBITS SEVTCMPbits __attribute__((__sfr__));

#define MDC MDC
extern volatile unsigned int  MDC __attribute__((__sfr__));
#define STCON STCON
extern volatile unsigned int  STCON __attribute__((__sfr__));
__extension__ typedef struct tagSTCONBITS {
  union {
    struct {
      unsigned SEVTPS:4;
      unsigned SYNCSRC:3;
      unsigned SYNCEN:1;
      unsigned SYNCOEN:1;
      unsigned SYNCPOL:1;
      unsigned EIPU:1;
      unsigned SEIEN:1;
      unsigned SESTAT:1;
    };
    struct {
      unsigned SEVTPS0:1;
      unsigned SEVTPS1:1;
      unsigned SEVTPS2:1;
      unsigned SEVTPS3:1;
      unsigned SYNCSRC0:1;
      unsigned SYNCSRC1:1;
      unsigned SYNCSRC2:1;
    };
  };
} STCONBITS;
extern volatile STCONBITS STCONbits __attribute__((__sfr__));

#define STCON2 STCON2
extern volatile unsigned int  STCON2 __attribute__((__sfr__));
__extension__ typedef struct tagSTCON2BITS {
  union {
    struct {
      unsigned PCLKDIV:3;
    };
    struct {
      unsigned PCLKDIV0:1;
      unsigned PCLKDIV1:1;
      unsigned PCLKDIV2:1;
    };
  };
} STCON2BITS;
extern volatile STCON2BITS STCON2bits __attribute__((__sfr__));

#define STPER STPER
extern volatile unsigned int  STPER __attribute__((__sfr__));
#define SSEVTCMP SSEVTCMP
extern volatile unsigned int  SSEVTCMP __attribute__((__sfr__));
__extension__ typedef struct tagSSEVTCMPBITS {
  union {
    struct {
      unsigned :3;
      unsigned SSEVTCMP:13;
    };
    struct {
      unsigned :3;
      unsigned SSEVTCMP0:1;
      unsigned SSEVTCMP1:1;
      unsigned SSEVTCMP2:1;
      unsigned SSEVTCMP3:1;
      unsigned SSEVTCMP4:1;
      unsigned SSEVTCMP5:1;
      unsigned SSEVTCMP6:1;
      unsigned SSEVTCMP7:1;
      unsigned SSEVTCMP8:1;
      unsigned SSEVTCMP9:1;
      unsigned SSEVTCMP10:1;
      unsigned SSEVTCMP11:1;
      unsigned SSEVTCMP12:1;
    };
  };
} SSEVTCMPBITS;
extern volatile SSEVTCMPBITS SSEVTCMPbits __attribute__((__sfr__));

#define CHOP CHOP
extern volatile unsigned int  CHOP __attribute__((__sfr__));
__extension__ typedef struct tagCHOPBITS {
  union {
    struct {
      unsigned :3;
      unsigned CHOPCLK:7;
      unsigned :5;
      unsigned CHPCLKEN:1;
    };
    struct {
      unsigned :3;
      unsigned CHOPCLK0:1;
      unsigned CHOPCLK1:1;
      unsigned CHOPCLK2:1;
      unsigned CHOPCLK3:1;
      unsigned CHOPCLK4:1;
      unsigned CHOPCLK5:1;
      unsigned CHOPCLK6:1;
    };
  };
} CHOPBITS;
extern volatile CHOPBITS CHOPbits __attribute__((__sfr__));

#define PWMKEY PWMKEY
extern volatile unsigned int  PWMKEY __attribute__((__sfr__));
#define PWMCON1 PWMCON1
extern volatile unsigned int  PWMCON1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON1BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define IOCON1 IOCON1
extern volatile unsigned int  IOCON1 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON1BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON1BITS;
extern volatile IOCON1BITS IOCON1bits __attribute__((__sfr__));

#define FCLCON1 FCLCON1
extern volatile unsigned int  FCLCON1 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON1BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON1BITS;
extern volatile FCLCON1BITS FCLCON1bits __attribute__((__sfr__));

#define PDC1 PDC1
extern volatile unsigned int  PDC1 __attribute__((__sfr__));
#define PHASE1 PHASE1
extern volatile unsigned int  PHASE1 __attribute__((__sfr__));
#define DTR1 DTR1
extern volatile unsigned int  DTR1 __attribute__((__sfr__));
#define ALTDTR1 ALTDTR1
extern volatile unsigned int  ALTDTR1 __attribute__((__sfr__));
#define SDC1 SDC1
extern volatile unsigned int  SDC1 __attribute__((__sfr__));
#define SPHASE1 SPHASE1
extern volatile unsigned int  SPHASE1 __attribute__((__sfr__));
#define TRIG1 TRIG1
extern volatile unsigned int  TRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG1BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG1BITS;
extern volatile TRIG1BITS TRIG1bits __attribute__((__sfr__));

#define TRGCON1 TRGCON1
extern volatile unsigned int  TRGCON1 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON1BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON1BITS;
extern volatile TRGCON1BITS TRGCON1bits __attribute__((__sfr__));

#define STRIG1 STRIG1
extern volatile unsigned int  STRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG1BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG1BITS;
extern volatile STRIG1BITS STRIG1bits __attribute__((__sfr__));

#define PWMCAP1 PWMCAP1
extern volatile unsigned int  PWMCAP1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP1BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP1BITS;
extern volatile PWMCAP1BITS PWMCAP1bits __attribute__((__sfr__));

#define LEBCON1 LEBCON1
extern volatile unsigned int  LEBCON1 __attribute__((__sfr__));
typedef struct tagLEBCON1BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON1BITS;
extern volatile LEBCON1BITS LEBCON1bits __attribute__((__sfr__));

#define LEBDLY1 LEBDLY1
extern volatile unsigned int  LEBDLY1 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY1BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY1BITS;
extern volatile LEBDLY1BITS LEBDLY1bits __attribute__((__sfr__));

#define AUXCON1 AUXCON1
extern volatile unsigned int  AUXCON1 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON1BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON1BITS;
extern volatile AUXCON1BITS AUXCON1bits __attribute__((__sfr__));

#define PWMCON2 PWMCON2
extern volatile unsigned int  PWMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON2BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON2BITS;
extern volatile PWMCON2BITS PWMCON2bits __attribute__((__sfr__));

#define IOCON2 IOCON2
extern volatile unsigned int  IOCON2 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON2BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON2BITS;
extern volatile IOCON2BITS IOCON2bits __attribute__((__sfr__));

#define FCLCON2 FCLCON2
extern volatile unsigned int  FCLCON2 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON2BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON2BITS;
extern volatile FCLCON2BITS FCLCON2bits __attribute__((__sfr__));

#define PDC2 PDC2
extern volatile unsigned int  PDC2 __attribute__((__sfr__));
#define PHASE2 PHASE2
extern volatile unsigned int  PHASE2 __attribute__((__sfr__));
#define DTR2 DTR2
extern volatile unsigned int  DTR2 __attribute__((__sfr__));
#define ALTDTR2 ALTDTR2
extern volatile unsigned int  ALTDTR2 __attribute__((__sfr__));
#define SDC2 SDC2
extern volatile unsigned int  SDC2 __attribute__((__sfr__));
#define SPHASE2 SPHASE2
extern volatile unsigned int  SPHASE2 __attribute__((__sfr__));
#define TRIG2 TRIG2
extern volatile unsigned int  TRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG2BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG2BITS;
extern volatile TRIG2BITS TRIG2bits __attribute__((__sfr__));

#define TRGCON2 TRGCON2
extern volatile unsigned int  TRGCON2 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON2BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON2BITS;
extern volatile TRGCON2BITS TRGCON2bits __attribute__((__sfr__));

#define STRIG2 STRIG2
extern volatile unsigned int  STRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG2BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG2BITS;
extern volatile STRIG2BITS STRIG2bits __attribute__((__sfr__));

#define PWMCAP2 PWMCAP2
extern volatile unsigned int  PWMCAP2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP2BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP2BITS;
extern volatile PWMCAP2BITS PWMCAP2bits __attribute__((__sfr__));

#define LEBCON2 LEBCON2
extern volatile unsigned int  LEBCON2 __attribute__((__sfr__));
typedef struct tagLEBCON2BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON2BITS;
extern volatile LEBCON2BITS LEBCON2bits __attribute__((__sfr__));

#define LEBDLY2 LEBDLY2
extern volatile unsigned int  LEBDLY2 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY2BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY2BITS;
extern volatile LEBDLY2BITS LEBDLY2bits __attribute__((__sfr__));

#define AUXCON2 AUXCON2
extern volatile unsigned int  AUXCON2 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON2BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON2BITS;
extern volatile AUXCON2BITS AUXCON2bits __attribute__((__sfr__));

#define PWMCON3 PWMCON3
extern volatile unsigned int  PWMCON3 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON3BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON3BITS;
extern volatile PWMCON3BITS PWMCON3bits __attribute__((__sfr__));

#define IOCON3 IOCON3
extern volatile unsigned int  IOCON3 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON3BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON3BITS;
extern volatile IOCON3BITS IOCON3bits __attribute__((__sfr__));

#define FCLCON3 FCLCON3
extern volatile unsigned int  FCLCON3 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON3BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON3BITS;
extern volatile FCLCON3BITS FCLCON3bits __attribute__((__sfr__));

#define PDC3 PDC3
extern volatile unsigned int  PDC3 __attribute__((__sfr__));
#define PHASE3 PHASE3
extern volatile unsigned int  PHASE3 __attribute__((__sfr__));
#define DTR3 DTR3
extern volatile unsigned int  DTR3 __attribute__((__sfr__));
#define ALTDTR3 ALTDTR3
extern volatile unsigned int  ALTDTR3 __attribute__((__sfr__));
#define SDC3 SDC3
extern volatile unsigned int  SDC3 __attribute__((__sfr__));
#define SPHASE3 SPHASE3
extern volatile unsigned int  SPHASE3 __attribute__((__sfr__));
#define TRIG3 TRIG3
extern volatile unsigned int  TRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG3BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG3BITS;
extern volatile TRIG3BITS TRIG3bits __attribute__((__sfr__));

#define TRGCON3 TRGCON3
extern volatile unsigned int  TRGCON3 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON3BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON3BITS;
extern volatile TRGCON3BITS TRGCON3bits __attribute__((__sfr__));

#define STRIG3 STRIG3
extern volatile unsigned int  STRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG3BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG3BITS;
extern volatile STRIG3BITS STRIG3bits __attribute__((__sfr__));

#define PWMCAP3 PWMCAP3
extern volatile unsigned int  PWMCAP3 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP3BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP3BITS;
extern volatile PWMCAP3BITS PWMCAP3bits __attribute__((__sfr__));

#define LEBCON3 LEBCON3
extern volatile unsigned int  LEBCON3 __attribute__((__sfr__));
typedef struct tagLEBCON3BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON3BITS;
extern volatile LEBCON3BITS LEBCON3bits __attribute__((__sfr__));

#define LEBDLY3 LEBDLY3
extern volatile unsigned int  LEBDLY3 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY3BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY3BITS;
extern volatile LEBDLY3BITS LEBDLY3bits __attribute__((__sfr__));

#define AUXCON3 AUXCON3
extern volatile unsigned int  AUXCON3 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON3BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON3BITS;
extern volatile AUXCON3BITS AUXCON3bits __attribute__((__sfr__));

#define PWMCON4 PWMCON4
extern volatile unsigned int  PWMCON4 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON4BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON4BITS;
extern volatile PWMCON4BITS PWMCON4bits __attribute__((__sfr__));

#define IOCON4 IOCON4
extern volatile unsigned int  IOCON4 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON4BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON4BITS;
extern volatile IOCON4BITS IOCON4bits __attribute__((__sfr__));

#define FCLCON4 FCLCON4
extern volatile unsigned int  FCLCON4 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON4BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON4BITS;
extern volatile FCLCON4BITS FCLCON4bits __attribute__((__sfr__));

#define PDC4 PDC4
extern volatile unsigned int  PDC4 __attribute__((__sfr__));
#define PHASE4 PHASE4
extern volatile unsigned int  PHASE4 __attribute__((__sfr__));
#define DTR4 DTR4
extern volatile unsigned int  DTR4 __attribute__((__sfr__));
#define ALTDTR4 ALTDTR4
extern volatile unsigned int  ALTDTR4 __attribute__((__sfr__));
#define SDC4 SDC4
extern volatile unsigned int  SDC4 __attribute__((__sfr__));
#define SPHASE4 SPHASE4
extern volatile unsigned int  SPHASE4 __attribute__((__sfr__));
#define TRIG4 TRIG4
extern volatile unsigned int  TRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG4BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG4BITS;
extern volatile TRIG4BITS TRIG4bits __attribute__((__sfr__));

#define TRGCON4 TRGCON4
extern volatile unsigned int  TRGCON4 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON4BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON4BITS;
extern volatile TRGCON4BITS TRGCON4bits __attribute__((__sfr__));

#define STRIG4 STRIG4
extern volatile unsigned int  STRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG4BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG4BITS;
extern volatile STRIG4BITS STRIG4bits __attribute__((__sfr__));

#define PWMCAP4 PWMCAP4
extern volatile unsigned int  PWMCAP4 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP4BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP4BITS;
extern volatile PWMCAP4BITS PWMCAP4bits __attribute__((__sfr__));

#define LEBCON4 LEBCON4
extern volatile unsigned int  LEBCON4 __attribute__((__sfr__));
typedef struct tagLEBCON4BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON4BITS;
extern volatile LEBCON4BITS LEBCON4bits __attribute__((__sfr__));

#define LEBDLY4 LEBDLY4
extern volatile unsigned int  LEBDLY4 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY4BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY4BITS;
extern volatile LEBDLY4BITS LEBDLY4bits __attribute__((__sfr__));

#define AUXCON4 AUXCON4
extern volatile unsigned int  AUXCON4 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON4BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON4BITS;
extern volatile AUXCON4BITS AUXCON4bits __attribute__((__sfr__));

#define PWMCON5 PWMCON5
extern volatile unsigned int  PWMCON5 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON5BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON5BITS;
extern volatile PWMCON5BITS PWMCON5bits __attribute__((__sfr__));

#define IOCON5 IOCON5
extern volatile unsigned int  IOCON5 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON5BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON5BITS;
extern volatile IOCON5BITS IOCON5bits __attribute__((__sfr__));

#define FCLCON5 FCLCON5
extern volatile unsigned int  FCLCON5 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON5BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON5BITS;
extern volatile FCLCON5BITS FCLCON5bits __attribute__((__sfr__));

#define PDC5 PDC5
extern volatile unsigned int  PDC5 __attribute__((__sfr__));
#define PHASE5 PHASE5
extern volatile unsigned int  PHASE5 __attribute__((__sfr__));
#define DTR5 DTR5
extern volatile unsigned int  DTR5 __attribute__((__sfr__));
#define ALTDTR5 ALTDTR5
extern volatile unsigned int  ALTDTR5 __attribute__((__sfr__));
#define SDC5 SDC5
extern volatile unsigned int  SDC5 __attribute__((__sfr__));
#define SPHASE5 SPHASE5
extern volatile unsigned int  SPHASE5 __attribute__((__sfr__));
#define TRIG5 TRIG5
extern volatile unsigned int  TRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG5BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG5BITS;
extern volatile TRIG5BITS TRIG5bits __attribute__((__sfr__));

#define TRGCON5 TRGCON5
extern volatile unsigned int  TRGCON5 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON5BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON5BITS;
extern volatile TRGCON5BITS TRGCON5bits __attribute__((__sfr__));

#define STRIG5 STRIG5
extern volatile unsigned int  STRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG5BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG5BITS;
extern volatile STRIG5BITS STRIG5bits __attribute__((__sfr__));

#define PWMCAP5 PWMCAP5
extern volatile unsigned int  PWMCAP5 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP5BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP5BITS;
extern volatile PWMCAP5BITS PWMCAP5bits __attribute__((__sfr__));

#define LEBCON5 LEBCON5
extern volatile unsigned int  LEBCON5 __attribute__((__sfr__));
typedef struct tagLEBCON5BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON5BITS;
extern volatile LEBCON5BITS LEBCON5bits __attribute__((__sfr__));

#define LEBDLY5 LEBDLY5
extern volatile unsigned int  LEBDLY5 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY5BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY5BITS;
extern volatile LEBDLY5BITS LEBDLY5bits __attribute__((__sfr__));

#define AUXCON5 AUXCON5
extern volatile unsigned int  AUXCON5 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON5BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON5BITS;
extern volatile AUXCON5BITS AUXCON5bits __attribute__((__sfr__));

#define TRISA TRISA
extern volatile unsigned int  TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
} TRISABITS;
extern volatile TRISABITS TRISAbits __attribute__((__sfr__));

#define PORTA PORTA
extern volatile unsigned int  PORTA __attribute__((__sfr__));
typedef struct tagPORTABITS {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
} PORTABITS;
extern volatile PORTABITS PORTAbits __attribute__((__sfr__));

#define LATA LATA
extern volatile unsigned int  LATA __attribute__((__sfr__));
typedef struct tagLATABITS {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

#define ODCA ODCA
extern volatile unsigned int  ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  unsigned ODCA0:1;
  unsigned ODCA1:1;
  unsigned ODCA2:1;
  unsigned ODCA3:1;
  unsigned ODCA4:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

#define CNENA CNENA
extern volatile unsigned int  CNENA __attribute__((__sfr__));
typedef struct tagCNENABITS {
  unsigned CNIEA0:1;
  unsigned CNIEA1:1;
  unsigned CNIEA2:1;
  unsigned CNIEA3:1;
  unsigned CNIEA4:1;
} CNENABITS;
extern volatile CNENABITS CNENAbits __attribute__((__sfr__));

#define CNPUA CNPUA
extern volatile unsigned int  CNPUA __attribute__((__sfr__));
typedef struct tagCNPUABITS {
  unsigned CNPUA0:1;
  unsigned CNPUA1:1;
  unsigned CNPUA2:1;
  unsigned CNPUA3:1;
  unsigned CNPUA4:1;
} CNPUABITS;
extern volatile CNPUABITS CNPUAbits __attribute__((__sfr__));

#define CNPDA CNPDA
extern volatile unsigned int  CNPDA __attribute__((__sfr__));
typedef struct tagCNPDABITS {
  unsigned CNPDA0:1;
  unsigned CNPDA1:1;
  unsigned CNPDA2:1;
  unsigned CNPDA3:1;
  unsigned CNPDA4:1;
} CNPDABITS;
extern volatile CNPDABITS CNPDAbits __attribute__((__sfr__));

#define ANSELA ANSELA
extern volatile unsigned int  ANSELA __attribute__((__sfr__));
typedef struct tagANSELABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
} ANSELABITS;
extern volatile ANSELABITS ANSELAbits __attribute__((__sfr__));

#define TRISB TRISB
extern volatile unsigned int  TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
  unsigned TRISB8:1;
  unsigned TRISB9:1;
  unsigned TRISB10:1;
  unsigned TRISB11:1;
  unsigned TRISB12:1;
  unsigned TRISB13:1;
  unsigned TRISB14:1;
  unsigned TRISB15:1;
} TRISBBITS;
extern volatile TRISBBITS TRISBbits __attribute__((__sfr__));

#define PORTB PORTB
extern volatile unsigned int  PORTB __attribute__((__sfr__));
typedef struct tagPORTBBITS {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
  unsigned RB8:1;
  unsigned RB9:1;
  unsigned RB10:1;
  unsigned RB11:1;
  unsigned RB12:1;
  unsigned RB13:1;
  unsigned RB14:1;
  unsigned RB15:1;
} PORTBBITS;
extern volatile PORTBBITS PORTBbits __attribute__((__sfr__));

#define LATB LATB
extern volatile unsigned int  LATB __attribute__((__sfr__));
typedef struct tagLATBBITS {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
  unsigned LATB8:1;
  unsigned LATB9:1;
  unsigned LATB10:1;
  unsigned LATB11:1;
  unsigned LATB12:1;
  unsigned LATB13:1;
  unsigned LATB14:1;
  unsigned LATB15:1;
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

#define ODCB ODCB
extern volatile unsigned int  ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  unsigned ODCB0:1;
  unsigned ODCB1:1;
  unsigned ODCB2:1;
  unsigned ODCB3:1;
  unsigned ODCB4:1;
  unsigned ODCB5:1;
  unsigned ODCB6:1;
  unsigned ODCB7:1;
  unsigned ODCB8:1;
  unsigned ODCB9:1;
  unsigned ODCB10:1;
  unsigned ODCB11:1;
  unsigned ODCB12:1;
  unsigned ODCB13:1;
  unsigned ODCB14:1;
  unsigned ODCB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define CNENB CNENB
extern volatile unsigned int  CNENB __attribute__((__sfr__));
typedef struct tagCNENBBITS {
  unsigned CNIEB0:1;
  unsigned CNIEB1:1;
  unsigned CNIEB2:1;
  unsigned CNIEB3:1;
  unsigned CNIEB4:1;
  unsigned CNIEB5:1;
  unsigned CNIEB6:1;
  unsigned CNIEB7:1;
  unsigned CNIEB8:1;
  unsigned CNIEB9:1;
  unsigned CNIEB10:1;
  unsigned CNIEB11:1;
  unsigned CNIEB12:1;
  unsigned CNIEB13:1;
  unsigned CNIEB14:1;
  unsigned CNIEB15:1;
} CNENBBITS;
extern volatile CNENBBITS CNENBbits __attribute__((__sfr__));

#define CNPUB CNPUB
extern volatile unsigned int  CNPUB __attribute__((__sfr__));
typedef struct tagCNPUBBITS {
  unsigned CNPUB0:1;
  unsigned CNPUB1:1;
  unsigned CNPUB2:1;
  unsigned CNPUB3:1;
  unsigned CNPUB4:1;
  unsigned CNPUB5:1;
  unsigned CNPUB6:1;
  unsigned CNPUB7:1;
  unsigned CNPUB8:1;
  unsigned CNPUB9:1;
  unsigned CNPUB10:1;
  unsigned CNPUB11:1;
  unsigned CNPUB12:1;
  unsigned CNPUB13:1;
  unsigned CNPUB14:1;
  unsigned CNPUB15:1;
} CNPUBBITS;
extern volatile CNPUBBITS CNPUBbits __attribute__((__sfr__));

#define CNPDB CNPDB
extern volatile unsigned int  CNPDB __attribute__((__sfr__));
typedef struct tagCNPDBBITS {
  unsigned CNPDB0:1;
  unsigned CNPDB1:1;
  unsigned CNPDB2:1;
  unsigned CNPDB3:1;
  unsigned CNPDB4:1;
  unsigned CNPDB5:1;
  unsigned CNPDB6:1;
  unsigned CNPDB7:1;
  unsigned CNPDB8:1;
  unsigned CNPDB9:1;
  unsigned CNPDB10:1;
  unsigned CNPDB11:1;
  unsigned CNPDB12:1;
  unsigned CNPDB13:1;
  unsigned CNPDB14:1;
  unsigned CNPDB15:1;
} CNPDBBITS;
extern volatile CNPDBBITS CNPDBbits __attribute__((__sfr__));

#define ANSELB ANSELB
extern volatile unsigned int  ANSELB __attribute__((__sfr__));
typedef struct tagANSELBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned ANSB5:1;
  unsigned ANSB6:1;
  unsigned ANSB7:1;
  unsigned :1;
  unsigned ANSB9:1;
  unsigned ANSB10:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define _APPO _APPO
extern volatile unsigned int  _APPO __attribute__((__sfr__));
#define _APPIN _APPIN
extern volatile unsigned int  _APPIN __attribute__((__sfr__));
#define APPS APPS
extern volatile unsigned int  APPS __attribute__((__sfr__));
typedef struct tagAPPSBITS {
  unsigned APIFUL:1;
  unsigned APIOV:1;
  unsigned APOFUL:1;
  unsigned APOOV:1;
  unsigned STRFUL:1;
} APPSBITS;
extern volatile APPSBITS APPSbits __attribute__((__sfr__));

#define STROUTL STROUTL
extern volatile unsigned int  STROUTL __attribute__((__sfr__));
#define STROUTH STROUTH
extern volatile unsigned int  STROUTH __attribute__((__sfr__));
#define STROVCNT STROVCNT
extern volatile unsigned int  STROVCNT __attribute__((__sfr__));
#define JDATAH JDATAH
extern volatile unsigned int  JDATAH __attribute__((__sfr__));
#define JDATAL JDATAL
extern volatile unsigned int  JDATAL __attribute__((__sfr__));


/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* DSRPAG */
#define _DSRPAG DSRPAGbits.DSRPAG

/* DSWPAG */
#define _DSWPAG DSWPAGbits.DSWPAG

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _DA SRbits.DA
#define _SAB SRbits.SAB
#define _OAB SRbits.OAB
#define _SB SRbits.SB
#define _SA SRbits.SA
#define _OB SRbits.OB
#define _OA SRbits.OA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IF CORCONbits.IF
#define _RND CORCONbits.RND
#define _SFA CORCONbits.SFA
#define _IPL3 CORCONbits.IPL3
#define _ACCSAT CORCONbits.ACCSAT
#define _SATDW CORCONbits.SATDW
#define _SATB CORCONbits.SATB
#define _SATA CORCONbits.SATA
#define _DL CORCONbits.DL
#define _EDT CORCONbits.EDT
#define _US CORCONbits.US
#define _VAR CORCONbits.VAR
#define _DL0 CORCONbits.DL0
#define _DL1 CORCONbits.DL1
#define _DL2 CORCONbits.DL2
#define _US0 CORCONbits.US0
#define _US1 CORCONbits.US1

/* MODCON */
#define _XWM MODCONbits.XWM
#define _YWM MODCONbits.YWM
#define _BWM MODCONbits.BWM
#define _YMODEN MODCONbits.YMODEN
#define _XMODEN MODCONbits.XMODEN
#define _XWM0 MODCONbits.XWM0
#define _XWM1 MODCONbits.XWM1
#define _XWM2 MODCONbits.XWM2
#define _XWM3 MODCONbits.XWM3
#define _YWM0 MODCONbits.YWM0
#define _YWM1 MODCONbits.YWM1
#define _YWM2 MODCONbits.YWM2
#define _YWM3 MODCONbits.YWM3
#define _BWM0 MODCONbits.BWM0
#define _BWM1 MODCONbits.BWM1
#define _BWM2 MODCONbits.BWM2
#define _BWM3 MODCONbits.BWM3

/* XBREV */
#define _XB XBREVbits.XB
#define _BREN XBREVbits.BREN
#define _XB0 XBREVbits.XB0
#define _XB1 XBREVbits.XB1
#define _XB2 XBREVbits.XB2
#define _XB3 XBREVbits.XB3
#define _XB4 XBREVbits.XB4
#define _XB5 XBREVbits.XB5
#define _XB6 XBREVbits.XB6
#define _XB7 XBREVbits.XB7
#define _XB8 XBREVbits.XB8
#define _XB9 XBREVbits.XB9
#define _XB10 XBREVbits.XB10
#define _XB11 XBREVbits.XB11
#define _XB12 XBREVbits.XB12
#define _XB13 XBREVbits.XB13
#define _XB14 XBREVbits.XB14

/* TBLPAG */
#define _TBLPAG TBLPAGbits.TBLPAG

/* CTXTSTAT */
#define _MCTXI CTXTSTATbits.MCTXI
#define _CCTXI CTXTSTATbits.CCTXI

/* T1CON */
#define _TCS T1CONbits.TCS
#define _TSYNC T1CONbits.TSYNC
#define _TCKPS T1CONbits.TCKPS
#define _TGATE T1CONbits.TGATE
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1

/* T2CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T3CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T4CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T5CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* IC1CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC2CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC2CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC3CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC3CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC4CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC4CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* I2C1CON1 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _STREN cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SMEN cannot be defined because it is used by more than one SFR */
/* Bitname _DISSLW cannot be defined because it is used by more than one SFR */
/* Bitname _A10M cannot be defined because it is used by more than one SFR */
/* Bitname _STRICT cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C1CON2 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */

/* I2C1STAT */
#define _TBF I2C1STATbits.TBF
#define _RBF I2C1STATbits.RBF
#define _R_W I2C1STATbits.R_W
#define _S I2C1STATbits.S
#define _P I2C1STATbits.P
#define _D_A I2C1STATbits.D_A
#define _I2COV I2C1STATbits.I2COV
#define _IWCOL I2C1STATbits.IWCOL
#define _ADD10 I2C1STATbits.ADD10
#define _GCSTAT I2C1STATbits.GCSTAT
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
#define _ACKTIM I2C1STATbits.ACKTIM
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

/* I2C1ADD */
#define _ADD I2C1ADDbits.ADD

/* I2C1MSK */
#define _AMSK I2C1MSKbits.AMSK
#define _AMSK0 I2C1MSKbits.AMSK0
#define _AMSK1 I2C1MSKbits.AMSK1
#define _AMSK2 I2C1MSKbits.AMSK2
#define _AMSK3 I2C1MSKbits.AMSK3
#define _AMSK4 I2C1MSKbits.AMSK4
#define _AMSK5 I2C1MSKbits.AMSK5
#define _AMSK6 I2C1MSKbits.AMSK6
#define _AMSK7 I2C1MSKbits.AMSK7
#define _AMSK8 I2C1MSKbits.AMSK8
#define _AMSK9 I2C1MSKbits.AMSK9

/* I2C1TRN */
#define _I2CTXDATA I2C1TRNbits.I2CTXDATA

/* I2C1RCV */
#define _I2CRXDATA I2C1RCVbits.I2CRXDATA

/* I2C2CON1 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _STREN cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SMEN cannot be defined because it is used by more than one SFR */
/* Bitname _DISSLW cannot be defined because it is used by more than one SFR */
/* Bitname _A10M cannot be defined because it is used by more than one SFR */
/* Bitname _STRICT cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C2CONL */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _STREN cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SMEN cannot be defined because it is used by more than one SFR */
/* Bitname _DISSLW cannot be defined because it is used by more than one SFR */
/* Bitname _A10M cannot be defined because it is used by more than one SFR */
/* Bitname _STRICT cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C2CON2 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */

/* I2C2CONH */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */

/* I2C2STAT */
/* Bitname _TBF cannot be defined because it is used by more than one SFR */
/* Bitname _RBF cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _I2COV cannot be defined because it is used by more than one SFR */
/* Bitname _IWCOL cannot be defined because it is used by more than one SFR */
/* Bitname _ADD10 cannot be defined because it is used by more than one SFR */
/* Bitname _GCSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */
/* Bitname _TRSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */

/* I2C2ADD */
/* Bitname _ADD cannot be defined because it is used by more than one SFR */

/* I2C2MSK */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK8 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK9 cannot be defined because it is used by more than one SFR */

/* I2C2TRN */
/* Bitname _I2CTXDATA cannot be defined because it is used by more than one SFR */

/* I2C2RCV */
/* Bitname _I2CRXDATA cannot be defined because it is used by more than one SFR */

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _BRGH U1MODEbits.BRGH
#define _URXINV U1MODEbits.URXINV
#define _ABAUD U1MODEbits.ABAUD
#define _LPBACK U1MODEbits.LPBACK
#define _WAKE U1MODEbits.WAKE
#define _UEN U1MODEbits.UEN
#define _RTSMD U1MODEbits.RTSMD
#define _IREN U1MODEbits.IREN
#define _USIDL U1MODEbits.USIDL
#define _UARTEN U1MODEbits.UARTEN
#define _PDSEL0 U1MODEbits.PDSEL0
#define _PDSEL1 U1MODEbits.PDSEL1
#define _RXINV U1MODEbits.RXINV
#define _UEN0 U1MODEbits.UEN0
#define _UEN1 U1MODEbits.UEN1

/* U1STA */
#define _URXDA U1STAbits.URXDA
#define _OERR U1STAbits.OERR
#define _FERR U1STAbits.FERR
#define _PERR U1STAbits.PERR
#define _RIDLE U1STAbits.RIDLE
#define _ADDEN U1STAbits.ADDEN
#define _URXISEL U1STAbits.URXISEL
#define _TRMT U1STAbits.TRMT
#define _UTXBF U1STAbits.UTXBF
#define _UTXEN U1STAbits.UTXEN
#define _UTXBRK U1STAbits.UTXBRK
#define _UTXISEL0 U1STAbits.UTXISEL0
#define _UTXINV U1STAbits.UTXINV
#define _UTXISEL1 U1STAbits.UTXISEL1
#define _URXISEL0 U1STAbits.URXISEL0
#define _URXISEL1 U1STAbits.URXISEL1
#define _TXINV U1STAbits.TXINV

/* U2MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _URXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U2STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _TXINV cannot be defined because it is used by more than one SFR */

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SISEL SPI1STATbits.SISEL
#define _SRXMPT SPI1STATbits.SRXMPT
#define _SPIROV SPI1STATbits.SPIROV
#define _SRMPT SPI1STATbits.SRMPT
#define _SPIBEC SPI1STATbits.SPIBEC
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN
#define _SISEL0 SPI1STATbits.SISEL0
#define _SISEL1 SPI1STATbits.SISEL1
#define _SISEL2 SPI1STATbits.SISEL2
#define _SPIBEC0 SPI1STATbits.SPIBEC0
#define _SPIBEC1 SPI1STATbits.SPIBEC1
#define _SPIBEC2 SPI1STATbits.SPIBEC2

/* SPI1CON1 */
#define _PPRE SPI1CON1bits.PPRE
#define _SPRE SPI1CON1bits.SPRE
#define _MSTEN SPI1CON1bits.MSTEN
#define _CKP SPI1CON1bits.CKP
#define _SSEN SPI1CON1bits.SSEN
#define _CKE SPI1CON1bits.CKE
#define _SMP SPI1CON1bits.SMP
#define _MODE16 SPI1CON1bits.MODE16
#define _DISSDO SPI1CON1bits.DISSDO
#define _DISSCK SPI1CON1bits.DISSCK
#define _PPRE0 SPI1CON1bits.PPRE0
#define _PPRE1 SPI1CON1bits.PPRE1
#define _SPRE0 SPI1CON1bits.SPRE0
#define _SPRE1 SPI1CON1bits.SPRE1
#define _SPRE2 SPI1CON1bits.SPRE2

/* SPI1CON2 */
#define _SPIBEN SPI1CON2bits.SPIBEN
#define _FRMDLY SPI1CON2bits.FRMDLY
#define _FRMPOL SPI1CON2bits.FRMPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL cannot be defined because it is used by more than one SFR */
/* Bitname _SRXMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SRMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC2 cannot be defined because it is used by more than one SFR */

/* SPI2CON1 */
/* Bitname _PPRE cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE cannot be defined because it is used by more than one SFR */
/* Bitname _MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname _DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname _DISSCK cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE2 cannot be defined because it is used by more than one SFR */

/* SPI2CON2 */
/* Bitname _SPIBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FRMDLY cannot be defined because it is used by more than one SFR */
/* Bitname _FRMPOL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */

/* ADCON1L */
#define _PUMPEN ADCON1Lbits.PUMPEN
#define _ADSIDL ADCON1Lbits.ADSIDL
#define _ADON ADCON1Lbits.ADON

/* ADCON1H */
#define _SHRRES ADCON1Hbits.SHRRES
#define _FORM ADCON1Hbits.FORM
#define _SHRRES0 ADCON1Hbits.SHRRES0
#define _SHRRES1 ADCON1Hbits.SHRRES1

/* ADCON2L */
#define _SHRADCS ADCON2Lbits.SHRADCS
#define _SHREISEL ADCON2Lbits.SHREISEL
#define _EIEN ADCON2Lbits.EIEN
#define _REFERCIE ADCON2Lbits.REFERCIE
#define _REFCIE ADCON2Lbits.REFCIE
#define _SHRADCS0 ADCON2Lbits.SHRADCS0
#define _SHRADCS1 ADCON2Lbits.SHRADCS1
#define _SHRADCS2 ADCON2Lbits.SHRADCS2
#define _SHRADCS3 ADCON2Lbits.SHRADCS3
#define _SHRADCS4 ADCON2Lbits.SHRADCS4
#define _SHRADCS5 ADCON2Lbits.SHRADCS5
#define _SHRADCS6 ADCON2Lbits.SHRADCS6
#define _SHREISEL0 ADCON2Lbits.SHREISEL0
#define _SHREISEL1 ADCON2Lbits.SHREISEL1
#define _SHREISEL2 ADCON2Lbits.SHREISEL2

/* ADCON2H */
#define _SHRSAMC ADCON2Hbits.SHRSAMC
#define _REFERR ADCON2Hbits.REFERR
#define _REFRDY ADCON2Hbits.REFRDY
#define _SHRSAMC0 ADCON2Hbits.SHRSAMC0
#define _SHRSAMC1 ADCON2Hbits.SHRSAMC1
#define _SHRSAMC2 ADCON2Hbits.SHRSAMC2
#define _SHRSAMC3 ADCON2Hbits.SHRSAMC3
#define _SHRSAMC4 ADCON2Hbits.SHRSAMC4
#define _SHRSAMC5 ADCON2Hbits.SHRSAMC5
#define _SHRSAMC6 ADCON2Hbits.SHRSAMC6
#define _SHRSAMC7 ADCON2Hbits.SHRSAMC7
#define _SHRSAMC8 ADCON2Hbits.SHRSAMC8
#define _SHRSAMC9 ADCON2Hbits.SHRSAMC9

/* ADCON3L */
#define _CNVCHSEL ADCON3Lbits.CNVCHSEL
#define _SWCTRG ADCON3Lbits.SWCTRG
#define _SWLCTRG ADCON3Lbits.SWLCTRG
#define _CNVRTCH ADCON3Lbits.CNVRTCH
#define _SHRSAMP ADCON3Lbits.SHRSAMP
#define _SUSPRDY ADCON3Lbits.SUSPRDY
#define _SUSPCIE ADCON3Lbits.SUSPCIE
#define _SUSPEND ADCON3Lbits.SUSPEND
#define _REFSEL ADCON3Lbits.REFSEL
#define _CNVCHSEL0 ADCON3Lbits.CNVCHSEL0
#define _CNVCHSEL1 ADCON3Lbits.CNVCHSEL1
#define _CNVCHSEL2 ADCON3Lbits.CNVCHSEL2
#define _CNVCHSEL3 ADCON3Lbits.CNVCHSEL3
#define _CNVCHSEL4 ADCON3Lbits.CNVCHSEL4
#define _CNVCHSEL5 ADCON3Lbits.CNVCHSEL5
#define _REFSEL0 ADCON3Lbits.REFSEL0
#define _REFSEL1 ADCON3Lbits.REFSEL1
#define _REFSEL2 ADCON3Lbits.REFSEL2

/* ADCON3H */
#define _C0EN ADCON3Hbits.C0EN
#define _C1EN ADCON3Hbits.C1EN
#define _C2EN ADCON3Hbits.C2EN
#define _C3EN ADCON3Hbits.C3EN
#define _SHREN ADCON3Hbits.SHREN
#define _CLKDIV ADCON3Hbits.CLKDIV
#define _CLKSEL ADCON3Hbits.CLKSEL
#define _CLKDIV0 ADCON3Hbits.CLKDIV0
#define _CLKDIV1 ADCON3Hbits.CLKDIV1
#define _CLKDIV2 ADCON3Hbits.CLKDIV2
#define _CLKDIV3 ADCON3Hbits.CLKDIV3
#define _CLKDIV4 ADCON3Hbits.CLKDIV4
#define _CLKDIV5 ADCON3Hbits.CLKDIV5
#define _CLKSEL0 ADCON3Hbits.CLKSEL0
#define _CLKSEL1 ADCON3Hbits.CLKSEL1

/* ADCON4L */
#define _SAMC0EN ADCON4Lbits.SAMC0EN
#define _SAMC1EN ADCON4Lbits.SAMC1EN
#define _SAMC2EN ADCON4Lbits.SAMC2EN
#define _SAMC3EN ADCON4Lbits.SAMC3EN
#define _SYNCTRG0 ADCON4Lbits.SYNCTRG0
#define _SYNCTRG1 ADCON4Lbits.SYNCTRG1
#define _SYNCTRG2 ADCON4Lbits.SYNCTRG2
#define _SYNCTRG3 ADCON4Lbits.SYNCTRG3

/* ADCON4H */
#define _C0CHS ADCON4Hbits.C0CHS
#define _C1CHS ADCON4Hbits.C1CHS
#define _C2CHS ADCON4Hbits.C2CHS
#define _C3CHS ADCON4Hbits.C3CHS
#define _C0CHS0 ADCON4Hbits.C0CHS0
#define _C0CHS1 ADCON4Hbits.C0CHS1
#define _C1CHS0 ADCON4Hbits.C1CHS0
#define _C1CHS1 ADCON4Hbits.C1CHS1
#define _C2CHS0 ADCON4Hbits.C2CHS0
#define _C2CHS1 ADCON4Hbits.C2CHS1
#define _C3CHS0 ADCON4Hbits.C3CHS0
#define _C3CHS1 ADCON4Hbits.C3CHS1

/* ADMOD0L */
#define _SIGN0 ADMOD0Lbits.SIGN0
#define _DIFF0 ADMOD0Lbits.DIFF0
#define _SIGN1 ADMOD0Lbits.SIGN1
#define _DIFF1 ADMOD0Lbits.DIFF1
#define _SIGN2 ADMOD0Lbits.SIGN2
#define _DIFF2 ADMOD0Lbits.DIFF2
#define _SIGN3 ADMOD0Lbits.SIGN3
#define _DIFF3 ADMOD0Lbits.DIFF3
#define _SIGN4 ADMOD0Lbits.SIGN4
#define _DIFF4 ADMOD0Lbits.DIFF4
#define _SIGN5 ADMOD0Lbits.SIGN5
#define _DIFF5 ADMOD0Lbits.DIFF5
#define _SIGN6 ADMOD0Lbits.SIGN6
#define _DIFF6 ADMOD0Lbits.DIFF6
#define _SIGN7 ADMOD0Lbits.SIGN7
#define _DIFF7 ADMOD0Lbits.DIFF7

/* ADMOD1L */
#define _SIGN18 ADMOD1Lbits.SIGN18
#define _DIFF18 ADMOD1Lbits.DIFF18
#define _SIGN19 ADMOD1Lbits.SIGN19
#define _DIFF19 ADMOD1Lbits.DIFF19
#define _SIGN20 ADMOD1Lbits.SIGN20
#define _DIFF20 ADMOD1Lbits.DIFF20
#define _SIGN21 ADMOD1Lbits.SIGN21
#define _DIFF21 ADMOD1Lbits.DIFF21

/* ADIEL */
#define _IE0 ADIELbits.IE0
#define _IE1 ADIELbits.IE1
#define _IE2 ADIELbits.IE2
#define _IE3 ADIELbits.IE3
#define _IE4 ADIELbits.IE4
#define _IE5 ADIELbits.IE5
#define _IE6 ADIELbits.IE6
#define _IE7 ADIELbits.IE7

/* ADIEH */
#define _IE18 ADIEHbits.IE18
#define _IE19 ADIEHbits.IE19
#define _IE20 ADIEHbits.IE20
#define _IE21 ADIEHbits.IE21

/* ADSTATL */
#define _AN0RDY ADSTATLbits.AN0RDY
#define _AN1RDY ADSTATLbits.AN1RDY
#define _AN2RDY ADSTATLbits.AN2RDY
#define _AN3RDY ADSTATLbits.AN3RDY
#define _AN4RDY ADSTATLbits.AN4RDY
#define _AN5RDY ADSTATLbits.AN5RDY
#define _AN6RDY ADSTATLbits.AN6RDY
#define _AN7RDY ADSTATLbits.AN7RDY

/* ADSTATH */
#define _AN18RDY ADSTATHbits.AN18RDY
#define _AN19RDY ADSTATHbits.AN19RDY
#define _AN20RDY ADSTATHbits.AN20RDY
#define _AN21RDY ADSTATHbits.AN21RDY

/* ADCMP0ENL */
/* Bitname _CMPEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN7 cannot be defined because it is used by more than one SFR */

/* ADCMP0ENH */
/* Bitname _CMPEN18 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN19 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN20 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN21 cannot be defined because it is used by more than one SFR */

/* ADCMP1ENL */
/* Bitname _CMPEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN7 cannot be defined because it is used by more than one SFR */

/* ADCMP1ENH */
/* Bitname _CMPEN18 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN19 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN20 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN21 cannot be defined because it is used by more than one SFR */

/* ADFL0CON */
/* Bitname _FLCHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _RDY cannot be defined because it is used by more than one SFR */
/* Bitname _IE cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM cannot be defined because it is used by more than one SFR */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _FLEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM2 cannot be defined because it is used by more than one SFR */

/* ADFL1CON */
/* Bitname _FLCHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _RDY cannot be defined because it is used by more than one SFR */
/* Bitname _IE cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM cannot be defined because it is used by more than one SFR */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _FLEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLCHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM2 cannot be defined because it is used by more than one SFR */

/* ADTRIG0L */
#define _TRGSRC0 ADTRIG0Lbits.TRGSRC0
#define _TRGSRC1 ADTRIG0Lbits.TRGSRC1
#define _TRIGSRC00 ADTRIG0Lbits.TRIGSRC00
#define _TRIGSRC01 ADTRIG0Lbits.TRIGSRC01
#define _TRIGSRC02 ADTRIG0Lbits.TRIGSRC02
#define _TRIGSRC03 ADTRIG0Lbits.TRIGSRC03
#define _TRIGSRC04 ADTRIG0Lbits.TRIGSRC04
#define _TRGSRC10 ADTRIG0Lbits.TRGSRC10
#define _TRGSRC11 ADTRIG0Lbits.TRGSRC11
#define _TRGSRC12 ADTRIG0Lbits.TRGSRC12
#define _TRGSRC13 ADTRIG0Lbits.TRGSRC13
#define _TRGSRC14 ADTRIG0Lbits.TRGSRC14

/* ADTRIG0H */
#define _TRGSRC2 ADTRIG0Hbits.TRGSRC2
#define _TRGSRC3 ADTRIG0Hbits.TRGSRC3
#define _TRIGSRC20 ADTRIG0Hbits.TRIGSRC20
#define _TRIGSRC21 ADTRIG0Hbits.TRIGSRC21
#define _TRIGSRC22 ADTRIG0Hbits.TRIGSRC22
#define _TRIGSRC23 ADTRIG0Hbits.TRIGSRC23
#define _TRIGSRC24 ADTRIG0Hbits.TRIGSRC24
#define _TRGSRC30 ADTRIG0Hbits.TRGSRC30
#define _TRGSRC31 ADTRIG0Hbits.TRGSRC31
#define _TRGSRC32 ADTRIG0Hbits.TRGSRC32
#define _TRGSRC33 ADTRIG0Hbits.TRGSRC33
#define _TRGSRC34 ADTRIG0Hbits.TRGSRC34

/* ADTRIG1L */
#define _TRGSRC4 ADTRIG1Lbits.TRGSRC4
#define _TRGSRC5 ADTRIG1Lbits.TRGSRC5
#define _TRIGSRC40 ADTRIG1Lbits.TRIGSRC40
#define _TRIGSRC41 ADTRIG1Lbits.TRIGSRC41
#define _TRIGSRC42 ADTRIG1Lbits.TRIGSRC42
#define _TRIGSRC43 ADTRIG1Lbits.TRIGSRC43
#define _TRIGSRC44 ADTRIG1Lbits.TRIGSRC44
#define _TRGSRC50 ADTRIG1Lbits.TRGSRC50
#define _TRGSRC51 ADTRIG1Lbits.TRGSRC51
#define _TRGSRC52 ADTRIG1Lbits.TRGSRC52
#define _TRGSRC53 ADTRIG1Lbits.TRGSRC53
#define _TRGSRC54 ADTRIG1Lbits.TRGSRC54

/* ADTRIG1H */
#define _TRGSRC6 ADTRIG1Hbits.TRGSRC6
#define _TRGSRC7 ADTRIG1Hbits.TRGSRC7
#define _TRIGSRC60 ADTRIG1Hbits.TRIGSRC60
#define _TRIGSRC61 ADTRIG1Hbits.TRIGSRC61
#define _TRIGSRC62 ADTRIG1Hbits.TRIGSRC62
#define _TRIGSRC63 ADTRIG1Hbits.TRIGSRC63
#define _TRIGSRC64 ADTRIG1Hbits.TRIGSRC64
#define _TRGSRC70 ADTRIG1Hbits.TRGSRC70
#define _TRGSRC71 ADTRIG1Hbits.TRGSRC71
#define _TRGSRC72 ADTRIG1Hbits.TRGSRC72
#define _TRGSRC73 ADTRIG1Hbits.TRGSRC73
#define _TRGSRC74 ADTRIG1Hbits.TRGSRC74

/* ADTRIG4H */
#define _TRGSRC18 ADTRIG4Hbits.TRGSRC18
#define _TRGSRC19 ADTRIG4Hbits.TRGSRC19
#define _TRIGSRC180 ADTRIG4Hbits.TRIGSRC180
#define _TRIGSRC181 ADTRIG4Hbits.TRIGSRC181
#define _TRIGSRC182 ADTRIG4Hbits.TRIGSRC182
#define _TRIGSRC183 ADTRIG4Hbits.TRIGSRC183
#define _TRIGSRC184 ADTRIG4Hbits.TRIGSRC184
#define _TRGSRC190 ADTRIG4Hbits.TRGSRC190
#define _TRGSRC191 ADTRIG4Hbits.TRGSRC191
#define _TRGSRC192 ADTRIG4Hbits.TRGSRC192
#define _TRGSRC193 ADTRIG4Hbits.TRGSRC193
#define _TRGSRC194 ADTRIG4Hbits.TRGSRC194

/* ADTRIG5L */
#define _TRGSRC20 ADTRIG5Lbits.TRGSRC20
#define _TRGSRC21 ADTRIG5Lbits.TRGSRC21
#define _TRIGSRC200 ADTRIG5Lbits.TRIGSRC200
#define _TRIGSRC201 ADTRIG5Lbits.TRIGSRC201
#define _TRIGSRC202 ADTRIG5Lbits.TRIGSRC202
#define _TRIGSRC203 ADTRIG5Lbits.TRIGSRC203
#define _TRIGSRC204 ADTRIG5Lbits.TRIGSRC204
#define _TRGSRC210 ADTRIG5Lbits.TRGSRC210
#define _TRGSRC211 ADTRIG5Lbits.TRGSRC211
#define _TRGSRC212 ADTRIG5Lbits.TRGSRC212
#define _TRGSRC213 ADTRIG5Lbits.TRGSRC213
#define _TRGSRC214 ADTRIG5Lbits.TRGSRC214

/* ADCMP0CON */
/* Bitname _LOLO cannot be defined because it is used by more than one SFR */
/* Bitname _LOHI cannot be defined because it is used by more than one SFR */
/* Bitname _HILO cannot be defined because it is used by more than one SFR */
/* Bitname _HIHI cannot be defined because it is used by more than one SFR */
/* Bitname _BTWN cannot be defined because it is used by more than one SFR */
/* Bitname _STAT cannot be defined because it is used by more than one SFR */
/* Bitname _IE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL4 cannot be defined because it is used by more than one SFR */

/* ADCMP1CON */
/* Bitname _LOLO cannot be defined because it is used by more than one SFR */
/* Bitname _LOHI cannot be defined because it is used by more than one SFR */
/* Bitname _HILO cannot be defined because it is used by more than one SFR */
/* Bitname _HIHI cannot be defined because it is used by more than one SFR */
/* Bitname _BTWN cannot be defined because it is used by more than one SFR */
/* Bitname _STAT cannot be defined because it is used by more than one SFR */
/* Bitname _IE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL4 cannot be defined because it is used by more than one SFR */

/* ADLVLTRGL */
#define _LVLEN0 ADLVLTRGLbits.LVLEN0
#define _LVLEN1 ADLVLTRGLbits.LVLEN1
#define _LVLEN2 ADLVLTRGLbits.LVLEN2
#define _LVLEN3 ADLVLTRGLbits.LVLEN3
#define _LVLEN4 ADLVLTRGLbits.LVLEN4
#define _LVLEN5 ADLVLTRGLbits.LVLEN5
#define _LVLEN6 ADLVLTRGLbits.LVLEN6
#define _LVLEN7 ADLVLTRGLbits.LVLEN7

/* ADLVLTRGH */
#define _LVLEN18 ADLVLTRGHbits.LVLEN18
#define _LVLEN19 ADLVLTRGHbits.LVLEN19
#define _LVLEN20 ADLVLTRGHbits.LVLEN20
#define _LVLEN21 ADLVLTRGHbits.LVLEN21

/* ADCORE0L */
/* Bitname _SAMC cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC4 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC5 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC6 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC7 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC8 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC9 cannot be defined because it is used by more than one SFR */

/* ADCORE0H */
/* Bitname _ADCS cannot be defined because it is used by more than one SFR */
/* Bitname _RES cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS5 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS6 cannot be defined because it is used by more than one SFR */
/* Bitname _RES0 cannot be defined because it is used by more than one SFR */
/* Bitname _RES1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL2 cannot be defined because it is used by more than one SFR */

/* ADCORE1L */
/* Bitname _SAMC cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC4 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC5 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC6 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC7 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC8 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC9 cannot be defined because it is used by more than one SFR */

/* ADCORE1H */
/* Bitname _ADCS cannot be defined because it is used by more than one SFR */
/* Bitname _RES cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS5 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS6 cannot be defined because it is used by more than one SFR */
/* Bitname _RES0 cannot be defined because it is used by more than one SFR */
/* Bitname _RES1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL2 cannot be defined because it is used by more than one SFR */

/* ADCORE2L */
/* Bitname _SAMC cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC4 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC5 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC6 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC7 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC8 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC9 cannot be defined because it is used by more than one SFR */

/* ADCORE2H */
/* Bitname _ADCS cannot be defined because it is used by more than one SFR */
/* Bitname _RES cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS5 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS6 cannot be defined because it is used by more than one SFR */
/* Bitname _RES0 cannot be defined because it is used by more than one SFR */
/* Bitname _RES1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL2 cannot be defined because it is used by more than one SFR */

/* ADCORE3L */
/* Bitname _SAMC cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC4 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC5 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC6 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC7 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC8 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC9 cannot be defined because it is used by more than one SFR */

/* ADCORE3H */
/* Bitname _ADCS cannot be defined because it is used by more than one SFR */
/* Bitname _RES cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS5 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS6 cannot be defined because it is used by more than one SFR */
/* Bitname _RES0 cannot be defined because it is used by more than one SFR */
/* Bitname _RES1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL2 cannot be defined because it is used by more than one SFR */

/* ADEIEL */
#define _EIEN0 ADEIELbits.EIEN0
#define _EIEN1 ADEIELbits.EIEN1
#define _EIEN2 ADEIELbits.EIEN2
#define _EIEN3 ADEIELbits.EIEN3
#define _EIEN4 ADEIELbits.EIEN4
#define _EIEN5 ADEIELbits.EIEN5
#define _EIEN6 ADEIELbits.EIEN6
#define _EIEN7 ADEIELbits.EIEN7

/* ADEIEH */
#define _EIEN18 ADEIEHbits.EIEN18
#define _EIEN19 ADEIEHbits.EIEN19
#define _EIEN20 ADEIEHbits.EIEN20
#define _EIEN21 ADEIEHbits.EIEN21

/* ADEISTATL */
#define _EISTAT0 ADEISTATLbits.EISTAT0
#define _EISTAT1 ADEISTATLbits.EISTAT1
#define _EISTAT2 ADEISTATLbits.EISTAT2
#define _EISTAT3 ADEISTATLbits.EISTAT3
#define _EISTAT4 ADEISTATLbits.EISTAT4
#define _EISTAT5 ADEISTATLbits.EISTAT5
#define _EISTAT6 ADEISTATLbits.EISTAT6
#define _EISTAT7 ADEISTATLbits.EISTAT7

/* ADEISTATH */
#define _EISTAT18 ADEISTATHbits.EISTAT18
#define _EISTAT19 ADEISTATHbits.EISTAT19
#define _EISTAT20 ADEISTATHbits.EISTAT20
#define _EISTAT21 ADEISTATHbits.EISTAT21

/* ADCON5L */
#define _C0PWR ADCON5Lbits.C0PWR
#define _C1PWR ADCON5Lbits.C1PWR
#define _C2PWR ADCON5Lbits.C2PWR
#define _C3PWR ADCON5Lbits.C3PWR
#define _SHRPWR ADCON5Lbits.SHRPWR
#define _C0RDY ADCON5Lbits.C0RDY
#define _C1RDY ADCON5Lbits.C1RDY
#define _C2RDY ADCON5Lbits.C2RDY
#define _C3RDY ADCON5Lbits.C3RDY
#define _SHRRDY ADCON5Lbits.SHRRDY

/* ADCON5H */
#define _C0C1E ADCON5Hbits.C0C1E
#define _C1C1E ADCON5Hbits.C1C1E
#define _C2C1E ADCON5Hbits.C2C1E
#define _C3C1E ADCON5Hbits.C3C1E
#define _SHRCIE ADCON5Hbits.SHRCIE
#define _WARMTIME ADCON5Hbits.WARMTIME

/* ADCAL0L */
#define _CAL0RUN ADCAL0Lbits.CAL0RUN
#define _CAL0EN ADCAL0Lbits.CAL0EN
#define _CAL0DIFF ADCAL0Lbits.CAL0DIFF
#define _CAL0SKIP ADCAL0Lbits.CAL0SKIP
#define _CAL0RDY ADCAL0Lbits.CAL0RDY
#define _CAL1RUN ADCAL0Lbits.CAL1RUN
#define _CAL1EN ADCAL0Lbits.CAL1EN
#define _CAL1DIFF ADCAL0Lbits.CAL1DIFF
#define _CAL1SKIP ADCAL0Lbits.CAL1SKIP
#define _CAL1RDY ADCAL0Lbits.CAL1RDY

/* ADCAL0H */
#define _CAL2RUN ADCAL0Hbits.CAL2RUN
#define _CAL2EN ADCAL0Hbits.CAL2EN
#define _CAL2DIFF ADCAL0Hbits.CAL2DIFF
#define _CAL2SKIP ADCAL0Hbits.CAL2SKIP
#define _CAL2RDY ADCAL0Hbits.CAL2RDY
#define _CAL3RUN ADCAL0Hbits.CAL3RUN
#define _CAL3EN ADCAL0Hbits.CAL3EN
#define _CAL3DIFF ADCAL0Hbits.CAL3DIFF
#define _CAL3SKIP ADCAL0Hbits.CAL3SKIP
#define _CAL3RDY ADCAL0Hbits.CAL3RDY

/* ADCAL1H */
#define _CSHRRUN ADCAL1Hbits.CSHRRUN
#define _CSHREN ADCAL1Hbits.CSHREN
#define _CSHRDIFF ADCAL1Hbits.CSHRDIFF
#define _CSHRSKIP ADCAL1Hbits.CSHRSKIP
#define _CSHRRDY ADCAL1Hbits.CSHRRDY

/* ISRCCON */
#define _ISRCCAL ISRCCONbits.ISRCCAL
#define _OUTSEL ISRCCONbits.OUTSEL
#define _ISRCEN ISRCCONbits.ISRCEN
#define _ISRCCAL0 ISRCCONbits.ISRCCAL0
#define _ISRCCAL1 ISRCCONbits.ISRCCAL1
#define _ISRCCAL2 ISRCCONbits.ISRCCAL2
#define _ISRCCAL3 ISRCCONbits.ISRCCAL3
#define _ISRCCAL4 ISRCCONbits.ISRCCAL4
#define _ISRCCAL5 ISRCCONbits.ISRCCAL5
#define _OUTSEL0 ISRCCONbits.OUTSEL0
#define _OUTSEL1 ISRCCONbits.OUTSEL1
#define _OUTSEL2 ISRCCONbits.OUTSEL2

/* PGA1CON */
/* Bitname _GAIN cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI cannot be defined because it is used by more than one SFR */
/* Bitname _PGAOEN cannot be defined because it is used by more than one SFR */
/* Bitname _PGAEN cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN0 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN1 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI2 cannot be defined because it is used by more than one SFR */

/* PGA1CAL */
/* Bitname _PGACAL cannot be defined because it is used by more than one SFR */

/* PGA2CON */
/* Bitname _GAIN cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI cannot be defined because it is used by more than one SFR */
/* Bitname _PGAOEN cannot be defined because it is used by more than one SFR */
/* Bitname _PGAEN cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN0 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN1 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI2 cannot be defined because it is used by more than one SFR */

/* PGA2CAL */
/* Bitname _PGACAL cannot be defined because it is used by more than one SFR */

/* CMP1CON */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP1DAC */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF11 cannot be defined because it is used by more than one SFR */

/* CMP2CON */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP2DAC */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF11 cannot be defined because it is used by more than one SFR */

/* CMP3CON */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP3DAC */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF11 cannot be defined because it is used by more than one SFR */

/* CMP4CON */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP4DAC */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF11 cannot be defined because it is used by more than one SFR */

/* RPOR0 */
#define _RP32R RPOR0bits.RP32R
#define _RP33R RPOR0bits.RP33R
#define _RP32R0 RPOR0bits.RP32R0
#define _RP32R1 RPOR0bits.RP32R1
#define _RP32R2 RPOR0bits.RP32R2
#define _RP32R3 RPOR0bits.RP32R3
#define _RP32R4 RPOR0bits.RP32R4
#define _RP32R5 RPOR0bits.RP32R5
#define _RP33R0 RPOR0bits.RP33R0
#define _RP33R1 RPOR0bits.RP33R1
#define _RP33R2 RPOR0bits.RP33R2
#define _RP33R3 RPOR0bits.RP33R3
#define _RP33R4 RPOR0bits.RP33R4
#define _RP33R5 RPOR0bits.RP33R5

/* RPOR1 */
#define _RP34R RPOR1bits.RP34R
#define _RP35R RPOR1bits.RP35R
#define _RP34R0 RPOR1bits.RP34R0
#define _RP34R1 RPOR1bits.RP34R1
#define _RP34R2 RPOR1bits.RP34R2
#define _RP34R3 RPOR1bits.RP34R3
#define _RP34R4 RPOR1bits.RP34R4
#define _RP34R5 RPOR1bits.RP34R5
#define _RP35R0 RPOR1bits.RP35R0
#define _RP35R1 RPOR1bits.RP35R1
#define _RP35R2 RPOR1bits.RP35R2
#define _RP35R3 RPOR1bits.RP35R3
#define _RP35R4 RPOR1bits.RP35R4
#define _RP35R5 RPOR1bits.RP35R5

/* RPOR2 */
#define _RP36R RPOR2bits.RP36R
#define _RP37R RPOR2bits.RP37R
#define _RP36R0 RPOR2bits.RP36R0
#define _RP36R1 RPOR2bits.RP36R1
#define _RP36R2 RPOR2bits.RP36R2
#define _RP36R3 RPOR2bits.RP36R3
#define _RP36R4 RPOR2bits.RP36R4
#define _RP36R5 RPOR2bits.RP36R5
#define _RP37R0 RPOR2bits.RP37R0
#define _RP37R1 RPOR2bits.RP37R1
#define _RP37R2 RPOR2bits.RP37R2
#define _RP37R3 RPOR2bits.RP37R3
#define _RP37R4 RPOR2bits.RP37R4
#define _RP37R5 RPOR2bits.RP37R5

/* RPOR3 */
#define _RP38R RPOR3bits.RP38R
#define _RP39R RPOR3bits.RP39R
#define _RP38R0 RPOR3bits.RP38R0
#define _RP38R1 RPOR3bits.RP38R1
#define _RP38R2 RPOR3bits.RP38R2
#define _RP38R3 RPOR3bits.RP38R3
#define _RP38R4 RPOR3bits.RP38R4
#define _RP38R5 RPOR3bits.RP38R5
#define _RP39R0 RPOR3bits.RP39R0
#define _RP39R1 RPOR3bits.RP39R1
#define _RP39R2 RPOR3bits.RP39R2
#define _RP39R3 RPOR3bits.RP39R3
#define _RP39R4 RPOR3bits.RP39R4
#define _RP39R5 RPOR3bits.RP39R5

/* RPOR4 */
#define _RP40R RPOR4bits.RP40R
#define _RP41R RPOR4bits.RP41R
#define _RP40R0 RPOR4bits.RP40R0
#define _RP40R1 RPOR4bits.RP40R1
#define _RP40R2 RPOR4bits.RP40R2
#define _RP40R3 RPOR4bits.RP40R3
#define _RP40R4 RPOR4bits.RP40R4
#define _RP40R5 RPOR4bits.RP40R5
#define _RP41R0 RPOR4bits.RP41R0
#define _RP41R1 RPOR4bits.RP41R1
#define _RP41R2 RPOR4bits.RP41R2
#define _RP41R3 RPOR4bits.RP41R3
#define _RP41R4 RPOR4bits.RP41R4
#define _RP41R5 RPOR4bits.RP41R5

/* RPOR5 */
#define _RP42R RPOR5bits.RP42R
#define _RP43R RPOR5bits.RP43R
#define _RP42R0 RPOR5bits.RP42R0
#define _RP42R1 RPOR5bits.RP42R1
#define _RP42R2 RPOR5bits.RP42R2
#define _RP42R3 RPOR5bits.RP42R3
#define _RP42R4 RPOR5bits.RP42R4
#define _RP42R5 RPOR5bits.RP42R5
#define _RP43R0 RPOR5bits.RP43R0
#define _RP43R1 RPOR5bits.RP43R1
#define _RP43R2 RPOR5bits.RP43R2
#define _RP43R3 RPOR5bits.RP43R3
#define _RP43R4 RPOR5bits.RP43R4
#define _RP43R5 RPOR5bits.RP43R5

/* RPOR6 */
#define _RP44R RPOR6bits.RP44R
#define _RP45R RPOR6bits.RP45R
#define _RP44R0 RPOR6bits.RP44R0
#define _RP44R1 RPOR6bits.RP44R1
#define _RP44R2 RPOR6bits.RP44R2
#define _RP44R3 RPOR6bits.RP44R3
#define _RP44R4 RPOR6bits.RP44R4
#define _RP44R5 RPOR6bits.RP44R5
#define _RP45R0 RPOR6bits.RP45R0
#define _RP45R1 RPOR6bits.RP45R1
#define _RP45R2 RPOR6bits.RP45R2
#define _RP45R3 RPOR6bits.RP45R3
#define _RP45R4 RPOR6bits.RP45R4
#define _RP45R5 RPOR6bits.RP45R5

/* RPOR7 */
#define _RP46R RPOR7bits.RP46R
#define _RP47R RPOR7bits.RP47R
#define _RP46R0 RPOR7bits.RP46R0
#define _RP46R1 RPOR7bits.RP46R1
#define _RP46R2 RPOR7bits.RP46R2
#define _RP46R3 RPOR7bits.RP46R3
#define _RP46R4 RPOR7bits.RP46R4
#define _RP46R5 RPOR7bits.RP46R5
#define _RP47R0 RPOR7bits.RP47R0
#define _RP47R1 RPOR7bits.RP47R1
#define _RP47R2 RPOR7bits.RP47R2
#define _RP47R3 RPOR7bits.RP47R3
#define _RP47R4 RPOR7bits.RP47R4
#define _RP47R5 RPOR7bits.RP47R5

/* RPOR16 */
#define _RP176R RPOR16bits.RP176R
#define _RP177R RPOR16bits.RP177R
#define _RP176R0 RPOR16bits.RP176R0
#define _RP176R1 RPOR16bits.RP176R1
#define _RP176R2 RPOR16bits.RP176R2
#define _RP176R3 RPOR16bits.RP176R3
#define _RP176R4 RPOR16bits.RP176R4
#define _RP176R5 RPOR16bits.RP176R5
#define _RP177R0 RPOR16bits.RP177R0
#define _RP177R1 RPOR16bits.RP177R1
#define _RP177R2 RPOR16bits.RP177R2
#define _RP177R3 RPOR16bits.RP177R3
#define _RP177R4 RPOR16bits.RP177R4
#define _RP177R5 RPOR16bits.RP177R5

/* RPOR17 */
#define _RP178R RPOR17bits.RP178R
#define _RP179R RPOR17bits.RP179R
#define _RP178R0 RPOR17bits.RP178R0
#define _RP178R1 RPOR17bits.RP178R1
#define _RP178R2 RPOR17bits.RP178R2
#define _RP178R3 RPOR17bits.RP178R3
#define _RP178R4 RPOR17bits.RP178R4
#define _RP178R5 RPOR17bits.RP178R5
#define _RP179R0 RPOR17bits.RP179R0
#define _RP179R1 RPOR17bits.RP179R1
#define _RP179R2 RPOR17bits.RP179R2
#define _RP179R3 RPOR17bits.RP179R3
#define _RP179R4 RPOR17bits.RP179R4
#define _RP179R5 RPOR17bits.RP179R5

/* RPOR18 */
#define _RP180R RPOR18bits.RP180R
#define _RP181R RPOR18bits.RP181R
#define _RP180R0 RPOR18bits.RP180R0
#define _RP180R1 RPOR18bits.RP180R1
#define _RP180R2 RPOR18bits.RP180R2
#define _RP180R3 RPOR18bits.RP180R3
#define _RP180R4 RPOR18bits.RP180R4
#define _RP180R5 RPOR18bits.RP180R5
#define _RP181R0 RPOR18bits.RP181R0
#define _RP181R1 RPOR18bits.RP181R1
#define _RP181R2 RPOR18bits.RP181R2
#define _RP181R3 RPOR18bits.RP181R3
#define _RP181R4 RPOR18bits.RP181R4
#define _RP181R5 RPOR18bits.RP181R5

/* RPINR0 */
#define _INT1R RPINR0bits.INT1R
#define _INT1R0 RPINR0bits.INT1R0
#define _INT1R1 RPINR0bits.INT1R1
#define _INT1R2 RPINR0bits.INT1R2
#define _INT1R3 RPINR0bits.INT1R3
#define _INT1R4 RPINR0bits.INT1R4
#define _INT1R5 RPINR0bits.INT1R5
#define _INT1R6 RPINR0bits.INT1R6
#define _INT1R7 RPINR0bits.INT1R7

/* RPINR1 */
#define _INT2R RPINR1bits.INT2R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4
#define _INT2R5 RPINR1bits.INT2R5
#define _INT2R6 RPINR1bits.INT2R6
#define _INT2R7 RPINR1bits.INT2R7

/* RPINR2 */
#define _T1CKRR RPINR2bits.T1CKRR
#define _T1CKRR0 RPINR2bits.T1CKRR0
#define _T1CKRR1 RPINR2bits.T1CKRR1
#define _T1CKRR2 RPINR2bits.T1CKRR2
#define _T1CKRR3 RPINR2bits.T1CKRR3
#define _T1CKRR4 RPINR2bits.T1CKRR4
#define _T1CKRR5 RPINR2bits.T1CKRR5
#define _T1CKRR6 RPINR2bits.T1CKRR6
#define _T1CKRR7 RPINR2bits.T1CKRR7

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T3CKR RPINR3bits.T3CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T2CKR5 RPINR3bits.T2CKR5
#define _T2CKR6 RPINR3bits.T2CKR6
#define _T2CKR7 RPINR3bits.T2CKR7
#define _T3CKR0 RPINR3bits.T3CKR0
#define _T3CKR1 RPINR3bits.T3CKR1
#define _T3CKR2 RPINR3bits.T3CKR2
#define _T3CKR3 RPINR3bits.T3CKR3
#define _T3CKR4 RPINR3bits.T3CKR4
#define _T3CKR5 RPINR3bits.T3CKR5
#define _T3CKR6 RPINR3bits.T3CKR6
#define _T3CKR7 RPINR3bits.T3CKR7

/* RPINR7 */
#define _IC1R RPINR7bits.IC1R
#define _IC2R RPINR7bits.IC2R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC1R5 RPINR7bits.IC1R5
#define _IC1R6 RPINR7bits.IC1R6
#define _IC1R7 RPINR7bits.IC1R7
#define _IC2R0 RPINR7bits.IC2R0
#define _IC2R1 RPINR7bits.IC2R1
#define _IC2R2 RPINR7bits.IC2R2
#define _IC2R3 RPINR7bits.IC2R3
#define _IC2R4 RPINR7bits.IC2R4
#define _IC2R5 RPINR7bits.IC2R5
#define _IC2R6 RPINR7bits.IC2R6
#define _IC2R7 RPINR7bits.IC2R7

/* RPINR8 */
#define _IC3R RPINR8bits.IC3R
#define _IC4R RPINR8bits.IC4R
#define _IC3R0 RPINR8bits.IC3R0
#define _IC3R1 RPINR8bits.IC3R1
#define _IC3R2 RPINR8bits.IC3R2
#define _IC3R3 RPINR8bits.IC3R3
#define _IC3R4 RPINR8bits.IC3R4
#define _IC3R5 RPINR8bits.IC3R5
#define _IC3R6 RPINR8bits.IC3R6
#define _IC3R7 RPINR8bits.IC3R7
#define _IC4R0 RPINR8bits.IC4R0
#define _IC4R1 RPINR8bits.IC4R1
#define _IC4R2 RPINR8bits.IC4R2
#define _IC4R3 RPINR8bits.IC4R3
#define _IC4R4 RPINR8bits.IC4R4
#define _IC4R5 RPINR8bits.IC4R5
#define _IC4R6 RPINR8bits.IC4R6
#define _IC4R7 RPINR8bits.IC4R7

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4
#define _OCFAR5 RPINR11bits.OCFAR5
#define _OCFAR6 RPINR11bits.OCFAR6
#define _OCFAR7 RPINR11bits.OCFAR7

/* RPINR12 */
#define _FLT1R RPINR12bits.FLT1R
#define _FLT2R RPINR12bits.FLT2R
#define _FLT1R0 RPINR12bits.FLT1R0
#define _FLT1R1 RPINR12bits.FLT1R1
#define _FLT1R2 RPINR12bits.FLT1R2
#define _FLT1R3 RPINR12bits.FLT1R3
#define _FLT1R4 RPINR12bits.FLT1R4
#define _FLT1R5 RPINR12bits.FLT1R5
#define _FLT1R6 RPINR12bits.FLT1R6
#define _FLT1R7 RPINR12bits.FLT1R7
#define _FLT2R0 RPINR12bits.FLT2R0
#define _FLT2R1 RPINR12bits.FLT2R1
#define _FLT2R2 RPINR12bits.FLT2R2
#define _FLT2R3 RPINR12bits.FLT2R3
#define _FLT2R4 RPINR12bits.FLT2R4
#define _FLT2R5 RPINR12bits.FLT2R5
#define _FLT2R6 RPINR12bits.FLT2R6
#define _FLT2R7 RPINR12bits.FLT2R7

/* RPINR13 */
#define _FLT3R RPINR13bits.FLT3R
#define _FLT4R RPINR13bits.FLT4R
#define _FLT3R0 RPINR13bits.FLT3R0
#define _FLT3R1 RPINR13bits.FLT3R1
#define _FLT3R2 RPINR13bits.FLT3R2
#define _FLT3R3 RPINR13bits.FLT3R3
#define _FLT3R4 RPINR13bits.FLT3R4
#define _FLT3R5 RPINR13bits.FLT3R5
#define _FLT3R6 RPINR13bits.FLT3R6
#define _FLT3R7 RPINR13bits.FLT3R7
#define _FLT4R0 RPINR13bits.FLT4R0
#define _FLT4R1 RPINR13bits.FLT4R1
#define _FLT4R2 RPINR13bits.FLT4R2
#define _FLT4R3 RPINR13bits.FLT4R3
#define _FLT4R4 RPINR13bits.FLT4R4
#define _FLT4R5 RPINR13bits.FLT4R5
#define _FLT4R6 RPINR13bits.FLT4R6
#define _FLT4R7 RPINR13bits.FLT4R7

/* RPINR18 */
#define _U1RXR RPINR18bits.U1RXR
#define _U1CTSR RPINR18bits.U1CTSR
#define _U1RXR0 RPINR18bits.U1RXR0
#define _U1RXR1 RPINR18bits.U1RXR1
#define _U1RXR2 RPINR18bits.U1RXR2
#define _U1RXR3 RPINR18bits.U1RXR3
#define _U1RXR4 RPINR18bits.U1RXR4
#define _U1RXR5 RPINR18bits.U1RXR5
#define _U1RXR6 RPINR18bits.U1RXR6
#define _U1RXR7 RPINR18bits.U1RXR7
#define _U1CTSR0 RPINR18bits.U1CTSR0
#define _U1CTSR1 RPINR18bits.U1CTSR1
#define _U1CTSR2 RPINR18bits.U1CTSR2
#define _U1CTSR3 RPINR18bits.U1CTSR3
#define _U1CTSR4 RPINR18bits.U1CTSR4
#define _U1CTSR5 RPINR18bits.U1CTSR5
#define _U1CTSR6 RPINR18bits.U1CTSR6
#define _U1CTSR7 RPINR18bits.U1CTSR7

/* RPINR19 */
#define _U2RXR RPINR19bits.U2RXR
#define _U2CTSR RPINR19bits.U2CTSR
#define _U2RXR0 RPINR19bits.U2RXR0
#define _U2RXR1 RPINR19bits.U2RXR1
#define _U2RXR2 RPINR19bits.U2RXR2
#define _U2RXR3 RPINR19bits.U2RXR3
#define _U2RXR4 RPINR19bits.U2RXR4
#define _U2RXR5 RPINR19bits.U2RXR5
#define _U2RXR6 RPINR19bits.U2RXR6
#define _U2RXR7 RPINR19bits.U2RXR7
#define _U2CTSR0 RPINR19bits.U2CTSR0
#define _U2CTSR1 RPINR19bits.U2CTSR1
#define _U2CTSR2 RPINR19bits.U2CTSR2
#define _U2CTSR3 RPINR19bits.U2CTSR3
#define _U2CTSR4 RPINR19bits.U2CTSR4
#define _U2CTSR5 RPINR19bits.U2CTSR5
#define _U2CTSR6 RPINR19bits.U2CTSR6
#define _U2CTSR7 RPINR19bits.U2CTSR7

/* RPINR20 */
#define _SDI1R RPINR20bits.SDI1R
#define _SCK1INR RPINR20bits.SCK1INR
#define _SDI1R0 RPINR20bits.SDI1R0
#define _SDI1R1 RPINR20bits.SDI1R1
#define _SDI1R2 RPINR20bits.SDI1R2
#define _SDI1R3 RPINR20bits.SDI1R3
#define _SDI1R4 RPINR20bits.SDI1R4
#define _SDI1R5 RPINR20bits.SDI1R5
#define _SDI1R6 RPINR20bits.SDI1R6
#define _SDI1R7 RPINR20bits.SDI1R7
#define _SCK1INR0 RPINR20bits.SCK1INR0
#define _SCK1INR1 RPINR20bits.SCK1INR1
#define _SCK1INR2 RPINR20bits.SCK1INR2
#define _SCK1INR3 RPINR20bits.SCK1INR3
#define _SCK1INR4 RPINR20bits.SCK1INR4
#define _SCK1INR5 RPINR20bits.SCK1INR5
#define _SCK1INR6 RPINR20bits.SCK1INR6
#define _SCK1INR7 RPINR20bits.SCK1INR7

/* RPINR21 */
#define _SS1R RPINR21bits.SS1R
#define _SS1R0 RPINR21bits.SS1R0
#define _SS1R1 RPINR21bits.SS1R1
#define _SS1R2 RPINR21bits.SS1R2
#define _SS1R3 RPINR21bits.SS1R3
#define _SS1R4 RPINR21bits.SS1R4
#define _SS1R5 RPINR21bits.SS1R5
#define _SS1R6 RPINR21bits.SS1R6
#define _SS1R7 RPINR21bits.SS1R7

/* RPINR22 */
#define _SDI2R RPINR22bits.SDI2R
#define _SCK2INR RPINR22bits.SCK2INR
#define _SDI2R0 RPINR22bits.SDI2R0
#define _SDI2R1 RPINR22bits.SDI2R1
#define _SDI2R2 RPINR22bits.SDI2R2
#define _SDI2R3 RPINR22bits.SDI2R3
#define _SDI2R4 RPINR22bits.SDI2R4
#define _SDI2R5 RPINR22bits.SDI2R5
#define _SDI2R6 RPINR22bits.SDI2R6
#define _SDI2R7 RPINR22bits.SDI2R7
#define _SCK2INR0 RPINR22bits.SCK2INR0
#define _SCK2INR1 RPINR22bits.SCK2INR1
#define _SCK2INR2 RPINR22bits.SCK2INR2
#define _SCK2INR3 RPINR22bits.SCK2INR3
#define _SCK2INR4 RPINR22bits.SCK2INR4
#define _SCK2INR5 RPINR22bits.SCK2INR5
#define _SCK2INR6 RPINR22bits.SCK2INR6
#define _SCK2INR7 RPINR22bits.SCK2INR7

/* RPINR23 */
#define _SS2R RPINR23bits.SS2R
#define _SS2R0 RPINR23bits.SS2R0
#define _SS2R1 RPINR23bits.SS2R1
#define _SS2R2 RPINR23bits.SS2R2
#define _SS2R3 RPINR23bits.SS2R3
#define _SS2R4 RPINR23bits.SS2R4
#define _SS2R5 RPINR23bits.SS2R5
#define _SS2R6 RPINR23bits.SS2R6
#define _SS2R7 RPINR23bits.SS2R7

/* RPINR37 */
#define _SYCI1R RPINR37bits.SYCI1R
#define _SYCI1R0 RPINR37bits.SYCI1R0
#define _SYCI1R1 RPINR37bits.SYCI1R1
#define _SYCI1R2 RPINR37bits.SYCI1R2
#define _SYCI1R3 RPINR37bits.SYCI1R3
#define _SYCI1R4 RPINR37bits.SYCI1R4
#define _SYCI1R5 RPINR37bits.SYCI1R5
#define _SYCI1R6 RPINR37bits.SYCI1R6
#define _SYCI1R7 RPINR37bits.SYCI1R7

/* RPINR38 */
#define _SYCI2R RPINR38bits.SYCI2R
#define _SYCI2R0 RPINR38bits.SYCI2R0
#define _SYCI2R1 RPINR38bits.SYCI2R1
#define _SYCI2R2 RPINR38bits.SYCI2R2
#define _SYCI2R3 RPINR38bits.SYCI2R3
#define _SYCI2R4 RPINR38bits.SYCI2R4
#define _SYCI2R5 RPINR38bits.SYCI2R5
#define _SYCI2R6 RPINR38bits.SYCI2R6
#define _SYCI2R7 RPINR38bits.SYCI2R7

/* RPINR42 */
#define _FLT5R RPINR42bits.FLT5R
#define _FLT6R RPINR42bits.FLT6R
#define _FLT5R0 RPINR42bits.FLT5R0
#define _FLT5R1 RPINR42bits.FLT5R1
#define _FLT5R2 RPINR42bits.FLT5R2
#define _FLT5R3 RPINR42bits.FLT5R3
#define _FLT5R4 RPINR42bits.FLT5R4
#define _FLT5R5 RPINR42bits.FLT5R5
#define _FLT5R6 RPINR42bits.FLT5R6
#define _FLT5R7 RPINR42bits.FLT5R7
#define _FLT6R0 RPINR42bits.FLT6R0
#define _FLT6R1 RPINR42bits.FLT6R1
#define _FLT6R2 RPINR42bits.FLT6R2
#define _FLT6R3 RPINR42bits.FLT6R3
#define _FLT6R4 RPINR42bits.FLT6R4
#define _FLT6R5 RPINR42bits.FLT6R5
#define _FLT6R6 RPINR42bits.FLT6R6
#define _FLT6R7 RPINR42bits.FLT6R7

/* RPINR43 */
#define _FLT7R RPINR43bits.FLT7R
#define _FLT8R RPINR43bits.FLT8R
#define _FLT7R0 RPINR43bits.FLT7R0
#define _FLT7R1 RPINR43bits.FLT7R1
#define _FLT7R2 RPINR43bits.FLT7R2
#define _FLT7R3 RPINR43bits.FLT7R3
#define _FLT7R4 RPINR43bits.FLT7R4
#define _FLT7R5 RPINR43bits.FLT7R5
#define _FLT7R6 RPINR43bits.FLT7R6
#define _FLT7R7 RPINR43bits.FLT7R7
#define _FLT8R0 RPINR43bits.FLT8R0
#define _FLT8R1 RPINR43bits.FLT8R1
#define _FLT8R2 RPINR43bits.FLT8R2
#define _FLT8R3 RPINR43bits.FLT8R3
#define _FLT8R4 RPINR43bits.FLT8R4
#define _FLT8R5 RPINR43bits.FLT8R5
#define _FLT8R6 RPINR43bits.FLT8R6
#define _FLT8R7 RPINR43bits.FLT8R7

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _URERR NVMCONbits.URERR
#define _RPDF NVMCONbits.RPDF
#define _P2ACTIV NVMCONbits.P2ACTIV
#define _SFTSWP NVMCONbits.SFTSWP
#define _NVMSIDL NVMCONbits.NVMSIDL
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* NVMADR */
#define _NVMADL NVMADRbits.NVMADL
#define _NVMADR NVMADRbits.NVMADR

/* NVMADRH */
#define _NVMADRH NVMADRHbits.NVMADRH
#define _NVMADRU NVMADRHbits.NVMADRU

/* NVMSRCADRL */
#define _NVMSRCADRL NVMSRCADRLbits.NVMSRCADRL

/* NVMSRCADRH */
#define _NVMSRCADRH NVMSRCADRHbits.NVMSRCADRH

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _VREGS RCONbits.VREGS
#define _CM RCONbits.CM
#define _VREGSF RCONbits.VREGSF
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _IOLOCK OSCCONbits.IOLOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _PLLPRE CLKDIVbits.PLLPRE
#define _PLLPOST CLKDIVbits.PLLPOST
#define _FRCDIV CLKDIVbits.FRCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _PLLPRE0 CLKDIVbits.PLLPRE0
#define _PLLPRE1 CLKDIVbits.PLLPRE1
#define _PLLPRE2 CLKDIVbits.PLLPRE2
#define _PLLPRE3 CLKDIVbits.PLLPRE3
#define _PLLPRE4 CLKDIVbits.PLLPRE4
#define _PLLPOST0 CLKDIVbits.PLLPOST0
#define _PLLPOST1 CLKDIVbits.PLLPOST1
#define _FRCDIV0 CLKDIVbits.FRCDIV0
#define _FRCDIV1 CLKDIVbits.FRCDIV1
#define _FRCDIV2 CLKDIVbits.FRCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* PLLFBD */
#define _PLLDIV PLLFBDbits.PLLDIV
#define _PLLDIV0 PLLFBDbits.PLLDIV0
#define _PLLDIV1 PLLFBDbits.PLLDIV1
#define _PLLDIV2 PLLFBDbits.PLLDIV2
#define _PLLDIV3 PLLFBDbits.PLLDIV3
#define _PLLDIV4 PLLFBDbits.PLLDIV4
#define _PLLDIV5 PLLFBDbits.PLLDIV5
#define _PLLDIV6 PLLFBDbits.PLLDIV6
#define _PLLDIV7 PLLFBDbits.PLLDIV7
#define _PLLDIV8 PLLFBDbits.PLLDIV8

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* LFSR */
#define _LFSR LFSRbits.LFSR

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROON REFOCONbits.ROON
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3

/* ACLKCON */
#define _FRCSEL ACLKCONbits.FRCSEL
#define _ASRCSEL ACLKCONbits.ASRCSEL
#define _APSTSCLR ACLKCONbits.APSTSCLR
#define _SELACLK ACLKCONbits.SELACLK
#define _APLLCK ACLKCONbits.APLLCK
#define _ENAPLL ACLKCONbits.ENAPLL
#define _APSTSCLR0 ACLKCONbits.APSTSCLR0
#define _APSTSCLR1 ACLKCONbits.APSTSCLR1
#define _APSTSCLR2 ACLKCONbits.APSTSCLR2

/* PMD1 */
#define _ADCMD PMD1bits.ADCMD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWMMD PMD1bits.PWMMD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _T5MD PMD1bits.T5MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _OC2MD PMD2bits.OC2MD
#define _OC3MD PMD2bits.OC3MD
#define _OC4MD PMD2bits.OC4MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _REFOMD PMD4bits.REFOMD

/* PMD6 */
#define _PWM1MD PMD6bits.PWM1MD
#define _PWM2MD PMD6bits.PWM2MD
#define _PWM3MD PMD6bits.PWM3MD
#define _PWM4MD PMD6bits.PWM4MD
#define _PWM5MD PMD6bits.PWM5MD

/* PMD7 */
#define _PGA1MD PMD7bits.PGA1MD
#define _CMP1MD PMD7bits.CMP1MD
#define _CMP2MD PMD7bits.CMP2MD
#define _CMP3MD PMD7bits.CMP3MD
#define _CMP4MD PMD7bits.CMP4MD

/* PMD8 */
#define _CCSMD PMD8bits.CCSMD
#define _ABGMD PMD8bits.ABGMD
#define _PGA2MD PMD8bits.PGA2MD

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1EIF IFS0bits.SPI1EIF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _ADCIF IFS0bits.ADCIF
#define _NVMIF IFS0bits.NVMIF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _AC1IF IFS1bits.AC1IF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _SPI2EIF IFS2bits.SPI2EIF
#define _SPI2IF IFS2bits.SPI2IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _INT4IF IFS3bits.INT4IF
#define _PSEMIF IFS3bits.PSEMIF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _PSESIF IFS4bits.PSESIF

/* IFS5 */
#define _PWM1IF IFS5bits.PWM1IF
#define _PWM2IF IFS5bits.PWM2IF

/* IFS6 */
#define _PWM3IF IFS6bits.PWM3IF
#define _PWM4IF IFS6bits.PWM4IF
#define _PWM5IF IFS6bits.PWM5IF
#define _AC2IF IFS6bits.AC2IF
#define _AC3IF IFS6bits.AC3IF
#define _AC4IF IFS6bits.AC4IF
#define _ADCAN0IF IFS6bits.ADCAN0IF
#define _ADCAN1IF IFS6bits.ADCAN1IF

/* IFS7 */
#define _ADCAN2IF IFS7bits.ADCAN2IF
#define _ADCAN3IF IFS7bits.ADCAN3IF
#define _ADCAN4IF IFS7bits.ADCAN4IF
#define _ADCAN5IF IFS7bits.ADCAN5IF
#define _ADCAN6IF IFS7bits.ADCAN6IF
#define _ADCAN7IF IFS7bits.ADCAN7IF

/* IFS8 */
/* Bitname _ICDIF cannot be defined because it is used by more than one SFR */
#define _JTAGIF IFS8bits.JTAGIF

/* IFS10 */
#define _ADCAN18IF IFS10bits.ADCAN18IF
#define _ADCAN19IF IFS10bits.ADCAN19IF
#define _ADCAN20IF IFS10bits.ADCAN20IF
#define _ADCAN21IF IFS10bits.ADCAN21IF
#define _I2C1BCIF IFS10bits.I2C1BCIF
#define _I2C2BCIF IFS10bits.I2C2BCIF

/* IFS11 */
#define _ADCMP0IF IFS11bits.ADCMP0IF
#define _ADCMP1IF IFS11bits.ADCMP1IF
#define _ADFLTR0IF IFS11bits.ADFLTR0IF
#define _ADFLTR1IF IFS11bits.ADFLTR1IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1EIE IEC0bits.SPI1EIE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _ADCIE IEC0bits.ADCIE
#define _NVMIE IEC0bits.NVMIE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _AC1IE IEC1bits.AC1IE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _SPI2EIE IEC2bits.SPI2EIE
#define _SPI2IE IEC2bits.SPI2IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _INT4IE IEC3bits.INT4IE
#define _PSEMIE IEC3bits.PSEMIE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _PSESIE IEC4bits.PSESIE

/* IEC5 */
#define _PWM1IE IEC5bits.PWM1IE
#define _PWM2IE IEC5bits.PWM2IE

/* IEC6 */
#define _PWM3IE IEC6bits.PWM3IE
#define _PWM4IE IEC6bits.PWM4IE
#define _PWM5IE IEC6bits.PWM5IE
#define _AC2IE IEC6bits.AC2IE
#define _AC3IE IEC6bits.AC3IE
#define _AC4IE IEC6bits.AC4IE
#define _ADCAN0IE IEC6bits.ADCAN0IE
#define _ADCAN1IE IEC6bits.ADCAN1IE

/* IEC7 */
#define _ADCAN2IE IEC7bits.ADCAN2IE
#define _ADCAN3IE IEC7bits.ADCAN3IE
#define _ADCAN4IE IEC7bits.ADCAN4IE
#define _ADCAN5IE IEC7bits.ADCAN5IE
#define _ADCAN6IE IEC7bits.ADCAN6IE
#define _ADCAN7IE IEC7bits.ADCAN7IE

/* IEC8 */
/* Bitname _ICDIF cannot be defined because it is used by more than one SFR */
#define _JTAGIE IEC8bits.JTAGIE

/* IEC10 */
#define _ADCAN18IE IEC10bits.ADCAN18IE
#define _ADCAN19IE IEC10bits.ADCAN19IE
#define _ADCAN20IE IEC10bits.ADCAN20IE
#define _ADCAN21IE IEC10bits.ADCAN21IE
#define _I2C1BCIE IEC10bits.I2C1BCIE
#define _I2C2BCIE IEC10bits.I2C2BCIE

/* IEC11 */
#define _ADCMP0IE IEC11bits.ADCMP0IE
#define _ADCMP1IE IEC11bits.ADCMP1IE
#define _ADFLTR0IE IEC11bits.ADFLTR0IE
#define _ADFLTR1IE IEC11bits.ADFLTR1IE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _IC1IP IPC0bits.IC1IP
#define _OC1IP IPC0bits.OC1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _IC1IP0 IPC0bits.IC1IP0
#define _IC1IP1 IPC0bits.IC1IP1
#define _IC1IP2 IPC0bits.IC1IP2
#define _OC1IP0 IPC0bits.OC1IP0
#define _OC1IP1 IPC0bits.OC1IP1
#define _OC1IP2 IPC0bits.OC1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _IC2IP0 IPC1bits.IC2IP0
#define _IC2IP1 IPC1bits.IC2IP1
#define _IC2IP2 IPC1bits.IC2IP2
#define _OC2IP0 IPC1bits.OC2IP0
#define _OC2IP1 IPC1bits.OC2IP1
#define _OC2IP2 IPC1bits.OC2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _SPI1EIP IPC2bits.SPI1EIP
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _SPI1EIP0 IPC2bits.SPI1EIP0
#define _SPI1EIP1 IPC2bits.SPI1EIP1
#define _SPI1EIP2 IPC2bits.SPI1EIP2
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _ADCIP IPC3bits.ADCIP
#define _NVMIP IPC3bits.NVMIP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _ADCIP0 IPC3bits.ADCIP0
#define _ADCIP1 IPC3bits.ADCIP1
#define _ADCIP2 IPC3bits.ADCIP2
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _AC1IP IPC4bits.AC1IP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _AC1IP0 IPC4bits.AC1IP0
#define _AC1IP1 IPC4bits.AC1IP1
#define _AC1IP2 IPC4bits.AC1IP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC6 */
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
#define _OC3IP0 IPC6bits.OC3IP0
#define _OC3IP1 IPC6bits.OC3IP1
#define _OC3IP2 IPC6bits.OC3IP2
#define _OC4IP0 IPC6bits.OC4IP0
#define _OC4IP1 IPC6bits.OC4IP1
#define _OC4IP2 IPC6bits.OC4IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _T5IP IPC7bits.T5IP
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _T5IP0 IPC7bits.T5IP0
#define _T5IP1 IPC7bits.T5IP1
#define _T5IP2 IPC7bits.T5IP2
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC8 */
#define _SPI2EIP IPC8bits.SPI2EIP
#define _SPI2IP IPC8bits.SPI2IP
#define _SPI2EIP0 IPC8bits.SPI2EIP0
#define _SPI2EIP1 IPC8bits.SPI2EIP1
#define _SPI2EIP2 IPC8bits.SPI2EIP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2

/* IPC9 */
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2

/* IPC12 */
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2

/* IPC13 */
#define _INT4IP IPC13bits.INT4IP
#define _INT4IP0 IPC13bits.INT4IP0
#define _INT4IP1 IPC13bits.INT4IP1
#define _INT4IP2 IPC13bits.INT4IP2

/* IPC14 */
#define _PSEMIP IPC14bits.PSEMIP
#define _PSEMIP0 IPC14bits.PSEMIP0
#define _PSEMIP1 IPC14bits.PSEMIP1
#define _PSEMIP2 IPC14bits.PSEMIP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2

/* IPC18 */
#define _PSESIP IPC18bits.PSESIP
#define _PSESIP0 IPC18bits.PSESIP0
#define _PSESIP1 IPC18bits.PSESIP1
#define _PSESIP2 IPC18bits.PSESIP2

/* IPC23 */
#define _PWM1IP IPC23bits.PWM1IP
#define _PWM2IP IPC23bits.PWM2IP
#define _PWM1IP0 IPC23bits.PWM1IP0
#define _PWM1IP1 IPC23bits.PWM1IP1
#define _PWM1IP2 IPC23bits.PWM1IP2
#define _PWM2IP0 IPC23bits.PWM2IP0
#define _PWM2IP1 IPC23bits.PWM2IP1
#define _PWM2IP2 IPC23bits.PWM2IP2

/* IPC24 */
#define _PWM3IP IPC24bits.PWM3IP
#define _PWM4IP IPC24bits.PWM4IP
#define _PWM5IP IPC24bits.PWM5IP
#define _PWM3IP0 IPC24bits.PWM3IP0
#define _PWM3IP1 IPC24bits.PWM3IP1
#define _PWM3IP2 IPC24bits.PWM3IP2
#define _PWM4IP0 IPC24bits.PWM4IP0
#define _PWM4IP1 IPC24bits.PWM4IP1
#define _PWM4IP2 IPC24bits.PWM4IP2
#define _PWM5IP0 IPC24bits.PWM5IP0
#define _PWM5IP1 IPC24bits.PWM5IP1
#define _PWM5IP2 IPC24bits.PWM5IP2

/* IPC25 */
#define _AC2IP IPC25bits.AC2IP
#define _AC2IP0 IPC25bits.AC2IP0
#define _AC2IP1 IPC25bits.AC2IP1
#define _AC2IP2 IPC25bits.AC2IP2

/* IPC26 */
#define _AC3IP IPC26bits.AC3IP
#define _AC4IP IPC26bits.AC4IP
#define _AC3IP0 IPC26bits.AC3IP0
#define _AC3IP1 IPC26bits.AC3IP1
#define _AC3IP2 IPC26bits.AC3IP2
#define _AC4IP0 IPC26bits.AC4IP0
#define _AC4IP1 IPC26bits.AC4IP1
#define _AC4IP2 IPC26bits.AC4IP2

/* IPC27 */
#define _ADCAN0IP IPC27bits.ADCAN0IP
#define _ADCAN1IP IPC27bits.ADCAN1IP
#define _ADCAN0IP0 IPC27bits.ADCAN0IP0
#define _ADCAN0IP1 IPC27bits.ADCAN0IP1
#define _ADCAN0IP2 IPC27bits.ADCAN0IP2
#define _ADCAN1IP0 IPC27bits.ADCAN1IP0
#define _ADCAN1IP1 IPC27bits.ADCAN1IP1
#define _ADCAN1IP2 IPC27bits.ADCAN1IP2

/* IPC28 */
#define _ADCAN2IP IPC28bits.ADCAN2IP
#define _ADCAN3IP IPC28bits.ADCAN3IP
#define _ADCAN4IP IPC28bits.ADCAN4IP
#define _ADCAN5IP IPC28bits.ADCAN5IP
#define _ADCAN2IP0 IPC28bits.ADCAN2IP0
#define _ADCAN2IP1 IPC28bits.ADCAN2IP1
#define _ADCAN2IP2 IPC28bits.ADCAN2IP2
#define _ADCAN3IP0 IPC28bits.ADCAN3IP0
#define _ADCAN3IP1 IPC28bits.ADCAN3IP1
#define _ADCAN3IP2 IPC28bits.ADCAN3IP2
#define _ADCAN4IP0 IPC28bits.ADCAN4IP0
#define _ADCAN4IP1 IPC28bits.ADCAN4IP1
#define _ADCAN4IP2 IPC28bits.ADCAN4IP2
#define _ADCAN5IP0 IPC28bits.ADCAN5IP0
#define _ADCAN5IP1 IPC28bits.ADCAN5IP1
#define _ADCAN5IP2 IPC28bits.ADCAN5IP2

/* IPC29 */
#define _ADCAN6IP IPC29bits.ADCAN6IP
#define _ADCAN7IP IPC29bits.ADCAN7IP
#define _ADCAN6IP0 IPC29bits.ADCAN6IP0
#define _ADCAN6IP1 IPC29bits.ADCAN6IP1
#define _ADCAN6IP2 IPC29bits.ADCAN6IP2
#define _ADCAN7IP0 IPC29bits.ADCAN7IP0
#define _ADCAN7IP1 IPC29bits.ADCAN7IP1
#define _ADCAN7IP2 IPC29bits.ADCAN7IP2

/* IPC35 */
#define _ICDIP IPC35bits.ICDIP
#define _JTAGIP IPC35bits.JTAGIP
#define _ICDIP0 IPC35bits.ICDIP0
#define _ICDIP1 IPC35bits.ICDIP1
#define _ICDIP2 IPC35bits.ICDIP2
#define _JTAGIP0 IPC35bits.JTAGIP0
#define _JTAGIP1 IPC35bits.JTAGIP1
#define _JTAGIP2 IPC35bits.JTAGIP2

/* IPC40 */
#define _ADCAN18IP IPC40bits.ADCAN18IP
#define _ADCAN19IP IPC40bits.ADCAN19IP
#define _ADCAN20IP IPC40bits.ADCAN20IP
#define _ADCAN18IP0 IPC40bits.ADCAN18IP0
#define _ADCAN18IP1 IPC40bits.ADCAN18IP1
#define _ADCAN18IP2 IPC40bits.ADCAN18IP2
#define _ADCAN19IP0 IPC40bits.ADCAN19IP0
#define _ADCAN19IP1 IPC40bits.ADCAN19IP1
#define _ADCAN19IP2 IPC40bits.ADCAN19IP2
#define _ADCAN20IP0 IPC40bits.ADCAN20IP0
#define _ADCAN20IP1 IPC40bits.ADCAN20IP1
#define _ADCAN20IP2 IPC40bits.ADCAN20IP2

/* IPC41 */
#define _ADCAN21IP IPC41bits.ADCAN21IP
#define _ADCAN21IP0 IPC41bits.ADCAN21IP0
#define _ADCAN21IP1 IPC41bits.ADCAN21IP1
#define _ADCAN21IP2 IPC41bits.ADCAN21IP2

/* IPC43 */
#define _I2C1BCIP IPC43bits.I2C1BCIP
#define _I2C2BCIP IPC43bits.I2C2BCIP
#define _I2C1BCIP0 IPC43bits.I2C1BCIP0
#define _I2C1BCIP1 IPC43bits.I2C1BCIP1
#define _I2C1BCIP2 IPC43bits.I2C1BCIP2
#define _I2C2BCIP0 IPC43bits.I2C2BCIP0
#define _I2C2BCIP1 IPC43bits.I2C2BCIP1
#define _I2C2BCIP2 IPC43bits.I2C2BCIP2

/* IPC44 */
#define _ADCMP0IP IPC44bits.ADCMP0IP
#define _ADCMP1IP IPC44bits.ADCMP1IP
#define _ADFLTR0IP IPC44bits.ADFLTR0IP
#define _ADCMP0IP0 IPC44bits.ADCMP0IP0
#define _ADCMP0IP1 IPC44bits.ADCMP0IP1
#define _ADCMP0IP2 IPC44bits.ADCMP0IP2
#define _ADCMP1IP0 IPC44bits.ADCMP1IP0
#define _ADCMP1IP1 IPC44bits.ADCMP1IP1
#define _ADCMP1IP2 IPC44bits.ADCMP1IP2
#define _ADFLTR0IP0 IPC44bits.ADFLTR0IP0
#define _ADFLTR0IP1 IPC44bits.ADFLTR0IP1
#define _ADFLTR0IP2 IPC44bits.ADFLTR0IP2

/* IPC45 */
#define _ADFLTR1IP IPC45bits.ADFLTR1IP
#define _ADFLTR1IP0 IPC45bits.ADFLTR1IP0
#define _ADFLTR1IP1 IPC45bits.ADFLTR1IP1
#define _ADFLTR1IP2 IPC45bits.ADFLTR1IP2

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DIV0ERR INTCON1bits.DIV0ERR
#define _SFTACERR INTCON1bits.SFTACERR
#define _COVTE INTCON1bits.COVTE
#define _OVBTE INTCON1bits.OVBTE
#define _OVATE INTCON1bits.OVATE
#define _COVBERR INTCON1bits.COVBERR
#define _COVAERR INTCON1bits.COVAERR
#define _OVBERR INTCON1bits.OVBERR
#define _OVAERR INTCON1bits.OVAERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _INT4EP INTCON2bits.INT4EP
#define _AIVTEN INTCON2bits.AIVTEN
#define _SWTRAP INTCON2bits.SWTRAP
#define _DISI INTCON2bits.DISI
#define _GIE INTCON2bits.GIE

/* INTCON3 */
#define _APLL INTCON3bits.APLL
#define _DOOVR INTCON3bits.DOOVR
#define _NAE INTCON3bits.NAE

/* INTCON4 */
#define _SGHT INTCON4bits.SGHT

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _VECNUM6 INTTREGbits.VECNUM6
#define _VECNUM7 INTTREGbits.VECNUM7
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

/* OC1CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

/* OC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC2CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

/* OC2CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC3CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

/* OC3CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC4CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

/* OC4CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* PTCON */
/* Bitname _SEVTPS cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EIPU cannot be defined because it is used by more than one SFR */
/* Bitname _SEIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SESTAT cannot be defined because it is used by more than one SFR */
#define _PTSIDL PTCONbits.PTSIDL
#define _PTEN PTCONbits.PTEN
/* Bitname _SEVTPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC2 cannot be defined because it is used by more than one SFR */

/* PTCON2 */
/* Bitname _PCLKDIV cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV2 cannot be defined because it is used by more than one SFR */

/* SEVTCMP */
#define _SEVTCMP SEVTCMPbits.SEVTCMP

/* STCON */
/* Bitname _SEVTPS cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EIPU cannot be defined because it is used by more than one SFR */
/* Bitname _SEIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SESTAT cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC2 cannot be defined because it is used by more than one SFR */

/* STCON2 */
/* Bitname _PCLKDIV cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV2 cannot be defined because it is used by more than one SFR */

/* SSEVTCMP */
#define _SSEVTCMP SSEVTCMPbits.SSEVTCMP
#define _SSEVTCMP0 SSEVTCMPbits.SSEVTCMP0
#define _SSEVTCMP1 SSEVTCMPbits.SSEVTCMP1
#define _SSEVTCMP2 SSEVTCMPbits.SSEVTCMP2
#define _SSEVTCMP3 SSEVTCMPbits.SSEVTCMP3
#define _SSEVTCMP4 SSEVTCMPbits.SSEVTCMP4
#define _SSEVTCMP5 SSEVTCMPbits.SSEVTCMP5
#define _SSEVTCMP6 SSEVTCMPbits.SSEVTCMP6
#define _SSEVTCMP7 SSEVTCMPbits.SSEVTCMP7
#define _SSEVTCMP8 SSEVTCMPbits.SSEVTCMP8
#define _SSEVTCMP9 SSEVTCMPbits.SSEVTCMP9
#define _SSEVTCMP10 SSEVTCMPbits.SSEVTCMP10
#define _SSEVTCMP11 SSEVTCMPbits.SSEVTCMP11
#define _SSEVTCMP12 SSEVTCMPbits.SSEVTCMP12

/* CHOP */
#define _CHOPCLK CHOPbits.CHOPCLK
#define _CHPCLKEN CHOPbits.CHPCLKEN
#define _CHOPCLK0 CHOPbits.CHOPCLK0
#define _CHOPCLK1 CHOPbits.CHOPCLK1
#define _CHOPCLK2 CHOPbits.CHOPCLK2
#define _CHOPCLK3 CHOPbits.CHOPCLK3
#define _CHOPCLK4 CHOPbits.CHOPCLK4
#define _CHOPCLK5 CHOPbits.CHOPCLK5
#define _CHOPCLK6 CHOPbits.CHOPCLK6

/* PWMCON1 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON1 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON1 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG1 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON1 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG1 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP1 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON1 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY1 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON1 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON2 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON2 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON2 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG2 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON2 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG2 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP2 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON2 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY2 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON2 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON3 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON3 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON3 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG3 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON3 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG3 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP3 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON3 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY3 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON3 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON4 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON4 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON4 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG4 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON4 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG4 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP4 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON4 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY4 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON4 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON5 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON5 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON5 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG5 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON5 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG5 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP5 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON5 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY5 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON5 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4

/* ODCA */
#define _ODCA0 ODCAbits.ODCA0
#define _ODCA1 ODCAbits.ODCA1
#define _ODCA2 ODCAbits.ODCA2
#define _ODCA3 ODCAbits.ODCA3
#define _ODCA4 ODCAbits.ODCA4

/* CNENA */
#define _CNIEA0 CNENAbits.CNIEA0
#define _CNIEA1 CNENAbits.CNIEA1
#define _CNIEA2 CNENAbits.CNIEA2
#define _CNIEA3 CNENAbits.CNIEA3
#define _CNIEA4 CNENAbits.CNIEA4

/* CNPUA */
#define _CNPUA0 CNPUAbits.CNPUA0
#define _CNPUA1 CNPUAbits.CNPUA1
#define _CNPUA2 CNPUAbits.CNPUA2
#define _CNPUA3 CNPUAbits.CNPUA3
#define _CNPUA4 CNPUAbits.CNPUA4

/* CNPDA */
#define _CNPDA0 CNPDAbits.CNPDA0
#define _CNPDA1 CNPDAbits.CNPDA1
#define _CNPDA2 CNPDAbits.CNPDA2
#define _CNPDA3 CNPDAbits.CNPDA3
#define _CNPDA4 CNPDAbits.CNPDA4

/* ANSELA */
#define _ANSA0 ANSELAbits.ANSA0
#define _ANSA1 ANSELAbits.ANSA1
#define _ANSA2 ANSELAbits.ANSA2

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB10 TRISBbits.TRISB10
#define _TRISB11 TRISBbits.TRISB11
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB10 PORTBbits.RB10
#define _RB11 PORTBbits.RB11
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB10 LATBbits.LATB10
#define _LATB11 LATBbits.LATB11
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* ODCB */
#define _ODCB0 ODCBbits.ODCB0
#define _ODCB1 ODCBbits.ODCB1
#define _ODCB2 ODCBbits.ODCB2
#define _ODCB3 ODCBbits.ODCB3
#define _ODCB4 ODCBbits.ODCB4
#define _ODCB5 ODCBbits.ODCB5
#define _ODCB6 ODCBbits.ODCB6
#define _ODCB7 ODCBbits.ODCB7
#define _ODCB8 ODCBbits.ODCB8
#define _ODCB9 ODCBbits.ODCB9
#define _ODCB10 ODCBbits.ODCB10
#define _ODCB11 ODCBbits.ODCB11
#define _ODCB12 ODCBbits.ODCB12
#define _ODCB13 ODCBbits.ODCB13
#define _ODCB14 ODCBbits.ODCB14
#define _ODCB15 ODCBbits.ODCB15

/* CNENB */
#define _CNIEB0 CNENBbits.CNIEB0
#define _CNIEB1 CNENBbits.CNIEB1
#define _CNIEB2 CNENBbits.CNIEB2
#define _CNIEB3 CNENBbits.CNIEB3
#define _CNIEB4 CNENBbits.CNIEB4
#define _CNIEB5 CNENBbits.CNIEB5
#define _CNIEB6 CNENBbits.CNIEB6
#define _CNIEB7 CNENBbits.CNIEB7
#define _CNIEB8 CNENBbits.CNIEB8
#define _CNIEB9 CNENBbits.CNIEB9
#define _CNIEB10 CNENBbits.CNIEB10
#define _CNIEB11 CNENBbits.CNIEB11
#define _CNIEB12 CNENBbits.CNIEB12
#define _CNIEB13 CNENBbits.CNIEB13
#define _CNIEB14 CNENBbits.CNIEB14
#define _CNIEB15 CNENBbits.CNIEB15

/* CNPUB */
#define _CNPUB0 CNPUBbits.CNPUB0
#define _CNPUB1 CNPUBbits.CNPUB1
#define _CNPUB2 CNPUBbits.CNPUB2
#define _CNPUB3 CNPUBbits.CNPUB3
#define _CNPUB4 CNPUBbits.CNPUB4
#define _CNPUB5 CNPUBbits.CNPUB5
#define _CNPUB6 CNPUBbits.CNPUB6
#define _CNPUB7 CNPUBbits.CNPUB7
#define _CNPUB8 CNPUBbits.CNPUB8
#define _CNPUB9 CNPUBbits.CNPUB9
#define _CNPUB10 CNPUBbits.CNPUB10
#define _CNPUB11 CNPUBbits.CNPUB11
#define _CNPUB12 CNPUBbits.CNPUB12
#define _CNPUB13 CNPUBbits.CNPUB13
#define _CNPUB14 CNPUBbits.CNPUB14
#define _CNPUB15 CNPUBbits.CNPUB15

/* CNPDB */
#define _CNPDB0 CNPDBbits.CNPDB0
#define _CNPDB1 CNPDBbits.CNPDB1
#define _CNPDB2 CNPDBbits.CNPDB2
#define _CNPDB3 CNPDBbits.CNPDB3
#define _CNPDB4 CNPDBbits.CNPDB4
#define _CNPDB5 CNPDBbits.CNPDB5
#define _CNPDB6 CNPDBbits.CNPDB6
#define _CNPDB7 CNPDBbits.CNPDB7
#define _CNPDB8 CNPDBbits.CNPDB8
#define _CNPDB9 CNPDBbits.CNPDB9
#define _CNPDB10 CNPDBbits.CNPDB10
#define _CNPDB11 CNPDBbits.CNPDB11
#define _CNPDB12 CNPDBbits.CNPDB12
#define _CNPDB13 CNPDBbits.CNPDB13
#define _CNPDB14 CNPDBbits.CNPDB14
#define _CNPDB15 CNPDBbits.CNPDB15

/* ANSELB */
#define _ANSB0 ANSELBbits.ANSB0
#define _ANSB1 ANSELBbits.ANSB1
#define _ANSB2 ANSELBbits.ANSB2
#define _ANSB3 ANSELBbits.ANSB3
#define _ANSB4 ANSELBbits.ANSB4
#define _ANSB5 ANSELBbits.ANSB5
#define _ANSB6 ANSELBbits.ANSB6
#define _ANSB7 ANSELBbits.ANSB7
#define _ANSB9 ANSELBbits.ANSB9
#define _ANSB10 ANSELBbits.ANSB10

/* APPS */
#define _APIFUL APPSbits.APIFUL
#define _APIOV APPSbits.APIOV
#define _APOFUL APPSbits.APOFUL
#define _APOOV APPSbits.APOOV
#define _STRFUL APPSbits.STRFUL


/* ---------------------------------------------------------- */
/* Some useful macros for inline assembler instructions       */
/* ---------------------------------------------------------- */

#define Nop()    __builtin_nop()
#define ClrWdt() __builtin_clrwdt()
#define Sleep()  __builtin_pwrsav(0)
#define Idle()   __builtin_pwrsav(1)

/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array in X memory */
/* that is aligned to a 32 byte address:                      */
/*                                                            */
/* int _XBSS(32) xbuf[16];                                    */
/*                                                            */
#define _XBSS(N)    __attribute__((space(xmemory),far,aligned(N)))
#define _XDATA(N)   __attribute__((space(xmemory),far,aligned(N)))
#define _YBSS(N)    __attribute__((space(ymemory),far,aligned(N)))
#define _YDATA(N)   __attribute__((space(ymemory),far,aligned(N)))

/* The following macros do not require an argument. They can  */
/* be used to locate a variable in persistent data memory or  */
/* in near data memory. For example, to declare two variables */
/* that retain their values across a device reset:            */
/*                                                            */
/* int _PERSISTENT var1,var2;                                 */
/*                                                            */
#define _PERSISTENT __attribute__((persistent))
#define _NEAR       __attribute__((near))

/* ---------------------------------------------------------- */
/* Some useful macros for declaring functions                 */
/* ---------------------------------------------------------- */

/* The following macros can be used to declare interrupt      */
/* service routines (ISRs). For example, to declare an ISR    */
/* for the timer1 interrupt:                                  */
/*                                                            */
/* void _ISR _T1Interrupt(void);                              */
/*                                                            */
/* To declare an ISR for the SPI1 interrupt with fast         */
/* context save:                                              */
/*                                                            */
/* void _ISRFAST _SPI1Interrupt(void);                        */
/*                                                            */
/* Note: ISRs will be installed into the interrupt vector     */
/* tables automatically if the reserved names listed in the   */
/* MPLAB C30 Compiler User's Guide (DS51284) are used.        */
/*                                                            */
#define _ISR __attribute__((interrupt))
#define _ISRFAST __attribute__((interrupt, shadow))

/* ---------------------------------------------------------- */
/* Some useful macros for changing the CPU IPL                */
/* ---------------------------------------------------------- */

/* The following macros can be used to modify the current CPU */
/* IPL. The definition of the macro may vary from device to   */
/* device.                                                    */
/*                                                            */
/* To safely set the CPU IPL, use SET_CPU_IPL(ipl); the       */
/* valid range of ipl is 0-7, it may be any expression.       */
/*                                                            */
/* SET_CPU_IPL(7);                                            */
/*                                                            */
/* To preserve the current IPL and save it use                */
/* SET_AND_SAVE_CPU_IPL(save_to, ipl); the valid range of ipl */
/* is 0-7 and may be any expression, save_to should denote    */
/* some temporary storage.                                    */
/*                                                            */
/* unsigned int old_ipl;                                      */
/*                                                            */
/* SET_AND_SAVE_CPU_IPL(old_ipl, 7);                          */
/*                                                            */
/* The IPL can be restored with RESTORE_CPU_IPL(saved_to)     */
/*                                                            */
/* RESTORE_CPU_IPL(old_ipl);                                  */

#define SET_CPU_IPL(ipl) {       \
  unsigned int DISI_save;        \
                                 \
  DISI_save = DISICNT;           \
  asm volatile ("disi #0x3FFF"); \
  SRbits.IPL = ipl;              \
  __builtin_write_DISICNT( DISI_save); } (void) 0

#define SET_AND_SAVE_CPU_IPL(save_to, ipl) { \
  save_to = SRbits.IPL; \
  SET_CPU_IPL(ipl); } (void) 0;

#define RESTORE_CPU_IPL(saved_to) SET_CPU_IPL(saved_to)

#define _DSRPAG_DSRPAG_POSITION                  0x00000000
#define _DSRPAG_DSRPAG_MASK                      0x000003FF
#define _DSRPAG_DSRPAG_LENGTH                    0x0000000A

#define _DSWPAG_DSWPAG_POSITION                  0x00000000
#define _DSWPAG_DSWPAG_MASK                      0x000001FF
#define _DSWPAG_DSWPAG_LENGTH                    0x00000009

#define _SR_C_POSITION                           0x00000000
#define _SR_C_MASK                               0x00000001
#define _SR_C_LENGTH                             0x00000001

#define _SR_Z_POSITION                           0x00000001
#define _SR_Z_MASK                               0x00000002
#define _SR_Z_LENGTH                             0x00000001

#define _SR_OV_POSITION                          0x00000002
#define _SR_OV_MASK                              0x00000004
#define _SR_OV_LENGTH                            0x00000001

#define _SR_N_POSITION                           0x00000003
#define _SR_N_MASK                               0x00000008
#define _SR_N_LENGTH                             0x00000001

#define _SR_RA_POSITION                          0x00000004
#define _SR_RA_MASK                              0x00000010
#define _SR_RA_LENGTH                            0x00000001

#define _SR_IPL_POSITION                         0x00000005
#define _SR_IPL_MASK                             0x000000E0
#define _SR_IPL_LENGTH                           0x00000003

#define _SR_DC_POSITION                          0x00000008
#define _SR_DC_MASK                              0x00000100
#define _SR_DC_LENGTH                            0x00000001

#define _SR_DA_POSITION                          0x00000009
#define _SR_DA_MASK                              0x00000200
#define _SR_DA_LENGTH                            0x00000001

#define _SR_SAB_POSITION                         0x0000000A
#define _SR_SAB_MASK                             0x00000400
#define _SR_SAB_LENGTH                           0x00000001

#define _SR_OAB_POSITION                         0x0000000B
#define _SR_OAB_MASK                             0x00000800
#define _SR_OAB_LENGTH                           0x00000001

#define _SR_SB_POSITION                          0x0000000C
#define _SR_SB_MASK                              0x00001000
#define _SR_SB_LENGTH                            0x00000001

#define _SR_SA_POSITION                          0x0000000D
#define _SR_SA_MASK                              0x00002000
#define _SR_SA_LENGTH                            0x00000001

#define _SR_OB_POSITION                          0x0000000E
#define _SR_OB_MASK                              0x00004000
#define _SR_OB_LENGTH                            0x00000001

#define _SR_OA_POSITION                          0x0000000F
#define _SR_OA_MASK                              0x00008000
#define _SR_OA_LENGTH                            0x00000001

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_IF_POSITION                      0x00000000
#define _CORCON_IF_MASK                          0x00000001
#define _CORCON_IF_LENGTH                        0x00000001

#define _CORCON_RND_POSITION                     0x00000001
#define _CORCON_RND_MASK                         0x00000002
#define _CORCON_RND_LENGTH                       0x00000001

#define _CORCON_SFA_POSITION                     0x00000002
#define _CORCON_SFA_MASK                         0x00000004
#define _CORCON_SFA_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _CORCON_ACCSAT_POSITION                  0x00000004
#define _CORCON_ACCSAT_MASK                      0x00000010
#define _CORCON_ACCSAT_LENGTH                    0x00000001

#define _CORCON_SATDW_POSITION                   0x00000005
#define _CORCON_SATDW_MASK                       0x00000020
#define _CORCON_SATDW_LENGTH                     0x00000001

#define _CORCON_SATB_POSITION                    0x00000006
#define _CORCON_SATB_MASK                        0x00000040
#define _CORCON_SATB_LENGTH                      0x00000001

#define _CORCON_SATA_POSITION                    0x00000007
#define _CORCON_SATA_MASK                        0x00000080
#define _CORCON_SATA_LENGTH                      0x00000001

#define _CORCON_DL_POSITION                      0x00000008
#define _CORCON_DL_MASK                          0x00000700
#define _CORCON_DL_LENGTH                        0x00000003

#define _CORCON_EDT_POSITION                     0x0000000B
#define _CORCON_EDT_MASK                         0x00000800
#define _CORCON_EDT_LENGTH                       0x00000001

#define _CORCON_US_POSITION                      0x0000000C
#define _CORCON_US_MASK                          0x00003000
#define _CORCON_US_LENGTH                        0x00000002

#define _CORCON_VAR_POSITION                     0x0000000F
#define _CORCON_VAR_MASK                         0x00008000
#define _CORCON_VAR_LENGTH                       0x00000001

#define _CORCON_DL0_POSITION                     0x00000008
#define _CORCON_DL0_MASK                         0x00000100
#define _CORCON_DL0_LENGTH                       0x00000001

#define _CORCON_DL1_POSITION                     0x00000009
#define _CORCON_DL1_MASK                         0x00000200
#define _CORCON_DL1_LENGTH                       0x00000001

#define _CORCON_DL2_POSITION                     0x0000000A
#define _CORCON_DL2_MASK                         0x00000400
#define _CORCON_DL2_LENGTH                       0x00000001

#define _CORCON_US0_POSITION                     0x0000000C
#define _CORCON_US0_MASK                         0x00001000
#define _CORCON_US0_LENGTH                       0x00000001

#define _CORCON_US1_POSITION                     0x0000000D
#define _CORCON_US1_MASK                         0x00002000
#define _CORCON_US1_LENGTH                       0x00000001

#define _MODCON_XWM_POSITION                     0x00000000
#define _MODCON_XWM_MASK                         0x0000000F
#define _MODCON_XWM_LENGTH                       0x00000004

#define _MODCON_YWM_POSITION                     0x00000004
#define _MODCON_YWM_MASK                         0x000000F0
#define _MODCON_YWM_LENGTH                       0x00000004

#define _MODCON_BWM_POSITION                     0x00000008
#define _MODCON_BWM_MASK                         0x00000F00
#define _MODCON_BWM_LENGTH                       0x00000004

#define _MODCON_YMODEN_POSITION                  0x0000000E
#define _MODCON_YMODEN_MASK                      0x00004000
#define _MODCON_YMODEN_LENGTH                    0x00000001

#define _MODCON_XMODEN_POSITION                  0x0000000F
#define _MODCON_XMODEN_MASK                      0x00008000
#define _MODCON_XMODEN_LENGTH                    0x00000001

#define _MODCON_XWM0_POSITION                    0x00000000
#define _MODCON_XWM0_MASK                        0x00000001
#define _MODCON_XWM0_LENGTH                      0x00000001

#define _MODCON_XWM1_POSITION                    0x00000001
#define _MODCON_XWM1_MASK                        0x00000002
#define _MODCON_XWM1_LENGTH                      0x00000001

#define _MODCON_XWM2_POSITION                    0x00000002
#define _MODCON_XWM2_MASK                        0x00000004
#define _MODCON_XWM2_LENGTH                      0x00000001

#define _MODCON_XWM3_POSITION                    0x00000003
#define _MODCON_XWM3_MASK                        0x00000008
#define _MODCON_XWM3_LENGTH                      0x00000001

#define _MODCON_YWM0_POSITION                    0x00000004
#define _MODCON_YWM0_MASK                        0x00000010
#define _MODCON_YWM0_LENGTH                      0x00000001

#define _MODCON_YWM1_POSITION                    0x00000005
#define _MODCON_YWM1_MASK                        0x00000020
#define _MODCON_YWM1_LENGTH                      0x00000001

#define _MODCON_YWM2_POSITION                    0x00000006
#define _MODCON_YWM2_MASK                        0x00000040
#define _MODCON_YWM2_LENGTH                      0x00000001

#define _MODCON_YWM3_POSITION                    0x00000007
#define _MODCON_YWM3_MASK                        0x00000080
#define _MODCON_YWM3_LENGTH                      0x00000001

#define _MODCON_BWM0_POSITION                    0x00000008
#define _MODCON_BWM0_MASK                        0x00000100
#define _MODCON_BWM0_LENGTH                      0x00000001

#define _MODCON_BWM1_POSITION                    0x00000009
#define _MODCON_BWM1_MASK                        0x00000200
#define _MODCON_BWM1_LENGTH                      0x00000001

#define _MODCON_BWM2_POSITION                    0x0000000A
#define _MODCON_BWM2_MASK                        0x00000400
#define _MODCON_BWM2_LENGTH                      0x00000001

#define _MODCON_BWM3_POSITION                    0x0000000B
#define _MODCON_BWM3_MASK                        0x00000800
#define _MODCON_BWM3_LENGTH                      0x00000001

#define _XBREV_XB_POSITION                       0x00000000
#define _XBREV_XB_MASK                           0x00007FFF
#define _XBREV_XB_LENGTH                         0x0000000F

#define _XBREV_BREN_POSITION                     0x0000000F
#define _XBREV_BREN_MASK                         0x00008000
#define _XBREV_BREN_LENGTH                       0x00000001

#define _XBREV_XB0_POSITION                      0x00000000
#define _XBREV_XB0_MASK                          0x00000001
#define _XBREV_XB0_LENGTH                        0x00000001

#define _XBREV_XB1_POSITION                      0x00000001
#define _XBREV_XB1_MASK                          0x00000002
#define _XBREV_XB1_LENGTH                        0x00000001

#define _XBREV_XB2_POSITION                      0x00000002
#define _XBREV_XB2_MASK                          0x00000004
#define _XBREV_XB2_LENGTH                        0x00000001

#define _XBREV_XB3_POSITION                      0x00000003
#define _XBREV_XB3_MASK                          0x00000008
#define _XBREV_XB3_LENGTH                        0x00000001

#define _XBREV_XB4_POSITION                      0x00000004
#define _XBREV_XB4_MASK                          0x00000010
#define _XBREV_XB4_LENGTH                        0x00000001

#define _XBREV_XB5_POSITION                      0x00000005
#define _XBREV_XB5_MASK                          0x00000020
#define _XBREV_XB5_LENGTH                        0x00000001

#define _XBREV_XB6_POSITION                      0x00000006
#define _XBREV_XB6_MASK                          0x00000040
#define _XBREV_XB6_LENGTH                        0x00000001

#define _XBREV_XB7_POSITION                      0x00000007
#define _XBREV_XB7_MASK                          0x00000080
#define _XBREV_XB7_LENGTH                        0x00000001

#define _XBREV_XB8_POSITION                      0x00000008
#define _XBREV_XB8_MASK                          0x00000100
#define _XBREV_XB8_LENGTH                        0x00000001

#define _XBREV_XB9_POSITION                      0x00000009
#define _XBREV_XB9_MASK                          0x00000200
#define _XBREV_XB9_LENGTH                        0x00000001

#define _XBREV_XB10_POSITION                     0x0000000A
#define _XBREV_XB10_MASK                         0x00000400
#define _XBREV_XB10_LENGTH                       0x00000001

#define _XBREV_XB11_POSITION                     0x0000000B
#define _XBREV_XB11_MASK                         0x00000800
#define _XBREV_XB11_LENGTH                       0x00000001

#define _XBREV_XB12_POSITION                     0x0000000C
#define _XBREV_XB12_MASK                         0x00001000
#define _XBREV_XB12_LENGTH                       0x00000001

#define _XBREV_XB13_POSITION                     0x0000000D
#define _XBREV_XB13_MASK                         0x00002000
#define _XBREV_XB13_LENGTH                       0x00000001

#define _XBREV_XB14_POSITION                     0x0000000E
#define _XBREV_XB14_MASK                         0x00004000
#define _XBREV_XB14_LENGTH                       0x00000001

#define _TBLPAG_TBLPAG_POSITION                  0x00000000
#define _TBLPAG_TBLPAG_MASK                      0x000000FF
#define _TBLPAG_TBLPAG_LENGTH                    0x00000008

#define _CTXTSTAT_MCTXI_POSITION                 0x00000000
#define _CTXTSTAT_MCTXI_MASK                     0x00000007
#define _CTXTSTAT_MCTXI_LENGTH                   0x00000003

#define _CTXTSTAT_CCTXI_POSITION                 0x00000008
#define _CTXTSTAT_CCTXI_MASK                     0x00000700
#define _CTXTSTAT_CCTXI_LENGTH                   0x00000003

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000006
#define _T1CON_TGATE_MASK                        0x00000040
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000030
#define _T2CON_TCKPS_LENGTH                      0x00000002

#define _T2CON_TGATE_POSITION                    0x00000006
#define _T2CON_TGATE_MASK                        0x00000040
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000030
#define _T3CON_TCKPS_LENGTH                      0x00000002

#define _T3CON_TGATE_POSITION                    0x00000006
#define _T3CON_TGATE_MASK                        0x00000040
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000030
#define _T4CON_TCKPS_LENGTH                      0x00000002

#define _T4CON_TGATE_POSITION                    0x00000006
#define _T4CON_TGATE_MASK                        0x00000040
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000030
#define _T5CON_TCKPS_LENGTH                      0x00000002

#define _T5CON_TGATE_POSITION                    0x00000006
#define _T5CON_TGATE_MASK                        0x00000040
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

#define _IC1CON1_ICM_POSITION                    0x00000000
#define _IC1CON1_ICM_MASK                        0x00000007
#define _IC1CON1_ICM_LENGTH                      0x00000003

#define _IC1CON1_ICBNE_POSITION                  0x00000003
#define _IC1CON1_ICBNE_MASK                      0x00000008
#define _IC1CON1_ICBNE_LENGTH                    0x00000001

#define _IC1CON1_ICOV_POSITION                   0x00000004
#define _IC1CON1_ICOV_MASK                       0x00000010
#define _IC1CON1_ICOV_LENGTH                     0x00000001

#define _IC1CON1_ICI_POSITION                    0x00000005
#define _IC1CON1_ICI_MASK                        0x00000060
#define _IC1CON1_ICI_LENGTH                      0x00000002

#define _IC1CON1_ICTSEL_POSITION                 0x0000000A
#define _IC1CON1_ICTSEL_MASK                     0x00001C00
#define _IC1CON1_ICTSEL_LENGTH                   0x00000003

#define _IC1CON1_ICSIDL_POSITION                 0x0000000D
#define _IC1CON1_ICSIDL_MASK                     0x00002000
#define _IC1CON1_ICSIDL_LENGTH                   0x00000001

#define _IC1CON1_ICM0_POSITION                   0x00000000
#define _IC1CON1_ICM0_MASK                       0x00000001
#define _IC1CON1_ICM0_LENGTH                     0x00000001

#define _IC1CON1_ICM1_POSITION                   0x00000001
#define _IC1CON1_ICM1_MASK                       0x00000002
#define _IC1CON1_ICM1_LENGTH                     0x00000001

#define _IC1CON1_ICM2_POSITION                   0x00000002
#define _IC1CON1_ICM2_MASK                       0x00000004
#define _IC1CON1_ICM2_LENGTH                     0x00000001

#define _IC1CON1_ICI0_POSITION                   0x00000005
#define _IC1CON1_ICI0_MASK                       0x00000020
#define _IC1CON1_ICI0_LENGTH                     0x00000001

#define _IC1CON1_ICI1_POSITION                   0x00000006
#define _IC1CON1_ICI1_MASK                       0x00000040
#define _IC1CON1_ICI1_LENGTH                     0x00000001

#define _IC1CON1_ICTSEL0_POSITION                0x0000000A
#define _IC1CON1_ICTSEL0_MASK                    0x00000400
#define _IC1CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC1CON1_ICTSEL1_POSITION                0x0000000B
#define _IC1CON1_ICTSEL1_MASK                    0x00000800
#define _IC1CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC1CON1_ICTSEL2_POSITION                0x0000000C
#define _IC1CON1_ICTSEL2_MASK                    0x00001000
#define _IC1CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC1CON2_SYNCSEL_POSITION                0x00000000
#define _IC1CON2_SYNCSEL_MASK                    0x0000001F
#define _IC1CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC1CON2_TRIGSTAT_POSITION               0x00000006
#define _IC1CON2_TRIGSTAT_MASK                   0x00000040
#define _IC1CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC1CON2_ICTRIG_POSITION                 0x00000007
#define _IC1CON2_ICTRIG_MASK                     0x00000080
#define _IC1CON2_ICTRIG_LENGTH                   0x00000001

#define _IC1CON2_IC32_POSITION                   0x00000008
#define _IC1CON2_IC32_MASK                       0x00000100
#define _IC1CON2_IC32_LENGTH                     0x00000001

#define _IC1CON2_SYNCSEL0_POSITION               0x00000000
#define _IC1CON2_SYNCSEL0_MASK                   0x00000001
#define _IC1CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL1_POSITION               0x00000001
#define _IC1CON2_SYNCSEL1_MASK                   0x00000002
#define _IC1CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL2_POSITION               0x00000002
#define _IC1CON2_SYNCSEL2_MASK                   0x00000004
#define _IC1CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL3_POSITION               0x00000003
#define _IC1CON2_SYNCSEL3_MASK                   0x00000008
#define _IC1CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL4_POSITION               0x00000004
#define _IC1CON2_SYNCSEL4_MASK                   0x00000010
#define _IC1CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC2CON1_ICM_POSITION                    0x00000000
#define _IC2CON1_ICM_MASK                        0x00000007
#define _IC2CON1_ICM_LENGTH                      0x00000003

#define _IC2CON1_ICBNE_POSITION                  0x00000003
#define _IC2CON1_ICBNE_MASK                      0x00000008
#define _IC2CON1_ICBNE_LENGTH                    0x00000001

#define _IC2CON1_ICOV_POSITION                   0x00000004
#define _IC2CON1_ICOV_MASK                       0x00000010
#define _IC2CON1_ICOV_LENGTH                     0x00000001

#define _IC2CON1_ICI_POSITION                    0x00000005
#define _IC2CON1_ICI_MASK                        0x00000060
#define _IC2CON1_ICI_LENGTH                      0x00000002

#define _IC2CON1_ICTSEL_POSITION                 0x0000000A
#define _IC2CON1_ICTSEL_MASK                     0x00001C00
#define _IC2CON1_ICTSEL_LENGTH                   0x00000003

#define _IC2CON1_ICSIDL_POSITION                 0x0000000D
#define _IC2CON1_ICSIDL_MASK                     0x00002000
#define _IC2CON1_ICSIDL_LENGTH                   0x00000001

#define _IC2CON1_ICM0_POSITION                   0x00000000
#define _IC2CON1_ICM0_MASK                       0x00000001
#define _IC2CON1_ICM0_LENGTH                     0x00000001

#define _IC2CON1_ICM1_POSITION                   0x00000001
#define _IC2CON1_ICM1_MASK                       0x00000002
#define _IC2CON1_ICM1_LENGTH                     0x00000001

#define _IC2CON1_ICM2_POSITION                   0x00000002
#define _IC2CON1_ICM2_MASK                       0x00000004
#define _IC2CON1_ICM2_LENGTH                     0x00000001

#define _IC2CON1_ICI0_POSITION                   0x00000005
#define _IC2CON1_ICI0_MASK                       0x00000020
#define _IC2CON1_ICI0_LENGTH                     0x00000001

#define _IC2CON1_ICI1_POSITION                   0x00000006
#define _IC2CON1_ICI1_MASK                       0x00000040
#define _IC2CON1_ICI1_LENGTH                     0x00000001

#define _IC2CON1_ICTSEL0_POSITION                0x0000000A
#define _IC2CON1_ICTSEL0_MASK                    0x00000400
#define _IC2CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC2CON1_ICTSEL1_POSITION                0x0000000B
#define _IC2CON1_ICTSEL1_MASK                    0x00000800
#define _IC2CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC2CON1_ICTSEL2_POSITION                0x0000000C
#define _IC2CON1_ICTSEL2_MASK                    0x00001000
#define _IC2CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC2CON2_SYNCSEL_POSITION                0x00000000
#define _IC2CON2_SYNCSEL_MASK                    0x0000001F
#define _IC2CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC2CON2_TRIGSTAT_POSITION               0x00000006
#define _IC2CON2_TRIGSTAT_MASK                   0x00000040
#define _IC2CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC2CON2_ICTRIG_POSITION                 0x00000007
#define _IC2CON2_ICTRIG_MASK                     0x00000080
#define _IC2CON2_ICTRIG_LENGTH                   0x00000001

#define _IC2CON2_IC32_POSITION                   0x00000008
#define _IC2CON2_IC32_MASK                       0x00000100
#define _IC2CON2_IC32_LENGTH                     0x00000001

#define _IC2CON2_SYNCSEL0_POSITION               0x00000000
#define _IC2CON2_SYNCSEL0_MASK                   0x00000001
#define _IC2CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL1_POSITION               0x00000001
#define _IC2CON2_SYNCSEL1_MASK                   0x00000002
#define _IC2CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL2_POSITION               0x00000002
#define _IC2CON2_SYNCSEL2_MASK                   0x00000004
#define _IC2CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL3_POSITION               0x00000003
#define _IC2CON2_SYNCSEL3_MASK                   0x00000008
#define _IC2CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL4_POSITION               0x00000004
#define _IC2CON2_SYNCSEL4_MASK                   0x00000010
#define _IC2CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC3CON1_ICM_POSITION                    0x00000000
#define _IC3CON1_ICM_MASK                        0x00000007
#define _IC3CON1_ICM_LENGTH                      0x00000003

#define _IC3CON1_ICBNE_POSITION                  0x00000003
#define _IC3CON1_ICBNE_MASK                      0x00000008
#define _IC3CON1_ICBNE_LENGTH                    0x00000001

#define _IC3CON1_ICOV_POSITION                   0x00000004
#define _IC3CON1_ICOV_MASK                       0x00000010
#define _IC3CON1_ICOV_LENGTH                     0x00000001

#define _IC3CON1_ICI_POSITION                    0x00000005
#define _IC3CON1_ICI_MASK                        0x00000060
#define _IC3CON1_ICI_LENGTH                      0x00000002

#define _IC3CON1_ICTSEL_POSITION                 0x0000000A
#define _IC3CON1_ICTSEL_MASK                     0x00001C00
#define _IC3CON1_ICTSEL_LENGTH                   0x00000003

#define _IC3CON1_ICSIDL_POSITION                 0x0000000D
#define _IC3CON1_ICSIDL_MASK                     0x00002000
#define _IC3CON1_ICSIDL_LENGTH                   0x00000001

#define _IC3CON1_ICM0_POSITION                   0x00000000
#define _IC3CON1_ICM0_MASK                       0x00000001
#define _IC3CON1_ICM0_LENGTH                     0x00000001

#define _IC3CON1_ICM1_POSITION                   0x00000001
#define _IC3CON1_ICM1_MASK                       0x00000002
#define _IC3CON1_ICM1_LENGTH                     0x00000001

#define _IC3CON1_ICM2_POSITION                   0x00000002
#define _IC3CON1_ICM2_MASK                       0x00000004
#define _IC3CON1_ICM2_LENGTH                     0x00000001

#define _IC3CON1_ICI0_POSITION                   0x00000005
#define _IC3CON1_ICI0_MASK                       0x00000020
#define _IC3CON1_ICI0_LENGTH                     0x00000001

#define _IC3CON1_ICI1_POSITION                   0x00000006
#define _IC3CON1_ICI1_MASK                       0x00000040
#define _IC3CON1_ICI1_LENGTH                     0x00000001

#define _IC3CON1_ICTSEL0_POSITION                0x0000000A
#define _IC3CON1_ICTSEL0_MASK                    0x00000400
#define _IC3CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC3CON1_ICTSEL1_POSITION                0x0000000B
#define _IC3CON1_ICTSEL1_MASK                    0x00000800
#define _IC3CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC3CON1_ICTSEL2_POSITION                0x0000000C
#define _IC3CON1_ICTSEL2_MASK                    0x00001000
#define _IC3CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC3CON2_SYNCSEL_POSITION                0x00000000
#define _IC3CON2_SYNCSEL_MASK                    0x0000001F
#define _IC3CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC3CON2_TRIGSTAT_POSITION               0x00000006
#define _IC3CON2_TRIGSTAT_MASK                   0x00000040
#define _IC3CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC3CON2_ICTRIG_POSITION                 0x00000007
#define _IC3CON2_ICTRIG_MASK                     0x00000080
#define _IC3CON2_ICTRIG_LENGTH                   0x00000001

#define _IC3CON2_IC32_POSITION                   0x00000008
#define _IC3CON2_IC32_MASK                       0x00000100
#define _IC3CON2_IC32_LENGTH                     0x00000001

#define _IC3CON2_SYNCSEL0_POSITION               0x00000000
#define _IC3CON2_SYNCSEL0_MASK                   0x00000001
#define _IC3CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL1_POSITION               0x00000001
#define _IC3CON2_SYNCSEL1_MASK                   0x00000002
#define _IC3CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL2_POSITION               0x00000002
#define _IC3CON2_SYNCSEL2_MASK                   0x00000004
#define _IC3CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL3_POSITION               0x00000003
#define _IC3CON2_SYNCSEL3_MASK                   0x00000008
#define _IC3CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL4_POSITION               0x00000004
#define _IC3CON2_SYNCSEL4_MASK                   0x00000010
#define _IC3CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC4CON1_ICM_POSITION                    0x00000000
#define _IC4CON1_ICM_MASK                        0x00000007
#define _IC4CON1_ICM_LENGTH                      0x00000003

#define _IC4CON1_ICBNE_POSITION                  0x00000003
#define _IC4CON1_ICBNE_MASK                      0x00000008
#define _IC4CON1_ICBNE_LENGTH                    0x00000001

#define _IC4CON1_ICOV_POSITION                   0x00000004
#define _IC4CON1_ICOV_MASK                       0x00000010
#define _IC4CON1_ICOV_LENGTH                     0x00000001

#define _IC4CON1_ICI_POSITION                    0x00000005
#define _IC4CON1_ICI_MASK                        0x00000060
#define _IC4CON1_ICI_LENGTH                      0x00000002

#define _IC4CON1_ICTSEL_POSITION                 0x0000000A
#define _IC4CON1_ICTSEL_MASK                     0x00001C00
#define _IC4CON1_ICTSEL_LENGTH                   0x00000003

#define _IC4CON1_ICSIDL_POSITION                 0x0000000D
#define _IC4CON1_ICSIDL_MASK                     0x00002000
#define _IC4CON1_ICSIDL_LENGTH                   0x00000001

#define _IC4CON1_ICM0_POSITION                   0x00000000
#define _IC4CON1_ICM0_MASK                       0x00000001
#define _IC4CON1_ICM0_LENGTH                     0x00000001

#define _IC4CON1_ICM1_POSITION                   0x00000001
#define _IC4CON1_ICM1_MASK                       0x00000002
#define _IC4CON1_ICM1_LENGTH                     0x00000001

#define _IC4CON1_ICM2_POSITION                   0x00000002
#define _IC4CON1_ICM2_MASK                       0x00000004
#define _IC4CON1_ICM2_LENGTH                     0x00000001

#define _IC4CON1_ICI0_POSITION                   0x00000005
#define _IC4CON1_ICI0_MASK                       0x00000020
#define _IC4CON1_ICI0_LENGTH                     0x00000001

#define _IC4CON1_ICI1_POSITION                   0x00000006
#define _IC4CON1_ICI1_MASK                       0x00000040
#define _IC4CON1_ICI1_LENGTH                     0x00000001

#define _IC4CON1_ICTSEL0_POSITION                0x0000000A
#define _IC4CON1_ICTSEL0_MASK                    0x00000400
#define _IC4CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC4CON1_ICTSEL1_POSITION                0x0000000B
#define _IC4CON1_ICTSEL1_MASK                    0x00000800
#define _IC4CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC4CON1_ICTSEL2_POSITION                0x0000000C
#define _IC4CON1_ICTSEL2_MASK                    0x00001000
#define _IC4CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC4CON2_SYNCSEL_POSITION                0x00000000
#define _IC4CON2_SYNCSEL_MASK                    0x0000001F
#define _IC4CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC4CON2_TRIGSTAT_POSITION               0x00000006
#define _IC4CON2_TRIGSTAT_MASK                   0x00000040
#define _IC4CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC4CON2_ICTRIG_POSITION                 0x00000007
#define _IC4CON2_ICTRIG_MASK                     0x00000080
#define _IC4CON2_ICTRIG_LENGTH                   0x00000001

#define _IC4CON2_IC32_POSITION                   0x00000008
#define _IC4CON2_IC32_MASK                       0x00000100
#define _IC4CON2_IC32_LENGTH                     0x00000001

#define _IC4CON2_SYNCSEL0_POSITION               0x00000000
#define _IC4CON2_SYNCSEL0_MASK                   0x00000001
#define _IC4CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL1_POSITION               0x00000001
#define _IC4CON2_SYNCSEL1_MASK                   0x00000002
#define _IC4CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL2_POSITION               0x00000002
#define _IC4CON2_SYNCSEL2_MASK                   0x00000004
#define _IC4CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL3_POSITION               0x00000003
#define _IC4CON2_SYNCSEL3_MASK                   0x00000008
#define _IC4CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL4_POSITION               0x00000004
#define _IC4CON2_SYNCSEL4_MASK                   0x00000010
#define _IC4CON2_SYNCSEL4_LENGTH                 0x00000001

#define _I2C1CON1_SEN_POSITION                   0x00000000
#define _I2C1CON1_SEN_MASK                       0x00000001
#define _I2C1CON1_SEN_LENGTH                     0x00000001

#define _I2C1CON1_RSEN_POSITION                  0x00000001
#define _I2C1CON1_RSEN_MASK                      0x00000002
#define _I2C1CON1_RSEN_LENGTH                    0x00000001

#define _I2C1CON1_PEN_POSITION                   0x00000002
#define _I2C1CON1_PEN_MASK                       0x00000004
#define _I2C1CON1_PEN_LENGTH                     0x00000001

#define _I2C1CON1_RCEN_POSITION                  0x00000003
#define _I2C1CON1_RCEN_MASK                      0x00000008
#define _I2C1CON1_RCEN_LENGTH                    0x00000001

#define _I2C1CON1_ACKEN_POSITION                 0x00000004
#define _I2C1CON1_ACKEN_MASK                     0x00000010
#define _I2C1CON1_ACKEN_LENGTH                   0x00000001

#define _I2C1CON1_ACKDT_POSITION                 0x00000005
#define _I2C1CON1_ACKDT_MASK                     0x00000020
#define _I2C1CON1_ACKDT_LENGTH                   0x00000001

#define _I2C1CON1_STREN_POSITION                 0x00000006
#define _I2C1CON1_STREN_MASK                     0x00000040
#define _I2C1CON1_STREN_LENGTH                   0x00000001

#define _I2C1CON1_GCEN_POSITION                  0x00000007
#define _I2C1CON1_GCEN_MASK                      0x00000080
#define _I2C1CON1_GCEN_LENGTH                    0x00000001

#define _I2C1CON1_SMEN_POSITION                  0x00000008
#define _I2C1CON1_SMEN_MASK                      0x00000100
#define _I2C1CON1_SMEN_LENGTH                    0x00000001

#define _I2C1CON1_DISSLW_POSITION                0x00000009
#define _I2C1CON1_DISSLW_MASK                    0x00000200
#define _I2C1CON1_DISSLW_LENGTH                  0x00000001

#define _I2C1CON1_A10M_POSITION                  0x0000000A
#define _I2C1CON1_A10M_MASK                      0x00000400
#define _I2C1CON1_A10M_LENGTH                    0x00000001

#define _I2C1CON1_STRICT_POSITION                0x0000000B
#define _I2C1CON1_STRICT_MASK                    0x00000800
#define _I2C1CON1_STRICT_LENGTH                  0x00000001

#define _I2C1CON1_SCLREL_POSITION                0x0000000C
#define _I2C1CON1_SCLREL_MASK                    0x00001000
#define _I2C1CON1_SCLREL_LENGTH                  0x00000001

#define _I2C1CON1_I2CSIDL_POSITION               0x0000000D
#define _I2C1CON1_I2CSIDL_MASK                   0x00002000
#define _I2C1CON1_I2CSIDL_LENGTH                 0x00000001

#define _I2C1CON1_I2CEN_POSITION                 0x0000000F
#define _I2C1CON1_I2CEN_MASK                     0x00008000
#define _I2C1CON1_I2CEN_LENGTH                   0x00000001

#define _I2C1CONL_SEN_POSITION                   0x00000000
#define _I2C1CONL_SEN_MASK                       0x00000001
#define _I2C1CONL_SEN_LENGTH                     0x00000001

#define _I2C1CONL_RSEN_POSITION                  0x00000001
#define _I2C1CONL_RSEN_MASK                      0x00000002
#define _I2C1CONL_RSEN_LENGTH                    0x00000001

#define _I2C1CONL_PEN_POSITION                   0x00000002
#define _I2C1CONL_PEN_MASK                       0x00000004
#define _I2C1CONL_PEN_LENGTH                     0x00000001

#define _I2C1CONL_RCEN_POSITION                  0x00000003
#define _I2C1CONL_RCEN_MASK                      0x00000008
#define _I2C1CONL_RCEN_LENGTH                    0x00000001

#define _I2C1CONL_ACKEN_POSITION                 0x00000004
#define _I2C1CONL_ACKEN_MASK                     0x00000010
#define _I2C1CONL_ACKEN_LENGTH                   0x00000001

#define _I2C1CONL_ACKDT_POSITION                 0x00000005
#define _I2C1CONL_ACKDT_MASK                     0x00000020
#define _I2C1CONL_ACKDT_LENGTH                   0x00000001

#define _I2C1CONL_STREN_POSITION                 0x00000006
#define _I2C1CONL_STREN_MASK                     0x00000040
#define _I2C1CONL_STREN_LENGTH                   0x00000001

#define _I2C1CONL_GCEN_POSITION                  0x00000007
#define _I2C1CONL_GCEN_MASK                      0x00000080
#define _I2C1CONL_GCEN_LENGTH                    0x00000001

#define _I2C1CONL_SMEN_POSITION                  0x00000008
#define _I2C1CONL_SMEN_MASK                      0x00000100
#define _I2C1CONL_SMEN_LENGTH                    0x00000001

#define _I2C1CONL_DISSLW_POSITION                0x00000009
#define _I2C1CONL_DISSLW_MASK                    0x00000200
#define _I2C1CONL_DISSLW_LENGTH                  0x00000001

#define _I2C1CONL_A10M_POSITION                  0x0000000A
#define _I2C1CONL_A10M_MASK                      0x00000400
#define _I2C1CONL_A10M_LENGTH                    0x00000001

#define _I2C1CONL_STRICT_POSITION                0x0000000B
#define _I2C1CONL_STRICT_MASK                    0x00000800
#define _I2C1CONL_STRICT_LENGTH                  0x00000001

#define _I2C1CONL_SCLREL_POSITION                0x0000000C
#define _I2C1CONL_SCLREL_MASK                    0x00001000
#define _I2C1CONL_SCLREL_LENGTH                  0x00000001

#define _I2C1CONL_I2CSIDL_POSITION               0x0000000D
#define _I2C1CONL_I2CSIDL_MASK                   0x00002000
#define _I2C1CONL_I2CSIDL_LENGTH                 0x00000001

#define _I2C1CONL_I2CEN_POSITION                 0x0000000F
#define _I2C1CONL_I2CEN_MASK                     0x00008000
#define _I2C1CONL_I2CEN_LENGTH                   0x00000001

#define _I2C1CON2_DHEN_POSITION                  0x00000000
#define _I2C1CON2_DHEN_MASK                      0x00000001
#define _I2C1CON2_DHEN_LENGTH                    0x00000001

#define _I2C1CON2_AHEN_POSITION                  0x00000001
#define _I2C1CON2_AHEN_MASK                      0x00000002
#define _I2C1CON2_AHEN_LENGTH                    0x00000001

#define _I2C1CON2_SBCDE_POSITION                 0x00000002
#define _I2C1CON2_SBCDE_MASK                     0x00000004
#define _I2C1CON2_SBCDE_LENGTH                   0x00000001

#define _I2C1CON2_SDAHT_POSITION                 0x00000003
#define _I2C1CON2_SDAHT_MASK                     0x00000008
#define _I2C1CON2_SDAHT_LENGTH                   0x00000001

#define _I2C1CON2_BOEN_POSITION                  0x00000004
#define _I2C1CON2_BOEN_MASK                      0x00000010
#define _I2C1CON2_BOEN_LENGTH                    0x00000001

#define _I2C1CON2_SCIE_POSITION                  0x00000005
#define _I2C1CON2_SCIE_MASK                      0x00000020
#define _I2C1CON2_SCIE_LENGTH                    0x00000001

#define _I2C1CON2_PCIE_POSITION                  0x00000006
#define _I2C1CON2_PCIE_MASK                      0x00000040
#define _I2C1CON2_PCIE_LENGTH                    0x00000001

#define _I2C1CONH_DHEN_POSITION                  0x00000000
#define _I2C1CONH_DHEN_MASK                      0x00000001
#define _I2C1CONH_DHEN_LENGTH                    0x00000001

#define _I2C1CONH_AHEN_POSITION                  0x00000001
#define _I2C1CONH_AHEN_MASK                      0x00000002
#define _I2C1CONH_AHEN_LENGTH                    0x00000001

#define _I2C1CONH_SBCDE_POSITION                 0x00000002
#define _I2C1CONH_SBCDE_MASK                     0x00000004
#define _I2C1CONH_SBCDE_LENGTH                   0x00000001

#define _I2C1CONH_SDAHT_POSITION                 0x00000003
#define _I2C1CONH_SDAHT_MASK                     0x00000008
#define _I2C1CONH_SDAHT_LENGTH                   0x00000001

#define _I2C1CONH_BOEN_POSITION                  0x00000004
#define _I2C1CONH_BOEN_MASK                      0x00000010
#define _I2C1CONH_BOEN_LENGTH                    0x00000001

#define _I2C1CONH_SCIE_POSITION                  0x00000005
#define _I2C1CONH_SCIE_MASK                      0x00000020
#define _I2C1CONH_SCIE_LENGTH                    0x00000001

#define _I2C1CONH_PCIE_POSITION                  0x00000006
#define _I2C1CONH_PCIE_MASK                      0x00000040
#define _I2C1CONH_PCIE_LENGTH                    0x00000001

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_ACKTIM_POSITION                0x0000000D
#define _I2C1STAT_ACKTIM_MASK                    0x00002000
#define _I2C1STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1ADD_ADD_POSITION                    0x00000000
#define _I2C1ADD_ADD_MASK                        0x000003FF
#define _I2C1ADD_ADD_LENGTH                      0x0000000A

#define _I2C1MSK_AMSK_POSITION                   0x00000000
#define _I2C1MSK_AMSK_MASK                       0x000003FF
#define _I2C1MSK_AMSK_LENGTH                     0x0000000A

#define _I2C1MSK_AMSK0_POSITION                  0x00000000
#define _I2C1MSK_AMSK0_MASK                      0x00000001
#define _I2C1MSK_AMSK0_LENGTH                    0x00000001

#define _I2C1MSK_AMSK1_POSITION                  0x00000001
#define _I2C1MSK_AMSK1_MASK                      0x00000002
#define _I2C1MSK_AMSK1_LENGTH                    0x00000001

#define _I2C1MSK_AMSK2_POSITION                  0x00000002
#define _I2C1MSK_AMSK2_MASK                      0x00000004
#define _I2C1MSK_AMSK2_LENGTH                    0x00000001

#define _I2C1MSK_AMSK3_POSITION                  0x00000003
#define _I2C1MSK_AMSK3_MASK                      0x00000008
#define _I2C1MSK_AMSK3_LENGTH                    0x00000001

#define _I2C1MSK_AMSK4_POSITION                  0x00000004
#define _I2C1MSK_AMSK4_MASK                      0x00000010
#define _I2C1MSK_AMSK4_LENGTH                    0x00000001

#define _I2C1MSK_AMSK5_POSITION                  0x00000005
#define _I2C1MSK_AMSK5_MASK                      0x00000020
#define _I2C1MSK_AMSK5_LENGTH                    0x00000001

#define _I2C1MSK_AMSK6_POSITION                  0x00000006
#define _I2C1MSK_AMSK6_MASK                      0x00000040
#define _I2C1MSK_AMSK6_LENGTH                    0x00000001

#define _I2C1MSK_AMSK7_POSITION                  0x00000007
#define _I2C1MSK_AMSK7_MASK                      0x00000080
#define _I2C1MSK_AMSK7_LENGTH                    0x00000001

#define _I2C1MSK_AMSK8_POSITION                  0x00000008
#define _I2C1MSK_AMSK8_MASK                      0x00000100
#define _I2C1MSK_AMSK8_LENGTH                    0x00000001

#define _I2C1MSK_AMSK9_POSITION                  0x00000009
#define _I2C1MSK_AMSK9_MASK                      0x00000200
#define _I2C1MSK_AMSK9_LENGTH                    0x00000001

#define _I2C1TRN_I2CTXDATA_POSITION              0x00000000
#define _I2C1TRN_I2CTXDATA_MASK                  0x000000FF
#define _I2C1TRN_I2CTXDATA_LENGTH                0x00000008

#define _I2C1RCV_I2CRXDATA_POSITION              0x00000000
#define _I2C1RCV_I2CRXDATA_MASK                  0x000000FF
#define _I2C1RCV_I2CRXDATA_LENGTH                0x00000008

#define _I2C2CON1_SEN_POSITION                   0x00000000
#define _I2C2CON1_SEN_MASK                       0x00000001
#define _I2C2CON1_SEN_LENGTH                     0x00000001

#define _I2C2CON1_RSEN_POSITION                  0x00000001
#define _I2C2CON1_RSEN_MASK                      0x00000002
#define _I2C2CON1_RSEN_LENGTH                    0x00000001

#define _I2C2CON1_PEN_POSITION                   0x00000002
#define _I2C2CON1_PEN_MASK                       0x00000004
#define _I2C2CON1_PEN_LENGTH                     0x00000001

#define _I2C2CON1_RCEN_POSITION                  0x00000003
#define _I2C2CON1_RCEN_MASK                      0x00000008
#define _I2C2CON1_RCEN_LENGTH                    0x00000001

#define _I2C2CON1_ACKEN_POSITION                 0x00000004
#define _I2C2CON1_ACKEN_MASK                     0x00000010
#define _I2C2CON1_ACKEN_LENGTH                   0x00000001

#define _I2C2CON1_ACKDT_POSITION                 0x00000005
#define _I2C2CON1_ACKDT_MASK                     0x00000020
#define _I2C2CON1_ACKDT_LENGTH                   0x00000001

#define _I2C2CON1_STREN_POSITION                 0x00000006
#define _I2C2CON1_STREN_MASK                     0x00000040
#define _I2C2CON1_STREN_LENGTH                   0x00000001

#define _I2C2CON1_GCEN_POSITION                  0x00000007
#define _I2C2CON1_GCEN_MASK                      0x00000080
#define _I2C2CON1_GCEN_LENGTH                    0x00000001

#define _I2C2CON1_SMEN_POSITION                  0x00000008
#define _I2C2CON1_SMEN_MASK                      0x00000100
#define _I2C2CON1_SMEN_LENGTH                    0x00000001

#define _I2C2CON1_DISSLW_POSITION                0x00000009
#define _I2C2CON1_DISSLW_MASK                    0x00000200
#define _I2C2CON1_DISSLW_LENGTH                  0x00000001

#define _I2C2CON1_A10M_POSITION                  0x0000000A
#define _I2C2CON1_A10M_MASK                      0x00000400
#define _I2C2CON1_A10M_LENGTH                    0x00000001

#define _I2C2CON1_STRICT_POSITION                0x0000000B
#define _I2C2CON1_STRICT_MASK                    0x00000800
#define _I2C2CON1_STRICT_LENGTH                  0x00000001

#define _I2C2CON1_SCLREL_POSITION                0x0000000C
#define _I2C2CON1_SCLREL_MASK                    0x00001000
#define _I2C2CON1_SCLREL_LENGTH                  0x00000001

#define _I2C2CON1_I2CSIDL_POSITION               0x0000000D
#define _I2C2CON1_I2CSIDL_MASK                   0x00002000
#define _I2C2CON1_I2CSIDL_LENGTH                 0x00000001

#define _I2C2CON1_I2CEN_POSITION                 0x0000000F
#define _I2C2CON1_I2CEN_MASK                     0x00008000
#define _I2C2CON1_I2CEN_LENGTH                   0x00000001

#define _I2C2CONL_SEN_POSITION                   0x00000000
#define _I2C2CONL_SEN_MASK                       0x00000001
#define _I2C2CONL_SEN_LENGTH                     0x00000001

#define _I2C2CONL_RSEN_POSITION                  0x00000001
#define _I2C2CONL_RSEN_MASK                      0x00000002
#define _I2C2CONL_RSEN_LENGTH                    0x00000001

#define _I2C2CONL_PEN_POSITION                   0x00000002
#define _I2C2CONL_PEN_MASK                       0x00000004
#define _I2C2CONL_PEN_LENGTH                     0x00000001

#define _I2C2CONL_RCEN_POSITION                  0x00000003
#define _I2C2CONL_RCEN_MASK                      0x00000008
#define _I2C2CONL_RCEN_LENGTH                    0x00000001

#define _I2C2CONL_ACKEN_POSITION                 0x00000004
#define _I2C2CONL_ACKEN_MASK                     0x00000010
#define _I2C2CONL_ACKEN_LENGTH                   0x00000001

#define _I2C2CONL_ACKDT_POSITION                 0x00000005
#define _I2C2CONL_ACKDT_MASK                     0x00000020
#define _I2C2CONL_ACKDT_LENGTH                   0x00000001

#define _I2C2CONL_STREN_POSITION                 0x00000006
#define _I2C2CONL_STREN_MASK                     0x00000040
#define _I2C2CONL_STREN_LENGTH                   0x00000001

#define _I2C2CONL_GCEN_POSITION                  0x00000007
#define _I2C2CONL_GCEN_MASK                      0x00000080
#define _I2C2CONL_GCEN_LENGTH                    0x00000001

#define _I2C2CONL_SMEN_POSITION                  0x00000008
#define _I2C2CONL_SMEN_MASK                      0x00000100
#define _I2C2CONL_SMEN_LENGTH                    0x00000001

#define _I2C2CONL_DISSLW_POSITION                0x00000009
#define _I2C2CONL_DISSLW_MASK                    0x00000200
#define _I2C2CONL_DISSLW_LENGTH                  0x00000001

#define _I2C2CONL_A10M_POSITION                  0x0000000A
#define _I2C2CONL_A10M_MASK                      0x00000400
#define _I2C2CONL_A10M_LENGTH                    0x00000001

#define _I2C2CONL_STRICT_POSITION                0x0000000B
#define _I2C2CONL_STRICT_MASK                    0x00000800
#define _I2C2CONL_STRICT_LENGTH                  0x00000001

#define _I2C2CONL_SCLREL_POSITION                0x0000000C
#define _I2C2CONL_SCLREL_MASK                    0x00001000
#define _I2C2CONL_SCLREL_LENGTH                  0x00000001

#define _I2C2CONL_I2CSIDL_POSITION               0x0000000D
#define _I2C2CONL_I2CSIDL_MASK                   0x00002000
#define _I2C2CONL_I2CSIDL_LENGTH                 0x00000001

#define _I2C2CONL_I2CEN_POSITION                 0x0000000F
#define _I2C2CONL_I2CEN_MASK                     0x00008000
#define _I2C2CONL_I2CEN_LENGTH                   0x00000001

#define _I2C2CON2_DHEN_POSITION                  0x00000000
#define _I2C2CON2_DHEN_MASK                      0x00000001
#define _I2C2CON2_DHEN_LENGTH                    0x00000001

#define _I2C2CON2_AHEN_POSITION                  0x00000001
#define _I2C2CON2_AHEN_MASK                      0x00000002
#define _I2C2CON2_AHEN_LENGTH                    0x00000001

#define _I2C2CON2_SBCDE_POSITION                 0x00000002
#define _I2C2CON2_SBCDE_MASK                     0x00000004
#define _I2C2CON2_SBCDE_LENGTH                   0x00000001

#define _I2C2CON2_SDAHT_POSITION                 0x00000003
#define _I2C2CON2_SDAHT_MASK                     0x00000008
#define _I2C2CON2_SDAHT_LENGTH                   0x00000001

#define _I2C2CON2_BOEN_POSITION                  0x00000004
#define _I2C2CON2_BOEN_MASK                      0x00000010
#define _I2C2CON2_BOEN_LENGTH                    0x00000001

#define _I2C2CON2_SCIE_POSITION                  0x00000005
#define _I2C2CON2_SCIE_MASK                      0x00000020
#define _I2C2CON2_SCIE_LENGTH                    0x00000001

#define _I2C2CON2_PCIE_POSITION                  0x00000006
#define _I2C2CON2_PCIE_MASK                      0x00000040
#define _I2C2CON2_PCIE_LENGTH                    0x00000001

#define _I2C2CONH_DHEN_POSITION                  0x00000000
#define _I2C2CONH_DHEN_MASK                      0x00000001
#define _I2C2CONH_DHEN_LENGTH                    0x00000001

#define _I2C2CONH_AHEN_POSITION                  0x00000001
#define _I2C2CONH_AHEN_MASK                      0x00000002
#define _I2C2CONH_AHEN_LENGTH                    0x00000001

#define _I2C2CONH_SBCDE_POSITION                 0x00000002
#define _I2C2CONH_SBCDE_MASK                     0x00000004
#define _I2C2CONH_SBCDE_LENGTH                   0x00000001

#define _I2C2CONH_SDAHT_POSITION                 0x00000003
#define _I2C2CONH_SDAHT_MASK                     0x00000008
#define _I2C2CONH_SDAHT_LENGTH                   0x00000001

#define _I2C2CONH_BOEN_POSITION                  0x00000004
#define _I2C2CONH_BOEN_MASK                      0x00000010
#define _I2C2CONH_BOEN_LENGTH                    0x00000001

#define _I2C2CONH_SCIE_POSITION                  0x00000005
#define _I2C2CONH_SCIE_MASK                      0x00000020
#define _I2C2CONH_SCIE_LENGTH                    0x00000001

#define _I2C2CONH_PCIE_POSITION                  0x00000006
#define _I2C2CONH_PCIE_MASK                      0x00000040
#define _I2C2CONH_PCIE_LENGTH                    0x00000001

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_ACKTIM_POSITION                0x0000000D
#define _I2C2STAT_ACKTIM_MASK                    0x00002000
#define _I2C2STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2ADD_ADD_POSITION                    0x00000000
#define _I2C2ADD_ADD_MASK                        0x000003FF
#define _I2C2ADD_ADD_LENGTH                      0x0000000A

#define _I2C2MSK_AMSK_POSITION                   0x00000000
#define _I2C2MSK_AMSK_MASK                       0x000003FF
#define _I2C2MSK_AMSK_LENGTH                     0x0000000A

#define _I2C2MSK_AMSK0_POSITION                  0x00000000
#define _I2C2MSK_AMSK0_MASK                      0x00000001
#define _I2C2MSK_AMSK0_LENGTH                    0x00000001

#define _I2C2MSK_AMSK1_POSITION                  0x00000001
#define _I2C2MSK_AMSK1_MASK                      0x00000002
#define _I2C2MSK_AMSK1_LENGTH                    0x00000001

#define _I2C2MSK_AMSK2_POSITION                  0x00000002
#define _I2C2MSK_AMSK2_MASK                      0x00000004
#define _I2C2MSK_AMSK2_LENGTH                    0x00000001

#define _I2C2MSK_AMSK3_POSITION                  0x00000003
#define _I2C2MSK_AMSK3_MASK                      0x00000008
#define _I2C2MSK_AMSK3_LENGTH                    0x00000001

#define _I2C2MSK_AMSK4_POSITION                  0x00000004
#define _I2C2MSK_AMSK4_MASK                      0x00000010
#define _I2C2MSK_AMSK4_LENGTH                    0x00000001

#define _I2C2MSK_AMSK5_POSITION                  0x00000005
#define _I2C2MSK_AMSK5_MASK                      0x00000020
#define _I2C2MSK_AMSK5_LENGTH                    0x00000001

#define _I2C2MSK_AMSK6_POSITION                  0x00000006
#define _I2C2MSK_AMSK6_MASK                      0x00000040
#define _I2C2MSK_AMSK6_LENGTH                    0x00000001

#define _I2C2MSK_AMSK7_POSITION                  0x00000007
#define _I2C2MSK_AMSK7_MASK                      0x00000080
#define _I2C2MSK_AMSK7_LENGTH                    0x00000001

#define _I2C2MSK_AMSK8_POSITION                  0x00000008
#define _I2C2MSK_AMSK8_MASK                      0x00000100
#define _I2C2MSK_AMSK8_LENGTH                    0x00000001

#define _I2C2MSK_AMSK9_POSITION                  0x00000009
#define _I2C2MSK_AMSK9_MASK                      0x00000200
#define _I2C2MSK_AMSK9_LENGTH                    0x00000001

#define _I2C2TRN_I2CTXDATA_POSITION              0x00000000
#define _I2C2TRN_I2CTXDATA_MASK                  0x000000FF
#define _I2C2TRN_I2CTXDATA_LENGTH                0x00000008

#define _I2C2RCV_I2CRXDATA_POSITION              0x00000000
#define _I2C2RCV_I2CRXDATA_MASK                  0x000000FF
#define _I2C2RCV_I2CRXDATA_LENGTH                0x00000008

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_URXINV_POSITION                  0x00000004
#define _U1MODE_URXINV_MASK                      0x00000010
#define _U1MODE_URXINV_LENGTH                    0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000D
#define _U1STA_UTXISEL0_MASK                     0x00002000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000E
#define _U1STA_UTXINV_MASK                       0x00004000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_TXINV_POSITION                    0x0000000E
#define _U1STA_TXINV_MASK                        0x00004000
#define _U1STA_TXINV_LENGTH                      0x00000001

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_URXINV_POSITION                  0x00000004
#define _U2MODE_URXINV_MASK                      0x00000010
#define _U2MODE_URXINV_LENGTH                    0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000D
#define _U2STA_UTXISEL0_MASK                     0x00002000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000E
#define _U2STA_UTXINV_MASK                       0x00004000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_TXINV_POSITION                    0x0000000E
#define _U2STA_TXINV_MASK                        0x00004000
#define _U2STA_TXINV_LENGTH                      0x00000001

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SISEL_POSITION                 0x00000002
#define _SPI1STAT_SISEL_MASK                     0x0000001C
#define _SPI1STAT_SISEL_LENGTH                   0x00000003

#define _SPI1STAT_SRXMPT_POSITION                0x00000005
#define _SPI1STAT_SRXMPT_MASK                    0x00000020
#define _SPI1STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMPT_POSITION                 0x00000007
#define _SPI1STAT_SRMPT_MASK                     0x00000080
#define _SPI1STAT_SRMPT_LENGTH                   0x00000001

#define _SPI1STAT_SPIBEC_POSITION                0x00000008
#define _SPI1STAT_SPIBEC_MASK                    0x00000700
#define _SPI1STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

#define _SPI1STAT_SISEL0_POSITION                0x00000002
#define _SPI1STAT_SISEL0_MASK                    0x00000004
#define _SPI1STAT_SISEL0_LENGTH                  0x00000001

#define _SPI1STAT_SISEL1_POSITION                0x00000003
#define _SPI1STAT_SISEL1_MASK                    0x00000008
#define _SPI1STAT_SISEL1_LENGTH                  0x00000001

#define _SPI1STAT_SISEL2_POSITION                0x00000004
#define _SPI1STAT_SISEL2_MASK                    0x00000010
#define _SPI1STAT_SISEL2_LENGTH                  0x00000001

#define _SPI1STAT_SPIBEC0_POSITION               0x00000008
#define _SPI1STAT_SPIBEC0_MASK                   0x00000100
#define _SPI1STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC1_POSITION               0x00000009
#define _SPI1STAT_SPIBEC1_MASK                   0x00000200
#define _SPI1STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI1STAT_SPIBEC2_MASK                   0x00000400
#define _SPI1STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI1CON1_PPRE_POSITION                  0x00000000
#define _SPI1CON1_PPRE_MASK                      0x00000003
#define _SPI1CON1_PPRE_LENGTH                    0x00000002

#define _SPI1CON1_SPRE_POSITION                  0x00000002
#define _SPI1CON1_SPRE_MASK                      0x0000001C
#define _SPI1CON1_SPRE_LENGTH                    0x00000003

#define _SPI1CON1_MSTEN_POSITION                 0x00000005
#define _SPI1CON1_MSTEN_MASK                     0x00000020
#define _SPI1CON1_MSTEN_LENGTH                   0x00000001

#define _SPI1CON1_CKP_POSITION                   0x00000006
#define _SPI1CON1_CKP_MASK                       0x00000040
#define _SPI1CON1_CKP_LENGTH                     0x00000001

#define _SPI1CON1_SSEN_POSITION                  0x00000007
#define _SPI1CON1_SSEN_MASK                      0x00000080
#define _SPI1CON1_SSEN_LENGTH                    0x00000001

#define _SPI1CON1_CKE_POSITION                   0x00000008
#define _SPI1CON1_CKE_MASK                       0x00000100
#define _SPI1CON1_CKE_LENGTH                     0x00000001

#define _SPI1CON1_SMP_POSITION                   0x00000009
#define _SPI1CON1_SMP_MASK                       0x00000200
#define _SPI1CON1_SMP_LENGTH                     0x00000001

#define _SPI1CON1_MODE16_POSITION                0x0000000A
#define _SPI1CON1_MODE16_MASK                    0x00000400
#define _SPI1CON1_MODE16_LENGTH                  0x00000001

#define _SPI1CON1_DISSDO_POSITION                0x0000000B
#define _SPI1CON1_DISSDO_MASK                    0x00000800
#define _SPI1CON1_DISSDO_LENGTH                  0x00000001

#define _SPI1CON1_DISSCK_POSITION                0x0000000C
#define _SPI1CON1_DISSCK_MASK                    0x00001000
#define _SPI1CON1_DISSCK_LENGTH                  0x00000001

#define _SPI1CON1_PPRE0_POSITION                 0x00000000
#define _SPI1CON1_PPRE0_MASK                     0x00000001
#define _SPI1CON1_PPRE0_LENGTH                   0x00000001

#define _SPI1CON1_PPRE1_POSITION                 0x00000001
#define _SPI1CON1_PPRE1_MASK                     0x00000002
#define _SPI1CON1_PPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE0_POSITION                 0x00000002
#define _SPI1CON1_SPRE0_MASK                     0x00000004
#define _SPI1CON1_SPRE0_LENGTH                   0x00000001

#define _SPI1CON1_SPRE1_POSITION                 0x00000003
#define _SPI1CON1_SPRE1_MASK                     0x00000008
#define _SPI1CON1_SPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE2_POSITION                 0x00000004
#define _SPI1CON1_SPRE2_MASK                     0x00000010
#define _SPI1CON1_SPRE2_LENGTH                   0x00000001

#define _SPI1CON2_SPIBEN_POSITION                0x00000000
#define _SPI1CON2_SPIBEN_MASK                    0x00000001
#define _SPI1CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI1CON2_FRMDLY_POSITION                0x00000001
#define _SPI1CON2_FRMDLY_MASK                    0x00000002
#define _SPI1CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI1CON2_FRMPOL_POSITION                0x0000000D
#define _SPI1CON2_FRMPOL_MASK                    0x00002000
#define _SPI1CON2_FRMPOL_LENGTH                  0x00000001

#define _SPI1CON2_SPIFSD_POSITION                0x0000000E
#define _SPI1CON2_SPIFSD_MASK                    0x00004000
#define _SPI1CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI1CON2_FRMEN_POSITION                 0x0000000F
#define _SPI1CON2_FRMEN_MASK                     0x00008000
#define _SPI1CON2_FRMEN_LENGTH                   0x00000001

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SISEL_POSITION                 0x00000002
#define _SPI2STAT_SISEL_MASK                     0x0000001C
#define _SPI2STAT_SISEL_LENGTH                   0x00000003

#define _SPI2STAT_SRXMPT_POSITION                0x00000005
#define _SPI2STAT_SRXMPT_MASK                    0x00000020
#define _SPI2STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMPT_POSITION                 0x00000007
#define _SPI2STAT_SRMPT_MASK                     0x00000080
#define _SPI2STAT_SRMPT_LENGTH                   0x00000001

#define _SPI2STAT_SPIBEC_POSITION                0x00000008
#define _SPI2STAT_SPIBEC_MASK                    0x00000700
#define _SPI2STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

#define _SPI2STAT_SISEL0_POSITION                0x00000002
#define _SPI2STAT_SISEL0_MASK                    0x00000004
#define _SPI2STAT_SISEL0_LENGTH                  0x00000001

#define _SPI2STAT_SISEL1_POSITION                0x00000003
#define _SPI2STAT_SISEL1_MASK                    0x00000008
#define _SPI2STAT_SISEL1_LENGTH                  0x00000001

#define _SPI2STAT_SISEL2_POSITION                0x00000004
#define _SPI2STAT_SISEL2_MASK                    0x00000010
#define _SPI2STAT_SISEL2_LENGTH                  0x00000001

#define _SPI2STAT_SPIBEC0_POSITION               0x00000008
#define _SPI2STAT_SPIBEC0_MASK                   0x00000100
#define _SPI2STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC1_POSITION               0x00000009
#define _SPI2STAT_SPIBEC1_MASK                   0x00000200
#define _SPI2STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI2STAT_SPIBEC2_MASK                   0x00000400
#define _SPI2STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI2CON1_PPRE_POSITION                  0x00000000
#define _SPI2CON1_PPRE_MASK                      0x00000003
#define _SPI2CON1_PPRE_LENGTH                    0x00000002

#define _SPI2CON1_SPRE_POSITION                  0x00000002
#define _SPI2CON1_SPRE_MASK                      0x0000001C
#define _SPI2CON1_SPRE_LENGTH                    0x00000003

#define _SPI2CON1_MSTEN_POSITION                 0x00000005
#define _SPI2CON1_MSTEN_MASK                     0x00000020
#define _SPI2CON1_MSTEN_LENGTH                   0x00000001

#define _SPI2CON1_CKP_POSITION                   0x00000006
#define _SPI2CON1_CKP_MASK                       0x00000040
#define _SPI2CON1_CKP_LENGTH                     0x00000001

#define _SPI2CON1_SSEN_POSITION                  0x00000007
#define _SPI2CON1_SSEN_MASK                      0x00000080
#define _SPI2CON1_SSEN_LENGTH                    0x00000001

#define _SPI2CON1_CKE_POSITION                   0x00000008
#define _SPI2CON1_CKE_MASK                       0x00000100
#define _SPI2CON1_CKE_LENGTH                     0x00000001

#define _SPI2CON1_SMP_POSITION                   0x00000009
#define _SPI2CON1_SMP_MASK                       0x00000200
#define _SPI2CON1_SMP_LENGTH                     0x00000001

#define _SPI2CON1_MODE16_POSITION                0x0000000A
#define _SPI2CON1_MODE16_MASK                    0x00000400
#define _SPI2CON1_MODE16_LENGTH                  0x00000001

#define _SPI2CON1_DISSDO_POSITION                0x0000000B
#define _SPI2CON1_DISSDO_MASK                    0x00000800
#define _SPI2CON1_DISSDO_LENGTH                  0x00000001

#define _SPI2CON1_DISSCK_POSITION                0x0000000C
#define _SPI2CON1_DISSCK_MASK                    0x00001000
#define _SPI2CON1_DISSCK_LENGTH                  0x00000001

#define _SPI2CON1_PPRE0_POSITION                 0x00000000
#define _SPI2CON1_PPRE0_MASK                     0x00000001
#define _SPI2CON1_PPRE0_LENGTH                   0x00000001

#define _SPI2CON1_PPRE1_POSITION                 0x00000001
#define _SPI2CON1_PPRE1_MASK                     0x00000002
#define _SPI2CON1_PPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE0_POSITION                 0x00000002
#define _SPI2CON1_SPRE0_MASK                     0x00000004
#define _SPI2CON1_SPRE0_LENGTH                   0x00000001

#define _SPI2CON1_SPRE1_POSITION                 0x00000003
#define _SPI2CON1_SPRE1_MASK                     0x00000008
#define _SPI2CON1_SPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE2_POSITION                 0x00000004
#define _SPI2CON1_SPRE2_MASK                     0x00000010
#define _SPI2CON1_SPRE2_LENGTH                   0x00000001

#define _SPI2CON2_SPIBEN_POSITION                0x00000000
#define _SPI2CON2_SPIBEN_MASK                    0x00000001
#define _SPI2CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI2CON2_FRMDLY_POSITION                0x00000001
#define _SPI2CON2_FRMDLY_MASK                    0x00000002
#define _SPI2CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI2CON2_FRMPOL_POSITION                0x0000000D
#define _SPI2CON2_FRMPOL_MASK                    0x00002000
#define _SPI2CON2_FRMPOL_LENGTH                  0x00000001

#define _SPI2CON2_SPIFSD_POSITION                0x0000000E
#define _SPI2CON2_SPIFSD_MASK                    0x00004000
#define _SPI2CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI2CON2_FRMEN_POSITION                 0x0000000F
#define _SPI2CON2_FRMEN_MASK                     0x00008000
#define _SPI2CON2_FRMEN_LENGTH                   0x00000001

#define _ADCON1L_PUMPEN_POSITION                 0x0000000C
#define _ADCON1L_PUMPEN_MASK                     0x00001000
#define _ADCON1L_PUMPEN_LENGTH                   0x00000001

#define _ADCON1L_ADSIDL_POSITION                 0x0000000D
#define _ADCON1L_ADSIDL_MASK                     0x00002000
#define _ADCON1L_ADSIDL_LENGTH                   0x00000001

#define _ADCON1L_ADON_POSITION                   0x0000000F
#define _ADCON1L_ADON_MASK                       0x00008000
#define _ADCON1L_ADON_LENGTH                     0x00000001

#define _ADCON1H_SHRRES_POSITION                 0x00000005
#define _ADCON1H_SHRRES_MASK                     0x00000060
#define _ADCON1H_SHRRES_LENGTH                   0x00000002

#define _ADCON1H_FORM_POSITION                   0x00000007
#define _ADCON1H_FORM_MASK                       0x00000080
#define _ADCON1H_FORM_LENGTH                     0x00000001

#define _ADCON1H_SHRRES0_POSITION                0x00000005
#define _ADCON1H_SHRRES0_MASK                    0x00000020
#define _ADCON1H_SHRRES0_LENGTH                  0x00000001

#define _ADCON1H_SHRRES1_POSITION                0x00000006
#define _ADCON1H_SHRRES1_MASK                    0x00000040
#define _ADCON1H_SHRRES1_LENGTH                  0x00000001

#define _ADCON2L_SHRADCS_POSITION                0x00000000
#define _ADCON2L_SHRADCS_MASK                    0x0000007F
#define _ADCON2L_SHRADCS_LENGTH                  0x00000007

#define _ADCON2L_SHREISEL_POSITION               0x00000008
#define _ADCON2L_SHREISEL_MASK                   0x00000700
#define _ADCON2L_SHREISEL_LENGTH                 0x00000003

#define _ADCON2L_EIEN_POSITION                   0x0000000C
#define _ADCON2L_EIEN_MASK                       0x00001000
#define _ADCON2L_EIEN_LENGTH                     0x00000001

#define _ADCON2L_REFERCIE_POSITION               0x0000000E
#define _ADCON2L_REFERCIE_MASK                   0x00004000
#define _ADCON2L_REFERCIE_LENGTH                 0x00000001

#define _ADCON2L_REFCIE_POSITION                 0x0000000F
#define _ADCON2L_REFCIE_MASK                     0x00008000
#define _ADCON2L_REFCIE_LENGTH                   0x00000001

#define _ADCON2L_SHRADCS0_POSITION               0x00000000
#define _ADCON2L_SHRADCS0_MASK                   0x00000001
#define _ADCON2L_SHRADCS0_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS1_POSITION               0x00000001
#define _ADCON2L_SHRADCS1_MASK                   0x00000002
#define _ADCON2L_SHRADCS1_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS2_POSITION               0x00000002
#define _ADCON2L_SHRADCS2_MASK                   0x00000004
#define _ADCON2L_SHRADCS2_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS3_POSITION               0x00000003
#define _ADCON2L_SHRADCS3_MASK                   0x00000008
#define _ADCON2L_SHRADCS3_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS4_POSITION               0x00000004
#define _ADCON2L_SHRADCS4_MASK                   0x00000010
#define _ADCON2L_SHRADCS4_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS5_POSITION               0x00000005
#define _ADCON2L_SHRADCS5_MASK                   0x00000020
#define _ADCON2L_SHRADCS5_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS6_POSITION               0x00000006
#define _ADCON2L_SHRADCS6_MASK                   0x00000040
#define _ADCON2L_SHRADCS6_LENGTH                 0x00000001

#define _ADCON2L_SHREISEL0_POSITION              0x00000008
#define _ADCON2L_SHREISEL0_MASK                  0x00000100
#define _ADCON2L_SHREISEL0_LENGTH                0x00000001

#define _ADCON2L_SHREISEL1_POSITION              0x00000009
#define _ADCON2L_SHREISEL1_MASK                  0x00000200
#define _ADCON2L_SHREISEL1_LENGTH                0x00000001

#define _ADCON2L_SHREISEL2_POSITION              0x0000000A
#define _ADCON2L_SHREISEL2_MASK                  0x00000400
#define _ADCON2L_SHREISEL2_LENGTH                0x00000001

#define _ADCON2H_SHRSAMC_POSITION                0x00000000
#define _ADCON2H_SHRSAMC_MASK                    0x000003FF
#define _ADCON2H_SHRSAMC_LENGTH                  0x0000000A

#define _ADCON2H_REFERR_POSITION                 0x0000000E
#define _ADCON2H_REFERR_MASK                     0x00004000
#define _ADCON2H_REFERR_LENGTH                   0x00000001

#define _ADCON2H_REFRDY_POSITION                 0x0000000F
#define _ADCON2H_REFRDY_MASK                     0x00008000
#define _ADCON2H_REFRDY_LENGTH                   0x00000001

#define _ADCON2H_SHRSAMC0_POSITION               0x00000000
#define _ADCON2H_SHRSAMC0_MASK                   0x00000001
#define _ADCON2H_SHRSAMC0_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC1_POSITION               0x00000001
#define _ADCON2H_SHRSAMC1_MASK                   0x00000002
#define _ADCON2H_SHRSAMC1_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC2_POSITION               0x00000002
#define _ADCON2H_SHRSAMC2_MASK                   0x00000004
#define _ADCON2H_SHRSAMC2_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC3_POSITION               0x00000003
#define _ADCON2H_SHRSAMC3_MASK                   0x00000008
#define _ADCON2H_SHRSAMC3_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC4_POSITION               0x00000004
#define _ADCON2H_SHRSAMC4_MASK                   0x00000010
#define _ADCON2H_SHRSAMC4_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC5_POSITION               0x00000005
#define _ADCON2H_SHRSAMC5_MASK                   0x00000020
#define _ADCON2H_SHRSAMC5_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC6_POSITION               0x00000006
#define _ADCON2H_SHRSAMC6_MASK                   0x00000040
#define _ADCON2H_SHRSAMC6_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC7_POSITION               0x00000007
#define _ADCON2H_SHRSAMC7_MASK                   0x00000080
#define _ADCON2H_SHRSAMC7_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC8_POSITION               0x00000008
#define _ADCON2H_SHRSAMC8_MASK                   0x00000100
#define _ADCON2H_SHRSAMC8_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC9_POSITION               0x00000009
#define _ADCON2H_SHRSAMC9_MASK                   0x00000200
#define _ADCON2H_SHRSAMC9_LENGTH                 0x00000001

#define _ADCON3L_CNVCHSEL_POSITION               0x00000000
#define _ADCON3L_CNVCHSEL_MASK                   0x0000003F
#define _ADCON3L_CNVCHSEL_LENGTH                 0x00000006

#define _ADCON3L_SWCTRG_POSITION                 0x00000006
#define _ADCON3L_SWCTRG_MASK                     0x00000040
#define _ADCON3L_SWCTRG_LENGTH                   0x00000001

#define _ADCON3L_SWLCTRG_POSITION                0x00000007
#define _ADCON3L_SWLCTRG_MASK                    0x00000080
#define _ADCON3L_SWLCTRG_LENGTH                  0x00000001

#define _ADCON3L_CNVRTCH_POSITION                0x00000008
#define _ADCON3L_CNVRTCH_MASK                    0x00000100
#define _ADCON3L_CNVRTCH_LENGTH                  0x00000001

#define _ADCON3L_SHRSAMP_POSITION                0x00000009
#define _ADCON3L_SHRSAMP_MASK                    0x00000200
#define _ADCON3L_SHRSAMP_LENGTH                  0x00000001

#define _ADCON3L_SUSPRDY_POSITION                0x0000000A
#define _ADCON3L_SUSPRDY_MASK                    0x00000400
#define _ADCON3L_SUSPRDY_LENGTH                  0x00000001

#define _ADCON3L_SUSPCIE_POSITION                0x0000000B
#define _ADCON3L_SUSPCIE_MASK                    0x00000800
#define _ADCON3L_SUSPCIE_LENGTH                  0x00000001

#define _ADCON3L_SUSPEND_POSITION                0x0000000C
#define _ADCON3L_SUSPEND_MASK                    0x00001000
#define _ADCON3L_SUSPEND_LENGTH                  0x00000001

#define _ADCON3L_REFSEL_POSITION                 0x0000000D
#define _ADCON3L_REFSEL_MASK                     0x0000E000
#define _ADCON3L_REFSEL_LENGTH                   0x00000003

#define _ADCON3L_CNVCHSEL0_POSITION              0x00000000
#define _ADCON3L_CNVCHSEL0_MASK                  0x00000001
#define _ADCON3L_CNVCHSEL0_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL1_POSITION              0x00000001
#define _ADCON3L_CNVCHSEL1_MASK                  0x00000002
#define _ADCON3L_CNVCHSEL1_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL2_POSITION              0x00000002
#define _ADCON3L_CNVCHSEL2_MASK                  0x00000004
#define _ADCON3L_CNVCHSEL2_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL3_POSITION              0x00000003
#define _ADCON3L_CNVCHSEL3_MASK                  0x00000008
#define _ADCON3L_CNVCHSEL3_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL4_POSITION              0x00000004
#define _ADCON3L_CNVCHSEL4_MASK                  0x00000010
#define _ADCON3L_CNVCHSEL4_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL5_POSITION              0x00000005
#define _ADCON3L_CNVCHSEL5_MASK                  0x00000020
#define _ADCON3L_CNVCHSEL5_LENGTH                0x00000001

#define _ADCON3L_REFSEL0_POSITION                0x0000000D
#define _ADCON3L_REFSEL0_MASK                    0x00002000
#define _ADCON3L_REFSEL0_LENGTH                  0x00000001

#define _ADCON3L_REFSEL1_POSITION                0x0000000E
#define _ADCON3L_REFSEL1_MASK                    0x00004000
#define _ADCON3L_REFSEL1_LENGTH                  0x00000001

#define _ADCON3L_REFSEL2_POSITION                0x0000000F
#define _ADCON3L_REFSEL2_MASK                    0x00008000
#define _ADCON3L_REFSEL2_LENGTH                  0x00000001

#define _ADCON3H_C0EN_POSITION                   0x00000000
#define _ADCON3H_C0EN_MASK                       0x00000001
#define _ADCON3H_C0EN_LENGTH                     0x00000001

#define _ADCON3H_C1EN_POSITION                   0x00000001
#define _ADCON3H_C1EN_MASK                       0x00000002
#define _ADCON3H_C1EN_LENGTH                     0x00000001

#define _ADCON3H_C2EN_POSITION                   0x00000002
#define _ADCON3H_C2EN_MASK                       0x00000004
#define _ADCON3H_C2EN_LENGTH                     0x00000001

#define _ADCON3H_C3EN_POSITION                   0x00000003
#define _ADCON3H_C3EN_MASK                       0x00000008
#define _ADCON3H_C3EN_LENGTH                     0x00000001

#define _ADCON3H_SHREN_POSITION                  0x00000007
#define _ADCON3H_SHREN_MASK                      0x00000080
#define _ADCON3H_SHREN_LENGTH                    0x00000001

#define _ADCON3H_CLKDIV_POSITION                 0x00000008
#define _ADCON3H_CLKDIV_MASK                     0x00003F00
#define _ADCON3H_CLKDIV_LENGTH                   0x00000006

#define _ADCON3H_CLKSEL_POSITION                 0x0000000E
#define _ADCON3H_CLKSEL_MASK                     0x0000C000
#define _ADCON3H_CLKSEL_LENGTH                   0x00000002

#define _ADCON3H_CLKDIV0_POSITION                0x00000008
#define _ADCON3H_CLKDIV0_MASK                    0x00000100
#define _ADCON3H_CLKDIV0_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV1_POSITION                0x00000009
#define _ADCON3H_CLKDIV1_MASK                    0x00000200
#define _ADCON3H_CLKDIV1_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV2_POSITION                0x0000000A
#define _ADCON3H_CLKDIV2_MASK                    0x00000400
#define _ADCON3H_CLKDIV2_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV3_POSITION                0x0000000B
#define _ADCON3H_CLKDIV3_MASK                    0x00000800
#define _ADCON3H_CLKDIV3_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV4_POSITION                0x0000000C
#define _ADCON3H_CLKDIV4_MASK                    0x00001000
#define _ADCON3H_CLKDIV4_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV5_POSITION                0x0000000D
#define _ADCON3H_CLKDIV5_MASK                    0x00002000
#define _ADCON3H_CLKDIV5_LENGTH                  0x00000001

#define _ADCON3H_CLKSEL0_POSITION                0x0000000E
#define _ADCON3H_CLKSEL0_MASK                    0x00004000
#define _ADCON3H_CLKSEL0_LENGTH                  0x00000001

#define _ADCON3H_CLKSEL1_POSITION                0x0000000F
#define _ADCON3H_CLKSEL1_MASK                    0x00008000
#define _ADCON3H_CLKSEL1_LENGTH                  0x00000001

#define _ADCON4L_SAMC0EN_POSITION                0x00000000
#define _ADCON4L_SAMC0EN_MASK                    0x00000001
#define _ADCON4L_SAMC0EN_LENGTH                  0x00000001

#define _ADCON4L_SAMC1EN_POSITION                0x00000001
#define _ADCON4L_SAMC1EN_MASK                    0x00000002
#define _ADCON4L_SAMC1EN_LENGTH                  0x00000001

#define _ADCON4L_SAMC2EN_POSITION                0x00000002
#define _ADCON4L_SAMC2EN_MASK                    0x00000004
#define _ADCON4L_SAMC2EN_LENGTH                  0x00000001

#define _ADCON4L_SAMC3EN_POSITION                0x00000003
#define _ADCON4L_SAMC3EN_MASK                    0x00000008
#define _ADCON4L_SAMC3EN_LENGTH                  0x00000001

#define _ADCON4L_SYNCTRG0_POSITION               0x00000008
#define _ADCON4L_SYNCTRG0_MASK                   0x00000100
#define _ADCON4L_SYNCTRG0_LENGTH                 0x00000001

#define _ADCON4L_SYNCTRG1_POSITION               0x00000009
#define _ADCON4L_SYNCTRG1_MASK                   0x00000200
#define _ADCON4L_SYNCTRG1_LENGTH                 0x00000001

#define _ADCON4L_SYNCTRG2_POSITION               0x0000000A
#define _ADCON4L_SYNCTRG2_MASK                   0x00000400
#define _ADCON4L_SYNCTRG2_LENGTH                 0x00000001

#define _ADCON4L_SYNCTRG3_POSITION               0x0000000B
#define _ADCON4L_SYNCTRG3_MASK                   0x00000800
#define _ADCON4L_SYNCTRG3_LENGTH                 0x00000001

#define _ADCON4H_C0CHS_POSITION                  0x00000000
#define _ADCON4H_C0CHS_MASK                      0x00000003
#define _ADCON4H_C0CHS_LENGTH                    0x00000002

#define _ADCON4H_C1CHS_POSITION                  0x00000002
#define _ADCON4H_C1CHS_MASK                      0x0000000C
#define _ADCON4H_C1CHS_LENGTH                    0x00000002

#define _ADCON4H_C2CHS_POSITION                  0x00000004
#define _ADCON4H_C2CHS_MASK                      0x00000030
#define _ADCON4H_C2CHS_LENGTH                    0x00000002

#define _ADCON4H_C3CHS_POSITION                  0x00000006
#define _ADCON4H_C3CHS_MASK                      0x000000C0
#define _ADCON4H_C3CHS_LENGTH                    0x00000002

#define _ADCON4H_C0CHS0_POSITION                 0x00000000
#define _ADCON4H_C0CHS0_MASK                     0x00000001
#define _ADCON4H_C0CHS0_LENGTH                   0x00000001

#define _ADCON4H_C0CHS1_POSITION                 0x00000001
#define _ADCON4H_C0CHS1_MASK                     0x00000002
#define _ADCON4H_C0CHS1_LENGTH                   0x00000001

#define _ADCON4H_C1CHS0_POSITION                 0x00000002
#define _ADCON4H_C1CHS0_MASK                     0x00000004
#define _ADCON4H_C1CHS0_LENGTH                   0x00000001

#define _ADCON4H_C1CHS1_POSITION                 0x00000003
#define _ADCON4H_C1CHS1_MASK                     0x00000008
#define _ADCON4H_C1CHS1_LENGTH                   0x00000001

#define _ADCON4H_C2CHS0_POSITION                 0x00000004
#define _ADCON4H_C2CHS0_MASK                     0x00000010
#define _ADCON4H_C2CHS0_LENGTH                   0x00000001

#define _ADCON4H_C2CHS1_POSITION                 0x00000005
#define _ADCON4H_C2CHS1_MASK                     0x00000020
#define _ADCON4H_C2CHS1_LENGTH                   0x00000001

#define _ADCON4H_C3CHS0_POSITION                 0x00000006
#define _ADCON4H_C3CHS0_MASK                     0x00000040
#define _ADCON4H_C3CHS0_LENGTH                   0x00000001

#define _ADCON4H_C3CHS1_POSITION                 0x00000007
#define _ADCON4H_C3CHS1_MASK                     0x00000080
#define _ADCON4H_C3CHS1_LENGTH                   0x00000001

#define _ADMOD0L_SIGN0_POSITION                  0x00000000
#define _ADMOD0L_SIGN0_MASK                      0x00000001
#define _ADMOD0L_SIGN0_LENGTH                    0x00000001

#define _ADMOD0L_DIFF0_POSITION                  0x00000001
#define _ADMOD0L_DIFF0_MASK                      0x00000002
#define _ADMOD0L_DIFF0_LENGTH                    0x00000001

#define _ADMOD0L_SIGN1_POSITION                  0x00000002
#define _ADMOD0L_SIGN1_MASK                      0x00000004
#define _ADMOD0L_SIGN1_LENGTH                    0x00000001

#define _ADMOD0L_DIFF1_POSITION                  0x00000003
#define _ADMOD0L_DIFF1_MASK                      0x00000008
#define _ADMOD0L_DIFF1_LENGTH                    0x00000001

#define _ADMOD0L_SIGN2_POSITION                  0x00000004
#define _ADMOD0L_SIGN2_MASK                      0x00000010
#define _ADMOD0L_SIGN2_LENGTH                    0x00000001

#define _ADMOD0L_DIFF2_POSITION                  0x00000005
#define _ADMOD0L_DIFF2_MASK                      0x00000020
#define _ADMOD0L_DIFF2_LENGTH                    0x00000001

#define _ADMOD0L_SIGN3_POSITION                  0x00000006
#define _ADMOD0L_SIGN3_MASK                      0x00000040
#define _ADMOD0L_SIGN3_LENGTH                    0x00000001

#define _ADMOD0L_DIFF3_POSITION                  0x00000007
#define _ADMOD0L_DIFF3_MASK                      0x00000080
#define _ADMOD0L_DIFF3_LENGTH                    0x00000001

#define _ADMOD0L_SIGN4_POSITION                  0x00000008
#define _ADMOD0L_SIGN4_MASK                      0x00000100
#define _ADMOD0L_SIGN4_LENGTH                    0x00000001

#define _ADMOD0L_DIFF4_POSITION                  0x00000009
#define _ADMOD0L_DIFF4_MASK                      0x00000200
#define _ADMOD0L_DIFF4_LENGTH                    0x00000001

#define _ADMOD0L_SIGN5_POSITION                  0x0000000A
#define _ADMOD0L_SIGN5_MASK                      0x00000400
#define _ADMOD0L_SIGN5_LENGTH                    0x00000001

#define _ADMOD0L_DIFF5_POSITION                  0x0000000B
#define _ADMOD0L_DIFF5_MASK                      0x00000800
#define _ADMOD0L_DIFF5_LENGTH                    0x00000001

#define _ADMOD0L_SIGN6_POSITION                  0x0000000C
#define _ADMOD0L_SIGN6_MASK                      0x00001000
#define _ADMOD0L_SIGN6_LENGTH                    0x00000001

#define _ADMOD0L_DIFF6_POSITION                  0x0000000D
#define _ADMOD0L_DIFF6_MASK                      0x00002000
#define _ADMOD0L_DIFF6_LENGTH                    0x00000001

#define _ADMOD0L_SIGN7_POSITION                  0x0000000E
#define _ADMOD0L_SIGN7_MASK                      0x00004000
#define _ADMOD0L_SIGN7_LENGTH                    0x00000001

#define _ADMOD0L_DIFF7_POSITION                  0x0000000F
#define _ADMOD0L_DIFF7_MASK                      0x00008000
#define _ADMOD0L_DIFF7_LENGTH                    0x00000001

#define _ADMOD1L_SIGN18_POSITION                 0x00000004
#define _ADMOD1L_SIGN18_MASK                     0x00000010
#define _ADMOD1L_SIGN18_LENGTH                   0x00000001

#define _ADMOD1L_DIFF18_POSITION                 0x00000005
#define _ADMOD1L_DIFF18_MASK                     0x00000020
#define _ADMOD1L_DIFF18_LENGTH                   0x00000001

#define _ADMOD1L_SIGN19_POSITION                 0x00000006
#define _ADMOD1L_SIGN19_MASK                     0x00000040
#define _ADMOD1L_SIGN19_LENGTH                   0x00000001

#define _ADMOD1L_DIFF19_POSITION                 0x00000007
#define _ADMOD1L_DIFF19_MASK                     0x00000080
#define _ADMOD1L_DIFF19_LENGTH                   0x00000001

#define _ADMOD1L_SIGN20_POSITION                 0x00000008
#define _ADMOD1L_SIGN20_MASK                     0x00000100
#define _ADMOD1L_SIGN20_LENGTH                   0x00000001

#define _ADMOD1L_DIFF20_POSITION                 0x00000009
#define _ADMOD1L_DIFF20_MASK                     0x00000200
#define _ADMOD1L_DIFF20_LENGTH                   0x00000001

#define _ADMOD1L_SIGN21_POSITION                 0x0000000A
#define _ADMOD1L_SIGN21_MASK                     0x00000400
#define _ADMOD1L_SIGN21_LENGTH                   0x00000001

#define _ADMOD1L_DIFF21_POSITION                 0x0000000B
#define _ADMOD1L_DIFF21_MASK                     0x00000800
#define _ADMOD1L_DIFF21_LENGTH                   0x00000001

#define _ADIEL_IE0_POSITION                      0x00000000
#define _ADIEL_IE0_MASK                          0x00000001
#define _ADIEL_IE0_LENGTH                        0x00000001

#define _ADIEL_IE1_POSITION                      0x00000001
#define _ADIEL_IE1_MASK                          0x00000002
#define _ADIEL_IE1_LENGTH                        0x00000001

#define _ADIEL_IE2_POSITION                      0x00000002
#define _ADIEL_IE2_MASK                          0x00000004
#define _ADIEL_IE2_LENGTH                        0x00000001

#define _ADIEL_IE3_POSITION                      0x00000003
#define _ADIEL_IE3_MASK                          0x00000008
#define _ADIEL_IE3_LENGTH                        0x00000001

#define _ADIEL_IE4_POSITION                      0x00000004
#define _ADIEL_IE4_MASK                          0x00000010
#define _ADIEL_IE4_LENGTH                        0x00000001

#define _ADIEL_IE5_POSITION                      0x00000005
#define _ADIEL_IE5_MASK                          0x00000020
#define _ADIEL_IE5_LENGTH                        0x00000001

#define _ADIEL_IE6_POSITION                      0x00000006
#define _ADIEL_IE6_MASK                          0x00000040
#define _ADIEL_IE6_LENGTH                        0x00000001

#define _ADIEL_IE7_POSITION                      0x00000007
#define _ADIEL_IE7_MASK                          0x00000080
#define _ADIEL_IE7_LENGTH                        0x00000001

#define _ADIEH_IE18_POSITION                     0x00000002
#define _ADIEH_IE18_MASK                         0x00000004
#define _ADIEH_IE18_LENGTH                       0x00000001

#define _ADIEH_IE19_POSITION                     0x00000003
#define _ADIEH_IE19_MASK                         0x00000008
#define _ADIEH_IE19_LENGTH                       0x00000001

#define _ADIEH_IE20_POSITION                     0x00000004
#define _ADIEH_IE20_MASK                         0x00000010
#define _ADIEH_IE20_LENGTH                       0x00000001

#define _ADIEH_IE21_POSITION                     0x00000005
#define _ADIEH_IE21_MASK                         0x00000020
#define _ADIEH_IE21_LENGTH                       0x00000001

#define _ADSTATL_AN0RDY_POSITION                 0x00000000
#define _ADSTATL_AN0RDY_MASK                     0x00000001
#define _ADSTATL_AN0RDY_LENGTH                   0x00000001

#define _ADSTATL_AN1RDY_POSITION                 0x00000001
#define _ADSTATL_AN1RDY_MASK                     0x00000002
#define _ADSTATL_AN1RDY_LENGTH                   0x00000001

#define _ADSTATL_AN2RDY_POSITION                 0x00000002
#define _ADSTATL_AN2RDY_MASK                     0x00000004
#define _ADSTATL_AN2RDY_LENGTH                   0x00000001

#define _ADSTATL_AN3RDY_POSITION                 0x00000003
#define _ADSTATL_AN3RDY_MASK                     0x00000008
#define _ADSTATL_AN3RDY_LENGTH                   0x00000001

#define _ADSTATL_AN4RDY_POSITION                 0x00000004
#define _ADSTATL_AN4RDY_MASK                     0x00000010
#define _ADSTATL_AN4RDY_LENGTH                   0x00000001

#define _ADSTATL_AN5RDY_POSITION                 0x00000005
#define _ADSTATL_AN5RDY_MASK                     0x00000020
#define _ADSTATL_AN5RDY_LENGTH                   0x00000001

#define _ADSTATL_AN6RDY_POSITION                 0x00000006
#define _ADSTATL_AN6RDY_MASK                     0x00000040
#define _ADSTATL_AN6RDY_LENGTH                   0x00000001

#define _ADSTATL_AN7RDY_POSITION                 0x00000007
#define _ADSTATL_AN7RDY_MASK                     0x00000080
#define _ADSTATL_AN7RDY_LENGTH                   0x00000001

#define _ADSTATH_AN18RDY_POSITION                0x00000002
#define _ADSTATH_AN18RDY_MASK                    0x00000004
#define _ADSTATH_AN18RDY_LENGTH                  0x00000001

#define _ADSTATH_AN19RDY_POSITION                0x00000003
#define _ADSTATH_AN19RDY_MASK                    0x00000008
#define _ADSTATH_AN19RDY_LENGTH                  0x00000001

#define _ADSTATH_AN20RDY_POSITION                0x00000004
#define _ADSTATH_AN20RDY_MASK                    0x00000010
#define _ADSTATH_AN20RDY_LENGTH                  0x00000001

#define _ADSTATH_AN21RDY_POSITION                0x00000005
#define _ADSTATH_AN21RDY_MASK                    0x00000020
#define _ADSTATH_AN21RDY_LENGTH                  0x00000001

#define _ADCMP0ENL_CMPEN0_POSITION               0x00000000
#define _ADCMP0ENL_CMPEN0_MASK                   0x00000001
#define _ADCMP0ENL_CMPEN0_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN1_POSITION               0x00000001
#define _ADCMP0ENL_CMPEN1_MASK                   0x00000002
#define _ADCMP0ENL_CMPEN1_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN2_POSITION               0x00000002
#define _ADCMP0ENL_CMPEN2_MASK                   0x00000004
#define _ADCMP0ENL_CMPEN2_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN3_POSITION               0x00000003
#define _ADCMP0ENL_CMPEN3_MASK                   0x00000008
#define _ADCMP0ENL_CMPEN3_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN4_POSITION               0x00000004
#define _ADCMP0ENL_CMPEN4_MASK                   0x00000010
#define _ADCMP0ENL_CMPEN4_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN5_POSITION               0x00000005
#define _ADCMP0ENL_CMPEN5_MASK                   0x00000020
#define _ADCMP0ENL_CMPEN5_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN6_POSITION               0x00000006
#define _ADCMP0ENL_CMPEN6_MASK                   0x00000040
#define _ADCMP0ENL_CMPEN6_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN7_POSITION               0x00000007
#define _ADCMP0ENL_CMPEN7_MASK                   0x00000080
#define _ADCMP0ENL_CMPEN7_LENGTH                 0x00000001

#define _ADCMP0ENH_CMPEN18_POSITION              0x00000002
#define _ADCMP0ENH_CMPEN18_MASK                  0x00000004
#define _ADCMP0ENH_CMPEN18_LENGTH                0x00000001

#define _ADCMP0ENH_CMPEN19_POSITION              0x00000003
#define _ADCMP0ENH_CMPEN19_MASK                  0x00000008
#define _ADCMP0ENH_CMPEN19_LENGTH                0x00000001

#define _ADCMP0ENH_CMPEN20_POSITION              0x00000004
#define _ADCMP0ENH_CMPEN20_MASK                  0x00000010
#define _ADCMP0ENH_CMPEN20_LENGTH                0x00000001

#define _ADCMP0ENH_CMPEN21_POSITION              0x00000005
#define _ADCMP0ENH_CMPEN21_MASK                  0x00000020
#define _ADCMP0ENH_CMPEN21_LENGTH                0x00000001

#define _ADCMP1ENL_CMPEN0_POSITION               0x00000000
#define _ADCMP1ENL_CMPEN0_MASK                   0x00000001
#define _ADCMP1ENL_CMPEN0_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN1_POSITION               0x00000001
#define _ADCMP1ENL_CMPEN1_MASK                   0x00000002
#define _ADCMP1ENL_CMPEN1_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN2_POSITION               0x00000002
#define _ADCMP1ENL_CMPEN2_MASK                   0x00000004
#define _ADCMP1ENL_CMPEN2_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN3_POSITION               0x00000003
#define _ADCMP1ENL_CMPEN3_MASK                   0x00000008
#define _ADCMP1ENL_CMPEN3_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN4_POSITION               0x00000004
#define _ADCMP1ENL_CMPEN4_MASK                   0x00000010
#define _ADCMP1ENL_CMPEN4_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN5_POSITION               0x00000005
#define _ADCMP1ENL_CMPEN5_MASK                   0x00000020
#define _ADCMP1ENL_CMPEN5_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN6_POSITION               0x00000006
#define _ADCMP1ENL_CMPEN6_MASK                   0x00000040
#define _ADCMP1ENL_CMPEN6_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN7_POSITION               0x00000007
#define _ADCMP1ENL_CMPEN7_MASK                   0x00000080
#define _ADCMP1ENL_CMPEN7_LENGTH                 0x00000001

#define _ADCMP1ENH_CMPEN18_POSITION              0x00000002
#define _ADCMP1ENH_CMPEN18_MASK                  0x00000004
#define _ADCMP1ENH_CMPEN18_LENGTH                0x00000001

#define _ADCMP1ENH_CMPEN19_POSITION              0x00000003
#define _ADCMP1ENH_CMPEN19_MASK                  0x00000008
#define _ADCMP1ENH_CMPEN19_LENGTH                0x00000001

#define _ADCMP1ENH_CMPEN20_POSITION              0x00000004
#define _ADCMP1ENH_CMPEN20_MASK                  0x00000010
#define _ADCMP1ENH_CMPEN20_LENGTH                0x00000001

#define _ADCMP1ENH_CMPEN21_POSITION              0x00000005
#define _ADCMP1ENH_CMPEN21_MASK                  0x00000020
#define _ADCMP1ENH_CMPEN21_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL_POSITION               0x00000000
#define _ADFL0CON_FLCHSEL_MASK                   0x0000001F
#define _ADFL0CON_FLCHSEL_LENGTH                 0x00000005

#define _ADFL0CON_RDY_POSITION                   0x00000008
#define _ADFL0CON_RDY_MASK                       0x00000100
#define _ADFL0CON_RDY_LENGTH                     0x00000001

#define _ADFL0CON_IE_POSITION                    0x00000009
#define _ADFL0CON_IE_MASK                        0x00000200
#define _ADFL0CON_IE_LENGTH                      0x00000001

#define _ADFL0CON_OVRSAM_POSITION                0x0000000A
#define _ADFL0CON_OVRSAM_MASK                    0x00001C00
#define _ADFL0CON_OVRSAM_LENGTH                  0x00000003

#define _ADFL0CON_MODE_POSITION                  0x0000000D
#define _ADFL0CON_MODE_MASK                      0x00006000
#define _ADFL0CON_MODE_LENGTH                    0x00000002

#define _ADFL0CON_FLEN_POSITION                  0x0000000F
#define _ADFL0CON_FLEN_MASK                      0x00008000
#define _ADFL0CON_FLEN_LENGTH                    0x00000001

#define _ADFL0CON_FLCHSEL0_POSITION              0x00000000
#define _ADFL0CON_FLCHSEL0_MASK                  0x00000001
#define _ADFL0CON_FLCHSEL0_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL1_POSITION              0x00000001
#define _ADFL0CON_FLCHSEL1_MASK                  0x00000002
#define _ADFL0CON_FLCHSEL1_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL2_POSITION              0x00000002
#define _ADFL0CON_FLCHSEL2_MASK                  0x00000004
#define _ADFL0CON_FLCHSEL2_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL3_POSITION              0x00000003
#define _ADFL0CON_FLCHSEL3_MASK                  0x00000008
#define _ADFL0CON_FLCHSEL3_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL4_POSITION              0x00000004
#define _ADFL0CON_FLCHSEL4_MASK                  0x00000010
#define _ADFL0CON_FLCHSEL4_LENGTH                0x00000001

#define _ADFL0CON_OVRSAM0_POSITION               0x0000000A
#define _ADFL0CON_OVRSAM0_MASK                   0x00000400
#define _ADFL0CON_OVRSAM0_LENGTH                 0x00000001

#define _ADFL0CON_OVRSAM1_POSITION               0x0000000B
#define _ADFL0CON_OVRSAM1_MASK                   0x00000800
#define _ADFL0CON_OVRSAM1_LENGTH                 0x00000001

#define _ADFL0CON_OVRSAM2_POSITION               0x0000000C
#define _ADFL0CON_OVRSAM2_MASK                   0x00001000
#define _ADFL0CON_OVRSAM2_LENGTH                 0x00000001

#define _ADFL1CON_FLCHSEL_POSITION               0x00000000
#define _ADFL1CON_FLCHSEL_MASK                   0x0000001F
#define _ADFL1CON_FLCHSEL_LENGTH                 0x00000005

#define _ADFL1CON_RDY_POSITION                   0x00000008
#define _ADFL1CON_RDY_MASK                       0x00000100
#define _ADFL1CON_RDY_LENGTH                     0x00000001

#define _ADFL1CON_IE_POSITION                    0x00000009
#define _ADFL1CON_IE_MASK                        0x00000200
#define _ADFL1CON_IE_LENGTH                      0x00000001

#define _ADFL1CON_OVRSAM_POSITION                0x0000000A
#define _ADFL1CON_OVRSAM_MASK                    0x00001C00
#define _ADFL1CON_OVRSAM_LENGTH                  0x00000003

#define _ADFL1CON_MODE_POSITION                  0x0000000D
#define _ADFL1CON_MODE_MASK                      0x00006000
#define _ADFL1CON_MODE_LENGTH                    0x00000002

#define _ADFL1CON_FLEN_POSITION                  0x0000000F
#define _ADFL1CON_FLEN_MASK                      0x00008000
#define _ADFL1CON_FLEN_LENGTH                    0x00000001

#define _ADFL1CON_FLCHSEL0_POSITION              0x00000000
#define _ADFL1CON_FLCHSEL0_MASK                  0x00000001
#define _ADFL1CON_FLCHSEL0_LENGTH                0x00000001

#define _ADFL1CON_FLCHSEL1_POSITION              0x00000001
#define _ADFL1CON_FLCHSEL1_MASK                  0x00000002
#define _ADFL1CON_FLCHSEL1_LENGTH                0x00000001

#define _ADFL1CON_FLCHSEL2_POSITION              0x00000002
#define _ADFL1CON_FLCHSEL2_MASK                  0x00000004
#define _ADFL1CON_FLCHSEL2_LENGTH                0x00000001

#define _ADFL1CON_FLCHSEL3_POSITION              0x00000003
#define _ADFL1CON_FLCHSEL3_MASK                  0x00000008
#define _ADFL1CON_FLCHSEL3_LENGTH                0x00000001

#define _ADFL1CON_FLCHSEL4_POSITION              0x00000004
#define _ADFL1CON_FLCHSEL4_MASK                  0x00000010
#define _ADFL1CON_FLCHSEL4_LENGTH                0x00000001

#define _ADFL1CON_OVRSAM0_POSITION               0x0000000A
#define _ADFL1CON_OVRSAM0_MASK                   0x00000400
#define _ADFL1CON_OVRSAM0_LENGTH                 0x00000001

#define _ADFL1CON_OVRSAM1_POSITION               0x0000000B
#define _ADFL1CON_OVRSAM1_MASK                   0x00000800
#define _ADFL1CON_OVRSAM1_LENGTH                 0x00000001

#define _ADFL1CON_OVRSAM2_POSITION               0x0000000C
#define _ADFL1CON_OVRSAM2_MASK                   0x00001000
#define _ADFL1CON_OVRSAM2_LENGTH                 0x00000001

#define _ADTRIG0L_TRGSRC0_POSITION               0x00000000
#define _ADTRIG0L_TRGSRC0_MASK                   0x0000001F
#define _ADTRIG0L_TRGSRC0_LENGTH                 0x00000005

#define _ADTRIG0L_TRGSRC1_POSITION               0x00000008
#define _ADTRIG0L_TRGSRC1_MASK                   0x00001F00
#define _ADTRIG0L_TRGSRC1_LENGTH                 0x00000005

#define _ADTRIG0L_TRIGSRC00_POSITION             0x00000000
#define _ADTRIG0L_TRIGSRC00_MASK                 0x00000001
#define _ADTRIG0L_TRIGSRC00_LENGTH               0x00000001

#define _ADTRIG0L_TRIGSRC01_POSITION             0x00000001
#define _ADTRIG0L_TRIGSRC01_MASK                 0x00000002
#define _ADTRIG0L_TRIGSRC01_LENGTH               0x00000001

#define _ADTRIG0L_TRIGSRC02_POSITION             0x00000002
#define _ADTRIG0L_TRIGSRC02_MASK                 0x00000004
#define _ADTRIG0L_TRIGSRC02_LENGTH               0x00000001

#define _ADTRIG0L_TRIGSRC03_POSITION             0x00000003
#define _ADTRIG0L_TRIGSRC03_MASK                 0x00000008
#define _ADTRIG0L_TRIGSRC03_LENGTH               0x00000001

#define _ADTRIG0L_TRIGSRC04_POSITION             0x00000004
#define _ADTRIG0L_TRIGSRC04_MASK                 0x00000010
#define _ADTRIG0L_TRIGSRC04_LENGTH               0x00000001

#define _ADTRIG0L_TRGSRC10_POSITION              0x00000008
#define _ADTRIG0L_TRGSRC10_MASK                  0x00000100
#define _ADTRIG0L_TRGSRC10_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC11_POSITION              0x00000009
#define _ADTRIG0L_TRGSRC11_MASK                  0x00000200
#define _ADTRIG0L_TRGSRC11_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC12_POSITION              0x0000000A
#define _ADTRIG0L_TRGSRC12_MASK                  0x00000400
#define _ADTRIG0L_TRGSRC12_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC13_POSITION              0x0000000B
#define _ADTRIG0L_TRGSRC13_MASK                  0x00000800
#define _ADTRIG0L_TRGSRC13_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC14_POSITION              0x0000000C
#define _ADTRIG0L_TRGSRC14_MASK                  0x00001000
#define _ADTRIG0L_TRGSRC14_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC2_POSITION               0x00000000
#define _ADTRIG0H_TRGSRC2_MASK                   0x0000001F
#define _ADTRIG0H_TRGSRC2_LENGTH                 0x00000005

#define _ADTRIG0H_TRGSRC3_POSITION               0x00000008
#define _ADTRIG0H_TRGSRC3_MASK                   0x00001F00
#define _ADTRIG0H_TRGSRC3_LENGTH                 0x00000005

#define _ADTRIG0H_TRIGSRC20_POSITION             0x00000000
#define _ADTRIG0H_TRIGSRC20_MASK                 0x00000001
#define _ADTRIG0H_TRIGSRC20_LENGTH               0x00000001

#define _ADTRIG0H_TRIGSRC21_POSITION             0x00000001
#define _ADTRIG0H_TRIGSRC21_MASK                 0x00000002
#define _ADTRIG0H_TRIGSRC21_LENGTH               0x00000001

#define _ADTRIG0H_TRIGSRC22_POSITION             0x00000002
#define _ADTRIG0H_TRIGSRC22_MASK                 0x00000004
#define _ADTRIG0H_TRIGSRC22_LENGTH               0x00000001

#define _ADTRIG0H_TRIGSRC23_POSITION             0x00000003
#define _ADTRIG0H_TRIGSRC23_MASK                 0x00000008
#define _ADTRIG0H_TRIGSRC23_LENGTH               0x00000001

#define _ADTRIG0H_TRIGSRC24_POSITION             0x00000004
#define _ADTRIG0H_TRIGSRC24_MASK                 0x00000010
#define _ADTRIG0H_TRIGSRC24_LENGTH               0x00000001

#define _ADTRIG0H_TRGSRC30_POSITION              0x00000008
#define _ADTRIG0H_TRGSRC30_MASK                  0x00000100
#define _ADTRIG0H_TRGSRC30_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC31_POSITION              0x00000009
#define _ADTRIG0H_TRGSRC31_MASK                  0x00000200
#define _ADTRIG0H_TRGSRC31_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC32_POSITION              0x0000000A
#define _ADTRIG0H_TRGSRC32_MASK                  0x00000400
#define _ADTRIG0H_TRGSRC32_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC33_POSITION              0x0000000B
#define _ADTRIG0H_TRGSRC33_MASK                  0x00000800
#define _ADTRIG0H_TRGSRC33_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC34_POSITION              0x0000000C
#define _ADTRIG0H_TRGSRC34_MASK                  0x00001000
#define _ADTRIG0H_TRGSRC34_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC4_POSITION               0x00000000
#define _ADTRIG1L_TRGSRC4_MASK                   0x0000001F
#define _ADTRIG1L_TRGSRC4_LENGTH                 0x00000005

#define _ADTRIG1L_TRGSRC5_POSITION               0x00000008
#define _ADTRIG1L_TRGSRC5_MASK                   0x00001F00
#define _ADTRIG1L_TRGSRC5_LENGTH                 0x00000005

#define _ADTRIG1L_TRIGSRC40_POSITION             0x00000000
#define _ADTRIG1L_TRIGSRC40_MASK                 0x00000001
#define _ADTRIG1L_TRIGSRC40_LENGTH               0x00000001

#define _ADTRIG1L_TRIGSRC41_POSITION             0x00000001
#define _ADTRIG1L_TRIGSRC41_MASK                 0x00000002
#define _ADTRIG1L_TRIGSRC41_LENGTH               0x00000001

#define _ADTRIG1L_TRIGSRC42_POSITION             0x00000002
#define _ADTRIG1L_TRIGSRC42_MASK                 0x00000004
#define _ADTRIG1L_TRIGSRC42_LENGTH               0x00000001

#define _ADTRIG1L_TRIGSRC43_POSITION             0x00000003
#define _ADTRIG1L_TRIGSRC43_MASK                 0x00000008
#define _ADTRIG1L_TRIGSRC43_LENGTH               0x00000001

#define _ADTRIG1L_TRIGSRC44_POSITION             0x00000004
#define _ADTRIG1L_TRIGSRC44_MASK                 0x00000010
#define _ADTRIG1L_TRIGSRC44_LENGTH               0x00000001

#define _ADTRIG1L_TRGSRC50_POSITION              0x00000008
#define _ADTRIG1L_TRGSRC50_MASK                  0x00000100
#define _ADTRIG1L_TRGSRC50_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC51_POSITION              0x00000009
#define _ADTRIG1L_TRGSRC51_MASK                  0x00000200
#define _ADTRIG1L_TRGSRC51_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC52_POSITION              0x0000000A
#define _ADTRIG1L_TRGSRC52_MASK                  0x00000400
#define _ADTRIG1L_TRGSRC52_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC53_POSITION              0x0000000B
#define _ADTRIG1L_TRGSRC53_MASK                  0x00000800
#define _ADTRIG1L_TRGSRC53_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC54_POSITION              0x0000000C
#define _ADTRIG1L_TRGSRC54_MASK                  0x00001000
#define _ADTRIG1L_TRGSRC54_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC6_POSITION               0x00000000
#define _ADTRIG1H_TRGSRC6_MASK                   0x0000001F
#define _ADTRIG1H_TRGSRC6_LENGTH                 0x00000005

#define _ADTRIG1H_TRGSRC7_POSITION               0x00000008
#define _ADTRIG1H_TRGSRC7_MASK                   0x00001F00
#define _ADTRIG1H_TRGSRC7_LENGTH                 0x00000005

#define _ADTRIG1H_TRIGSRC60_POSITION             0x00000000
#define _ADTRIG1H_TRIGSRC60_MASK                 0x00000001
#define _ADTRIG1H_TRIGSRC60_LENGTH               0x00000001

#define _ADTRIG1H_TRIGSRC61_POSITION             0x00000001
#define _ADTRIG1H_TRIGSRC61_MASK                 0x00000002
#define _ADTRIG1H_TRIGSRC61_LENGTH               0x00000001

#define _ADTRIG1H_TRIGSRC62_POSITION             0x00000002
#define _ADTRIG1H_TRIGSRC62_MASK                 0x00000004
#define _ADTRIG1H_TRIGSRC62_LENGTH               0x00000001

#define _ADTRIG1H_TRIGSRC63_POSITION             0x00000003
#define _ADTRIG1H_TRIGSRC63_MASK                 0x00000008
#define _ADTRIG1H_TRIGSRC63_LENGTH               0x00000001

#define _ADTRIG1H_TRIGSRC64_POSITION             0x00000004
#define _ADTRIG1H_TRIGSRC64_MASK                 0x00000010
#define _ADTRIG1H_TRIGSRC64_LENGTH               0x00000001

#define _ADTRIG1H_TRGSRC70_POSITION              0x00000008
#define _ADTRIG1H_TRGSRC70_MASK                  0x00000100
#define _ADTRIG1H_TRGSRC70_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC71_POSITION              0x00000009
#define _ADTRIG1H_TRGSRC71_MASK                  0x00000200
#define _ADTRIG1H_TRGSRC71_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC72_POSITION              0x0000000A
#define _ADTRIG1H_TRGSRC72_MASK                  0x00000400
#define _ADTRIG1H_TRGSRC72_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC73_POSITION              0x0000000B
#define _ADTRIG1H_TRGSRC73_MASK                  0x00000800
#define _ADTRIG1H_TRGSRC73_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC74_POSITION              0x0000000C
#define _ADTRIG1H_TRGSRC74_MASK                  0x00001000
#define _ADTRIG1H_TRGSRC74_LENGTH                0x00000001

#define _ADTRIG4H_TRGSRC18_POSITION              0x00000000
#define _ADTRIG4H_TRGSRC18_MASK                  0x0000001F
#define _ADTRIG4H_TRGSRC18_LENGTH                0x00000005

#define _ADTRIG4H_TRGSRC19_POSITION              0x00000008
#define _ADTRIG4H_TRGSRC19_MASK                  0x00001F00
#define _ADTRIG4H_TRGSRC19_LENGTH                0x00000005

#define _ADTRIG4H_TRIGSRC180_POSITION            0x00000000
#define _ADTRIG4H_TRIGSRC180_MASK                0x00000001
#define _ADTRIG4H_TRIGSRC180_LENGTH              0x00000001

#define _ADTRIG4H_TRIGSRC181_POSITION            0x00000001
#define _ADTRIG4H_TRIGSRC181_MASK                0x00000002
#define _ADTRIG4H_TRIGSRC181_LENGTH              0x00000001

#define _ADTRIG4H_TRIGSRC182_POSITION            0x00000002
#define _ADTRIG4H_TRIGSRC182_MASK                0x00000004
#define _ADTRIG4H_TRIGSRC182_LENGTH              0x00000001

#define _ADTRIG4H_TRIGSRC183_POSITION            0x00000003
#define _ADTRIG4H_TRIGSRC183_MASK                0x00000008
#define _ADTRIG4H_TRIGSRC183_LENGTH              0x00000001

#define _ADTRIG4H_TRIGSRC184_POSITION            0x00000004
#define _ADTRIG4H_TRIGSRC184_MASK                0x00000010
#define _ADTRIG4H_TRIGSRC184_LENGTH              0x00000001

#define _ADTRIG4H_TRGSRC190_POSITION             0x00000008
#define _ADTRIG4H_TRGSRC190_MASK                 0x00000100
#define _ADTRIG4H_TRGSRC190_LENGTH               0x00000001

#define _ADTRIG4H_TRGSRC191_POSITION             0x00000009
#define _ADTRIG4H_TRGSRC191_MASK                 0x00000200
#define _ADTRIG4H_TRGSRC191_LENGTH               0x00000001

#define _ADTRIG4H_TRGSRC192_POSITION             0x0000000A
#define _ADTRIG4H_TRGSRC192_MASK                 0x00000400
#define _ADTRIG4H_TRGSRC192_LENGTH               0x00000001

#define _ADTRIG4H_TRGSRC193_POSITION             0x0000000B
#define _ADTRIG4H_TRGSRC193_MASK                 0x00000800
#define _ADTRIG4H_TRGSRC193_LENGTH               0x00000001

#define _ADTRIG4H_TRGSRC194_POSITION             0x0000000C
#define _ADTRIG4H_TRGSRC194_MASK                 0x00001000
#define _ADTRIG4H_TRGSRC194_LENGTH               0x00000001

#define _ADTRIG5L_TRGSRC20_POSITION              0x00000000
#define _ADTRIG5L_TRGSRC20_MASK                  0x0000001F
#define _ADTRIG5L_TRGSRC20_LENGTH                0x00000005

#define _ADTRIG5L_TRGSRC21_POSITION              0x00000008
#define _ADTRIG5L_TRGSRC21_MASK                  0x00001F00
#define _ADTRIG5L_TRGSRC21_LENGTH                0x00000005

#define _ADTRIG5L_TRIGSRC200_POSITION            0x00000000
#define _ADTRIG5L_TRIGSRC200_MASK                0x00000001
#define _ADTRIG5L_TRIGSRC200_LENGTH              0x00000001

#define _ADTRIG5L_TRIGSRC201_POSITION            0x00000001
#define _ADTRIG5L_TRIGSRC201_MASK                0x00000002
#define _ADTRIG5L_TRIGSRC201_LENGTH              0x00000001

#define _ADTRIG5L_TRIGSRC202_POSITION            0x00000002
#define _ADTRIG5L_TRIGSRC202_MASK                0x00000004
#define _ADTRIG5L_TRIGSRC202_LENGTH              0x00000001

#define _ADTRIG5L_TRIGSRC203_POSITION            0x00000003
#define _ADTRIG5L_TRIGSRC203_MASK                0x00000008
#define _ADTRIG5L_TRIGSRC203_LENGTH              0x00000001

#define _ADTRIG5L_TRIGSRC204_POSITION            0x00000004
#define _ADTRIG5L_TRIGSRC204_MASK                0x00000010
#define _ADTRIG5L_TRIGSRC204_LENGTH              0x00000001

#define _ADTRIG5L_TRGSRC210_POSITION             0x00000008
#define _ADTRIG5L_TRGSRC210_MASK                 0x00000100
#define _ADTRIG5L_TRGSRC210_LENGTH               0x00000001

#define _ADTRIG5L_TRGSRC211_POSITION             0x00000009
#define _ADTRIG5L_TRGSRC211_MASK                 0x00000200
#define _ADTRIG5L_TRGSRC211_LENGTH               0x00000001

#define _ADTRIG5L_TRGSRC212_POSITION             0x0000000A
#define _ADTRIG5L_TRGSRC212_MASK                 0x00000400
#define _ADTRIG5L_TRGSRC212_LENGTH               0x00000001

#define _ADTRIG5L_TRGSRC213_POSITION             0x0000000B
#define _ADTRIG5L_TRGSRC213_MASK                 0x00000800
#define _ADTRIG5L_TRGSRC213_LENGTH               0x00000001

#define _ADTRIG5L_TRGSRC214_POSITION             0x0000000C
#define _ADTRIG5L_TRGSRC214_MASK                 0x00001000
#define _ADTRIG5L_TRGSRC214_LENGTH               0x00000001

#define _ADCMP0CON_LOLO_POSITION                 0x00000000
#define _ADCMP0CON_LOLO_MASK                     0x00000001
#define _ADCMP0CON_LOLO_LENGTH                   0x00000001

#define _ADCMP0CON_LOHI_POSITION                 0x00000001
#define _ADCMP0CON_LOHI_MASK                     0x00000002
#define _ADCMP0CON_LOHI_LENGTH                   0x00000001

#define _ADCMP0CON_HILO_POSITION                 0x00000002
#define _ADCMP0CON_HILO_MASK                     0x00000004
#define _ADCMP0CON_HILO_LENGTH                   0x00000001

#define _ADCMP0CON_HIHI_POSITION                 0x00000003
#define _ADCMP0CON_HIHI_MASK                     0x00000008
#define _ADCMP0CON_HIHI_LENGTH                   0x00000001

#define _ADCMP0CON_BTWN_POSITION                 0x00000004
#define _ADCMP0CON_BTWN_MASK                     0x00000010
#define _ADCMP0CON_BTWN_LENGTH                   0x00000001

#define _ADCMP0CON_STAT_POSITION                 0x00000005
#define _ADCMP0CON_STAT_MASK                     0x00000020
#define _ADCMP0CON_STAT_LENGTH                   0x00000001

#define _ADCMP0CON_IE_POSITION                   0x00000006
#define _ADCMP0CON_IE_MASK                       0x00000040
#define _ADCMP0CON_IE_LENGTH                     0x00000001

#define _ADCMP0CON_CMPEN_POSITION                0x00000007
#define _ADCMP0CON_CMPEN_MASK                    0x00000080
#define _ADCMP0CON_CMPEN_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL_POSITION                 0x00000008
#define _ADCMP0CON_CHNL_MASK                     0x00001F00
#define _ADCMP0CON_CHNL_LENGTH                   0x00000005

#define _ADCMP0CON_CHNL0_POSITION                0x00000008
#define _ADCMP0CON_CHNL0_MASK                    0x00000100
#define _ADCMP0CON_CHNL0_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL1_POSITION                0x00000009
#define _ADCMP0CON_CHNL1_MASK                    0x00000200
#define _ADCMP0CON_CHNL1_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL2_POSITION                0x0000000A
#define _ADCMP0CON_CHNL2_MASK                    0x00000400
#define _ADCMP0CON_CHNL2_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL3_POSITION                0x0000000B
#define _ADCMP0CON_CHNL3_MASK                    0x00000800
#define _ADCMP0CON_CHNL3_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL4_POSITION                0x0000000C
#define _ADCMP0CON_CHNL4_MASK                    0x00001000
#define _ADCMP0CON_CHNL4_LENGTH                  0x00000001

#define _ADCMP1CON_LOLO_POSITION                 0x00000000
#define _ADCMP1CON_LOLO_MASK                     0x00000001
#define _ADCMP1CON_LOLO_LENGTH                   0x00000001

#define _ADCMP1CON_LOHI_POSITION                 0x00000001
#define _ADCMP1CON_LOHI_MASK                     0x00000002
#define _ADCMP1CON_LOHI_LENGTH                   0x00000001

#define _ADCMP1CON_HILO_POSITION                 0x00000002
#define _ADCMP1CON_HILO_MASK                     0x00000004
#define _ADCMP1CON_HILO_LENGTH                   0x00000001

#define _ADCMP1CON_HIHI_POSITION                 0x00000003
#define _ADCMP1CON_HIHI_MASK                     0x00000008
#define _ADCMP1CON_HIHI_LENGTH                   0x00000001

#define _ADCMP1CON_BTWN_POSITION                 0x00000004
#define _ADCMP1CON_BTWN_MASK                     0x00000010
#define _ADCMP1CON_BTWN_LENGTH                   0x00000001

#define _ADCMP1CON_STAT_POSITION                 0x00000005
#define _ADCMP1CON_STAT_MASK                     0x00000020
#define _ADCMP1CON_STAT_LENGTH                   0x00000001

#define _ADCMP1CON_IE_POSITION                   0x00000006
#define _ADCMP1CON_IE_MASK                       0x00000040
#define _ADCMP1CON_IE_LENGTH                     0x00000001

#define _ADCMP1CON_CMPEN_POSITION                0x00000007
#define _ADCMP1CON_CMPEN_MASK                    0x00000080
#define _ADCMP1CON_CMPEN_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL_POSITION                 0x00000008
#define _ADCMP1CON_CHNL_MASK                     0x00001F00
#define _ADCMP1CON_CHNL_LENGTH                   0x00000005

#define _ADCMP1CON_CHNL0_POSITION                0x00000008
#define _ADCMP1CON_CHNL0_MASK                    0x00000100
#define _ADCMP1CON_CHNL0_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL1_POSITION                0x00000009
#define _ADCMP1CON_CHNL1_MASK                    0x00000200
#define _ADCMP1CON_CHNL1_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL2_POSITION                0x0000000A
#define _ADCMP1CON_CHNL2_MASK                    0x00000400
#define _ADCMP1CON_CHNL2_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL3_POSITION                0x0000000B
#define _ADCMP1CON_CHNL3_MASK                    0x00000800
#define _ADCMP1CON_CHNL3_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL4_POSITION                0x0000000C
#define _ADCMP1CON_CHNL4_MASK                    0x00001000
#define _ADCMP1CON_CHNL4_LENGTH                  0x00000001

#define _ADLVLTRGL_LVLEN0_POSITION               0x00000000
#define _ADLVLTRGL_LVLEN0_MASK                   0x00000001
#define _ADLVLTRGL_LVLEN0_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN1_POSITION               0x00000001
#define _ADLVLTRGL_LVLEN1_MASK                   0x00000002
#define _ADLVLTRGL_LVLEN1_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN2_POSITION               0x00000002
#define _ADLVLTRGL_LVLEN2_MASK                   0x00000004
#define _ADLVLTRGL_LVLEN2_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN3_POSITION               0x00000003
#define _ADLVLTRGL_LVLEN3_MASK                   0x00000008
#define _ADLVLTRGL_LVLEN3_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN4_POSITION               0x00000004
#define _ADLVLTRGL_LVLEN4_MASK                   0x00000010
#define _ADLVLTRGL_LVLEN4_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN5_POSITION               0x00000005
#define _ADLVLTRGL_LVLEN5_MASK                   0x00000020
#define _ADLVLTRGL_LVLEN5_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN6_POSITION               0x00000006
#define _ADLVLTRGL_LVLEN6_MASK                   0x00000040
#define _ADLVLTRGL_LVLEN6_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN7_POSITION               0x00000007
#define _ADLVLTRGL_LVLEN7_MASK                   0x00000080
#define _ADLVLTRGL_LVLEN7_LENGTH                 0x00000001

#define _ADLVLTRGH_LVLEN18_POSITION              0x00000002
#define _ADLVLTRGH_LVLEN18_MASK                  0x00000004
#define _ADLVLTRGH_LVLEN18_LENGTH                0x00000001

#define _ADLVLTRGH_LVLEN19_POSITION              0x00000003
#define _ADLVLTRGH_LVLEN19_MASK                  0x00000008
#define _ADLVLTRGH_LVLEN19_LENGTH                0x00000001

#define _ADLVLTRGH_LVLEN20_POSITION              0x00000004
#define _ADLVLTRGH_LVLEN20_MASK                  0x00000010
#define _ADLVLTRGH_LVLEN20_LENGTH                0x00000001

#define _ADLVLTRGH_LVLEN21_POSITION              0x00000005
#define _ADLVLTRGH_LVLEN21_MASK                  0x00000020
#define _ADLVLTRGH_LVLEN21_LENGTH                0x00000001

#define _ADCORE0L_SAMC_POSITION                  0x00000000
#define _ADCORE0L_SAMC_MASK                      0x000003FF
#define _ADCORE0L_SAMC_LENGTH                    0x0000000A

#define _ADCORE0L_SAMC0_POSITION                 0x00000000
#define _ADCORE0L_SAMC0_MASK                     0x00000001
#define _ADCORE0L_SAMC0_LENGTH                   0x00000001

#define _ADCORE0L_SAMC1_POSITION                 0x00000001
#define _ADCORE0L_SAMC1_MASK                     0x00000002
#define _ADCORE0L_SAMC1_LENGTH                   0x00000001

#define _ADCORE0L_SAMC2_POSITION                 0x00000002
#define _ADCORE0L_SAMC2_MASK                     0x00000004
#define _ADCORE0L_SAMC2_LENGTH                   0x00000001

#define _ADCORE0L_SAMC3_POSITION                 0x00000003
#define _ADCORE0L_SAMC3_MASK                     0x00000008
#define _ADCORE0L_SAMC3_LENGTH                   0x00000001

#define _ADCORE0L_SAMC4_POSITION                 0x00000004
#define _ADCORE0L_SAMC4_MASK                     0x00000010
#define _ADCORE0L_SAMC4_LENGTH                   0x00000001

#define _ADCORE0L_SAMC5_POSITION                 0x00000005
#define _ADCORE0L_SAMC5_MASK                     0x00000020
#define _ADCORE0L_SAMC5_LENGTH                   0x00000001

#define _ADCORE0L_SAMC6_POSITION                 0x00000006
#define _ADCORE0L_SAMC6_MASK                     0x00000040
#define _ADCORE0L_SAMC6_LENGTH                   0x00000001

#define _ADCORE0L_SAMC7_POSITION                 0x00000007
#define _ADCORE0L_SAMC7_MASK                     0x00000080
#define _ADCORE0L_SAMC7_LENGTH                   0x00000001

#define _ADCORE0L_SAMC8_POSITION                 0x00000008
#define _ADCORE0L_SAMC8_MASK                     0x00000100
#define _ADCORE0L_SAMC8_LENGTH                   0x00000001

#define _ADCORE0L_SAMC9_POSITION                 0x00000009
#define _ADCORE0L_SAMC9_MASK                     0x00000200
#define _ADCORE0L_SAMC9_LENGTH                   0x00000001

#define _ADCORE0H_ADCS_POSITION                  0x00000000
#define _ADCORE0H_ADCS_MASK                      0x0000007F
#define _ADCORE0H_ADCS_LENGTH                    0x00000007

#define _ADCORE0H_RES_POSITION                   0x00000008
#define _ADCORE0H_RES_MASK                       0x00000300
#define _ADCORE0H_RES_LENGTH                     0x00000002

#define _ADCORE0H_EISEL_POSITION                 0x0000000A
#define _ADCORE0H_EISEL_MASK                     0x00001C00
#define _ADCORE0H_EISEL_LENGTH                   0x00000003

#define _ADCORE0H_ADCS0_POSITION                 0x00000000
#define _ADCORE0H_ADCS0_MASK                     0x00000001
#define _ADCORE0H_ADCS0_LENGTH                   0x00000001

#define _ADCORE0H_ADCS1_POSITION                 0x00000001
#define _ADCORE0H_ADCS1_MASK                     0x00000002
#define _ADCORE0H_ADCS1_LENGTH                   0x00000001

#define _ADCORE0H_ADCS2_POSITION                 0x00000002
#define _ADCORE0H_ADCS2_MASK                     0x00000004
#define _ADCORE0H_ADCS2_LENGTH                   0x00000001

#define _ADCORE0H_ADCS3_POSITION                 0x00000003
#define _ADCORE0H_ADCS3_MASK                     0x00000008
#define _ADCORE0H_ADCS3_LENGTH                   0x00000001

#define _ADCORE0H_ADCS4_POSITION                 0x00000004
#define _ADCORE0H_ADCS4_MASK                     0x00000010
#define _ADCORE0H_ADCS4_LENGTH                   0x00000001

#define _ADCORE0H_ADCS5_POSITION                 0x00000005
#define _ADCORE0H_ADCS5_MASK                     0x00000020
#define _ADCORE0H_ADCS5_LENGTH                   0x00000001

#define _ADCORE0H_ADCS6_POSITION                 0x00000006
#define _ADCORE0H_ADCS6_MASK                     0x00000040
#define _ADCORE0H_ADCS6_LENGTH                   0x00000001

#define _ADCORE0H_RES0_POSITION                  0x00000008
#define _ADCORE0H_RES0_MASK                      0x00000100
#define _ADCORE0H_RES0_LENGTH                    0x00000001

#define _ADCORE0H_RES1_POSITION                  0x00000009
#define _ADCORE0H_RES1_MASK                      0x00000200
#define _ADCORE0H_RES1_LENGTH                    0x00000001

#define _ADCORE0H_EISEL0_POSITION                0x0000000A
#define _ADCORE0H_EISEL0_MASK                    0x00000400
#define _ADCORE0H_EISEL0_LENGTH                  0x00000001

#define _ADCORE0H_EISEL1_POSITION                0x0000000B
#define _ADCORE0H_EISEL1_MASK                    0x00000800
#define _ADCORE0H_EISEL1_LENGTH                  0x00000001

#define _ADCORE0H_EISEL2_POSITION                0x0000000C
#define _ADCORE0H_EISEL2_MASK                    0x00001000
#define _ADCORE0H_EISEL2_LENGTH                  0x00000001

#define _ADCORE1L_SAMC_POSITION                  0x00000000
#define _ADCORE1L_SAMC_MASK                      0x000003FF
#define _ADCORE1L_SAMC_LENGTH                    0x0000000A

#define _ADCORE1L_SAMC0_POSITION                 0x00000000
#define _ADCORE1L_SAMC0_MASK                     0x00000001
#define _ADCORE1L_SAMC0_LENGTH                   0x00000001

#define _ADCORE1L_SAMC1_POSITION                 0x00000001
#define _ADCORE1L_SAMC1_MASK                     0x00000002
#define _ADCORE1L_SAMC1_LENGTH                   0x00000001

#define _ADCORE1L_SAMC2_POSITION                 0x00000002
#define _ADCORE1L_SAMC2_MASK                     0x00000004
#define _ADCORE1L_SAMC2_LENGTH                   0x00000001

#define _ADCORE1L_SAMC3_POSITION                 0x00000003
#define _ADCORE1L_SAMC3_MASK                     0x00000008
#define _ADCORE1L_SAMC3_LENGTH                   0x00000001

#define _ADCORE1L_SAMC4_POSITION                 0x00000004
#define _ADCORE1L_SAMC4_MASK                     0x00000010
#define _ADCORE1L_SAMC4_LENGTH                   0x00000001

#define _ADCORE1L_SAMC5_POSITION                 0x00000005
#define _ADCORE1L_SAMC5_MASK                     0x00000020
#define _ADCORE1L_SAMC5_LENGTH                   0x00000001

#define _ADCORE1L_SAMC6_POSITION                 0x00000006
#define _ADCORE1L_SAMC6_MASK                     0x00000040
#define _ADCORE1L_SAMC6_LENGTH                   0x00000001

#define _ADCORE1L_SAMC7_POSITION                 0x00000007
#define _ADCORE1L_SAMC7_MASK                     0x00000080
#define _ADCORE1L_SAMC7_LENGTH                   0x00000001

#define _ADCORE1L_SAMC8_POSITION                 0x00000008
#define _ADCORE1L_SAMC8_MASK                     0x00000100
#define _ADCORE1L_SAMC8_LENGTH                   0x00000001

#define _ADCORE1L_SAMC9_POSITION                 0x00000009
#define _ADCORE1L_SAMC9_MASK                     0x00000200
#define _ADCORE1L_SAMC9_LENGTH                   0x00000001

#define _ADCORE1H_ADCS_POSITION                  0x00000000
#define _ADCORE1H_ADCS_MASK                      0x0000007F
#define _ADCORE1H_ADCS_LENGTH                    0x00000007

#define _ADCORE1H_RES_POSITION                   0x00000008
#define _ADCORE1H_RES_MASK                       0x00000300
#define _ADCORE1H_RES_LENGTH                     0x00000002

#define _ADCORE1H_EISEL_POSITION                 0x0000000A
#define _ADCORE1H_EISEL_MASK                     0x00001C00
#define _ADCORE1H_EISEL_LENGTH                   0x00000003

#define _ADCORE1H_ADCS0_POSITION                 0x00000000
#define _ADCORE1H_ADCS0_MASK                     0x00000001
#define _ADCORE1H_ADCS0_LENGTH                   0x00000001

#define _ADCORE1H_ADCS1_POSITION                 0x00000001
#define _ADCORE1H_ADCS1_MASK                     0x00000002
#define _ADCORE1H_ADCS1_LENGTH                   0x00000001

#define _ADCORE1H_ADCS2_POSITION                 0x00000002
#define _ADCORE1H_ADCS2_MASK                     0x00000004
#define _ADCORE1H_ADCS2_LENGTH                   0x00000001

#define _ADCORE1H_ADCS3_POSITION                 0x00000003
#define _ADCORE1H_ADCS3_MASK                     0x00000008
#define _ADCORE1H_ADCS3_LENGTH                   0x00000001

#define _ADCORE1H_ADCS4_POSITION                 0x00000004
#define _ADCORE1H_ADCS4_MASK                     0x00000010
#define _ADCORE1H_ADCS4_LENGTH                   0x00000001

#define _ADCORE1H_ADCS5_POSITION                 0x00000005
#define _ADCORE1H_ADCS5_MASK                     0x00000020
#define _ADCORE1H_ADCS5_LENGTH                   0x00000001

#define _ADCORE1H_ADCS6_POSITION                 0x00000006
#define _ADCORE1H_ADCS6_MASK                     0x00000040
#define _ADCORE1H_ADCS6_LENGTH                   0x00000001

#define _ADCORE1H_RES0_POSITION                  0x00000008
#define _ADCORE1H_RES0_MASK                      0x00000100
#define _ADCORE1H_RES0_LENGTH                    0x00000001

#define _ADCORE1H_RES1_POSITION                  0x00000009
#define _ADCORE1H_RES1_MASK                      0x00000200
#define _ADCORE1H_RES1_LENGTH                    0x00000001

#define _ADCORE1H_EISEL0_POSITION                0x0000000A
#define _ADCORE1H_EISEL0_MASK                    0x00000400
#define _ADCORE1H_EISEL0_LENGTH                  0x00000001

#define _ADCORE1H_EISEL1_POSITION                0x0000000B
#define _ADCORE1H_EISEL1_MASK                    0x00000800
#define _ADCORE1H_EISEL1_LENGTH                  0x00000001

#define _ADCORE1H_EISEL2_POSITION                0x0000000C
#define _ADCORE1H_EISEL2_MASK                    0x00001000
#define _ADCORE1H_EISEL2_LENGTH                  0x00000001

#define _ADCORE2L_SAMC_POSITION                  0x00000000
#define _ADCORE2L_SAMC_MASK                      0x000003FF
#define _ADCORE2L_SAMC_LENGTH                    0x0000000A

#define _ADCORE2L_SAMC0_POSITION                 0x00000000
#define _ADCORE2L_SAMC0_MASK                     0x00000001
#define _ADCORE2L_SAMC0_LENGTH                   0x00000001

#define _ADCORE2L_SAMC1_POSITION                 0x00000001
#define _ADCORE2L_SAMC1_MASK                     0x00000002
#define _ADCORE2L_SAMC1_LENGTH                   0x00000001

#define _ADCORE2L_SAMC2_POSITION                 0x00000002
#define _ADCORE2L_SAMC2_MASK                     0x00000004
#define _ADCORE2L_SAMC2_LENGTH                   0x00000001

#define _ADCORE2L_SAMC3_POSITION                 0x00000003
#define _ADCORE2L_SAMC3_MASK                     0x00000008
#define _ADCORE2L_SAMC3_LENGTH                   0x00000001

#define _ADCORE2L_SAMC4_POSITION                 0x00000004
#define _ADCORE2L_SAMC4_MASK                     0x00000010
#define _ADCORE2L_SAMC4_LENGTH                   0x00000001

#define _ADCORE2L_SAMC5_POSITION                 0x00000005
#define _ADCORE2L_SAMC5_MASK                     0x00000020
#define _ADCORE2L_SAMC5_LENGTH                   0x00000001

#define _ADCORE2L_SAMC6_POSITION                 0x00000006
#define _ADCORE2L_SAMC6_MASK                     0x00000040
#define _ADCORE2L_SAMC6_LENGTH                   0x00000001

#define _ADCORE2L_SAMC7_POSITION                 0x00000007
#define _ADCORE2L_SAMC7_MASK                     0x00000080
#define _ADCORE2L_SAMC7_LENGTH                   0x00000001

#define _ADCORE2L_SAMC8_POSITION                 0x00000008
#define _ADCORE2L_SAMC8_MASK                     0x00000100
#define _ADCORE2L_SAMC8_LENGTH                   0x00000001

#define _ADCORE2L_SAMC9_POSITION                 0x00000009
#define _ADCORE2L_SAMC9_MASK                     0x00000200
#define _ADCORE2L_SAMC9_LENGTH                   0x00000001

#define _ADCORE2H_ADCS_POSITION                  0x00000000
#define _ADCORE2H_ADCS_MASK                      0x0000007F
#define _ADCORE2H_ADCS_LENGTH                    0x00000007

#define _ADCORE2H_RES_POSITION                   0x00000008
#define _ADCORE2H_RES_MASK                       0x00000300
#define _ADCORE2H_RES_LENGTH                     0x00000002

#define _ADCORE2H_EISEL_POSITION                 0x0000000A
#define _ADCORE2H_EISEL_MASK                     0x00001C00
#define _ADCORE2H_EISEL_LENGTH                   0x00000003

#define _ADCORE2H_ADCS0_POSITION                 0x00000000
#define _ADCORE2H_ADCS0_MASK                     0x00000001
#define _ADCORE2H_ADCS0_LENGTH                   0x00000001

#define _ADCORE2H_ADCS1_POSITION                 0x00000001
#define _ADCORE2H_ADCS1_MASK                     0x00000002
#define _ADCORE2H_ADCS1_LENGTH                   0x00000001

#define _ADCORE2H_ADCS2_POSITION                 0x00000002
#define _ADCORE2H_ADCS2_MASK                     0x00000004
#define _ADCORE2H_ADCS2_LENGTH                   0x00000001

#define _ADCORE2H_ADCS3_POSITION                 0x00000003
#define _ADCORE2H_ADCS3_MASK                     0x00000008
#define _ADCORE2H_ADCS3_LENGTH                   0x00000001

#define _ADCORE2H_ADCS4_POSITION                 0x00000004
#define _ADCORE2H_ADCS4_MASK                     0x00000010
#define _ADCORE2H_ADCS4_LENGTH                   0x00000001

#define _ADCORE2H_ADCS5_POSITION                 0x00000005
#define _ADCORE2H_ADCS5_MASK                     0x00000020
#define _ADCORE2H_ADCS5_LENGTH                   0x00000001

#define _ADCORE2H_ADCS6_POSITION                 0x00000006
#define _ADCORE2H_ADCS6_MASK                     0x00000040
#define _ADCORE2H_ADCS6_LENGTH                   0x00000001

#define _ADCORE2H_RES0_POSITION                  0x00000008
#define _ADCORE2H_RES0_MASK                      0x00000100
#define _ADCORE2H_RES0_LENGTH                    0x00000001

#define _ADCORE2H_RES1_POSITION                  0x00000009
#define _ADCORE2H_RES1_MASK                      0x00000200
#define _ADCORE2H_RES1_LENGTH                    0x00000001

#define _ADCORE2H_EISEL0_POSITION                0x0000000A
#define _ADCORE2H_EISEL0_MASK                    0x00000400
#define _ADCORE2H_EISEL0_LENGTH                  0x00000001

#define _ADCORE2H_EISEL1_POSITION                0x0000000B
#define _ADCORE2H_EISEL1_MASK                    0x00000800
#define _ADCORE2H_EISEL1_LENGTH                  0x00000001

#define _ADCORE2H_EISEL2_POSITION                0x0000000C
#define _ADCORE2H_EISEL2_MASK                    0x00001000
#define _ADCORE2H_EISEL2_LENGTH                  0x00000001

#define _ADCORE3L_SAMC_POSITION                  0x00000000
#define _ADCORE3L_SAMC_MASK                      0x000003FF
#define _ADCORE3L_SAMC_LENGTH                    0x0000000A

#define _ADCORE3L_SAMC0_POSITION                 0x00000000
#define _ADCORE3L_SAMC0_MASK                     0x00000001
#define _ADCORE3L_SAMC0_LENGTH                   0x00000001

#define _ADCORE3L_SAMC1_POSITION                 0x00000001
#define _ADCORE3L_SAMC1_MASK                     0x00000002
#define _ADCORE3L_SAMC1_LENGTH                   0x00000001

#define _ADCORE3L_SAMC2_POSITION                 0x00000002
#define _ADCORE3L_SAMC2_MASK                     0x00000004
#define _ADCORE3L_SAMC2_LENGTH                   0x00000001

#define _ADCORE3L_SAMC3_POSITION                 0x00000003
#define _ADCORE3L_SAMC3_MASK                     0x00000008
#define _ADCORE3L_SAMC3_LENGTH                   0x00000001

#define _ADCORE3L_SAMC4_POSITION                 0x00000004
#define _ADCORE3L_SAMC4_MASK                     0x00000010
#define _ADCORE3L_SAMC4_LENGTH                   0x00000001

#define _ADCORE3L_SAMC5_POSITION                 0x00000005
#define _ADCORE3L_SAMC5_MASK                     0x00000020
#define _ADCORE3L_SAMC5_LENGTH                   0x00000001

#define _ADCORE3L_SAMC6_POSITION                 0x00000006
#define _ADCORE3L_SAMC6_MASK                     0x00000040
#define _ADCORE3L_SAMC6_LENGTH                   0x00000001

#define _ADCORE3L_SAMC7_POSITION                 0x00000007
#define _ADCORE3L_SAMC7_MASK                     0x00000080
#define _ADCORE3L_SAMC7_LENGTH                   0x00000001

#define _ADCORE3L_SAMC8_POSITION                 0x00000008
#define _ADCORE3L_SAMC8_MASK                     0x00000100
#define _ADCORE3L_SAMC8_LENGTH                   0x00000001

#define _ADCORE3L_SAMC9_POSITION                 0x00000009
#define _ADCORE3L_SAMC9_MASK                     0x00000200
#define _ADCORE3L_SAMC9_LENGTH                   0x00000001

#define _ADCORE3H_ADCS_POSITION                  0x00000000
#define _ADCORE3H_ADCS_MASK                      0x0000007F
#define _ADCORE3H_ADCS_LENGTH                    0x00000007

#define _ADCORE3H_RES_POSITION                   0x00000008
#define _ADCORE3H_RES_MASK                       0x00000300
#define _ADCORE3H_RES_LENGTH                     0x00000002

#define _ADCORE3H_EISEL_POSITION                 0x0000000A
#define _ADCORE3H_EISEL_MASK                     0x00001C00
#define _ADCORE3H_EISEL_LENGTH                   0x00000003

#define _ADCORE3H_ADCS0_POSITION                 0x00000000
#define _ADCORE3H_ADCS0_MASK                     0x00000001
#define _ADCORE3H_ADCS0_LENGTH                   0x00000001

#define _ADCORE3H_ADCS1_POSITION                 0x00000001
#define _ADCORE3H_ADCS1_MASK                     0x00000002
#define _ADCORE3H_ADCS1_LENGTH                   0x00000001

#define _ADCORE3H_ADCS2_POSITION                 0x00000002
#define _ADCORE3H_ADCS2_MASK                     0x00000004
#define _ADCORE3H_ADCS2_LENGTH                   0x00000001

#define _ADCORE3H_ADCS3_POSITION                 0x00000003
#define _ADCORE3H_ADCS3_MASK                     0x00000008
#define _ADCORE3H_ADCS3_LENGTH                   0x00000001

#define _ADCORE3H_ADCS4_POSITION                 0x00000004
#define _ADCORE3H_ADCS4_MASK                     0x00000010
#define _ADCORE3H_ADCS4_LENGTH                   0x00000001

#define _ADCORE3H_ADCS5_POSITION                 0x00000005
#define _ADCORE3H_ADCS5_MASK                     0x00000020
#define _ADCORE3H_ADCS5_LENGTH                   0x00000001

#define _ADCORE3H_ADCS6_POSITION                 0x00000006
#define _ADCORE3H_ADCS6_MASK                     0x00000040
#define _ADCORE3H_ADCS6_LENGTH                   0x00000001

#define _ADCORE3H_RES0_POSITION                  0x00000008
#define _ADCORE3H_RES0_MASK                      0x00000100
#define _ADCORE3H_RES0_LENGTH                    0x00000001

#define _ADCORE3H_RES1_POSITION                  0x00000009
#define _ADCORE3H_RES1_MASK                      0x00000200
#define _ADCORE3H_RES1_LENGTH                    0x00000001

#define _ADCORE3H_EISEL0_POSITION                0x0000000A
#define _ADCORE3H_EISEL0_MASK                    0x00000400
#define _ADCORE3H_EISEL0_LENGTH                  0x00000001

#define _ADCORE3H_EISEL1_POSITION                0x0000000B
#define _ADCORE3H_EISEL1_MASK                    0x00000800
#define _ADCORE3H_EISEL1_LENGTH                  0x00000001

#define _ADCORE3H_EISEL2_POSITION                0x0000000C
#define _ADCORE3H_EISEL2_MASK                    0x00001000
#define _ADCORE3H_EISEL2_LENGTH                  0x00000001

#define _ADEIEL_EIEN0_POSITION                   0x00000000
#define _ADEIEL_EIEN0_MASK                       0x00000001
#define _ADEIEL_EIEN0_LENGTH                     0x00000001

#define _ADEIEL_EIEN1_POSITION                   0x00000001
#define _ADEIEL_EIEN1_MASK                       0x00000002
#define _ADEIEL_EIEN1_LENGTH                     0x00000001

#define _ADEIEL_EIEN2_POSITION                   0x00000002
#define _ADEIEL_EIEN2_MASK                       0x00000004
#define _ADEIEL_EIEN2_LENGTH                     0x00000001

#define _ADEIEL_EIEN3_POSITION                   0x00000003
#define _ADEIEL_EIEN3_MASK                       0x00000008
#define _ADEIEL_EIEN3_LENGTH                     0x00000001

#define _ADEIEL_EIEN4_POSITION                   0x00000004
#define _ADEIEL_EIEN4_MASK                       0x00000010
#define _ADEIEL_EIEN4_LENGTH                     0x00000001

#define _ADEIEL_EIEN5_POSITION                   0x00000005
#define _ADEIEL_EIEN5_MASK                       0x00000020
#define _ADEIEL_EIEN5_LENGTH                     0x00000001

#define _ADEIEL_EIEN6_POSITION                   0x00000006
#define _ADEIEL_EIEN6_MASK                       0x00000040
#define _ADEIEL_EIEN6_LENGTH                     0x00000001

#define _ADEIEL_EIEN7_POSITION                   0x00000007
#define _ADEIEL_EIEN7_MASK                       0x00000080
#define _ADEIEL_EIEN7_LENGTH                     0x00000001

#define _ADEIEH_EIEN18_POSITION                  0x00000002
#define _ADEIEH_EIEN18_MASK                      0x00000004
#define _ADEIEH_EIEN18_LENGTH                    0x00000001

#define _ADEIEH_EIEN19_POSITION                  0x00000003
#define _ADEIEH_EIEN19_MASK                      0x00000008
#define _ADEIEH_EIEN19_LENGTH                    0x00000001

#define _ADEIEH_EIEN20_POSITION                  0x00000004
#define _ADEIEH_EIEN20_MASK                      0x00000010
#define _ADEIEH_EIEN20_LENGTH                    0x00000001

#define _ADEIEH_EIEN21_POSITION                  0x00000005
#define _ADEIEH_EIEN21_MASK                      0x00000020
#define _ADEIEH_EIEN21_LENGTH                    0x00000001

#define _ADEISTATL_EISTAT0_POSITION              0x00000000
#define _ADEISTATL_EISTAT0_MASK                  0x00000001
#define _ADEISTATL_EISTAT0_LENGTH                0x00000001

#define _ADEISTATL_EISTAT1_POSITION              0x00000001
#define _ADEISTATL_EISTAT1_MASK                  0x00000002
#define _ADEISTATL_EISTAT1_LENGTH                0x00000001

#define _ADEISTATL_EISTAT2_POSITION              0x00000002
#define _ADEISTATL_EISTAT2_MASK                  0x00000004
#define _ADEISTATL_EISTAT2_LENGTH                0x00000001

#define _ADEISTATL_EISTAT3_POSITION              0x00000003
#define _ADEISTATL_EISTAT3_MASK                  0x00000008
#define _ADEISTATL_EISTAT3_LENGTH                0x00000001

#define _ADEISTATL_EISTAT4_POSITION              0x00000004
#define _ADEISTATL_EISTAT4_MASK                  0x00000010
#define _ADEISTATL_EISTAT4_LENGTH                0x00000001

#define _ADEISTATL_EISTAT5_POSITION              0x00000005
#define _ADEISTATL_EISTAT5_MASK                  0x00000020
#define _ADEISTATL_EISTAT5_LENGTH                0x00000001

#define _ADEISTATL_EISTAT6_POSITION              0x00000006
#define _ADEISTATL_EISTAT6_MASK                  0x00000040
#define _ADEISTATL_EISTAT6_LENGTH                0x00000001

#define _ADEISTATL_EISTAT7_POSITION              0x00000007
#define _ADEISTATL_EISTAT7_MASK                  0x00000080
#define _ADEISTATL_EISTAT7_LENGTH                0x00000001

#define _ADEISTATH_EISTAT18_POSITION             0x00000002
#define _ADEISTATH_EISTAT18_MASK                 0x00000004
#define _ADEISTATH_EISTAT18_LENGTH               0x00000001

#define _ADEISTATH_EISTAT19_POSITION             0x00000003
#define _ADEISTATH_EISTAT19_MASK                 0x00000008
#define _ADEISTATH_EISTAT19_LENGTH               0x00000001

#define _ADEISTATH_EISTAT20_POSITION             0x00000004
#define _ADEISTATH_EISTAT20_MASK                 0x00000010
#define _ADEISTATH_EISTAT20_LENGTH               0x00000001

#define _ADEISTATH_EISTAT21_POSITION             0x00000005
#define _ADEISTATH_EISTAT21_MASK                 0x00000020
#define _ADEISTATH_EISTAT21_LENGTH               0x00000001

#define _ADCON5L_C0PWR_POSITION                  0x00000000
#define _ADCON5L_C0PWR_MASK                      0x00000001
#define _ADCON5L_C0PWR_LENGTH                    0x00000001

#define _ADCON5L_C1PWR_POSITION                  0x00000001
#define _ADCON5L_C1PWR_MASK                      0x00000002
#define _ADCON5L_C1PWR_LENGTH                    0x00000001

#define _ADCON5L_C2PWR_POSITION                  0x00000002
#define _ADCON5L_C2PWR_MASK                      0x00000004
#define _ADCON5L_C2PWR_LENGTH                    0x00000001

#define _ADCON5L_C3PWR_POSITION                  0x00000003
#define _ADCON5L_C3PWR_MASK                      0x00000008
#define _ADCON5L_C3PWR_LENGTH                    0x00000001

#define _ADCON5L_SHRPWR_POSITION                 0x00000007
#define _ADCON5L_SHRPWR_MASK                     0x00000080
#define _ADCON5L_SHRPWR_LENGTH                   0x00000001

#define _ADCON5L_C0RDY_POSITION                  0x00000008
#define _ADCON5L_C0RDY_MASK                      0x00000100
#define _ADCON5L_C0RDY_LENGTH                    0x00000001

#define _ADCON5L_C1RDY_POSITION                  0x00000009
#define _ADCON5L_C1RDY_MASK                      0x00000200
#define _ADCON5L_C1RDY_LENGTH                    0x00000001

#define _ADCON5L_C2RDY_POSITION                  0x0000000A
#define _ADCON5L_C2RDY_MASK                      0x00000400
#define _ADCON5L_C2RDY_LENGTH                    0x00000001

#define _ADCON5L_C3RDY_POSITION                  0x0000000B
#define _ADCON5L_C3RDY_MASK                      0x00000800
#define _ADCON5L_C3RDY_LENGTH                    0x00000001

#define _ADCON5L_SHRRDY_POSITION                 0x0000000F
#define _ADCON5L_SHRRDY_MASK                     0x00008000
#define _ADCON5L_SHRRDY_LENGTH                   0x00000001

#define _ADCON5H_C0C1E_POSITION                  0x00000000
#define _ADCON5H_C0C1E_MASK                      0x00000001
#define _ADCON5H_C0C1E_LENGTH                    0x00000001

#define _ADCON5H_C1C1E_POSITION                  0x00000001
#define _ADCON5H_C1C1E_MASK                      0x00000002
#define _ADCON5H_C1C1E_LENGTH                    0x00000001

#define _ADCON5H_C2C1E_POSITION                  0x00000002
#define _ADCON5H_C2C1E_MASK                      0x00000004
#define _ADCON5H_C2C1E_LENGTH                    0x00000001

#define _ADCON5H_C3C1E_POSITION                  0x00000003
#define _ADCON5H_C3C1E_MASK                      0x00000008
#define _ADCON5H_C3C1E_LENGTH                    0x00000001

#define _ADCON5H_SHRCIE_POSITION                 0x00000007
#define _ADCON5H_SHRCIE_MASK                     0x00000080
#define _ADCON5H_SHRCIE_LENGTH                   0x00000001

#define _ADCON5H_WARMTIME_POSITION               0x00000008
#define _ADCON5H_WARMTIME_MASK                   0x00000F00
#define _ADCON5H_WARMTIME_LENGTH                 0x00000004

#define _ADCAL0L_CAL0RUN_POSITION                0x00000000
#define _ADCAL0L_CAL0RUN_MASK                    0x00000001
#define _ADCAL0L_CAL0RUN_LENGTH                  0x00000001

#define _ADCAL0L_CAL0EN_POSITION                 0x00000001
#define _ADCAL0L_CAL0EN_MASK                     0x00000002
#define _ADCAL0L_CAL0EN_LENGTH                   0x00000001

#define _ADCAL0L_CAL0DIFF_POSITION               0x00000002
#define _ADCAL0L_CAL0DIFF_MASK                   0x00000004
#define _ADCAL0L_CAL0DIFF_LENGTH                 0x00000001

#define _ADCAL0L_CAL0SKIP_POSITION               0x00000003
#define _ADCAL0L_CAL0SKIP_MASK                   0x00000008
#define _ADCAL0L_CAL0SKIP_LENGTH                 0x00000001

#define _ADCAL0L_CAL0RDY_POSITION                0x00000007
#define _ADCAL0L_CAL0RDY_MASK                    0x00000080
#define _ADCAL0L_CAL0RDY_LENGTH                  0x00000001

#define _ADCAL0L_CAL1RUN_POSITION                0x00000008
#define _ADCAL0L_CAL1RUN_MASK                    0x00000100
#define _ADCAL0L_CAL1RUN_LENGTH                  0x00000001

#define _ADCAL0L_CAL1EN_POSITION                 0x00000009
#define _ADCAL0L_CAL1EN_MASK                     0x00000200
#define _ADCAL0L_CAL1EN_LENGTH                   0x00000001

#define _ADCAL0L_CAL1DIFF_POSITION               0x0000000A
#define _ADCAL0L_CAL1DIFF_MASK                   0x00000400
#define _ADCAL0L_CAL1DIFF_LENGTH                 0x00000001

#define _ADCAL0L_CAL1SKIP_POSITION               0x0000000B
#define _ADCAL0L_CAL1SKIP_MASK                   0x00000800
#define _ADCAL0L_CAL1SKIP_LENGTH                 0x00000001

#define _ADCAL0L_CAL1RDY_POSITION                0x0000000F
#define _ADCAL0L_CAL1RDY_MASK                    0x00008000
#define _ADCAL0L_CAL1RDY_LENGTH                  0x00000001

#define _ADCAL0H_CAL2RUN_POSITION                0x00000000
#define _ADCAL0H_CAL2RUN_MASK                    0x00000001
#define _ADCAL0H_CAL2RUN_LENGTH                  0x00000001

#define _ADCAL0H_CAL2EN_POSITION                 0x00000001
#define _ADCAL0H_CAL2EN_MASK                     0x00000002
#define _ADCAL0H_CAL2EN_LENGTH                   0x00000001

#define _ADCAL0H_CAL2DIFF_POSITION               0x00000002
#define _ADCAL0H_CAL2DIFF_MASK                   0x00000004
#define _ADCAL0H_CAL2DIFF_LENGTH                 0x00000001

#define _ADCAL0H_CAL2SKIP_POSITION               0x00000003
#define _ADCAL0H_CAL2SKIP_MASK                   0x00000008
#define _ADCAL0H_CAL2SKIP_LENGTH                 0x00000001

#define _ADCAL0H_CAL2RDY_POSITION                0x00000007
#define _ADCAL0H_CAL2RDY_MASK                    0x00000080
#define _ADCAL0H_CAL2RDY_LENGTH                  0x00000001

#define _ADCAL0H_CAL3RUN_POSITION                0x00000008
#define _ADCAL0H_CAL3RUN_MASK                    0x00000100
#define _ADCAL0H_CAL3RUN_LENGTH                  0x00000001

#define _ADCAL0H_CAL3EN_POSITION                 0x00000009
#define _ADCAL0H_CAL3EN_MASK                     0x00000200
#define _ADCAL0H_CAL3EN_LENGTH                   0x00000001

#define _ADCAL0H_CAL3DIFF_POSITION               0x0000000A
#define _ADCAL0H_CAL3DIFF_MASK                   0x00000400
#define _ADCAL0H_CAL3DIFF_LENGTH                 0x00000001

#define _ADCAL0H_CAL3SKIP_POSITION               0x0000000B
#define _ADCAL0H_CAL3SKIP_MASK                   0x00000800
#define _ADCAL0H_CAL3SKIP_LENGTH                 0x00000001

#define _ADCAL0H_CAL3RDY_POSITION                0x0000000F
#define _ADCAL0H_CAL3RDY_MASK                    0x00008000
#define _ADCAL0H_CAL3RDY_LENGTH                  0x00000001

#define _ADCAL1H_CSHRRUN_POSITION                0x00000008
#define _ADCAL1H_CSHRRUN_MASK                    0x00000100
#define _ADCAL1H_CSHRRUN_LENGTH                  0x00000001

#define _ADCAL1H_CSHREN_POSITION                 0x00000009
#define _ADCAL1H_CSHREN_MASK                     0x00000200
#define _ADCAL1H_CSHREN_LENGTH                   0x00000001

#define _ADCAL1H_CSHRDIFF_POSITION               0x0000000A
#define _ADCAL1H_CSHRDIFF_MASK                   0x00000400
#define _ADCAL1H_CSHRDIFF_LENGTH                 0x00000001

#define _ADCAL1H_CSHRSKIP_POSITION               0x0000000B
#define _ADCAL1H_CSHRSKIP_MASK                   0x00000800
#define _ADCAL1H_CSHRSKIP_LENGTH                 0x00000001

#define _ADCAL1H_CSHRRDY_POSITION                0x0000000F
#define _ADCAL1H_CSHRRDY_MASK                    0x00008000
#define _ADCAL1H_CSHRRDY_LENGTH                  0x00000001

#define _ISRCCON_ISRCCAL_POSITION                0x00000000
#define _ISRCCON_ISRCCAL_MASK                    0x0000003F
#define _ISRCCON_ISRCCAL_LENGTH                  0x00000006

#define _ISRCCON_OUTSEL_POSITION                 0x00000008
#define _ISRCCON_OUTSEL_MASK                     0x00000700
#define _ISRCCON_OUTSEL_LENGTH                   0x00000003

#define _ISRCCON_ISRCEN_POSITION                 0x0000000F
#define _ISRCCON_ISRCEN_MASK                     0x00008000
#define _ISRCCON_ISRCEN_LENGTH                   0x00000001

#define _ISRCCON_ISRCCAL0_POSITION               0x00000000
#define _ISRCCON_ISRCCAL0_MASK                   0x00000001
#define _ISRCCON_ISRCCAL0_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL1_POSITION               0x00000001
#define _ISRCCON_ISRCCAL1_MASK                   0x00000002
#define _ISRCCON_ISRCCAL1_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL2_POSITION               0x00000002
#define _ISRCCON_ISRCCAL2_MASK                   0x00000004
#define _ISRCCON_ISRCCAL2_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL3_POSITION               0x00000003
#define _ISRCCON_ISRCCAL3_MASK                   0x00000008
#define _ISRCCON_ISRCCAL3_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL4_POSITION               0x00000004
#define _ISRCCON_ISRCCAL4_MASK                   0x00000010
#define _ISRCCON_ISRCCAL4_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL5_POSITION               0x00000005
#define _ISRCCON_ISRCCAL5_MASK                   0x00000020
#define _ISRCCON_ISRCCAL5_LENGTH                 0x00000001

#define _ISRCCON_OUTSEL0_POSITION                0x00000008
#define _ISRCCON_OUTSEL0_MASK                    0x00000100
#define _ISRCCON_OUTSEL0_LENGTH                  0x00000001

#define _ISRCCON_OUTSEL1_POSITION                0x00000009
#define _ISRCCON_OUTSEL1_MASK                    0x00000200
#define _ISRCCON_OUTSEL1_LENGTH                  0x00000001

#define _ISRCCON_OUTSEL2_POSITION                0x0000000A
#define _ISRCCON_OUTSEL2_MASK                    0x00000400
#define _ISRCCON_OUTSEL2_LENGTH                  0x00000001

#define _PGA1CON_GAIN_POSITION                   0x00000000
#define _PGA1CON_GAIN_MASK                       0x00000007
#define _PGA1CON_GAIN_LENGTH                     0x00000003

#define _PGA1CON_SELNI_POSITION                  0x00000008
#define _PGA1CON_SELNI_MASK                      0x00000700
#define _PGA1CON_SELNI_LENGTH                    0x00000003

#define _PGA1CON_SELPI_POSITION                  0x0000000B
#define _PGA1CON_SELPI_MASK                      0x00003800
#define _PGA1CON_SELPI_LENGTH                    0x00000003

#define _PGA1CON_PGAOEN_POSITION                 0x0000000E
#define _PGA1CON_PGAOEN_MASK                     0x00004000
#define _PGA1CON_PGAOEN_LENGTH                   0x00000001

#define _PGA1CON_PGAEN_POSITION                  0x0000000F
#define _PGA1CON_PGAEN_MASK                      0x00008000
#define _PGA1CON_PGAEN_LENGTH                    0x00000001

#define _PGA1CON_GAIN0_POSITION                  0x00000000
#define _PGA1CON_GAIN0_MASK                      0x00000001
#define _PGA1CON_GAIN0_LENGTH                    0x00000001

#define _PGA1CON_GAIN1_POSITION                  0x00000001
#define _PGA1CON_GAIN1_MASK                      0x00000002
#define _PGA1CON_GAIN1_LENGTH                    0x00000001

#define _PGA1CON_GAIN2_POSITION                  0x00000002
#define _PGA1CON_GAIN2_MASK                      0x00000004
#define _PGA1CON_GAIN2_LENGTH                    0x00000001

#define _PGA1CON_SELNI0_POSITION                 0x00000008
#define _PGA1CON_SELNI0_MASK                     0x00000100
#define _PGA1CON_SELNI0_LENGTH                   0x00000001

#define _PGA1CON_SELNI1_POSITION                 0x00000009
#define _PGA1CON_SELNI1_MASK                     0x00000200
#define _PGA1CON_SELNI1_LENGTH                   0x00000001

#define _PGA1CON_SELNI2_POSITION                 0x0000000A
#define _PGA1CON_SELNI2_MASK                     0x00000400
#define _PGA1CON_SELNI2_LENGTH                   0x00000001

#define _PGA1CON_SELPI0_POSITION                 0x0000000B
#define _PGA1CON_SELPI0_MASK                     0x00000800
#define _PGA1CON_SELPI0_LENGTH                   0x00000001

#define _PGA1CON_SELPI1_POSITION                 0x0000000C
#define _PGA1CON_SELPI1_MASK                     0x00001000
#define _PGA1CON_SELPI1_LENGTH                   0x00000001

#define _PGA1CON_SELPI2_POSITION                 0x0000000D
#define _PGA1CON_SELPI2_MASK                     0x00002000
#define _PGA1CON_SELPI2_LENGTH                   0x00000001

#define _PGA1CAL_PGACAL_POSITION                 0x00000000
#define _PGA1CAL_PGACAL_MASK                     0x0000003F
#define _PGA1CAL_PGACAL_LENGTH                   0x00000006

#define _PGA2CON_GAIN_POSITION                   0x00000000
#define _PGA2CON_GAIN_MASK                       0x00000007
#define _PGA2CON_GAIN_LENGTH                     0x00000003

#define _PGA2CON_SELNI_POSITION                  0x00000008
#define _PGA2CON_SELNI_MASK                      0x00000700
#define _PGA2CON_SELNI_LENGTH                    0x00000003

#define _PGA2CON_SELPI_POSITION                  0x0000000B
#define _PGA2CON_SELPI_MASK                      0x00003800
#define _PGA2CON_SELPI_LENGTH                    0x00000003

#define _PGA2CON_PGAOEN_POSITION                 0x0000000E
#define _PGA2CON_PGAOEN_MASK                     0x00004000
#define _PGA2CON_PGAOEN_LENGTH                   0x00000001

#define _PGA2CON_PGAEN_POSITION                  0x0000000F
#define _PGA2CON_PGAEN_MASK                      0x00008000
#define _PGA2CON_PGAEN_LENGTH                    0x00000001

#define _PGA2CON_GAIN0_POSITION                  0x00000000
#define _PGA2CON_GAIN0_MASK                      0x00000001
#define _PGA2CON_GAIN0_LENGTH                    0x00000001

#define _PGA2CON_GAIN1_POSITION                  0x00000001
#define _PGA2CON_GAIN1_MASK                      0x00000002
#define _PGA2CON_GAIN1_LENGTH                    0x00000001

#define _PGA2CON_GAIN2_POSITION                  0x00000002
#define _PGA2CON_GAIN2_MASK                      0x00000004
#define _PGA2CON_GAIN2_LENGTH                    0x00000001

#define _PGA2CON_SELNI0_POSITION                 0x00000008
#define _PGA2CON_SELNI0_MASK                     0x00000100
#define _PGA2CON_SELNI0_LENGTH                   0x00000001

#define _PGA2CON_SELNI1_POSITION                 0x00000009
#define _PGA2CON_SELNI1_MASK                     0x00000200
#define _PGA2CON_SELNI1_LENGTH                   0x00000001

#define _PGA2CON_SELNI2_POSITION                 0x0000000A
#define _PGA2CON_SELNI2_MASK                     0x00000400
#define _PGA2CON_SELNI2_LENGTH                   0x00000001

#define _PGA2CON_SELPI0_POSITION                 0x0000000B
#define _PGA2CON_SELPI0_MASK                     0x00000800
#define _PGA2CON_SELPI0_LENGTH                   0x00000001

#define _PGA2CON_SELPI1_POSITION                 0x0000000C
#define _PGA2CON_SELPI1_MASK                     0x00001000
#define _PGA2CON_SELPI1_LENGTH                   0x00000001

#define _PGA2CON_SELPI2_POSITION                 0x0000000D
#define _PGA2CON_SELPI2_MASK                     0x00002000
#define _PGA2CON_SELPI2_LENGTH                   0x00000001

#define _PGA2CAL_PGACAL_POSITION                 0x00000000
#define _PGA2CAL_PGACAL_MASK                     0x0000003F
#define _PGA2CAL_PGACAL_LENGTH                   0x00000006

#define _CMP1CON_RANGE_POSITION                  0x00000000
#define _CMP1CON_RANGE_MASK                      0x00000001
#define _CMP1CON_RANGE_LENGTH                    0x00000001

#define _CMP1CON_CMPPOL_POSITION                 0x00000001
#define _CMP1CON_CMPPOL_MASK                     0x00000002
#define _CMP1CON_CMPPOL_LENGTH                   0x00000001

#define _CMP1CON_ALTINP_POSITION                 0x00000002
#define _CMP1CON_ALTINP_MASK                     0x00000004
#define _CMP1CON_ALTINP_LENGTH                   0x00000001

#define _CMP1CON_CMPSTAT_POSITION                0x00000003
#define _CMP1CON_CMPSTAT_MASK                    0x00000008
#define _CMP1CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP1CON_HYSPOL_POSITION                 0x00000004
#define _CMP1CON_HYSPOL_MASK                     0x00000010
#define _CMP1CON_HYSPOL_LENGTH                   0x00000001

#define _CMP1CON_EXTREF_POSITION                 0x00000005
#define _CMP1CON_EXTREF_MASK                     0x00000020
#define _CMP1CON_EXTREF_LENGTH                   0x00000001

#define _CMP1CON_INSEL_POSITION                  0x00000006
#define _CMP1CON_INSEL_MASK                      0x000000C0
#define _CMP1CON_INSEL_LENGTH                    0x00000002

#define _CMP1CON_DACOE_POSITION                  0x00000008
#define _CMP1CON_DACOE_MASK                      0x00000100
#define _CMP1CON_DACOE_LENGTH                    0x00000001

#define _CMP1CON_FCLKSEL_POSITION                0x00000009
#define _CMP1CON_FCLKSEL_MASK                    0x00000200
#define _CMP1CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP1CON_FLTREN_POSITION                 0x0000000A
#define _CMP1CON_FLTREN_MASK                     0x00000400
#define _CMP1CON_FLTREN_LENGTH                   0x00000001

#define _CMP1CON_HYSSEL_POSITION                 0x0000000B
#define _CMP1CON_HYSSEL_MASK                     0x00001800
#define _CMP1CON_HYSSEL_LENGTH                   0x00000002

#define _CMP1CON_CMPSIDL_POSITION                0x0000000D
#define _CMP1CON_CMPSIDL_MASK                    0x00002000
#define _CMP1CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP1CON_CMPON_POSITION                  0x0000000F
#define _CMP1CON_CMPON_MASK                      0x00008000
#define _CMP1CON_CMPON_LENGTH                    0x00000001

#define _CMP1CON_INSEL0_POSITION                 0x00000006
#define _CMP1CON_INSEL0_MASK                     0x00000040
#define _CMP1CON_INSEL0_LENGTH                   0x00000001

#define _CMP1CON_INSEL1_POSITION                 0x00000007
#define _CMP1CON_INSEL1_MASK                     0x00000080
#define _CMP1CON_INSEL1_LENGTH                   0x00000001

#define _CMP1CON_HYSSEL0_POSITION                0x0000000B
#define _CMP1CON_HYSSEL0_MASK                    0x00000800
#define _CMP1CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP1CON_HYSSEL1_POSITION                0x0000000C
#define _CMP1CON_HYSSEL1_MASK                    0x00001000
#define _CMP1CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP1DAC_CMREF_POSITION                  0x00000000
#define _CMP1DAC_CMREF_MASK                      0x00000FFF
#define _CMP1DAC_CMREF_LENGTH                    0x0000000C

#define _CMP1DAC_CMREF0_POSITION                 0x00000000
#define _CMP1DAC_CMREF0_MASK                     0x00000001
#define _CMP1DAC_CMREF0_LENGTH                   0x00000001

#define _CMP1DAC_CMREF1_POSITION                 0x00000001
#define _CMP1DAC_CMREF1_MASK                     0x00000002
#define _CMP1DAC_CMREF1_LENGTH                   0x00000001

#define _CMP1DAC_CMREF2_POSITION                 0x00000002
#define _CMP1DAC_CMREF2_MASK                     0x00000004
#define _CMP1DAC_CMREF2_LENGTH                   0x00000001

#define _CMP1DAC_CMREF3_POSITION                 0x00000003
#define _CMP1DAC_CMREF3_MASK                     0x00000008
#define _CMP1DAC_CMREF3_LENGTH                   0x00000001

#define _CMP1DAC_CMREF4_POSITION                 0x00000004
#define _CMP1DAC_CMREF4_MASK                     0x00000010
#define _CMP1DAC_CMREF4_LENGTH                   0x00000001

#define _CMP1DAC_CMREF5_POSITION                 0x00000005
#define _CMP1DAC_CMREF5_MASK                     0x00000020
#define _CMP1DAC_CMREF5_LENGTH                   0x00000001

#define _CMP1DAC_CMREF6_POSITION                 0x00000006
#define _CMP1DAC_CMREF6_MASK                     0x00000040
#define _CMP1DAC_CMREF6_LENGTH                   0x00000001

#define _CMP1DAC_CMREF7_POSITION                 0x00000007
#define _CMP1DAC_CMREF7_MASK                     0x00000080
#define _CMP1DAC_CMREF7_LENGTH                   0x00000001

#define _CMP1DAC_CMREF8_POSITION                 0x00000008
#define _CMP1DAC_CMREF8_MASK                     0x00000100
#define _CMP1DAC_CMREF8_LENGTH                   0x00000001

#define _CMP1DAC_CMREF9_POSITION                 0x00000009
#define _CMP1DAC_CMREF9_MASK                     0x00000200
#define _CMP1DAC_CMREF9_LENGTH                   0x00000001

#define _CMP1DAC_CMREF10_POSITION                0x0000000A
#define _CMP1DAC_CMREF10_MASK                    0x00000400
#define _CMP1DAC_CMREF10_LENGTH                  0x00000001

#define _CMP1DAC_CMREF11_POSITION                0x0000000B
#define _CMP1DAC_CMREF11_MASK                    0x00000800
#define _CMP1DAC_CMREF11_LENGTH                  0x00000001

#define _CMP2CON_RANGE_POSITION                  0x00000000
#define _CMP2CON_RANGE_MASK                      0x00000001
#define _CMP2CON_RANGE_LENGTH                    0x00000001

#define _CMP2CON_CMPPOL_POSITION                 0x00000001
#define _CMP2CON_CMPPOL_MASK                     0x00000002
#define _CMP2CON_CMPPOL_LENGTH                   0x00000001

#define _CMP2CON_ALTINP_POSITION                 0x00000002
#define _CMP2CON_ALTINP_MASK                     0x00000004
#define _CMP2CON_ALTINP_LENGTH                   0x00000001

#define _CMP2CON_CMPSTAT_POSITION                0x00000003
#define _CMP2CON_CMPSTAT_MASK                    0x00000008
#define _CMP2CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP2CON_HYSPOL_POSITION                 0x00000004
#define _CMP2CON_HYSPOL_MASK                     0x00000010
#define _CMP2CON_HYSPOL_LENGTH                   0x00000001

#define _CMP2CON_EXTREF_POSITION                 0x00000005
#define _CMP2CON_EXTREF_MASK                     0x00000020
#define _CMP2CON_EXTREF_LENGTH                   0x00000001

#define _CMP2CON_INSEL_POSITION                  0x00000006
#define _CMP2CON_INSEL_MASK                      0x000000C0
#define _CMP2CON_INSEL_LENGTH                    0x00000002

#define _CMP2CON_DACOE_POSITION                  0x00000008
#define _CMP2CON_DACOE_MASK                      0x00000100
#define _CMP2CON_DACOE_LENGTH                    0x00000001

#define _CMP2CON_FCLKSEL_POSITION                0x00000009
#define _CMP2CON_FCLKSEL_MASK                    0x00000200
#define _CMP2CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP2CON_FLTREN_POSITION                 0x0000000A
#define _CMP2CON_FLTREN_MASK                     0x00000400
#define _CMP2CON_FLTREN_LENGTH                   0x00000001

#define _CMP2CON_HYSSEL_POSITION                 0x0000000B
#define _CMP2CON_HYSSEL_MASK                     0x00001800
#define _CMP2CON_HYSSEL_LENGTH                   0x00000002

#define _CMP2CON_CMPSIDL_POSITION                0x0000000D
#define _CMP2CON_CMPSIDL_MASK                    0x00002000
#define _CMP2CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP2CON_CMPON_POSITION                  0x0000000F
#define _CMP2CON_CMPON_MASK                      0x00008000
#define _CMP2CON_CMPON_LENGTH                    0x00000001

#define _CMP2CON_INSEL0_POSITION                 0x00000006
#define _CMP2CON_INSEL0_MASK                     0x00000040
#define _CMP2CON_INSEL0_LENGTH                   0x00000001

#define _CMP2CON_INSEL1_POSITION                 0x00000007
#define _CMP2CON_INSEL1_MASK                     0x00000080
#define _CMP2CON_INSEL1_LENGTH                   0x00000001

#define _CMP2CON_HYSSEL0_POSITION                0x0000000B
#define _CMP2CON_HYSSEL0_MASK                    0x00000800
#define _CMP2CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP2CON_HYSSEL1_POSITION                0x0000000C
#define _CMP2CON_HYSSEL1_MASK                    0x00001000
#define _CMP2CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP2DAC_CMREF_POSITION                  0x00000000
#define _CMP2DAC_CMREF_MASK                      0x00000FFF
#define _CMP2DAC_CMREF_LENGTH                    0x0000000C

#define _CMP2DAC_CMREF0_POSITION                 0x00000000
#define _CMP2DAC_CMREF0_MASK                     0x00000001
#define _CMP2DAC_CMREF0_LENGTH                   0x00000001

#define _CMP2DAC_CMREF1_POSITION                 0x00000001
#define _CMP2DAC_CMREF1_MASK                     0x00000002
#define _CMP2DAC_CMREF1_LENGTH                   0x00000001

#define _CMP2DAC_CMREF2_POSITION                 0x00000002
#define _CMP2DAC_CMREF2_MASK                     0x00000004
#define _CMP2DAC_CMREF2_LENGTH                   0x00000001

#define _CMP2DAC_CMREF3_POSITION                 0x00000003
#define _CMP2DAC_CMREF3_MASK                     0x00000008
#define _CMP2DAC_CMREF3_LENGTH                   0x00000001

#define _CMP2DAC_CMREF4_POSITION                 0x00000004
#define _CMP2DAC_CMREF4_MASK                     0x00000010
#define _CMP2DAC_CMREF4_LENGTH                   0x00000001

#define _CMP2DAC_CMREF5_POSITION                 0x00000005
#define _CMP2DAC_CMREF5_MASK                     0x00000020
#define _CMP2DAC_CMREF5_LENGTH                   0x00000001

#define _CMP2DAC_CMREF6_POSITION                 0x00000006
#define _CMP2DAC_CMREF6_MASK                     0x00000040
#define _CMP2DAC_CMREF6_LENGTH                   0x00000001

#define _CMP2DAC_CMREF7_POSITION                 0x00000007
#define _CMP2DAC_CMREF7_MASK                     0x00000080
#define _CMP2DAC_CMREF7_LENGTH                   0x00000001

#define _CMP2DAC_CMREF8_POSITION                 0x00000008
#define _CMP2DAC_CMREF8_MASK                     0x00000100
#define _CMP2DAC_CMREF8_LENGTH                   0x00000001

#define _CMP2DAC_CMREF9_POSITION                 0x00000009
#define _CMP2DAC_CMREF9_MASK                     0x00000200
#define _CMP2DAC_CMREF9_LENGTH                   0x00000001

#define _CMP2DAC_CMREF10_POSITION                0x0000000A
#define _CMP2DAC_CMREF10_MASK                    0x00000400
#define _CMP2DAC_CMREF10_LENGTH                  0x00000001

#define _CMP2DAC_CMREF11_POSITION                0x0000000B
#define _CMP2DAC_CMREF11_MASK                    0x00000800
#define _CMP2DAC_CMREF11_LENGTH                  0x00000001

#define _CMP3CON_RANGE_POSITION                  0x00000000
#define _CMP3CON_RANGE_MASK                      0x00000001
#define _CMP3CON_RANGE_LENGTH                    0x00000001

#define _CMP3CON_CMPPOL_POSITION                 0x00000001
#define _CMP3CON_CMPPOL_MASK                     0x00000002
#define _CMP3CON_CMPPOL_LENGTH                   0x00000001

#define _CMP3CON_ALTINP_POSITION                 0x00000002
#define _CMP3CON_ALTINP_MASK                     0x00000004
#define _CMP3CON_ALTINP_LENGTH                   0x00000001

#define _CMP3CON_CMPSTAT_POSITION                0x00000003
#define _CMP3CON_CMPSTAT_MASK                    0x00000008
#define _CMP3CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP3CON_HYSPOL_POSITION                 0x00000004
#define _CMP3CON_HYSPOL_MASK                     0x00000010
#define _CMP3CON_HYSPOL_LENGTH                   0x00000001

#define _CMP3CON_EXTREF_POSITION                 0x00000005
#define _CMP3CON_EXTREF_MASK                     0x00000020
#define _CMP3CON_EXTREF_LENGTH                   0x00000001

#define _CMP3CON_INSEL_POSITION                  0x00000006
#define _CMP3CON_INSEL_MASK                      0x000000C0
#define _CMP3CON_INSEL_LENGTH                    0x00000002

#define _CMP3CON_DACOE_POSITION                  0x00000008
#define _CMP3CON_DACOE_MASK                      0x00000100
#define _CMP3CON_DACOE_LENGTH                    0x00000001

#define _CMP3CON_FCLKSEL_POSITION                0x00000009
#define _CMP3CON_FCLKSEL_MASK                    0x00000200
#define _CMP3CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP3CON_FLTREN_POSITION                 0x0000000A
#define _CMP3CON_FLTREN_MASK                     0x00000400
#define _CMP3CON_FLTREN_LENGTH                   0x00000001

#define _CMP3CON_HYSSEL_POSITION                 0x0000000B
#define _CMP3CON_HYSSEL_MASK                     0x00001800
#define _CMP3CON_HYSSEL_LENGTH                   0x00000002

#define _CMP3CON_CMPSIDL_POSITION                0x0000000D
#define _CMP3CON_CMPSIDL_MASK                    0x00002000
#define _CMP3CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP3CON_CMPON_POSITION                  0x0000000F
#define _CMP3CON_CMPON_MASK                      0x00008000
#define _CMP3CON_CMPON_LENGTH                    0x00000001

#define _CMP3CON_INSEL0_POSITION                 0x00000006
#define _CMP3CON_INSEL0_MASK                     0x00000040
#define _CMP3CON_INSEL0_LENGTH                   0x00000001

#define _CMP3CON_INSEL1_POSITION                 0x00000007
#define _CMP3CON_INSEL1_MASK                     0x00000080
#define _CMP3CON_INSEL1_LENGTH                   0x00000001

#define _CMP3CON_HYSSEL0_POSITION                0x0000000B
#define _CMP3CON_HYSSEL0_MASK                    0x00000800
#define _CMP3CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP3CON_HYSSEL1_POSITION                0x0000000C
#define _CMP3CON_HYSSEL1_MASK                    0x00001000
#define _CMP3CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP3DAC_CMREF_POSITION                  0x00000000
#define _CMP3DAC_CMREF_MASK                      0x00000FFF
#define _CMP3DAC_CMREF_LENGTH                    0x0000000C

#define _CMP3DAC_CMREF0_POSITION                 0x00000000
#define _CMP3DAC_CMREF0_MASK                     0x00000001
#define _CMP3DAC_CMREF0_LENGTH                   0x00000001

#define _CMP3DAC_CMREF1_POSITION                 0x00000001
#define _CMP3DAC_CMREF1_MASK                     0x00000002
#define _CMP3DAC_CMREF1_LENGTH                   0x00000001

#define _CMP3DAC_CMREF2_POSITION                 0x00000002
#define _CMP3DAC_CMREF2_MASK                     0x00000004
#define _CMP3DAC_CMREF2_LENGTH                   0x00000001

#define _CMP3DAC_CMREF3_POSITION                 0x00000003
#define _CMP3DAC_CMREF3_MASK                     0x00000008
#define _CMP3DAC_CMREF3_LENGTH                   0x00000001

#define _CMP3DAC_CMREF4_POSITION                 0x00000004
#define _CMP3DAC_CMREF4_MASK                     0x00000010
#define _CMP3DAC_CMREF4_LENGTH                   0x00000001

#define _CMP3DAC_CMREF5_POSITION                 0x00000005
#define _CMP3DAC_CMREF5_MASK                     0x00000020
#define _CMP3DAC_CMREF5_LENGTH                   0x00000001

#define _CMP3DAC_CMREF6_POSITION                 0x00000006
#define _CMP3DAC_CMREF6_MASK                     0x00000040
#define _CMP3DAC_CMREF6_LENGTH                   0x00000001

#define _CMP3DAC_CMREF7_POSITION                 0x00000007
#define _CMP3DAC_CMREF7_MASK                     0x00000080
#define _CMP3DAC_CMREF7_LENGTH                   0x00000001

#define _CMP3DAC_CMREF8_POSITION                 0x00000008
#define _CMP3DAC_CMREF8_MASK                     0x00000100
#define _CMP3DAC_CMREF8_LENGTH                   0x00000001

#define _CMP3DAC_CMREF9_POSITION                 0x00000009
#define _CMP3DAC_CMREF9_MASK                     0x00000200
#define _CMP3DAC_CMREF9_LENGTH                   0x00000001

#define _CMP3DAC_CMREF10_POSITION                0x0000000A
#define _CMP3DAC_CMREF10_MASK                    0x00000400
#define _CMP3DAC_CMREF10_LENGTH                  0x00000001

#define _CMP3DAC_CMREF11_POSITION                0x0000000B
#define _CMP3DAC_CMREF11_MASK                    0x00000800
#define _CMP3DAC_CMREF11_LENGTH                  0x00000001

#define _CMP4CON_RANGE_POSITION                  0x00000000
#define _CMP4CON_RANGE_MASK                      0x00000001
#define _CMP4CON_RANGE_LENGTH                    0x00000001

#define _CMP4CON_CMPPOL_POSITION                 0x00000001
#define _CMP4CON_CMPPOL_MASK                     0x00000002
#define _CMP4CON_CMPPOL_LENGTH                   0x00000001

#define _CMP4CON_ALTINP_POSITION                 0x00000002
#define _CMP4CON_ALTINP_MASK                     0x00000004
#define _CMP4CON_ALTINP_LENGTH                   0x00000001

#define _CMP4CON_CMPSTAT_POSITION                0x00000003
#define _CMP4CON_CMPSTAT_MASK                    0x00000008
#define _CMP4CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP4CON_HYSPOL_POSITION                 0x00000004
#define _CMP4CON_HYSPOL_MASK                     0x00000010
#define _CMP4CON_HYSPOL_LENGTH                   0x00000001

#define _CMP4CON_EXTREF_POSITION                 0x00000005
#define _CMP4CON_EXTREF_MASK                     0x00000020
#define _CMP4CON_EXTREF_LENGTH                   0x00000001

#define _CMP4CON_INSEL_POSITION                  0x00000006
#define _CMP4CON_INSEL_MASK                      0x000000C0
#define _CMP4CON_INSEL_LENGTH                    0x00000002

#define _CMP4CON_DACOE_POSITION                  0x00000008
#define _CMP4CON_DACOE_MASK                      0x00000100
#define _CMP4CON_DACOE_LENGTH                    0x00000001

#define _CMP4CON_FCLKSEL_POSITION                0x00000009
#define _CMP4CON_FCLKSEL_MASK                    0x00000200
#define _CMP4CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP4CON_FLTREN_POSITION                 0x0000000A
#define _CMP4CON_FLTREN_MASK                     0x00000400
#define _CMP4CON_FLTREN_LENGTH                   0x00000001

#define _CMP4CON_HYSSEL_POSITION                 0x0000000B
#define _CMP4CON_HYSSEL_MASK                     0x00001800
#define _CMP4CON_HYSSEL_LENGTH                   0x00000002

#define _CMP4CON_CMPSIDL_POSITION                0x0000000D
#define _CMP4CON_CMPSIDL_MASK                    0x00002000
#define _CMP4CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP4CON_CMPON_POSITION                  0x0000000F
#define _CMP4CON_CMPON_MASK                      0x00008000
#define _CMP4CON_CMPON_LENGTH                    0x00000001

#define _CMP4CON_INSEL0_POSITION                 0x00000006
#define _CMP4CON_INSEL0_MASK                     0x00000040
#define _CMP4CON_INSEL0_LENGTH                   0x00000001

#define _CMP4CON_INSEL1_POSITION                 0x00000007
#define _CMP4CON_INSEL1_MASK                     0x00000080
#define _CMP4CON_INSEL1_LENGTH                   0x00000001

#define _CMP4CON_HYSSEL0_POSITION                0x0000000B
#define _CMP4CON_HYSSEL0_MASK                    0x00000800
#define _CMP4CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP4CON_HYSSEL1_POSITION                0x0000000C
#define _CMP4CON_HYSSEL1_MASK                    0x00001000
#define _CMP4CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP4DAC_CMREF_POSITION                  0x00000000
#define _CMP4DAC_CMREF_MASK                      0x00000FFF
#define _CMP4DAC_CMREF_LENGTH                    0x0000000C

#define _CMP4DAC_CMREF0_POSITION                 0x00000000
#define _CMP4DAC_CMREF0_MASK                     0x00000001
#define _CMP4DAC_CMREF0_LENGTH                   0x00000001

#define _CMP4DAC_CMREF1_POSITION                 0x00000001
#define _CMP4DAC_CMREF1_MASK                     0x00000002
#define _CMP4DAC_CMREF1_LENGTH                   0x00000001

#define _CMP4DAC_CMREF2_POSITION                 0x00000002
#define _CMP4DAC_CMREF2_MASK                     0x00000004
#define _CMP4DAC_CMREF2_LENGTH                   0x00000001

#define _CMP4DAC_CMREF3_POSITION                 0x00000003
#define _CMP4DAC_CMREF3_MASK                     0x00000008
#define _CMP4DAC_CMREF3_LENGTH                   0x00000001

#define _CMP4DAC_CMREF4_POSITION                 0x00000004
#define _CMP4DAC_CMREF4_MASK                     0x00000010
#define _CMP4DAC_CMREF4_LENGTH                   0x00000001

#define _CMP4DAC_CMREF5_POSITION                 0x00000005
#define _CMP4DAC_CMREF5_MASK                     0x00000020
#define _CMP4DAC_CMREF5_LENGTH                   0x00000001

#define _CMP4DAC_CMREF6_POSITION                 0x00000006
#define _CMP4DAC_CMREF6_MASK                     0x00000040
#define _CMP4DAC_CMREF6_LENGTH                   0x00000001

#define _CMP4DAC_CMREF7_POSITION                 0x00000007
#define _CMP4DAC_CMREF7_MASK                     0x00000080
#define _CMP4DAC_CMREF7_LENGTH                   0x00000001

#define _CMP4DAC_CMREF8_POSITION                 0x00000008
#define _CMP4DAC_CMREF8_MASK                     0x00000100
#define _CMP4DAC_CMREF8_LENGTH                   0x00000001

#define _CMP4DAC_CMREF9_POSITION                 0x00000009
#define _CMP4DAC_CMREF9_MASK                     0x00000200
#define _CMP4DAC_CMREF9_LENGTH                   0x00000001

#define _CMP4DAC_CMREF10_POSITION                0x0000000A
#define _CMP4DAC_CMREF10_MASK                    0x00000400
#define _CMP4DAC_CMREF10_LENGTH                  0x00000001

#define _CMP4DAC_CMREF11_POSITION                0x0000000B
#define _CMP4DAC_CMREF11_MASK                    0x00000800
#define _CMP4DAC_CMREF11_LENGTH                  0x00000001

#define _RPOR0_RP32R_POSITION                    0x00000000
#define _RPOR0_RP32R_MASK                        0x0000003F
#define _RPOR0_RP32R_LENGTH                      0x00000006

#define _RPOR0_RP33R_POSITION                    0x00000008
#define _RPOR0_RP33R_MASK                        0x00003F00
#define _RPOR0_RP33R_LENGTH                      0x00000006

#define _RPOR0_RP32R0_POSITION                   0x00000000
#define _RPOR0_RP32R0_MASK                       0x00000001
#define _RPOR0_RP32R0_LENGTH                     0x00000001

#define _RPOR0_RP32R1_POSITION                   0x00000001
#define _RPOR0_RP32R1_MASK                       0x00000002
#define _RPOR0_RP32R1_LENGTH                     0x00000001

#define _RPOR0_RP32R2_POSITION                   0x00000002
#define _RPOR0_RP32R2_MASK                       0x00000004
#define _RPOR0_RP32R2_LENGTH                     0x00000001

#define _RPOR0_RP32R3_POSITION                   0x00000003
#define _RPOR0_RP32R3_MASK                       0x00000008
#define _RPOR0_RP32R3_LENGTH                     0x00000001

#define _RPOR0_RP32R4_POSITION                   0x00000004
#define _RPOR0_RP32R4_MASK                       0x00000010
#define _RPOR0_RP32R4_LENGTH                     0x00000001

#define _RPOR0_RP32R5_POSITION                   0x00000005
#define _RPOR0_RP32R5_MASK                       0x00000020
#define _RPOR0_RP32R5_LENGTH                     0x00000001

#define _RPOR0_RP33R0_POSITION                   0x00000008
#define _RPOR0_RP33R0_MASK                       0x00000100
#define _RPOR0_RP33R0_LENGTH                     0x00000001

#define _RPOR0_RP33R1_POSITION                   0x00000009
#define _RPOR0_RP33R1_MASK                       0x00000200
#define _RPOR0_RP33R1_LENGTH                     0x00000001

#define _RPOR0_RP33R2_POSITION                   0x0000000A
#define _RPOR0_RP33R2_MASK                       0x00000400
#define _RPOR0_RP33R2_LENGTH                     0x00000001

#define _RPOR0_RP33R3_POSITION                   0x0000000B
#define _RPOR0_RP33R3_MASK                       0x00000800
#define _RPOR0_RP33R3_LENGTH                     0x00000001

#define _RPOR0_RP33R4_POSITION                   0x0000000C
#define _RPOR0_RP33R4_MASK                       0x00001000
#define _RPOR0_RP33R4_LENGTH                     0x00000001

#define _RPOR0_RP33R5_POSITION                   0x0000000D
#define _RPOR0_RP33R5_MASK                       0x00002000
#define _RPOR0_RP33R5_LENGTH                     0x00000001

#define _RPOR1_RP34R_POSITION                    0x00000000
#define _RPOR1_RP34R_MASK                        0x0000003F
#define _RPOR1_RP34R_LENGTH                      0x00000006

#define _RPOR1_RP35R_POSITION                    0x00000008
#define _RPOR1_RP35R_MASK                        0x00003F00
#define _RPOR1_RP35R_LENGTH                      0x00000006

#define _RPOR1_RP34R0_POSITION                   0x00000000
#define _RPOR1_RP34R0_MASK                       0x00000001
#define _RPOR1_RP34R0_LENGTH                     0x00000001

#define _RPOR1_RP34R1_POSITION                   0x00000001
#define _RPOR1_RP34R1_MASK                       0x00000002
#define _RPOR1_RP34R1_LENGTH                     0x00000001

#define _RPOR1_RP34R2_POSITION                   0x00000002
#define _RPOR1_RP34R2_MASK                       0x00000004
#define _RPOR1_RP34R2_LENGTH                     0x00000001

#define _RPOR1_RP34R3_POSITION                   0x00000003
#define _RPOR1_RP34R3_MASK                       0x00000008
#define _RPOR1_RP34R3_LENGTH                     0x00000001

#define _RPOR1_RP34R4_POSITION                   0x00000004
#define _RPOR1_RP34R4_MASK                       0x00000010
#define _RPOR1_RP34R4_LENGTH                     0x00000001

#define _RPOR1_RP34R5_POSITION                   0x00000005
#define _RPOR1_RP34R5_MASK                       0x00000020
#define _RPOR1_RP34R5_LENGTH                     0x00000001

#define _RPOR1_RP35R0_POSITION                   0x00000008
#define _RPOR1_RP35R0_MASK                       0x00000100
#define _RPOR1_RP35R0_LENGTH                     0x00000001

#define _RPOR1_RP35R1_POSITION                   0x00000009
#define _RPOR1_RP35R1_MASK                       0x00000200
#define _RPOR1_RP35R1_LENGTH                     0x00000001

#define _RPOR1_RP35R2_POSITION                   0x0000000A
#define _RPOR1_RP35R2_MASK                       0x00000400
#define _RPOR1_RP35R2_LENGTH                     0x00000001

#define _RPOR1_RP35R3_POSITION                   0x0000000B
#define _RPOR1_RP35R3_MASK                       0x00000800
#define _RPOR1_RP35R3_LENGTH                     0x00000001

#define _RPOR1_RP35R4_POSITION                   0x0000000C
#define _RPOR1_RP35R4_MASK                       0x00001000
#define _RPOR1_RP35R4_LENGTH                     0x00000001

#define _RPOR1_RP35R5_POSITION                   0x0000000D
#define _RPOR1_RP35R5_MASK                       0x00002000
#define _RPOR1_RP35R5_LENGTH                     0x00000001

#define _RPOR2_RP36R_POSITION                    0x00000000
#define _RPOR2_RP36R_MASK                        0x0000003F
#define _RPOR2_RP36R_LENGTH                      0x00000006

#define _RPOR2_RP37R_POSITION                    0x00000008
#define _RPOR2_RP37R_MASK                        0x00003F00
#define _RPOR2_RP37R_LENGTH                      0x00000006

#define _RPOR2_RP36R0_POSITION                   0x00000000
#define _RPOR2_RP36R0_MASK                       0x00000001
#define _RPOR2_RP36R0_LENGTH                     0x00000001

#define _RPOR2_RP36R1_POSITION                   0x00000001
#define _RPOR2_RP36R1_MASK                       0x00000002
#define _RPOR2_RP36R1_LENGTH                     0x00000001

#define _RPOR2_RP36R2_POSITION                   0x00000002
#define _RPOR2_RP36R2_MASK                       0x00000004
#define _RPOR2_RP36R2_LENGTH                     0x00000001

#define _RPOR2_RP36R3_POSITION                   0x00000003
#define _RPOR2_RP36R3_MASK                       0x00000008
#define _RPOR2_RP36R3_LENGTH                     0x00000001

#define _RPOR2_RP36R4_POSITION                   0x00000004
#define _RPOR2_RP36R4_MASK                       0x00000010
#define _RPOR2_RP36R4_LENGTH                     0x00000001

#define _RPOR2_RP36R5_POSITION                   0x00000005
#define _RPOR2_RP36R5_MASK                       0x00000020
#define _RPOR2_RP36R5_LENGTH                     0x00000001

#define _RPOR2_RP37R0_POSITION                   0x00000008
#define _RPOR2_RP37R0_MASK                       0x00000100
#define _RPOR2_RP37R0_LENGTH                     0x00000001

#define _RPOR2_RP37R1_POSITION                   0x00000009
#define _RPOR2_RP37R1_MASK                       0x00000200
#define _RPOR2_RP37R1_LENGTH                     0x00000001

#define _RPOR2_RP37R2_POSITION                   0x0000000A
#define _RPOR2_RP37R2_MASK                       0x00000400
#define _RPOR2_RP37R2_LENGTH                     0x00000001

#define _RPOR2_RP37R3_POSITION                   0x0000000B
#define _RPOR2_RP37R3_MASK                       0x00000800
#define _RPOR2_RP37R3_LENGTH                     0x00000001

#define _RPOR2_RP37R4_POSITION                   0x0000000C
#define _RPOR2_RP37R4_MASK                       0x00001000
#define _RPOR2_RP37R4_LENGTH                     0x00000001

#define _RPOR2_RP37R5_POSITION                   0x0000000D
#define _RPOR2_RP37R5_MASK                       0x00002000
#define _RPOR2_RP37R5_LENGTH                     0x00000001

#define _RPOR3_RP38R_POSITION                    0x00000000
#define _RPOR3_RP38R_MASK                        0x0000003F
#define _RPOR3_RP38R_LENGTH                      0x00000006

#define _RPOR3_RP39R_POSITION                    0x00000008
#define _RPOR3_RP39R_MASK                        0x00003F00
#define _RPOR3_RP39R_LENGTH                      0x00000006

#define _RPOR3_RP38R0_POSITION                   0x00000000
#define _RPOR3_RP38R0_MASK                       0x00000001
#define _RPOR3_RP38R0_LENGTH                     0x00000001

#define _RPOR3_RP38R1_POSITION                   0x00000001
#define _RPOR3_RP38R1_MASK                       0x00000002
#define _RPOR3_RP38R1_LENGTH                     0x00000001

#define _RPOR3_RP38R2_POSITION                   0x00000002
#define _RPOR3_RP38R2_MASK                       0x00000004
#define _RPOR3_RP38R2_LENGTH                     0x00000001

#define _RPOR3_RP38R3_POSITION                   0x00000003
#define _RPOR3_RP38R3_MASK                       0x00000008
#define _RPOR3_RP38R3_LENGTH                     0x00000001

#define _RPOR3_RP38R4_POSITION                   0x00000004
#define _RPOR3_RP38R4_MASK                       0x00000010
#define _RPOR3_RP38R4_LENGTH                     0x00000001

#define _RPOR3_RP38R5_POSITION                   0x00000005
#define _RPOR3_RP38R5_MASK                       0x00000020
#define _RPOR3_RP38R5_LENGTH                     0x00000001

#define _RPOR3_RP39R0_POSITION                   0x00000008
#define _RPOR3_RP39R0_MASK                       0x00000100
#define _RPOR3_RP39R0_LENGTH                     0x00000001

#define _RPOR3_RP39R1_POSITION                   0x00000009
#define _RPOR3_RP39R1_MASK                       0x00000200
#define _RPOR3_RP39R1_LENGTH                     0x00000001

#define _RPOR3_RP39R2_POSITION                   0x0000000A
#define _RPOR3_RP39R2_MASK                       0x00000400
#define _RPOR3_RP39R2_LENGTH                     0x00000001

#define _RPOR3_RP39R3_POSITION                   0x0000000B
#define _RPOR3_RP39R3_MASK                       0x00000800
#define _RPOR3_RP39R3_LENGTH                     0x00000001

#define _RPOR3_RP39R4_POSITION                   0x0000000C
#define _RPOR3_RP39R4_MASK                       0x00001000
#define _RPOR3_RP39R4_LENGTH                     0x00000001

#define _RPOR3_RP39R5_POSITION                   0x0000000D
#define _RPOR3_RP39R5_MASK                       0x00002000
#define _RPOR3_RP39R5_LENGTH                     0x00000001

#define _RPOR4_RP40R_POSITION                    0x00000000
#define _RPOR4_RP40R_MASK                        0x0000003F
#define _RPOR4_RP40R_LENGTH                      0x00000006

#define _RPOR4_RP41R_POSITION                    0x00000008
#define _RPOR4_RP41R_MASK                        0x00003F00
#define _RPOR4_RP41R_LENGTH                      0x00000006

#define _RPOR4_RP40R0_POSITION                   0x00000000
#define _RPOR4_RP40R0_MASK                       0x00000001
#define _RPOR4_RP40R0_LENGTH                     0x00000001

#define _RPOR4_RP40R1_POSITION                   0x00000001
#define _RPOR4_RP40R1_MASK                       0x00000002
#define _RPOR4_RP40R1_LENGTH                     0x00000001

#define _RPOR4_RP40R2_POSITION                   0x00000002
#define _RPOR4_RP40R2_MASK                       0x00000004
#define _RPOR4_RP40R2_LENGTH                     0x00000001

#define _RPOR4_RP40R3_POSITION                   0x00000003
#define _RPOR4_RP40R3_MASK                       0x00000008
#define _RPOR4_RP40R3_LENGTH                     0x00000001

#define _RPOR4_RP40R4_POSITION                   0x00000004
#define _RPOR4_RP40R4_MASK                       0x00000010
#define _RPOR4_RP40R4_LENGTH                     0x00000001

#define _RPOR4_RP40R5_POSITION                   0x00000005
#define _RPOR4_RP40R5_MASK                       0x00000020
#define _RPOR4_RP40R5_LENGTH                     0x00000001

#define _RPOR4_RP41R0_POSITION                   0x00000008
#define _RPOR4_RP41R0_MASK                       0x00000100
#define _RPOR4_RP41R0_LENGTH                     0x00000001

#define _RPOR4_RP41R1_POSITION                   0x00000009
#define _RPOR4_RP41R1_MASK                       0x00000200
#define _RPOR4_RP41R1_LENGTH                     0x00000001

#define _RPOR4_RP41R2_POSITION                   0x0000000A
#define _RPOR4_RP41R2_MASK                       0x00000400
#define _RPOR4_RP41R2_LENGTH                     0x00000001

#define _RPOR4_RP41R3_POSITION                   0x0000000B
#define _RPOR4_RP41R3_MASK                       0x00000800
#define _RPOR4_RP41R3_LENGTH                     0x00000001

#define _RPOR4_RP41R4_POSITION                   0x0000000C
#define _RPOR4_RP41R4_MASK                       0x00001000
#define _RPOR4_RP41R4_LENGTH                     0x00000001

#define _RPOR4_RP41R5_POSITION                   0x0000000D
#define _RPOR4_RP41R5_MASK                       0x00002000
#define _RPOR4_RP41R5_LENGTH                     0x00000001

#define _RPOR5_RP42R_POSITION                    0x00000000
#define _RPOR5_RP42R_MASK                        0x0000003F
#define _RPOR5_RP42R_LENGTH                      0x00000006

#define _RPOR5_RP43R_POSITION                    0x00000008
#define _RPOR5_RP43R_MASK                        0x00003F00
#define _RPOR5_RP43R_LENGTH                      0x00000006

#define _RPOR5_RP42R0_POSITION                   0x00000000
#define _RPOR5_RP42R0_MASK                       0x00000001
#define _RPOR5_RP42R0_LENGTH                     0x00000001

#define _RPOR5_RP42R1_POSITION                   0x00000001
#define _RPOR5_RP42R1_MASK                       0x00000002
#define _RPOR5_RP42R1_LENGTH                     0x00000001

#define _RPOR5_RP42R2_POSITION                   0x00000002
#define _RPOR5_RP42R2_MASK                       0x00000004
#define _RPOR5_RP42R2_LENGTH                     0x00000001

#define _RPOR5_RP42R3_POSITION                   0x00000003
#define _RPOR5_RP42R3_MASK                       0x00000008
#define _RPOR5_RP42R3_LENGTH                     0x00000001

#define _RPOR5_RP42R4_POSITION                   0x00000004
#define _RPOR5_RP42R4_MASK                       0x00000010
#define _RPOR5_RP42R4_LENGTH                     0x00000001

#define _RPOR5_RP42R5_POSITION                   0x00000005
#define _RPOR5_RP42R5_MASK                       0x00000020
#define _RPOR5_RP42R5_LENGTH                     0x00000001

#define _RPOR5_RP43R0_POSITION                   0x00000008
#define _RPOR5_RP43R0_MASK                       0x00000100
#define _RPOR5_RP43R0_LENGTH                     0x00000001

#define _RPOR5_RP43R1_POSITION                   0x00000009
#define _RPOR5_RP43R1_MASK                       0x00000200
#define _RPOR5_RP43R1_LENGTH                     0x00000001

#define _RPOR5_RP43R2_POSITION                   0x0000000A
#define _RPOR5_RP43R2_MASK                       0x00000400
#define _RPOR5_RP43R2_LENGTH                     0x00000001

#define _RPOR5_RP43R3_POSITION                   0x0000000B
#define _RPOR5_RP43R3_MASK                       0x00000800
#define _RPOR5_RP43R3_LENGTH                     0x00000001

#define _RPOR5_RP43R4_POSITION                   0x0000000C
#define _RPOR5_RP43R4_MASK                       0x00001000
#define _RPOR5_RP43R4_LENGTH                     0x00000001

#define _RPOR5_RP43R5_POSITION                   0x0000000D
#define _RPOR5_RP43R5_MASK                       0x00002000
#define _RPOR5_RP43R5_LENGTH                     0x00000001

#define _RPOR6_RP44R_POSITION                    0x00000000
#define _RPOR6_RP44R_MASK                        0x0000003F
#define _RPOR6_RP44R_LENGTH                      0x00000006

#define _RPOR6_RP45R_POSITION                    0x00000008
#define _RPOR6_RP45R_MASK                        0x00003F00
#define _RPOR6_RP45R_LENGTH                      0x00000006

#define _RPOR6_RP44R0_POSITION                   0x00000000
#define _RPOR6_RP44R0_MASK                       0x00000001
#define _RPOR6_RP44R0_LENGTH                     0x00000001

#define _RPOR6_RP44R1_POSITION                   0x00000001
#define _RPOR6_RP44R1_MASK                       0x00000002
#define _RPOR6_RP44R1_LENGTH                     0x00000001

#define _RPOR6_RP44R2_POSITION                   0x00000002
#define _RPOR6_RP44R2_MASK                       0x00000004
#define _RPOR6_RP44R2_LENGTH                     0x00000001

#define _RPOR6_RP44R3_POSITION                   0x00000003
#define _RPOR6_RP44R3_MASK                       0x00000008
#define _RPOR6_RP44R3_LENGTH                     0x00000001

#define _RPOR6_RP44R4_POSITION                   0x00000004
#define _RPOR6_RP44R4_MASK                       0x00000010
#define _RPOR6_RP44R4_LENGTH                     0x00000001

#define _RPOR6_RP44R5_POSITION                   0x00000005
#define _RPOR6_RP44R5_MASK                       0x00000020
#define _RPOR6_RP44R5_LENGTH                     0x00000001

#define _RPOR6_RP45R0_POSITION                   0x00000008
#define _RPOR6_RP45R0_MASK                       0x00000100
#define _RPOR6_RP45R0_LENGTH                     0x00000001

#define _RPOR6_RP45R1_POSITION                   0x00000009
#define _RPOR6_RP45R1_MASK                       0x00000200
#define _RPOR6_RP45R1_LENGTH                     0x00000001

#define _RPOR6_RP45R2_POSITION                   0x0000000A
#define _RPOR6_RP45R2_MASK                       0x00000400
#define _RPOR6_RP45R2_LENGTH                     0x00000001

#define _RPOR6_RP45R3_POSITION                   0x0000000B
#define _RPOR6_RP45R3_MASK                       0x00000800
#define _RPOR6_RP45R3_LENGTH                     0x00000001

#define _RPOR6_RP45R4_POSITION                   0x0000000C
#define _RPOR6_RP45R4_MASK                       0x00001000
#define _RPOR6_RP45R4_LENGTH                     0x00000001

#define _RPOR6_RP45R5_POSITION                   0x0000000D
#define _RPOR6_RP45R5_MASK                       0x00002000
#define _RPOR6_RP45R5_LENGTH                     0x00000001

#define _RPOR7_RP46R_POSITION                    0x00000000
#define _RPOR7_RP46R_MASK                        0x0000003F
#define _RPOR7_RP46R_LENGTH                      0x00000006

#define _RPOR7_RP47R_POSITION                    0x00000008
#define _RPOR7_RP47R_MASK                        0x00003F00
#define _RPOR7_RP47R_LENGTH                      0x00000006

#define _RPOR7_RP46R0_POSITION                   0x00000000
#define _RPOR7_RP46R0_MASK                       0x00000001
#define _RPOR7_RP46R0_LENGTH                     0x00000001

#define _RPOR7_RP46R1_POSITION                   0x00000001
#define _RPOR7_RP46R1_MASK                       0x00000002
#define _RPOR7_RP46R1_LENGTH                     0x00000001

#define _RPOR7_RP46R2_POSITION                   0x00000002
#define _RPOR7_RP46R2_MASK                       0x00000004
#define _RPOR7_RP46R2_LENGTH                     0x00000001

#define _RPOR7_RP46R3_POSITION                   0x00000003
#define _RPOR7_RP46R3_MASK                       0x00000008
#define _RPOR7_RP46R3_LENGTH                     0x00000001

#define _RPOR7_RP46R4_POSITION                   0x00000004
#define _RPOR7_RP46R4_MASK                       0x00000010
#define _RPOR7_RP46R4_LENGTH                     0x00000001

#define _RPOR7_RP46R5_POSITION                   0x00000005
#define _RPOR7_RP46R5_MASK                       0x00000020
#define _RPOR7_RP46R5_LENGTH                     0x00000001

#define _RPOR7_RP47R0_POSITION                   0x00000008
#define _RPOR7_RP47R0_MASK                       0x00000100
#define _RPOR7_RP47R0_LENGTH                     0x00000001

#define _RPOR7_RP47R1_POSITION                   0x00000009
#define _RPOR7_RP47R1_MASK                       0x00000200
#define _RPOR7_RP47R1_LENGTH                     0x00000001

#define _RPOR7_RP47R2_POSITION                   0x0000000A
#define _RPOR7_RP47R2_MASK                       0x00000400
#define _RPOR7_RP47R2_LENGTH                     0x00000001

#define _RPOR7_RP47R3_POSITION                   0x0000000B
#define _RPOR7_RP47R3_MASK                       0x00000800
#define _RPOR7_RP47R3_LENGTH                     0x00000001

#define _RPOR7_RP47R4_POSITION                   0x0000000C
#define _RPOR7_RP47R4_MASK                       0x00001000
#define _RPOR7_RP47R4_LENGTH                     0x00000001

#define _RPOR7_RP47R5_POSITION                   0x0000000D
#define _RPOR7_RP47R5_MASK                       0x00002000
#define _RPOR7_RP47R5_LENGTH                     0x00000001

#define _RPOR16_RP176R_POSITION                  0x00000000
#define _RPOR16_RP176R_MASK                      0x0000003F
#define _RPOR16_RP176R_LENGTH                    0x00000006

#define _RPOR16_RP177R_POSITION                  0x00000008
#define _RPOR16_RP177R_MASK                      0x00003F00
#define _RPOR16_RP177R_LENGTH                    0x00000006

#define _RPOR16_RP176R0_POSITION                 0x00000000
#define _RPOR16_RP176R0_MASK                     0x00000001
#define _RPOR16_RP176R0_LENGTH                   0x00000001

#define _RPOR16_RP176R1_POSITION                 0x00000001
#define _RPOR16_RP176R1_MASK                     0x00000002
#define _RPOR16_RP176R1_LENGTH                   0x00000001

#define _RPOR16_RP176R2_POSITION                 0x00000002
#define _RPOR16_RP176R2_MASK                     0x00000004
#define _RPOR16_RP176R2_LENGTH                   0x00000001

#define _RPOR16_RP176R3_POSITION                 0x00000003
#define _RPOR16_RP176R3_MASK                     0x00000008
#define _RPOR16_RP176R3_LENGTH                   0x00000001

#define _RPOR16_RP176R4_POSITION                 0x00000004
#define _RPOR16_RP176R4_MASK                     0x00000010
#define _RPOR16_RP176R4_LENGTH                   0x00000001

#define _RPOR16_RP176R5_POSITION                 0x00000005
#define _RPOR16_RP176R5_MASK                     0x00000020
#define _RPOR16_RP176R5_LENGTH                   0x00000001

#define _RPOR16_RP177R0_POSITION                 0x00000008
#define _RPOR16_RP177R0_MASK                     0x00000100
#define _RPOR16_RP177R0_LENGTH                   0x00000001

#define _RPOR16_RP177R1_POSITION                 0x00000009
#define _RPOR16_RP177R1_MASK                     0x00000200
#define _RPOR16_RP177R1_LENGTH                   0x00000001

#define _RPOR16_RP177R2_POSITION                 0x0000000A
#define _RPOR16_RP177R2_MASK                     0x00000400
#define _RPOR16_RP177R2_LENGTH                   0x00000001

#define _RPOR16_RP177R3_POSITION                 0x0000000B
#define _RPOR16_RP177R3_MASK                     0x00000800
#define _RPOR16_RP177R3_LENGTH                   0x00000001

#define _RPOR16_RP177R4_POSITION                 0x0000000C
#define _RPOR16_RP177R4_MASK                     0x00001000
#define _RPOR16_RP177R4_LENGTH                   0x00000001

#define _RPOR16_RP177R5_POSITION                 0x0000000D
#define _RPOR16_RP177R5_MASK                     0x00002000
#define _RPOR16_RP177R5_LENGTH                   0x00000001

#define _RPOR17_RP178R_POSITION                  0x00000000
#define _RPOR17_RP178R_MASK                      0x0000003F
#define _RPOR17_RP178R_LENGTH                    0x00000006

#define _RPOR17_RP179R_POSITION                  0x00000008
#define _RPOR17_RP179R_MASK                      0x00003F00
#define _RPOR17_RP179R_LENGTH                    0x00000006

#define _RPOR17_RP178R0_POSITION                 0x00000000
#define _RPOR17_RP178R0_MASK                     0x00000001
#define _RPOR17_RP178R0_LENGTH                   0x00000001

#define _RPOR17_RP178R1_POSITION                 0x00000001
#define _RPOR17_RP178R1_MASK                     0x00000002
#define _RPOR17_RP178R1_LENGTH                   0x00000001

#define _RPOR17_RP178R2_POSITION                 0x00000002
#define _RPOR17_RP178R2_MASK                     0x00000004
#define _RPOR17_RP178R2_LENGTH                   0x00000001

#define _RPOR17_RP178R3_POSITION                 0x00000003
#define _RPOR17_RP178R3_MASK                     0x00000008
#define _RPOR17_RP178R3_LENGTH                   0x00000001

#define _RPOR17_RP178R4_POSITION                 0x00000004
#define _RPOR17_RP178R4_MASK                     0x00000010
#define _RPOR17_RP178R4_LENGTH                   0x00000001

#define _RPOR17_RP178R5_POSITION                 0x00000005
#define _RPOR17_RP178R5_MASK                     0x00000020
#define _RPOR17_RP178R5_LENGTH                   0x00000001

#define _RPOR17_RP179R0_POSITION                 0x00000008
#define _RPOR17_RP179R0_MASK                     0x00000100
#define _RPOR17_RP179R0_LENGTH                   0x00000001

#define _RPOR17_RP179R1_POSITION                 0x00000009
#define _RPOR17_RP179R1_MASK                     0x00000200
#define _RPOR17_RP179R1_LENGTH                   0x00000001

#define _RPOR17_RP179R2_POSITION                 0x0000000A
#define _RPOR17_RP179R2_MASK                     0x00000400
#define _RPOR17_RP179R2_LENGTH                   0x00000001

#define _RPOR17_RP179R3_POSITION                 0x0000000B
#define _RPOR17_RP179R3_MASK                     0x00000800
#define _RPOR17_RP179R3_LENGTH                   0x00000001

#define _RPOR17_RP179R4_POSITION                 0x0000000C
#define _RPOR17_RP179R4_MASK                     0x00001000
#define _RPOR17_RP179R4_LENGTH                   0x00000001

#define _RPOR17_RP179R5_POSITION                 0x0000000D
#define _RPOR17_RP179R5_MASK                     0x00002000
#define _RPOR17_RP179R5_LENGTH                   0x00000001

#define _RPOR18_RP180R_POSITION                  0x00000000
#define _RPOR18_RP180R_MASK                      0x0000003F
#define _RPOR18_RP180R_LENGTH                    0x00000006

#define _RPOR18_RP181R_POSITION                  0x00000008
#define _RPOR18_RP181R_MASK                      0x00003F00
#define _RPOR18_RP181R_LENGTH                    0x00000006

#define _RPOR18_RP180R0_POSITION                 0x00000000
#define _RPOR18_RP180R0_MASK                     0x00000001
#define _RPOR18_RP180R0_LENGTH                   0x00000001

#define _RPOR18_RP180R1_POSITION                 0x00000001
#define _RPOR18_RP180R1_MASK                     0x00000002
#define _RPOR18_RP180R1_LENGTH                   0x00000001

#define _RPOR18_RP180R2_POSITION                 0x00000002
#define _RPOR18_RP180R2_MASK                     0x00000004
#define _RPOR18_RP180R2_LENGTH                   0x00000001

#define _RPOR18_RP180R3_POSITION                 0x00000003
#define _RPOR18_RP180R3_MASK                     0x00000008
#define _RPOR18_RP180R3_LENGTH                   0x00000001

#define _RPOR18_RP180R4_POSITION                 0x00000004
#define _RPOR18_RP180R4_MASK                     0x00000010
#define _RPOR18_RP180R4_LENGTH                   0x00000001

#define _RPOR18_RP180R5_POSITION                 0x00000005
#define _RPOR18_RP180R5_MASK                     0x00000020
#define _RPOR18_RP180R5_LENGTH                   0x00000001

#define _RPOR18_RP181R0_POSITION                 0x00000008
#define _RPOR18_RP181R0_MASK                     0x00000100
#define _RPOR18_RP181R0_LENGTH                   0x00000001

#define _RPOR18_RP181R1_POSITION                 0x00000009
#define _RPOR18_RP181R1_MASK                     0x00000200
#define _RPOR18_RP181R1_LENGTH                   0x00000001

#define _RPOR18_RP181R2_POSITION                 0x0000000A
#define _RPOR18_RP181R2_MASK                     0x00000400
#define _RPOR18_RP181R2_LENGTH                   0x00000001

#define _RPOR18_RP181R3_POSITION                 0x0000000B
#define _RPOR18_RP181R3_MASK                     0x00000800
#define _RPOR18_RP181R3_LENGTH                   0x00000001

#define _RPOR18_RP181R4_POSITION                 0x0000000C
#define _RPOR18_RP181R4_MASK                     0x00001000
#define _RPOR18_RP181R4_LENGTH                   0x00000001

#define _RPOR18_RP181R5_POSITION                 0x0000000D
#define _RPOR18_RP181R5_MASK                     0x00002000
#define _RPOR18_RP181R5_LENGTH                   0x00000001

#define _RPINR0_INT1R_POSITION                   0x00000008
#define _RPINR0_INT1R_MASK                       0x0000FF00
#define _RPINR0_INT1R_LENGTH                     0x00000008

#define _RPINR0_INT1R0_POSITION                  0x00000008
#define _RPINR0_INT1R0_MASK                      0x00000100
#define _RPINR0_INT1R0_LENGTH                    0x00000001

#define _RPINR0_INT1R1_POSITION                  0x00000009
#define _RPINR0_INT1R1_MASK                      0x00000200
#define _RPINR0_INT1R1_LENGTH                    0x00000001

#define _RPINR0_INT1R2_POSITION                  0x0000000A
#define _RPINR0_INT1R2_MASK                      0x00000400
#define _RPINR0_INT1R2_LENGTH                    0x00000001

#define _RPINR0_INT1R3_POSITION                  0x0000000B
#define _RPINR0_INT1R3_MASK                      0x00000800
#define _RPINR0_INT1R3_LENGTH                    0x00000001

#define _RPINR0_INT1R4_POSITION                  0x0000000C
#define _RPINR0_INT1R4_MASK                      0x00001000
#define _RPINR0_INT1R4_LENGTH                    0x00000001

#define _RPINR0_INT1R5_POSITION                  0x0000000D
#define _RPINR0_INT1R5_MASK                      0x00002000
#define _RPINR0_INT1R5_LENGTH                    0x00000001

#define _RPINR0_INT1R6_POSITION                  0x0000000E
#define _RPINR0_INT1R6_MASK                      0x00004000
#define _RPINR0_INT1R6_LENGTH                    0x00000001

#define _RPINR0_INT1R7_POSITION                  0x0000000F
#define _RPINR0_INT1R7_MASK                      0x00008000
#define _RPINR0_INT1R7_LENGTH                    0x00000001

#define _RPINR1_INT2R_POSITION                   0x00000000
#define _RPINR1_INT2R_MASK                       0x000000FF
#define _RPINR1_INT2R_LENGTH                     0x00000008

#define _RPINR1_INT2R0_POSITION                  0x00000000
#define _RPINR1_INT2R0_MASK                      0x00000001
#define _RPINR1_INT2R0_LENGTH                    0x00000001

#define _RPINR1_INT2R1_POSITION                  0x00000001
#define _RPINR1_INT2R1_MASK                      0x00000002
#define _RPINR1_INT2R1_LENGTH                    0x00000001

#define _RPINR1_INT2R2_POSITION                  0x00000002
#define _RPINR1_INT2R2_MASK                      0x00000004
#define _RPINR1_INT2R2_LENGTH                    0x00000001

#define _RPINR1_INT2R3_POSITION                  0x00000003
#define _RPINR1_INT2R3_MASK                      0x00000008
#define _RPINR1_INT2R3_LENGTH                    0x00000001

#define _RPINR1_INT2R4_POSITION                  0x00000004
#define _RPINR1_INT2R4_MASK                      0x00000010
#define _RPINR1_INT2R4_LENGTH                    0x00000001

#define _RPINR1_INT2R5_POSITION                  0x00000005
#define _RPINR1_INT2R5_MASK                      0x00000020
#define _RPINR1_INT2R5_LENGTH                    0x00000001

#define _RPINR1_INT2R6_POSITION                  0x00000006
#define _RPINR1_INT2R6_MASK                      0x00000040
#define _RPINR1_INT2R6_LENGTH                    0x00000001

#define _RPINR1_INT2R7_POSITION                  0x00000007
#define _RPINR1_INT2R7_MASK                      0x00000080
#define _RPINR1_INT2R7_LENGTH                    0x00000001

#define _RPINR2_T1CKRR_POSITION                  0x00000008
#define _RPINR2_T1CKRR_MASK                      0x0000FF00
#define _RPINR2_T1CKRR_LENGTH                    0x00000008

#define _RPINR2_T1CKRR0_POSITION                 0x00000008
#define _RPINR2_T1CKRR0_MASK                     0x00000100
#define _RPINR2_T1CKRR0_LENGTH                   0x00000001

#define _RPINR2_T1CKRR1_POSITION                 0x00000009
#define _RPINR2_T1CKRR1_MASK                     0x00000200
#define _RPINR2_T1CKRR1_LENGTH                   0x00000001

#define _RPINR2_T1CKRR2_POSITION                 0x0000000A
#define _RPINR2_T1CKRR2_MASK                     0x00000400
#define _RPINR2_T1CKRR2_LENGTH                   0x00000001

#define _RPINR2_T1CKRR3_POSITION                 0x0000000B
#define _RPINR2_T1CKRR3_MASK                     0x00000800
#define _RPINR2_T1CKRR3_LENGTH                   0x00000001

#define _RPINR2_T1CKRR4_POSITION                 0x0000000C
#define _RPINR2_T1CKRR4_MASK                     0x00001000
#define _RPINR2_T1CKRR4_LENGTH                   0x00000001

#define _RPINR2_T1CKRR5_POSITION                 0x0000000D
#define _RPINR2_T1CKRR5_MASK                     0x00002000
#define _RPINR2_T1CKRR5_LENGTH                   0x00000001

#define _RPINR2_T1CKRR6_POSITION                 0x0000000E
#define _RPINR2_T1CKRR6_MASK                     0x00004000
#define _RPINR2_T1CKRR6_LENGTH                   0x00000001

#define _RPINR2_T1CKRR7_POSITION                 0x0000000F
#define _RPINR2_T1CKRR7_MASK                     0x00008000
#define _RPINR2_T1CKRR7_LENGTH                   0x00000001

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x000000FF
#define _RPINR3_T2CKR_LENGTH                     0x00000008

#define _RPINR3_T3CKR_POSITION                   0x00000008
#define _RPINR3_T3CKR_MASK                       0x0000FF00
#define _RPINR3_T3CKR_LENGTH                     0x00000008

#define _RPINR3_T2CKR0_POSITION                  0x00000000
#define _RPINR3_T2CKR0_MASK                      0x00000001
#define _RPINR3_T2CKR0_LENGTH                    0x00000001

#define _RPINR3_T2CKR1_POSITION                  0x00000001
#define _RPINR3_T2CKR1_MASK                      0x00000002
#define _RPINR3_T2CKR1_LENGTH                    0x00000001

#define _RPINR3_T2CKR2_POSITION                  0x00000002
#define _RPINR3_T2CKR2_MASK                      0x00000004
#define _RPINR3_T2CKR2_LENGTH                    0x00000001

#define _RPINR3_T2CKR3_POSITION                  0x00000003
#define _RPINR3_T2CKR3_MASK                      0x00000008
#define _RPINR3_T2CKR3_LENGTH                    0x00000001

#define _RPINR3_T2CKR4_POSITION                  0x00000004
#define _RPINR3_T2CKR4_MASK                      0x00000010
#define _RPINR3_T2CKR4_LENGTH                    0x00000001

#define _RPINR3_T2CKR5_POSITION                  0x00000005
#define _RPINR3_T2CKR5_MASK                      0x00000020
#define _RPINR3_T2CKR5_LENGTH                    0x00000001

#define _RPINR3_T2CKR6_POSITION                  0x00000006
#define _RPINR3_T2CKR6_MASK                      0x00000040
#define _RPINR3_T2CKR6_LENGTH                    0x00000001

#define _RPINR3_T2CKR7_POSITION                  0x00000007
#define _RPINR3_T2CKR7_MASK                      0x00000080
#define _RPINR3_T2CKR7_LENGTH                    0x00000001

#define _RPINR3_T3CKR0_POSITION                  0x00000008
#define _RPINR3_T3CKR0_MASK                      0x00000100
#define _RPINR3_T3CKR0_LENGTH                    0x00000001

#define _RPINR3_T3CKR1_POSITION                  0x00000009
#define _RPINR3_T3CKR1_MASK                      0x00000200
#define _RPINR3_T3CKR1_LENGTH                    0x00000001

#define _RPINR3_T3CKR2_POSITION                  0x0000000A
#define _RPINR3_T3CKR2_MASK                      0x00000400
#define _RPINR3_T3CKR2_LENGTH                    0x00000001

#define _RPINR3_T3CKR3_POSITION                  0x0000000B
#define _RPINR3_T3CKR3_MASK                      0x00000800
#define _RPINR3_T3CKR3_LENGTH                    0x00000001

#define _RPINR3_T3CKR4_POSITION                  0x0000000C
#define _RPINR3_T3CKR4_MASK                      0x00001000
#define _RPINR3_T3CKR4_LENGTH                    0x00000001

#define _RPINR3_T3CKR5_POSITION                  0x0000000D
#define _RPINR3_T3CKR5_MASK                      0x00002000
#define _RPINR3_T3CKR5_LENGTH                    0x00000001

#define _RPINR3_T3CKR6_POSITION                  0x0000000E
#define _RPINR3_T3CKR6_MASK                      0x00004000
#define _RPINR3_T3CKR6_LENGTH                    0x00000001

#define _RPINR3_T3CKR7_POSITION                  0x0000000F
#define _RPINR3_T3CKR7_MASK                      0x00008000
#define _RPINR3_T3CKR7_LENGTH                    0x00000001

#define _RPINR7_IC1R_POSITION                    0x00000000
#define _RPINR7_IC1R_MASK                        0x000000FF
#define _RPINR7_IC1R_LENGTH                      0x00000008

#define _RPINR7_IC2R_POSITION                    0x00000008
#define _RPINR7_IC2R_MASK                        0x0000FF00
#define _RPINR7_IC2R_LENGTH                      0x00000008

#define _RPINR7_IC1R0_POSITION                   0x00000000
#define _RPINR7_IC1R0_MASK                       0x00000001
#define _RPINR7_IC1R0_LENGTH                     0x00000001

#define _RPINR7_IC1R1_POSITION                   0x00000001
#define _RPINR7_IC1R1_MASK                       0x00000002
#define _RPINR7_IC1R1_LENGTH                     0x00000001

#define _RPINR7_IC1R2_POSITION                   0x00000002
#define _RPINR7_IC1R2_MASK                       0x00000004
#define _RPINR7_IC1R2_LENGTH                     0x00000001

#define _RPINR7_IC1R3_POSITION                   0x00000003
#define _RPINR7_IC1R3_MASK                       0x00000008
#define _RPINR7_IC1R3_LENGTH                     0x00000001

#define _RPINR7_IC1R4_POSITION                   0x00000004
#define _RPINR7_IC1R4_MASK                       0x00000010
#define _RPINR7_IC1R4_LENGTH                     0x00000001

#define _RPINR7_IC1R5_POSITION                   0x00000005
#define _RPINR7_IC1R5_MASK                       0x00000020
#define _RPINR7_IC1R5_LENGTH                     0x00000001

#define _RPINR7_IC1R6_POSITION                   0x00000006
#define _RPINR7_IC1R6_MASK                       0x00000040
#define _RPINR7_IC1R6_LENGTH                     0x00000001

#define _RPINR7_IC1R7_POSITION                   0x00000007
#define _RPINR7_IC1R7_MASK                       0x00000080
#define _RPINR7_IC1R7_LENGTH                     0x00000001

#define _RPINR7_IC2R0_POSITION                   0x00000008
#define _RPINR7_IC2R0_MASK                       0x00000100
#define _RPINR7_IC2R0_LENGTH                     0x00000001

#define _RPINR7_IC2R1_POSITION                   0x00000009
#define _RPINR7_IC2R1_MASK                       0x00000200
#define _RPINR7_IC2R1_LENGTH                     0x00000001

#define _RPINR7_IC2R2_POSITION                   0x0000000A
#define _RPINR7_IC2R2_MASK                       0x00000400
#define _RPINR7_IC2R2_LENGTH                     0x00000001

#define _RPINR7_IC2R3_POSITION                   0x0000000B
#define _RPINR7_IC2R3_MASK                       0x00000800
#define _RPINR7_IC2R3_LENGTH                     0x00000001

#define _RPINR7_IC2R4_POSITION                   0x0000000C
#define _RPINR7_IC2R4_MASK                       0x00001000
#define _RPINR7_IC2R4_LENGTH                     0x00000001

#define _RPINR7_IC2R5_POSITION                   0x0000000D
#define _RPINR7_IC2R5_MASK                       0x00002000
#define _RPINR7_IC2R5_LENGTH                     0x00000001

#define _RPINR7_IC2R6_POSITION                   0x0000000E
#define _RPINR7_IC2R6_MASK                       0x00004000
#define _RPINR7_IC2R6_LENGTH                     0x00000001

#define _RPINR7_IC2R7_POSITION                   0x0000000F
#define _RPINR7_IC2R7_MASK                       0x00008000
#define _RPINR7_IC2R7_LENGTH                     0x00000001

#define _RPINR8_IC3R_POSITION                    0x00000000
#define _RPINR8_IC3R_MASK                        0x000000FF
#define _RPINR8_IC3R_LENGTH                      0x00000008

#define _RPINR8_IC4R_POSITION                    0x00000008
#define _RPINR8_IC4R_MASK                        0x0000FF00
#define _RPINR8_IC4R_LENGTH                      0x00000008

#define _RPINR8_IC3R0_POSITION                   0x00000000
#define _RPINR8_IC3R0_MASK                       0x00000001
#define _RPINR8_IC3R0_LENGTH                     0x00000001

#define _RPINR8_IC3R1_POSITION                   0x00000001
#define _RPINR8_IC3R1_MASK                       0x00000002
#define _RPINR8_IC3R1_LENGTH                     0x00000001

#define _RPINR8_IC3R2_POSITION                   0x00000002
#define _RPINR8_IC3R2_MASK                       0x00000004
#define _RPINR8_IC3R2_LENGTH                     0x00000001

#define _RPINR8_IC3R3_POSITION                   0x00000003
#define _RPINR8_IC3R3_MASK                       0x00000008
#define _RPINR8_IC3R3_LENGTH                     0x00000001

#define _RPINR8_IC3R4_POSITION                   0x00000004
#define _RPINR8_IC3R4_MASK                       0x00000010
#define _RPINR8_IC3R4_LENGTH                     0x00000001

#define _RPINR8_IC3R5_POSITION                   0x00000005
#define _RPINR8_IC3R5_MASK                       0x00000020
#define _RPINR8_IC3R5_LENGTH                     0x00000001

#define _RPINR8_IC3R6_POSITION                   0x00000006
#define _RPINR8_IC3R6_MASK                       0x00000040
#define _RPINR8_IC3R6_LENGTH                     0x00000001

#define _RPINR8_IC3R7_POSITION                   0x00000007
#define _RPINR8_IC3R7_MASK                       0x00000080
#define _RPINR8_IC3R7_LENGTH                     0x00000001

#define _RPINR8_IC4R0_POSITION                   0x00000008
#define _RPINR8_IC4R0_MASK                       0x00000100
#define _RPINR8_IC4R0_LENGTH                     0x00000001

#define _RPINR8_IC4R1_POSITION                   0x00000009
#define _RPINR8_IC4R1_MASK                       0x00000200
#define _RPINR8_IC4R1_LENGTH                     0x00000001

#define _RPINR8_IC4R2_POSITION                   0x0000000A
#define _RPINR8_IC4R2_MASK                       0x00000400
#define _RPINR8_IC4R2_LENGTH                     0x00000001

#define _RPINR8_IC4R3_POSITION                   0x0000000B
#define _RPINR8_IC4R3_MASK                       0x00000800
#define _RPINR8_IC4R3_LENGTH                     0x00000001

#define _RPINR8_IC4R4_POSITION                   0x0000000C
#define _RPINR8_IC4R4_MASK                       0x00001000
#define _RPINR8_IC4R4_LENGTH                     0x00000001

#define _RPINR8_IC4R5_POSITION                   0x0000000D
#define _RPINR8_IC4R5_MASK                       0x00002000
#define _RPINR8_IC4R5_LENGTH                     0x00000001

#define _RPINR8_IC4R6_POSITION                   0x0000000E
#define _RPINR8_IC4R6_MASK                       0x00004000
#define _RPINR8_IC4R6_LENGTH                     0x00000001

#define _RPINR8_IC4R7_POSITION                   0x0000000F
#define _RPINR8_IC4R7_MASK                       0x00008000
#define _RPINR8_IC4R7_LENGTH                     0x00000001

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x000000FF
#define _RPINR11_OCFAR_LENGTH                    0x00000008

#define _RPINR11_OCFAR0_POSITION                 0x00000000
#define _RPINR11_OCFAR0_MASK                     0x00000001
#define _RPINR11_OCFAR0_LENGTH                   0x00000001

#define _RPINR11_OCFAR1_POSITION                 0x00000001
#define _RPINR11_OCFAR1_MASK                     0x00000002
#define _RPINR11_OCFAR1_LENGTH                   0x00000001

#define _RPINR11_OCFAR2_POSITION                 0x00000002
#define _RPINR11_OCFAR2_MASK                     0x00000004
#define _RPINR11_OCFAR2_LENGTH                   0x00000001

#define _RPINR11_OCFAR3_POSITION                 0x00000003
#define _RPINR11_OCFAR3_MASK                     0x00000008
#define _RPINR11_OCFAR3_LENGTH                   0x00000001

#define _RPINR11_OCFAR4_POSITION                 0x00000004
#define _RPINR11_OCFAR4_MASK                     0x00000010
#define _RPINR11_OCFAR4_LENGTH                   0x00000001

#define _RPINR11_OCFAR5_POSITION                 0x00000005
#define _RPINR11_OCFAR5_MASK                     0x00000020
#define _RPINR11_OCFAR5_LENGTH                   0x00000001

#define _RPINR11_OCFAR6_POSITION                 0x00000006
#define _RPINR11_OCFAR6_MASK                     0x00000040
#define _RPINR11_OCFAR6_LENGTH                   0x00000001

#define _RPINR11_OCFAR7_POSITION                 0x00000007
#define _RPINR11_OCFAR7_MASK                     0x00000080
#define _RPINR11_OCFAR7_LENGTH                   0x00000001

#define _RPINR12_FLT1R_POSITION                  0x00000000
#define _RPINR12_FLT1R_MASK                      0x000000FF
#define _RPINR12_FLT1R_LENGTH                    0x00000008

#define _RPINR12_FLT2R_POSITION                  0x00000008
#define _RPINR12_FLT2R_MASK                      0x0000FF00
#define _RPINR12_FLT2R_LENGTH                    0x00000008

#define _RPINR12_FLT1R0_POSITION                 0x00000000
#define _RPINR12_FLT1R0_MASK                     0x00000001
#define _RPINR12_FLT1R0_LENGTH                   0x00000001

#define _RPINR12_FLT1R1_POSITION                 0x00000001
#define _RPINR12_FLT1R1_MASK                     0x00000002
#define _RPINR12_FLT1R1_LENGTH                   0x00000001

#define _RPINR12_FLT1R2_POSITION                 0x00000002
#define _RPINR12_FLT1R2_MASK                     0x00000004
#define _RPINR12_FLT1R2_LENGTH                   0x00000001

#define _RPINR12_FLT1R3_POSITION                 0x00000003
#define _RPINR12_FLT1R3_MASK                     0x00000008
#define _RPINR12_FLT1R3_LENGTH                   0x00000001

#define _RPINR12_FLT1R4_POSITION                 0x00000004
#define _RPINR12_FLT1R4_MASK                     0x00000010
#define _RPINR12_FLT1R4_LENGTH                   0x00000001

#define _RPINR12_FLT1R5_POSITION                 0x00000005
#define _RPINR12_FLT1R5_MASK                     0x00000020
#define _RPINR12_FLT1R5_LENGTH                   0x00000001

#define _RPINR12_FLT1R6_POSITION                 0x00000006
#define _RPINR12_FLT1R6_MASK                     0x00000040
#define _RPINR12_FLT1R6_LENGTH                   0x00000001

#define _RPINR12_FLT1R7_POSITION                 0x00000007
#define _RPINR12_FLT1R7_MASK                     0x00000080
#define _RPINR12_FLT1R7_LENGTH                   0x00000001

#define _RPINR12_FLT2R0_POSITION                 0x00000008
#define _RPINR12_FLT2R0_MASK                     0x00000100
#define _RPINR12_FLT2R0_LENGTH                   0x00000001

#define _RPINR12_FLT2R1_POSITION                 0x00000009
#define _RPINR12_FLT2R1_MASK                     0x00000200
#define _RPINR12_FLT2R1_LENGTH                   0x00000001

#define _RPINR12_FLT2R2_POSITION                 0x0000000A
#define _RPINR12_FLT2R2_MASK                     0x00000400
#define _RPINR12_FLT2R2_LENGTH                   0x00000001

#define _RPINR12_FLT2R3_POSITION                 0x0000000B
#define _RPINR12_FLT2R3_MASK                     0x00000800
#define _RPINR12_FLT2R3_LENGTH                   0x00000001

#define _RPINR12_FLT2R4_POSITION                 0x0000000C
#define _RPINR12_FLT2R4_MASK                     0x00001000
#define _RPINR12_FLT2R4_LENGTH                   0x00000001

#define _RPINR12_FLT2R5_POSITION                 0x0000000D
#define _RPINR12_FLT2R5_MASK                     0x00002000
#define _RPINR12_FLT2R5_LENGTH                   0x00000001

#define _RPINR12_FLT2R6_POSITION                 0x0000000E
#define _RPINR12_FLT2R6_MASK                     0x00004000
#define _RPINR12_FLT2R6_LENGTH                   0x00000001

#define _RPINR12_FLT2R7_POSITION                 0x0000000F
#define _RPINR12_FLT2R7_MASK                     0x00008000
#define _RPINR12_FLT2R7_LENGTH                   0x00000001

#define _RPINR13_FLT3R_POSITION                  0x00000000
#define _RPINR13_FLT3R_MASK                      0x000000FF
#define _RPINR13_FLT3R_LENGTH                    0x00000008

#define _RPINR13_FLT4R_POSITION                  0x00000008
#define _RPINR13_FLT4R_MASK                      0x0000FF00
#define _RPINR13_FLT4R_LENGTH                    0x00000008

#define _RPINR13_FLT3R0_POSITION                 0x00000000
#define _RPINR13_FLT3R0_MASK                     0x00000001
#define _RPINR13_FLT3R0_LENGTH                   0x00000001

#define _RPINR13_FLT3R1_POSITION                 0x00000001
#define _RPINR13_FLT3R1_MASK                     0x00000002
#define _RPINR13_FLT3R1_LENGTH                   0x00000001

#define _RPINR13_FLT3R2_POSITION                 0x00000002
#define _RPINR13_FLT3R2_MASK                     0x00000004
#define _RPINR13_FLT3R2_LENGTH                   0x00000001

#define _RPINR13_FLT3R3_POSITION                 0x00000003
#define _RPINR13_FLT3R3_MASK                     0x00000008
#define _RPINR13_FLT3R3_LENGTH                   0x00000001

#define _RPINR13_FLT3R4_POSITION                 0x00000004
#define _RPINR13_FLT3R4_MASK                     0x00000010
#define _RPINR13_FLT3R4_LENGTH                   0x00000001

#define _RPINR13_FLT3R5_POSITION                 0x00000005
#define _RPINR13_FLT3R5_MASK                     0x00000020
#define _RPINR13_FLT3R5_LENGTH                   0x00000001

#define _RPINR13_FLT3R6_POSITION                 0x00000006
#define _RPINR13_FLT3R6_MASK                     0x00000040
#define _RPINR13_FLT3R6_LENGTH                   0x00000001

#define _RPINR13_FLT3R7_POSITION                 0x00000007
#define _RPINR13_FLT3R7_MASK                     0x00000080
#define _RPINR13_FLT3R7_LENGTH                   0x00000001

#define _RPINR13_FLT4R0_POSITION                 0x00000008
#define _RPINR13_FLT4R0_MASK                     0x00000100
#define _RPINR13_FLT4R0_LENGTH                   0x00000001

#define _RPINR13_FLT4R1_POSITION                 0x00000009
#define _RPINR13_FLT4R1_MASK                     0x00000200
#define _RPINR13_FLT4R1_LENGTH                   0x00000001

#define _RPINR13_FLT4R2_POSITION                 0x0000000A
#define _RPINR13_FLT4R2_MASK                     0x00000400
#define _RPINR13_FLT4R2_LENGTH                   0x00000001

#define _RPINR13_FLT4R3_POSITION                 0x0000000B
#define _RPINR13_FLT4R3_MASK                     0x00000800
#define _RPINR13_FLT4R3_LENGTH                   0x00000001

#define _RPINR13_FLT4R4_POSITION                 0x0000000C
#define _RPINR13_FLT4R4_MASK                     0x00001000
#define _RPINR13_FLT4R4_LENGTH                   0x00000001

#define _RPINR13_FLT4R5_POSITION                 0x0000000D
#define _RPINR13_FLT4R5_MASK                     0x00002000
#define _RPINR13_FLT4R5_LENGTH                   0x00000001

#define _RPINR13_FLT4R6_POSITION                 0x0000000E
#define _RPINR13_FLT4R6_MASK                     0x00004000
#define _RPINR13_FLT4R6_LENGTH                   0x00000001

#define _RPINR13_FLT4R7_POSITION                 0x0000000F
#define _RPINR13_FLT4R7_MASK                     0x00008000
#define _RPINR13_FLT4R7_LENGTH                   0x00000001

#define _RPINR18_U1RXR_POSITION                  0x00000000
#define _RPINR18_U1RXR_MASK                      0x000000FF
#define _RPINR18_U1RXR_LENGTH                    0x00000008

#define _RPINR18_U1CTSR_POSITION                 0x00000008
#define _RPINR18_U1CTSR_MASK                     0x0000FF00
#define _RPINR18_U1CTSR_LENGTH                   0x00000008

#define _RPINR18_U1RXR0_POSITION                 0x00000000
#define _RPINR18_U1RXR0_MASK                     0x00000001
#define _RPINR18_U1RXR0_LENGTH                   0x00000001

#define _RPINR18_U1RXR1_POSITION                 0x00000001
#define _RPINR18_U1RXR1_MASK                     0x00000002
#define _RPINR18_U1RXR1_LENGTH                   0x00000001

#define _RPINR18_U1RXR2_POSITION                 0x00000002
#define _RPINR18_U1RXR2_MASK                     0x00000004
#define _RPINR18_U1RXR2_LENGTH                   0x00000001

#define _RPINR18_U1RXR3_POSITION                 0x00000003
#define _RPINR18_U1RXR3_MASK                     0x00000008
#define _RPINR18_U1RXR3_LENGTH                   0x00000001

#define _RPINR18_U1RXR4_POSITION                 0x00000004
#define _RPINR18_U1RXR4_MASK                     0x00000010
#define _RPINR18_U1RXR4_LENGTH                   0x00000001

#define _RPINR18_U1RXR5_POSITION                 0x00000005
#define _RPINR18_U1RXR5_MASK                     0x00000020
#define _RPINR18_U1RXR5_LENGTH                   0x00000001

#define _RPINR18_U1RXR6_POSITION                 0x00000006
#define _RPINR18_U1RXR6_MASK                     0x00000040
#define _RPINR18_U1RXR6_LENGTH                   0x00000001

#define _RPINR18_U1RXR7_POSITION                 0x00000007
#define _RPINR18_U1RXR7_MASK                     0x00000080
#define _RPINR18_U1RXR7_LENGTH                   0x00000001

#define _RPINR18_U1CTSR0_POSITION                0x00000008
#define _RPINR18_U1CTSR0_MASK                    0x00000100
#define _RPINR18_U1CTSR0_LENGTH                  0x00000001

#define _RPINR18_U1CTSR1_POSITION                0x00000009
#define _RPINR18_U1CTSR1_MASK                    0x00000200
#define _RPINR18_U1CTSR1_LENGTH                  0x00000001

#define _RPINR18_U1CTSR2_POSITION                0x0000000A
#define _RPINR18_U1CTSR2_MASK                    0x00000400
#define _RPINR18_U1CTSR2_LENGTH                  0x00000001

#define _RPINR18_U1CTSR3_POSITION                0x0000000B
#define _RPINR18_U1CTSR3_MASK                    0x00000800
#define _RPINR18_U1CTSR3_LENGTH                  0x00000001

#define _RPINR18_U1CTSR4_POSITION                0x0000000C
#define _RPINR18_U1CTSR4_MASK                    0x00001000
#define _RPINR18_U1CTSR4_LENGTH                  0x00000001

#define _RPINR18_U1CTSR5_POSITION                0x0000000D
#define _RPINR18_U1CTSR5_MASK                    0x00002000
#define _RPINR18_U1CTSR5_LENGTH                  0x00000001

#define _RPINR18_U1CTSR6_POSITION                0x0000000E
#define _RPINR18_U1CTSR6_MASK                    0x00004000
#define _RPINR18_U1CTSR6_LENGTH                  0x00000001

#define _RPINR18_U1CTSR7_POSITION                0x0000000F
#define _RPINR18_U1CTSR7_MASK                    0x00008000
#define _RPINR18_U1CTSR7_LENGTH                  0x00000001

#define _RPINR19_U2RXR_POSITION                  0x00000000
#define _RPINR19_U2RXR_MASK                      0x000000FF
#define _RPINR19_U2RXR_LENGTH                    0x00000008

#define _RPINR19_U2CTSR_POSITION                 0x00000008
#define _RPINR19_U2CTSR_MASK                     0x0000FF00
#define _RPINR19_U2CTSR_LENGTH                   0x00000008

#define _RPINR19_U2RXR0_POSITION                 0x00000000
#define _RPINR19_U2RXR0_MASK                     0x00000001
#define _RPINR19_U2RXR0_LENGTH                   0x00000001

#define _RPINR19_U2RXR1_POSITION                 0x00000001
#define _RPINR19_U2RXR1_MASK                     0x00000002
#define _RPINR19_U2RXR1_LENGTH                   0x00000001

#define _RPINR19_U2RXR2_POSITION                 0x00000002
#define _RPINR19_U2RXR2_MASK                     0x00000004
#define _RPINR19_U2RXR2_LENGTH                   0x00000001

#define _RPINR19_U2RXR3_POSITION                 0x00000003
#define _RPINR19_U2RXR3_MASK                     0x00000008
#define _RPINR19_U2RXR3_LENGTH                   0x00000001

#define _RPINR19_U2RXR4_POSITION                 0x00000004
#define _RPINR19_U2RXR4_MASK                     0x00000010
#define _RPINR19_U2RXR4_LENGTH                   0x00000001

#define _RPINR19_U2RXR5_POSITION                 0x00000005
#define _RPINR19_U2RXR5_MASK                     0x00000020
#define _RPINR19_U2RXR5_LENGTH                   0x00000001

#define _RPINR19_U2RXR6_POSITION                 0x00000006
#define _RPINR19_U2RXR6_MASK                     0x00000040
#define _RPINR19_U2RXR6_LENGTH                   0x00000001

#define _RPINR19_U2RXR7_POSITION                 0x00000007
#define _RPINR19_U2RXR7_MASK                     0x00000080
#define _RPINR19_U2RXR7_LENGTH                   0x00000001

#define _RPINR19_U2CTSR0_POSITION                0x00000008
#define _RPINR19_U2CTSR0_MASK                    0x00000100
#define _RPINR19_U2CTSR0_LENGTH                  0x00000001

#define _RPINR19_U2CTSR1_POSITION                0x00000009
#define _RPINR19_U2CTSR1_MASK                    0x00000200
#define _RPINR19_U2CTSR1_LENGTH                  0x00000001

#define _RPINR19_U2CTSR2_POSITION                0x0000000A
#define _RPINR19_U2CTSR2_MASK                    0x00000400
#define _RPINR19_U2CTSR2_LENGTH                  0x00000001

#define _RPINR19_U2CTSR3_POSITION                0x0000000B
#define _RPINR19_U2CTSR3_MASK                    0x00000800
#define _RPINR19_U2CTSR3_LENGTH                  0x00000001

#define _RPINR19_U2CTSR4_POSITION                0x0000000C
#define _RPINR19_U2CTSR4_MASK                    0x00001000
#define _RPINR19_U2CTSR4_LENGTH                  0x00000001

#define _RPINR19_U2CTSR5_POSITION                0x0000000D
#define _RPINR19_U2CTSR5_MASK                    0x00002000
#define _RPINR19_U2CTSR5_LENGTH                  0x00000001

#define _RPINR19_U2CTSR6_POSITION                0x0000000E
#define _RPINR19_U2CTSR6_MASK                    0x00004000
#define _RPINR19_U2CTSR6_LENGTH                  0x00000001

#define _RPINR19_U2CTSR7_POSITION                0x0000000F
#define _RPINR19_U2CTSR7_MASK                    0x00008000
#define _RPINR19_U2CTSR7_LENGTH                  0x00000001

#define _RPINR20_SDI1R_POSITION                  0x00000000
#define _RPINR20_SDI1R_MASK                      0x000000FF
#define _RPINR20_SDI1R_LENGTH                    0x00000008

#define _RPINR20_SCK1INR_POSITION                0x00000008
#define _RPINR20_SCK1INR_MASK                    0x0000FF00
#define _RPINR20_SCK1INR_LENGTH                  0x00000008

#define _RPINR20_SDI1R0_POSITION                 0x00000000
#define _RPINR20_SDI1R0_MASK                     0x00000001
#define _RPINR20_SDI1R0_LENGTH                   0x00000001

#define _RPINR20_SDI1R1_POSITION                 0x00000001
#define _RPINR20_SDI1R1_MASK                     0x00000002
#define _RPINR20_SDI1R1_LENGTH                   0x00000001

#define _RPINR20_SDI1R2_POSITION                 0x00000002
#define _RPINR20_SDI1R2_MASK                     0x00000004
#define _RPINR20_SDI1R2_LENGTH                   0x00000001

#define _RPINR20_SDI1R3_POSITION                 0x00000003
#define _RPINR20_SDI1R3_MASK                     0x00000008
#define _RPINR20_SDI1R3_LENGTH                   0x00000001

#define _RPINR20_SDI1R4_POSITION                 0x00000004
#define _RPINR20_SDI1R4_MASK                     0x00000010
#define _RPINR20_SDI1R4_LENGTH                   0x00000001

#define _RPINR20_SDI1R5_POSITION                 0x00000005
#define _RPINR20_SDI1R5_MASK                     0x00000020
#define _RPINR20_SDI1R5_LENGTH                   0x00000001

#define _RPINR20_SDI1R6_POSITION                 0x00000006
#define _RPINR20_SDI1R6_MASK                     0x00000040
#define _RPINR20_SDI1R6_LENGTH                   0x00000001

#define _RPINR20_SDI1R7_POSITION                 0x00000007
#define _RPINR20_SDI1R7_MASK                     0x00000080
#define _RPINR20_SDI1R7_LENGTH                   0x00000001

#define _RPINR20_SCK1INR0_POSITION               0x00000008
#define _RPINR20_SCK1INR0_MASK                   0x00000100
#define _RPINR20_SCK1INR0_LENGTH                 0x00000001

#define _RPINR20_SCK1INR1_POSITION               0x00000009
#define _RPINR20_SCK1INR1_MASK                   0x00000200
#define _RPINR20_SCK1INR1_LENGTH                 0x00000001

#define _RPINR20_SCK1INR2_POSITION               0x0000000A
#define _RPINR20_SCK1INR2_MASK                   0x00000400
#define _RPINR20_SCK1INR2_LENGTH                 0x00000001

#define _RPINR20_SCK1INR3_POSITION               0x0000000B
#define _RPINR20_SCK1INR3_MASK                   0x00000800
#define _RPINR20_SCK1INR3_LENGTH                 0x00000001

#define _RPINR20_SCK1INR4_POSITION               0x0000000C
#define _RPINR20_SCK1INR4_MASK                   0x00001000
#define _RPINR20_SCK1INR4_LENGTH                 0x00000001

#define _RPINR20_SCK1INR5_POSITION               0x0000000D
#define _RPINR20_SCK1INR5_MASK                   0x00002000
#define _RPINR20_SCK1INR5_LENGTH                 0x00000001

#define _RPINR20_SCK1INR6_POSITION               0x0000000E
#define _RPINR20_SCK1INR6_MASK                   0x00004000
#define _RPINR20_SCK1INR6_LENGTH                 0x00000001

#define _RPINR20_SCK1INR7_POSITION               0x0000000F
#define _RPINR20_SCK1INR7_MASK                   0x00008000
#define _RPINR20_SCK1INR7_LENGTH                 0x00000001

#define _RPINR21_SS1R_POSITION                   0x00000000
#define _RPINR21_SS1R_MASK                       0x000000FF
#define _RPINR21_SS1R_LENGTH                     0x00000008

#define _RPINR21_SS1R0_POSITION                  0x00000000
#define _RPINR21_SS1R0_MASK                      0x00000001
#define _RPINR21_SS1R0_LENGTH                    0x00000001

#define _RPINR21_SS1R1_POSITION                  0x00000001
#define _RPINR21_SS1R1_MASK                      0x00000002
#define _RPINR21_SS1R1_LENGTH                    0x00000001

#define _RPINR21_SS1R2_POSITION                  0x00000002
#define _RPINR21_SS1R2_MASK                      0x00000004
#define _RPINR21_SS1R2_LENGTH                    0x00000001

#define _RPINR21_SS1R3_POSITION                  0x00000003
#define _RPINR21_SS1R3_MASK                      0x00000008
#define _RPINR21_SS1R3_LENGTH                    0x00000001

#define _RPINR21_SS1R4_POSITION                  0x00000004
#define _RPINR21_SS1R4_MASK                      0x00000010
#define _RPINR21_SS1R4_LENGTH                    0x00000001

#define _RPINR21_SS1R5_POSITION                  0x00000005
#define _RPINR21_SS1R5_MASK                      0x00000020
#define _RPINR21_SS1R5_LENGTH                    0x00000001

#define _RPINR21_SS1R6_POSITION                  0x00000006
#define _RPINR21_SS1R6_MASK                      0x00000040
#define _RPINR21_SS1R6_LENGTH                    0x00000001

#define _RPINR21_SS1R7_POSITION                  0x00000007
#define _RPINR21_SS1R7_MASK                      0x00000080
#define _RPINR21_SS1R7_LENGTH                    0x00000001

#define _RPINR22_SDI2R_POSITION                  0x00000000
#define _RPINR22_SDI2R_MASK                      0x000000FF
#define _RPINR22_SDI2R_LENGTH                    0x00000008

#define _RPINR22_SCK2INR_POSITION                0x00000008
#define _RPINR22_SCK2INR_MASK                    0x0000FF00
#define _RPINR22_SCK2INR_LENGTH                  0x00000008

#define _RPINR22_SDI2R0_POSITION                 0x00000000
#define _RPINR22_SDI2R0_MASK                     0x00000001
#define _RPINR22_SDI2R0_LENGTH                   0x00000001

#define _RPINR22_SDI2R1_POSITION                 0x00000001
#define _RPINR22_SDI2R1_MASK                     0x00000002
#define _RPINR22_SDI2R1_LENGTH                   0x00000001

#define _RPINR22_SDI2R2_POSITION                 0x00000002
#define _RPINR22_SDI2R2_MASK                     0x00000004
#define _RPINR22_SDI2R2_LENGTH                   0x00000001

#define _RPINR22_SDI2R3_POSITION                 0x00000003
#define _RPINR22_SDI2R3_MASK                     0x00000008
#define _RPINR22_SDI2R3_LENGTH                   0x00000001

#define _RPINR22_SDI2R4_POSITION                 0x00000004
#define _RPINR22_SDI2R4_MASK                     0x00000010
#define _RPINR22_SDI2R4_LENGTH                   0x00000001

#define _RPINR22_SDI2R5_POSITION                 0x00000005
#define _RPINR22_SDI2R5_MASK                     0x00000020
#define _RPINR22_SDI2R5_LENGTH                   0x00000001

#define _RPINR22_SDI2R6_POSITION                 0x00000006
#define _RPINR22_SDI2R6_MASK                     0x00000040
#define _RPINR22_SDI2R6_LENGTH                   0x00000001

#define _RPINR22_SDI2R7_POSITION                 0x00000007
#define _RPINR22_SDI2R7_MASK                     0x00000080
#define _RPINR22_SDI2R7_LENGTH                   0x00000001

#define _RPINR22_SCK2INR0_POSITION               0x00000008
#define _RPINR22_SCK2INR0_MASK                   0x00000100
#define _RPINR22_SCK2INR0_LENGTH                 0x00000001

#define _RPINR22_SCK2INR1_POSITION               0x00000009
#define _RPINR22_SCK2INR1_MASK                   0x00000200
#define _RPINR22_SCK2INR1_LENGTH                 0x00000001

#define _RPINR22_SCK2INR2_POSITION               0x0000000A
#define _RPINR22_SCK2INR2_MASK                   0x00000400
#define _RPINR22_SCK2INR2_LENGTH                 0x00000001

#define _RPINR22_SCK2INR3_POSITION               0x0000000B
#define _RPINR22_SCK2INR3_MASK                   0x00000800
#define _RPINR22_SCK2INR3_LENGTH                 0x00000001

#define _RPINR22_SCK2INR4_POSITION               0x0000000C
#define _RPINR22_SCK2INR4_MASK                   0x00001000
#define _RPINR22_SCK2INR4_LENGTH                 0x00000001

#define _RPINR22_SCK2INR5_POSITION               0x0000000D
#define _RPINR22_SCK2INR5_MASK                   0x00002000
#define _RPINR22_SCK2INR5_LENGTH                 0x00000001

#define _RPINR22_SCK2INR6_POSITION               0x0000000E
#define _RPINR22_SCK2INR6_MASK                   0x00004000
#define _RPINR22_SCK2INR6_LENGTH                 0x00000001

#define _RPINR22_SCK2INR7_POSITION               0x0000000F
#define _RPINR22_SCK2INR7_MASK                   0x00008000
#define _RPINR22_SCK2INR7_LENGTH                 0x00000001

#define _RPINR23_SS2R_POSITION                   0x00000000
#define _RPINR23_SS2R_MASK                       0x000000FF
#define _RPINR23_SS2R_LENGTH                     0x00000008

#define _RPINR23_SS2R0_POSITION                  0x00000000
#define _RPINR23_SS2R0_MASK                      0x00000001
#define _RPINR23_SS2R0_LENGTH                    0x00000001

#define _RPINR23_SS2R1_POSITION                  0x00000001
#define _RPINR23_SS2R1_MASK                      0x00000002
#define _RPINR23_SS2R1_LENGTH                    0x00000001

#define _RPINR23_SS2R2_POSITION                  0x00000002
#define _RPINR23_SS2R2_MASK                      0x00000004
#define _RPINR23_SS2R2_LENGTH                    0x00000001

#define _RPINR23_SS2R3_POSITION                  0x00000003
#define _RPINR23_SS2R3_MASK                      0x00000008
#define _RPINR23_SS2R3_LENGTH                    0x00000001

#define _RPINR23_SS2R4_POSITION                  0x00000004
#define _RPINR23_SS2R4_MASK                      0x00000010
#define _RPINR23_SS2R4_LENGTH                    0x00000001

#define _RPINR23_SS2R5_POSITION                  0x00000005
#define _RPINR23_SS2R5_MASK                      0x00000020
#define _RPINR23_SS2R5_LENGTH                    0x00000001

#define _RPINR23_SS2R6_POSITION                  0x00000006
#define _RPINR23_SS2R6_MASK                      0x00000040
#define _RPINR23_SS2R6_LENGTH                    0x00000001

#define _RPINR23_SS2R7_POSITION                  0x00000007
#define _RPINR23_SS2R7_MASK                      0x00000080
#define _RPINR23_SS2R7_LENGTH                    0x00000001

#define _RPINR37_SYCI1R_POSITION                 0x00000008
#define _RPINR37_SYCI1R_MASK                     0x0000FF00
#define _RPINR37_SYCI1R_LENGTH                   0x00000008

#define _RPINR37_SYCI1R0_POSITION                0x00000008
#define _RPINR37_SYCI1R0_MASK                    0x00000100
#define _RPINR37_SYCI1R0_LENGTH                  0x00000001

#define _RPINR37_SYCI1R1_POSITION                0x00000009
#define _RPINR37_SYCI1R1_MASK                    0x00000200
#define _RPINR37_SYCI1R1_LENGTH                  0x00000001

#define _RPINR37_SYCI1R2_POSITION                0x0000000A
#define _RPINR37_SYCI1R2_MASK                    0x00000400
#define _RPINR37_SYCI1R2_LENGTH                  0x00000001

#define _RPINR37_SYCI1R3_POSITION                0x0000000B
#define _RPINR37_SYCI1R3_MASK                    0x00000800
#define _RPINR37_SYCI1R3_LENGTH                  0x00000001

#define _RPINR37_SYCI1R4_POSITION                0x0000000C
#define _RPINR37_SYCI1R4_MASK                    0x00001000
#define _RPINR37_SYCI1R4_LENGTH                  0x00000001

#define _RPINR37_SYCI1R5_POSITION                0x0000000D
#define _RPINR37_SYCI1R5_MASK                    0x00002000
#define _RPINR37_SYCI1R5_LENGTH                  0x00000001

#define _RPINR37_SYCI1R6_POSITION                0x0000000E
#define _RPINR37_SYCI1R6_MASK                    0x00004000
#define _RPINR37_SYCI1R6_LENGTH                  0x00000001

#define _RPINR37_SYCI1R7_POSITION                0x0000000F
#define _RPINR37_SYCI1R7_MASK                    0x00008000
#define _RPINR37_SYCI1R7_LENGTH                  0x00000001

#define _RPINR38_SYCI2R_POSITION                 0x00000000
#define _RPINR38_SYCI2R_MASK                     0x000000FF
#define _RPINR38_SYCI2R_LENGTH                   0x00000008

#define _RPINR38_SYCI2R0_POSITION                0x00000000
#define _RPINR38_SYCI2R0_MASK                    0x00000001
#define _RPINR38_SYCI2R0_LENGTH                  0x00000001

#define _RPINR38_SYCI2R1_POSITION                0x00000001
#define _RPINR38_SYCI2R1_MASK                    0x00000002
#define _RPINR38_SYCI2R1_LENGTH                  0x00000001

#define _RPINR38_SYCI2R2_POSITION                0x00000002
#define _RPINR38_SYCI2R2_MASK                    0x00000004
#define _RPINR38_SYCI2R2_LENGTH                  0x00000001

#define _RPINR38_SYCI2R3_POSITION                0x00000003
#define _RPINR38_SYCI2R3_MASK                    0x00000008
#define _RPINR38_SYCI2R3_LENGTH                  0x00000001

#define _RPINR38_SYCI2R4_POSITION                0x00000004
#define _RPINR38_SYCI2R4_MASK                    0x00000010
#define _RPINR38_SYCI2R4_LENGTH                  0x00000001

#define _RPINR38_SYCI2R5_POSITION                0x00000005
#define _RPINR38_SYCI2R5_MASK                    0x00000020
#define _RPINR38_SYCI2R5_LENGTH                  0x00000001

#define _RPINR38_SYCI2R6_POSITION                0x00000006
#define _RPINR38_SYCI2R6_MASK                    0x00000040
#define _RPINR38_SYCI2R6_LENGTH                  0x00000001

#define _RPINR38_SYCI2R7_POSITION                0x00000007
#define _RPINR38_SYCI2R7_MASK                    0x00000080
#define _RPINR38_SYCI2R7_LENGTH                  0x00000001

#define _RPINR42_FLT5R_POSITION                  0x00000000
#define _RPINR42_FLT5R_MASK                      0x000000FF
#define _RPINR42_FLT5R_LENGTH                    0x00000008

#define _RPINR42_FLT6R_POSITION                  0x00000008
#define _RPINR42_FLT6R_MASK                      0x0000FF00
#define _RPINR42_FLT6R_LENGTH                    0x00000008

#define _RPINR42_FLT5R0_POSITION                 0x00000000
#define _RPINR42_FLT5R0_MASK                     0x00000001
#define _RPINR42_FLT5R0_LENGTH                   0x00000001

#define _RPINR42_FLT5R1_POSITION                 0x00000001
#define _RPINR42_FLT5R1_MASK                     0x00000002
#define _RPINR42_FLT5R1_LENGTH                   0x00000001

#define _RPINR42_FLT5R2_POSITION                 0x00000002
#define _RPINR42_FLT5R2_MASK                     0x00000004
#define _RPINR42_FLT5R2_LENGTH                   0x00000001

#define _RPINR42_FLT5R3_POSITION                 0x00000003
#define _RPINR42_FLT5R3_MASK                     0x00000008
#define _RPINR42_FLT5R3_LENGTH                   0x00000001

#define _RPINR42_FLT5R4_POSITION                 0x00000004
#define _RPINR42_FLT5R4_MASK                     0x00000010
#define _RPINR42_FLT5R4_LENGTH                   0x00000001

#define _RPINR42_FLT5R5_POSITION                 0x00000005
#define _RPINR42_FLT5R5_MASK                     0x00000020
#define _RPINR42_FLT5R5_LENGTH                   0x00000001

#define _RPINR42_FLT5R6_POSITION                 0x00000006
#define _RPINR42_FLT5R6_MASK                     0x00000040
#define _RPINR42_FLT5R6_LENGTH                   0x00000001

#define _RPINR42_FLT5R7_POSITION                 0x00000007
#define _RPINR42_FLT5R7_MASK                     0x00000080
#define _RPINR42_FLT5R7_LENGTH                   0x00000001

#define _RPINR42_FLT6R0_POSITION                 0x00000008
#define _RPINR42_FLT6R0_MASK                     0x00000100
#define _RPINR42_FLT6R0_LENGTH                   0x00000001

#define _RPINR42_FLT6R1_POSITION                 0x00000009
#define _RPINR42_FLT6R1_MASK                     0x00000200
#define _RPINR42_FLT6R1_LENGTH                   0x00000001

#define _RPINR42_FLT6R2_POSITION                 0x0000000A
#define _RPINR42_FLT6R2_MASK                     0x00000400
#define _RPINR42_FLT6R2_LENGTH                   0x00000001

#define _RPINR42_FLT6R3_POSITION                 0x0000000B
#define _RPINR42_FLT6R3_MASK                     0x00000800
#define _RPINR42_FLT6R3_LENGTH                   0x00000001

#define _RPINR42_FLT6R4_POSITION                 0x0000000C
#define _RPINR42_FLT6R4_MASK                     0x00001000
#define _RPINR42_FLT6R4_LENGTH                   0x00000001

#define _RPINR42_FLT6R5_POSITION                 0x0000000D
#define _RPINR42_FLT6R5_MASK                     0x00002000
#define _RPINR42_FLT6R5_LENGTH                   0x00000001

#define _RPINR42_FLT6R6_POSITION                 0x0000000E
#define _RPINR42_FLT6R6_MASK                     0x00004000
#define _RPINR42_FLT6R6_LENGTH                   0x00000001

#define _RPINR42_FLT6R7_POSITION                 0x0000000F
#define _RPINR42_FLT6R7_MASK                     0x00008000
#define _RPINR42_FLT6R7_LENGTH                   0x00000001

#define _RPINR43_FLT7R_POSITION                  0x00000000
#define _RPINR43_FLT7R_MASK                      0x000000FF
#define _RPINR43_FLT7R_LENGTH                    0x00000008

#define _RPINR43_FLT8R_POSITION                  0x00000008
#define _RPINR43_FLT8R_MASK                      0x0000FF00
#define _RPINR43_FLT8R_LENGTH                    0x00000008

#define _RPINR43_FLT7R0_POSITION                 0x00000000
#define _RPINR43_FLT7R0_MASK                     0x00000001
#define _RPINR43_FLT7R0_LENGTH                   0x00000001

#define _RPINR43_FLT7R1_POSITION                 0x00000001
#define _RPINR43_FLT7R1_MASK                     0x00000002
#define _RPINR43_FLT7R1_LENGTH                   0x00000001

#define _RPINR43_FLT7R2_POSITION                 0x00000002
#define _RPINR43_FLT7R2_MASK                     0x00000004
#define _RPINR43_FLT7R2_LENGTH                   0x00000001

#define _RPINR43_FLT7R3_POSITION                 0x00000003
#define _RPINR43_FLT7R3_MASK                     0x00000008
#define _RPINR43_FLT7R3_LENGTH                   0x00000001

#define _RPINR43_FLT7R4_POSITION                 0x00000004
#define _RPINR43_FLT7R4_MASK                     0x00000010
#define _RPINR43_FLT7R4_LENGTH                   0x00000001

#define _RPINR43_FLT7R5_POSITION                 0x00000005
#define _RPINR43_FLT7R5_MASK                     0x00000020
#define _RPINR43_FLT7R5_LENGTH                   0x00000001

#define _RPINR43_FLT7R6_POSITION                 0x00000006
#define _RPINR43_FLT7R6_MASK                     0x00000040
#define _RPINR43_FLT7R6_LENGTH                   0x00000001

#define _RPINR43_FLT7R7_POSITION                 0x00000007
#define _RPINR43_FLT7R7_MASK                     0x00000080
#define _RPINR43_FLT7R7_LENGTH                   0x00000001

#define _RPINR43_FLT8R0_POSITION                 0x00000008
#define _RPINR43_FLT8R0_MASK                     0x00000100
#define _RPINR43_FLT8R0_LENGTH                   0x00000001

#define _RPINR43_FLT8R1_POSITION                 0x00000009
#define _RPINR43_FLT8R1_MASK                     0x00000200
#define _RPINR43_FLT8R1_LENGTH                   0x00000001

#define _RPINR43_FLT8R2_POSITION                 0x0000000A
#define _RPINR43_FLT8R2_MASK                     0x00000400
#define _RPINR43_FLT8R2_LENGTH                   0x00000001

#define _RPINR43_FLT8R3_POSITION                 0x0000000B
#define _RPINR43_FLT8R3_MASK                     0x00000800
#define _RPINR43_FLT8R3_LENGTH                   0x00000001

#define _RPINR43_FLT8R4_POSITION                 0x0000000C
#define _RPINR43_FLT8R4_MASK                     0x00001000
#define _RPINR43_FLT8R4_LENGTH                   0x00000001

#define _RPINR43_FLT8R5_POSITION                 0x0000000D
#define _RPINR43_FLT8R5_MASK                     0x00002000
#define _RPINR43_FLT8R5_LENGTH                   0x00000001

#define _RPINR43_FLT8R6_POSITION                 0x0000000E
#define _RPINR43_FLT8R6_MASK                     0x00004000
#define _RPINR43_FLT8R6_LENGTH                   0x00000001

#define _RPINR43_FLT8R7_POSITION                 0x0000000F
#define _RPINR43_FLT8R7_MASK                     0x00008000
#define _RPINR43_FLT8R7_LENGTH                   0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_URERR_POSITION                   0x00000008
#define _NVMCON_URERR_MASK                       0x00000100
#define _NVMCON_URERR_LENGTH                     0x00000001

#define _NVMCON_RPDF_POSITION                    0x00000009
#define _NVMCON_RPDF_MASK                        0x00000200
#define _NVMCON_RPDF_LENGTH                      0x00000001

#define _NVMCON_P2ACTIV_POSITION                 0x0000000A
#define _NVMCON_P2ACTIV_MASK                     0x00000400
#define _NVMCON_P2ACTIV_LENGTH                   0x00000001

#define _NVMCON_SFTSWP_POSITION                  0x0000000B
#define _NVMCON_SFTSWP_MASK                      0x00000800
#define _NVMCON_SFTSWP_LENGTH                    0x00000001

#define _NVMCON_NVMSIDL_POSITION                 0x0000000C
#define _NVMCON_NVMSIDL_MASK                     0x00001000
#define _NVMCON_NVMSIDL_LENGTH                   0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _NVMADR_NVMADL_POSITION                  0x00000001
#define _NVMADR_NVMADL_MASK                      0x0000FFFE
#define _NVMADR_NVMADL_LENGTH                    0x0000000F

#define _NVMADR_NVMADR_POSITION                  0x00000001
#define _NVMADR_NVMADR_MASK                      0x0000FFFE
#define _NVMADR_NVMADR_LENGTH                    0x0000000F

#define _NVMADRL_NVMADL_POSITION                 0x00000001
#define _NVMADRL_NVMADL_MASK                     0x0000FFFE
#define _NVMADRL_NVMADL_LENGTH                   0x0000000F

#define _NVMADRL_NVMADR_POSITION                 0x00000001
#define _NVMADRL_NVMADR_MASK                     0x0000FFFE
#define _NVMADRL_NVMADR_LENGTH                   0x0000000F

#define _NVMADRH_NVMADRH_POSITION                0x00000000
#define _NVMADRH_NVMADRH_MASK                    0x000000FF
#define _NVMADRH_NVMADRH_LENGTH                  0x00000008

#define _NVMADRH_NVMADRU_POSITION                0x00000000
#define _NVMADRH_NVMADRU_MASK                    0x000000FF
#define _NVMADRH_NVMADRU_LENGTH                  0x00000008

#define _NVMADRU_NVMADRH_POSITION                0x00000000
#define _NVMADRU_NVMADRH_MASK                    0x000000FF
#define _NVMADRU_NVMADRH_LENGTH                  0x00000008

#define _NVMADRU_NVMADRU_POSITION                0x00000000
#define _NVMADRU_NVMADRU_MASK                    0x000000FF
#define _NVMADRU_NVMADRU_LENGTH                  0x00000008

#define _NVMSRCADRL_NVMSRCADRL_POSITION          0x00000001
#define _NVMSRCADRL_NVMSRCADRL_MASK              0x0000FFFE
#define _NVMSRCADRL_NVMSRCADRL_LENGTH            0x0000000F

#define _NVMSRCADRH_NVMSRCADRH_POSITION          0x00000000
#define _NVMSRCADRH_NVMSRCADRH_MASK              0x000000FF
#define _NVMSRCADRH_NVMSRCADRH_LENGTH            0x00000008

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWDTEN_POSITION                    0x00000005
#define _RCON_SWDTEN_MASK                        0x00000020
#define _RCON_SWDTEN_LENGTH                      0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_CM_POSITION                        0x00000009
#define _RCON_CM_MASK                            0x00000200
#define _RCON_CM_LENGTH                          0x00000001

#define _RCON_VREGSF_POSITION                    0x0000000B
#define _RCON_VREGSF_MASK                        0x00000800
#define _RCON_VREGSF_LENGTH                      0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

#define _OSCCON_IOLOCK_POSITION                  0x00000006
#define _OSCCON_IOLOCK_MASK                      0x00000040
#define _OSCCON_IOLOCK_LENGTH                    0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _CLKDIV_PLLPRE_POSITION                  0x00000000
#define _CLKDIV_PLLPRE_MASK                      0x0000001F
#define _CLKDIV_PLLPRE_LENGTH                    0x00000005

#define _CLKDIV_PLLPOST_POSITION                 0x00000006
#define _CLKDIV_PLLPOST_MASK                     0x000000C0
#define _CLKDIV_PLLPOST_LENGTH                   0x00000002

#define _CLKDIV_FRCDIV_POSITION                  0x00000008
#define _CLKDIV_FRCDIV_MASK                      0x00000700
#define _CLKDIV_FRCDIV_LENGTH                    0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_PLLPRE0_POSITION                 0x00000000
#define _CLKDIV_PLLPRE0_MASK                     0x00000001
#define _CLKDIV_PLLPRE0_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE1_POSITION                 0x00000001
#define _CLKDIV_PLLPRE1_MASK                     0x00000002
#define _CLKDIV_PLLPRE1_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE2_POSITION                 0x00000002
#define _CLKDIV_PLLPRE2_MASK                     0x00000004
#define _CLKDIV_PLLPRE2_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE3_POSITION                 0x00000003
#define _CLKDIV_PLLPRE3_MASK                     0x00000008
#define _CLKDIV_PLLPRE3_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE4_POSITION                 0x00000004
#define _CLKDIV_PLLPRE4_MASK                     0x00000010
#define _CLKDIV_PLLPRE4_LENGTH                   0x00000001

#define _CLKDIV_PLLPOST0_POSITION                0x00000006
#define _CLKDIV_PLLPOST0_MASK                    0x00000040
#define _CLKDIV_PLLPOST0_LENGTH                  0x00000001

#define _CLKDIV_PLLPOST1_POSITION                0x00000007
#define _CLKDIV_PLLPOST1_MASK                    0x00000080
#define _CLKDIV_PLLPOST1_LENGTH                  0x00000001

#define _CLKDIV_FRCDIV0_POSITION                 0x00000008
#define _CLKDIV_FRCDIV0_MASK                     0x00000100
#define _CLKDIV_FRCDIV0_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV1_POSITION                 0x00000009
#define _CLKDIV_FRCDIV1_MASK                     0x00000200
#define _CLKDIV_FRCDIV1_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV2_POSITION                 0x0000000A
#define _CLKDIV_FRCDIV2_MASK                     0x00000400
#define _CLKDIV_FRCDIV2_LENGTH                   0x00000001

#define _CLKDIV_DOZE0_POSITION                   0x0000000C
#define _CLKDIV_DOZE0_MASK                       0x00001000
#define _CLKDIV_DOZE0_LENGTH                     0x00000001

#define _CLKDIV_DOZE1_POSITION                   0x0000000D
#define _CLKDIV_DOZE1_MASK                       0x00002000
#define _CLKDIV_DOZE1_LENGTH                     0x00000001

#define _CLKDIV_DOZE2_POSITION                   0x0000000E
#define _CLKDIV_DOZE2_MASK                       0x00004000
#define _CLKDIV_DOZE2_LENGTH                     0x00000001

#define _PLLFBD_PLLDIV_POSITION                  0x00000000
#define _PLLFBD_PLLDIV_MASK                      0x000001FF
#define _PLLFBD_PLLDIV_LENGTH                    0x00000009

#define _PLLFBD_PLLDIV0_POSITION                 0x00000000
#define _PLLFBD_PLLDIV0_MASK                     0x00000001
#define _PLLFBD_PLLDIV0_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV1_POSITION                 0x00000001
#define _PLLFBD_PLLDIV1_MASK                     0x00000002
#define _PLLFBD_PLLDIV1_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV2_POSITION                 0x00000002
#define _PLLFBD_PLLDIV2_MASK                     0x00000004
#define _PLLFBD_PLLDIV2_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV3_POSITION                 0x00000003
#define _PLLFBD_PLLDIV3_MASK                     0x00000008
#define _PLLFBD_PLLDIV3_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV4_POSITION                 0x00000004
#define _PLLFBD_PLLDIV4_MASK                     0x00000010
#define _PLLFBD_PLLDIV4_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV5_POSITION                 0x00000005
#define _PLLFBD_PLLDIV5_MASK                     0x00000020
#define _PLLFBD_PLLDIV5_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV6_POSITION                 0x00000006
#define _PLLFBD_PLLDIV6_MASK                     0x00000040
#define _PLLFBD_PLLDIV6_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV7_POSITION                 0x00000007
#define _PLLFBD_PLLDIV7_MASK                     0x00000080
#define _PLLFBD_PLLDIV7_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV8_POSITION                 0x00000008
#define _PLLFBD_PLLDIV8_MASK                     0x00000100
#define _PLLFBD_PLLDIV8_LENGTH                   0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _LFSR_LFSR_POSITION                      0x00000000
#define _LFSR_LFSR_MASK                          0x00007FFF
#define _LFSR_LFSR_LENGTH                        0x0000000F

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _REFOCON_RODIV0_POSITION                 0x00000008
#define _REFOCON_RODIV0_MASK                     0x00000100
#define _REFOCON_RODIV0_LENGTH                   0x00000001

#define _REFOCON_RODIV1_POSITION                 0x00000009
#define _REFOCON_RODIV1_MASK                     0x00000200
#define _REFOCON_RODIV1_LENGTH                   0x00000001

#define _REFOCON_RODIV2_POSITION                 0x0000000A
#define _REFOCON_RODIV2_MASK                     0x00000400
#define _REFOCON_RODIV2_LENGTH                   0x00000001

#define _REFOCON_RODIV3_POSITION                 0x0000000B
#define _REFOCON_RODIV3_MASK                     0x00000800
#define _REFOCON_RODIV3_LENGTH                   0x00000001

#define _ACLKCON_FRCSEL_POSITION                 0x00000006
#define _ACLKCON_FRCSEL_MASK                     0x00000040
#define _ACLKCON_FRCSEL_LENGTH                   0x00000001

#define _ACLKCON_ASRCSEL_POSITION                0x00000007
#define _ACLKCON_ASRCSEL_MASK                    0x00000080
#define _ACLKCON_ASRCSEL_LENGTH                  0x00000001

#define _ACLKCON_APSTSCLR_POSITION               0x00000008
#define _ACLKCON_APSTSCLR_MASK                   0x00000700
#define _ACLKCON_APSTSCLR_LENGTH                 0x00000003

#define _ACLKCON_SELACLK_POSITION                0x0000000D
#define _ACLKCON_SELACLK_MASK                    0x00002000
#define _ACLKCON_SELACLK_LENGTH                  0x00000001

#define _ACLKCON_APLLCK_POSITION                 0x0000000E
#define _ACLKCON_APLLCK_MASK                     0x00004000
#define _ACLKCON_APLLCK_LENGTH                   0x00000001

#define _ACLKCON_ENAPLL_POSITION                 0x0000000F
#define _ACLKCON_ENAPLL_MASK                     0x00008000
#define _ACLKCON_ENAPLL_LENGTH                   0x00000001

#define _ACLKCON_APSTSCLR0_POSITION              0x00000008
#define _ACLKCON_APSTSCLR0_MASK                  0x00000100
#define _ACLKCON_APSTSCLR0_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR1_POSITION              0x00000009
#define _ACLKCON_APSTSCLR1_MASK                  0x00000200
#define _ACLKCON_APSTSCLR1_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR2_POSITION              0x0000000A
#define _ACLKCON_APSTSCLR2_MASK                  0x00000400
#define _ACLKCON_APSTSCLR2_LENGTH                0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_SPI2MD_POSITION                    0x00000004
#define _PMD1_SPI2MD_MASK                        0x00000010
#define _PMD1_SPI2MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_U2MD_POSITION                      0x00000006
#define _PMD1_U2MD_MASK                          0x00000040
#define _PMD1_U2MD_LENGTH                        0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_PWMMD_POSITION                     0x00000009
#define _PMD1_PWMMD_MASK                         0x00000200
#define _PMD1_PWMMD_LENGTH                       0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD1_T3MD_POSITION                      0x0000000D
#define _PMD1_T3MD_MASK                          0x00002000
#define _PMD1_T3MD_LENGTH                        0x00000001

#define _PMD1_T4MD_POSITION                      0x0000000E
#define _PMD1_T4MD_MASK                          0x00004000
#define _PMD1_T4MD_LENGTH                        0x00000001

#define _PMD1_T5MD_POSITION                      0x0000000F
#define _PMD1_T5MD_MASK                          0x00008000
#define _PMD1_T5MD_LENGTH                        0x00000001

#define _PMD2_OC1MD_POSITION                     0x00000000
#define _PMD2_OC1MD_MASK                         0x00000001
#define _PMD2_OC1MD_LENGTH                       0x00000001

#define _PMD2_OC2MD_POSITION                     0x00000001
#define _PMD2_OC2MD_MASK                         0x00000002
#define _PMD2_OC2MD_LENGTH                       0x00000001

#define _PMD2_OC3MD_POSITION                     0x00000002
#define _PMD2_OC3MD_MASK                         0x00000004
#define _PMD2_OC3MD_LENGTH                       0x00000001

#define _PMD2_OC4MD_POSITION                     0x00000003
#define _PMD2_OC4MD_MASK                         0x00000008
#define _PMD2_OC4MD_LENGTH                       0x00000001

#define _PMD2_IC1MD_POSITION                     0x00000008
#define _PMD2_IC1MD_MASK                         0x00000100
#define _PMD2_IC1MD_LENGTH                       0x00000001

#define _PMD2_IC2MD_POSITION                     0x00000009
#define _PMD2_IC2MD_MASK                         0x00000200
#define _PMD2_IC2MD_LENGTH                       0x00000001

#define _PMD2_IC3MD_POSITION                     0x0000000A
#define _PMD2_IC3MD_MASK                         0x00000400
#define _PMD2_IC3MD_LENGTH                       0x00000001

#define _PMD2_IC4MD_POSITION                     0x0000000B
#define _PMD2_IC4MD_MASK                         0x00000800
#define _PMD2_IC4MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD6_PWM1MD_POSITION                    0x00000008
#define _PMD6_PWM1MD_MASK                        0x00000100
#define _PMD6_PWM1MD_LENGTH                      0x00000001

#define _PMD6_PWM2MD_POSITION                    0x00000009
#define _PMD6_PWM2MD_MASK                        0x00000200
#define _PMD6_PWM2MD_LENGTH                      0x00000001

#define _PMD6_PWM3MD_POSITION                    0x0000000A
#define _PMD6_PWM3MD_MASK                        0x00000400
#define _PMD6_PWM3MD_LENGTH                      0x00000001

#define _PMD6_PWM4MD_POSITION                    0x0000000B
#define _PMD6_PWM4MD_MASK                        0x00000800
#define _PMD6_PWM4MD_LENGTH                      0x00000001

#define _PMD6_PWM5MD_POSITION                    0x0000000C
#define _PMD6_PWM5MD_MASK                        0x00001000
#define _PMD6_PWM5MD_LENGTH                      0x00000001

#define _PMD7_PGA1MD_POSITION                    0x00000001
#define _PMD7_PGA1MD_MASK                        0x00000002
#define _PMD7_PGA1MD_LENGTH                      0x00000001

#define _PMD7_CMP1MD_POSITION                    0x00000008
#define _PMD7_CMP1MD_MASK                        0x00000100
#define _PMD7_CMP1MD_LENGTH                      0x00000001

#define _PMD7_CMP2MD_POSITION                    0x00000009
#define _PMD7_CMP2MD_MASK                        0x00000200
#define _PMD7_CMP2MD_LENGTH                      0x00000001

#define _PMD7_CMP3MD_POSITION                    0x0000000A
#define _PMD7_CMP3MD_MASK                        0x00000400
#define _PMD7_CMP3MD_LENGTH                      0x00000001

#define _PMD7_CMP4MD_POSITION                    0x0000000B
#define _PMD7_CMP4MD_MASK                        0x00000800
#define _PMD7_CMP4MD_LENGTH                      0x00000001

#define _PMD8_CCSMD_POSITION                     0x00000001
#define _PMD8_CCSMD_MASK                         0x00000002
#define _PMD8_CCSMD_LENGTH                       0x00000001

#define _PMD8_ABGMD_POSITION                     0x00000009
#define _PMD8_ABGMD_MASK                         0x00000200
#define _PMD8_ABGMD_LENGTH                       0x00000001

#define _PMD8_PGA2MD_POSITION                    0x0000000A
#define _PMD8_PGA2MD_MASK                        0x00000400
#define _PMD8_PGA2MD_LENGTH                      0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000000
#define _IFS0_INT0IF_MASK                        0x00000001
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000001
#define _IFS0_IC1IF_MASK                         0x00000002
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000002
#define _IFS0_OC1IF_MASK                         0x00000004
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_IC2IF_POSITION                     0x00000005
#define _IFS0_IC2IF_MASK                         0x00000020
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x00000006
#define _IFS0_OC2IF_MASK                         0x00000040
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000008
#define _IFS0_T3IF_MASK                          0x00000100
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_SPI1EIF_POSITION                   0x00000009
#define _IFS0_SPI1EIF_MASK                       0x00000200
#define _IFS0_SPI1EIF_LENGTH                     0x00000001

#define _IFS0_SPI1IF_POSITION                    0x0000000A
#define _IFS0_SPI1IF_MASK                        0x00000400
#define _IFS0_SPI1IF_LENGTH                      0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000000B
#define _IFS0_U1RXIF_MASK                        0x00000800
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000C
#define _IFS0_U1TXIF_MASK                        0x00001000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_ADCIF_POSITION                     0x0000000D
#define _IFS0_ADCIF_MASK                         0x00002000
#define _IFS0_ADCIF_LENGTH                       0x00000001

#define _IFS0_NVMIF_POSITION                     0x0000000F
#define _IFS0_NVMIF_MASK                         0x00008000
#define _IFS0_NVMIF_LENGTH                       0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_AC1IF_POSITION                     0x00000002
#define _IFS1_AC1IF_MASK                         0x00000004
#define _IFS1_AC1IF_LENGTH                       0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_OC3IF_POSITION                     0x00000009
#define _IFS1_OC3IF_MASK                         0x00000200
#define _IFS1_OC3IF_LENGTH                       0x00000001

#define _IFS1_OC4IF_POSITION                     0x0000000A
#define _IFS1_OC4IF_MASK                         0x00000400
#define _IFS1_OC4IF_LENGTH                       0x00000001

#define _IFS1_T4IF_POSITION                      0x0000000B
#define _IFS1_T4IF_MASK                          0x00000800
#define _IFS1_T4IF_LENGTH                        0x00000001

#define _IFS1_T5IF_POSITION                      0x0000000C
#define _IFS1_T5IF_MASK                          0x00001000
#define _IFS1_T5IF_LENGTH                        0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_U2RXIF_POSITION                    0x0000000E
#define _IFS1_U2RXIF_MASK                        0x00004000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000F
#define _IFS1_U2TXIF_MASK                        0x00008000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS2_SPI2EIF_POSITION                   0x00000000
#define _IFS2_SPI2EIF_MASK                       0x00000001
#define _IFS2_SPI2EIF_LENGTH                     0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS2_IC4IF_POSITION                     0x00000006
#define _IFS2_IC4IF_MASK                         0x00000040
#define _IFS2_IC4IF_LENGTH                       0x00000001

#define _IFS3_SI2C2IF_POSITION                   0x00000001
#define _IFS3_SI2C2IF_MASK                       0x00000002
#define _IFS3_SI2C2IF_LENGTH                     0x00000001

#define _IFS3_MI2C2IF_POSITION                   0x00000002
#define _IFS3_MI2C2IF_MASK                       0x00000004
#define _IFS3_MI2C2IF_LENGTH                     0x00000001

#define _IFS3_INT4IF_POSITION                    0x00000006
#define _IFS3_INT4IF_MASK                        0x00000040
#define _IFS3_INT4IF_LENGTH                      0x00000001

#define _IFS3_PSEMIF_POSITION                    0x00000009
#define _IFS3_PSEMIF_MASK                        0x00000200
#define _IFS3_PSEMIF_LENGTH                      0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_U2EIF_POSITION                     0x00000002
#define _IFS4_U2EIF_MASK                         0x00000004
#define _IFS4_U2EIF_LENGTH                       0x00000001

#define _IFS4_PSESIF_POSITION                    0x00000009
#define _IFS4_PSESIF_MASK                        0x00000200
#define _IFS4_PSESIF_LENGTH                      0x00000001

#define _IFS5_PWM1IF_POSITION                    0x0000000E
#define _IFS5_PWM1IF_MASK                        0x00004000
#define _IFS5_PWM1IF_LENGTH                      0x00000001

#define _IFS5_PWM2IF_POSITION                    0x0000000F
#define _IFS5_PWM2IF_MASK                        0x00008000
#define _IFS5_PWM2IF_LENGTH                      0x00000001

#define _IFS6_PWM3IF_POSITION                    0x00000000
#define _IFS6_PWM3IF_MASK                        0x00000001
#define _IFS6_PWM3IF_LENGTH                      0x00000001

#define _IFS6_PWM4IF_POSITION                    0x00000001
#define _IFS6_PWM4IF_MASK                        0x00000002
#define _IFS6_PWM4IF_LENGTH                      0x00000001

#define _IFS6_PWM5IF_POSITION                    0x00000002
#define _IFS6_PWM5IF_MASK                        0x00000004
#define _IFS6_PWM5IF_LENGTH                      0x00000001

#define _IFS6_AC2IF_POSITION                     0x00000007
#define _IFS6_AC2IF_MASK                         0x00000080
#define _IFS6_AC2IF_LENGTH                       0x00000001

#define _IFS6_AC3IF_POSITION                     0x00000008
#define _IFS6_AC3IF_MASK                         0x00000100
#define _IFS6_AC3IF_LENGTH                       0x00000001

#define _IFS6_AC4IF_POSITION                     0x00000009
#define _IFS6_AC4IF_MASK                         0x00000200
#define _IFS6_AC4IF_LENGTH                       0x00000001

#define _IFS6_ADCAN0IF_POSITION                  0x0000000E
#define _IFS6_ADCAN0IF_MASK                      0x00004000
#define _IFS6_ADCAN0IF_LENGTH                    0x00000001

#define _IFS6_ADCAN1IF_POSITION                  0x0000000F
#define _IFS6_ADCAN1IF_MASK                      0x00008000
#define _IFS6_ADCAN1IF_LENGTH                    0x00000001

#define _IFS7_ADCAN2IF_POSITION                  0x00000000
#define _IFS7_ADCAN2IF_MASK                      0x00000001
#define _IFS7_ADCAN2IF_LENGTH                    0x00000001

#define _IFS7_ADCAN3IF_POSITION                  0x00000001
#define _IFS7_ADCAN3IF_MASK                      0x00000002
#define _IFS7_ADCAN3IF_LENGTH                    0x00000001

#define _IFS7_ADCAN4IF_POSITION                  0x00000002
#define _IFS7_ADCAN4IF_MASK                      0x00000004
#define _IFS7_ADCAN4IF_LENGTH                    0x00000001

#define _IFS7_ADCAN5IF_POSITION                  0x00000003
#define _IFS7_ADCAN5IF_MASK                      0x00000008
#define _IFS7_ADCAN5IF_LENGTH                    0x00000001

#define _IFS7_ADCAN6IF_POSITION                  0x00000004
#define _IFS7_ADCAN6IF_MASK                      0x00000010
#define _IFS7_ADCAN6IF_LENGTH                    0x00000001

#define _IFS7_ADCAN7IF_POSITION                  0x00000005
#define _IFS7_ADCAN7IF_MASK                      0x00000020
#define _IFS7_ADCAN7IF_LENGTH                    0x00000001

#define _IFS8_ICDIF_POSITION                     0x0000000E
#define _IFS8_ICDIF_MASK                         0x00004000
#define _IFS8_ICDIF_LENGTH                       0x00000001

#define _IFS8_JTAGIF_POSITION                    0x0000000F
#define _IFS8_JTAGIF_MASK                        0x00008000
#define _IFS8_JTAGIF_LENGTH                      0x00000001

#define _IFS10_ADCAN18IF_POSITION                0x00000001
#define _IFS10_ADCAN18IF_MASK                    0x00000002
#define _IFS10_ADCAN18IF_LENGTH                  0x00000001

#define _IFS10_ADCAN19IF_POSITION                0x00000002
#define _IFS10_ADCAN19IF_MASK                    0x00000004
#define _IFS10_ADCAN19IF_LENGTH                  0x00000001

#define _IFS10_ADCAN20IF_POSITION                0x00000003
#define _IFS10_ADCAN20IF_MASK                    0x00000008
#define _IFS10_ADCAN20IF_LENGTH                  0x00000001

#define _IFS10_ADCAN21IF_POSITION                0x00000004
#define _IFS10_ADCAN21IF_MASK                    0x00000010
#define _IFS10_ADCAN21IF_LENGTH                  0x00000001

#define _IFS10_I2C1BCIF_POSITION                 0x0000000D
#define _IFS10_I2C1BCIF_MASK                     0x00002000
#define _IFS10_I2C1BCIF_LENGTH                   0x00000001

#define _IFS10_I2C2BCIF_POSITION                 0x0000000E
#define _IFS10_I2C2BCIF_MASK                     0x00004000
#define _IFS10_I2C2BCIF_LENGTH                   0x00000001

#define _IFS11_ADCMP0IF_POSITION                 0x00000001
#define _IFS11_ADCMP0IF_MASK                     0x00000002
#define _IFS11_ADCMP0IF_LENGTH                   0x00000001

#define _IFS11_ADCMP1IF_POSITION                 0x00000002
#define _IFS11_ADCMP1IF_MASK                     0x00000004
#define _IFS11_ADCMP1IF_LENGTH                   0x00000001

#define _IFS11_ADFLTR0IF_POSITION                0x00000003
#define _IFS11_ADFLTR0IF_MASK                    0x00000008
#define _IFS11_ADFLTR0IF_LENGTH                  0x00000001

#define _IFS11_ADFLTR1IF_POSITION                0x00000004
#define _IFS11_ADFLTR1IF_MASK                    0x00000010
#define _IFS11_ADFLTR1IF_LENGTH                  0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000001
#define _IEC0_IC1IE_MASK                         0x00000002
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000002
#define _IEC0_OC1IE_MASK                         0x00000004
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_IC2IE_POSITION                     0x00000005
#define _IEC0_IC2IE_MASK                         0x00000020
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x00000006
#define _IEC0_OC2IE_MASK                         0x00000040
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000008
#define _IEC0_T3IE_MASK                          0x00000100
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_SPI1EIE_POSITION                   0x00000009
#define _IEC0_SPI1EIE_MASK                       0x00000200
#define _IEC0_SPI1EIE_LENGTH                     0x00000001

#define _IEC0_SPI1IE_POSITION                    0x0000000A
#define _IEC0_SPI1IE_MASK                        0x00000400
#define _IEC0_SPI1IE_LENGTH                      0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000000B
#define _IEC0_U1RXIE_MASK                        0x00000800
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000C
#define _IEC0_U1TXIE_MASK                        0x00001000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_ADCIE_POSITION                     0x0000000D
#define _IEC0_ADCIE_MASK                         0x00002000
#define _IEC0_ADCIE_LENGTH                       0x00000001

#define _IEC0_NVMIE_POSITION                     0x0000000F
#define _IEC0_NVMIE_MASK                         0x00008000
#define _IEC0_NVMIE_LENGTH                       0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_AC1IE_POSITION                     0x00000002
#define _IEC1_AC1IE_MASK                         0x00000004
#define _IEC1_AC1IE_LENGTH                       0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_OC3IE_POSITION                     0x00000009
#define _IEC1_OC3IE_MASK                         0x00000200
#define _IEC1_OC3IE_LENGTH                       0x00000001

#define _IEC1_OC4IE_POSITION                     0x0000000A
#define _IEC1_OC4IE_MASK                         0x00000400
#define _IEC1_OC4IE_LENGTH                       0x00000001

#define _IEC1_T4IE_POSITION                      0x0000000B
#define _IEC1_T4IE_MASK                          0x00000800
#define _IEC1_T4IE_LENGTH                        0x00000001

#define _IEC1_T5IE_POSITION                      0x0000000C
#define _IEC1_T5IE_MASK                          0x00001000
#define _IEC1_T5IE_LENGTH                        0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_U2RXIE_POSITION                    0x0000000E
#define _IEC1_U2RXIE_MASK                        0x00004000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000F
#define _IEC1_U2TXIE_MASK                        0x00008000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC2_SPI2EIE_POSITION                   0x00000000
#define _IEC2_SPI2EIE_MASK                       0x00000001
#define _IEC2_SPI2EIE_LENGTH                     0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC2_IC4IE_POSITION                     0x00000006
#define _IEC2_IC4IE_MASK                         0x00000040
#define _IEC2_IC4IE_LENGTH                       0x00000001

#define _IEC3_SI2C2IE_POSITION                   0x00000001
#define _IEC3_SI2C2IE_MASK                       0x00000002
#define _IEC3_SI2C2IE_LENGTH                     0x00000001

#define _IEC3_MI2C2IE_POSITION                   0x00000002
#define _IEC3_MI2C2IE_MASK                       0x00000004
#define _IEC3_MI2C2IE_LENGTH                     0x00000001

#define _IEC3_INT4IE_POSITION                    0x00000006
#define _IEC3_INT4IE_MASK                        0x00000040
#define _IEC3_INT4IE_LENGTH                      0x00000001

#define _IEC3_PSEMIE_POSITION                    0x00000009
#define _IEC3_PSEMIE_MASK                        0x00000200
#define _IEC3_PSEMIE_LENGTH                      0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_U2EIE_POSITION                     0x00000002
#define _IEC4_U2EIE_MASK                         0x00000004
#define _IEC4_U2EIE_LENGTH                       0x00000001

#define _IEC4_PSESIE_POSITION                    0x00000009
#define _IEC4_PSESIE_MASK                        0x00000200
#define _IEC4_PSESIE_LENGTH                      0x00000001

#define _IEC5_PWM1IE_POSITION                    0x0000000E
#define _IEC5_PWM1IE_MASK                        0x00004000
#define _IEC5_PWM1IE_LENGTH                      0x00000001

#define _IEC5_PWM2IE_POSITION                    0x0000000F
#define _IEC5_PWM2IE_MASK                        0x00008000
#define _IEC5_PWM2IE_LENGTH                      0x00000001

#define _IEC6_PWM3IE_POSITION                    0x00000000
#define _IEC6_PWM3IE_MASK                        0x00000001
#define _IEC6_PWM3IE_LENGTH                      0x00000001

#define _IEC6_PWM4IE_POSITION                    0x00000001
#define _IEC6_PWM4IE_MASK                        0x00000002
#define _IEC6_PWM4IE_LENGTH                      0x00000001

#define _IEC6_PWM5IE_POSITION                    0x00000002
#define _IEC6_PWM5IE_MASK                        0x00000004
#define _IEC6_PWM5IE_LENGTH                      0x00000001

#define _IEC6_AC2IE_POSITION                     0x00000007
#define _IEC6_AC2IE_MASK                         0x00000080
#define _IEC6_AC2IE_LENGTH                       0x00000001

#define _IEC6_AC3IE_POSITION                     0x00000008
#define _IEC6_AC3IE_MASK                         0x00000100
#define _IEC6_AC3IE_LENGTH                       0x00000001

#define _IEC6_AC4IE_POSITION                     0x00000009
#define _IEC6_AC4IE_MASK                         0x00000200
#define _IEC6_AC4IE_LENGTH                       0x00000001

#define _IEC6_ADCAN0IE_POSITION                  0x0000000E
#define _IEC6_ADCAN0IE_MASK                      0x00004000
#define _IEC6_ADCAN0IE_LENGTH                    0x00000001

#define _IEC6_ADCAN1IE_POSITION                  0x0000000F
#define _IEC6_ADCAN1IE_MASK                      0x00008000
#define _IEC6_ADCAN1IE_LENGTH                    0x00000001

#define _IEC7_ADCAN2IE_POSITION                  0x00000000
#define _IEC7_ADCAN2IE_MASK                      0x00000001
#define _IEC7_ADCAN2IE_LENGTH                    0x00000001

#define _IEC7_ADCAN3IE_POSITION                  0x00000001
#define _IEC7_ADCAN3IE_MASK                      0x00000002
#define _IEC7_ADCAN3IE_LENGTH                    0x00000001

#define _IEC7_ADCAN4IE_POSITION                  0x00000002
#define _IEC7_ADCAN4IE_MASK                      0x00000004
#define _IEC7_ADCAN4IE_LENGTH                    0x00000001

#define _IEC7_ADCAN5IE_POSITION                  0x00000003
#define _IEC7_ADCAN5IE_MASK                      0x00000008
#define _IEC7_ADCAN5IE_LENGTH                    0x00000001

#define _IEC7_ADCAN6IE_POSITION                  0x00000004
#define _IEC7_ADCAN6IE_MASK                      0x00000010
#define _IEC7_ADCAN6IE_LENGTH                    0x00000001

#define _IEC7_ADCAN7IE_POSITION                  0x00000005
#define _IEC7_ADCAN7IE_MASK                      0x00000020
#define _IEC7_ADCAN7IE_LENGTH                    0x00000001

#define _IEC8_ICDIF_POSITION                     0x0000000E
#define _IEC8_ICDIF_MASK                         0x00004000
#define _IEC8_ICDIF_LENGTH                       0x00000001

#define _IEC8_JTAGIE_POSITION                    0x0000000F
#define _IEC8_JTAGIE_MASK                        0x00008000
#define _IEC8_JTAGIE_LENGTH                      0x00000001

#define _IEC10_ADCAN18IE_POSITION                0x00000001
#define _IEC10_ADCAN18IE_MASK                    0x00000002
#define _IEC10_ADCAN18IE_LENGTH                  0x00000001

#define _IEC10_ADCAN19IE_POSITION                0x00000002
#define _IEC10_ADCAN19IE_MASK                    0x00000004
#define _IEC10_ADCAN19IE_LENGTH                  0x00000001

#define _IEC10_ADCAN20IE_POSITION                0x00000003
#define _IEC10_ADCAN20IE_MASK                    0x00000008
#define _IEC10_ADCAN20IE_LENGTH                  0x00000001

#define _IEC10_ADCAN21IE_POSITION                0x00000004
#define _IEC10_ADCAN21IE_MASK                    0x00000010
#define _IEC10_ADCAN21IE_LENGTH                  0x00000001

#define _IEC10_I2C1BCIE_POSITION                 0x0000000D
#define _IEC10_I2C1BCIE_MASK                     0x00002000
#define _IEC10_I2C1BCIE_LENGTH                   0x00000001

#define _IEC10_I2C2BCIE_POSITION                 0x0000000E
#define _IEC10_I2C2BCIE_MASK                     0x00004000
#define _IEC10_I2C2BCIE_LENGTH                   0x00000001

#define _IEC11_ADCMP0IE_POSITION                 0x00000001
#define _IEC11_ADCMP0IE_MASK                     0x00000002
#define _IEC11_ADCMP0IE_LENGTH                   0x00000001

#define _IEC11_ADCMP1IE_POSITION                 0x00000002
#define _IEC11_ADCMP1IE_MASK                     0x00000004
#define _IEC11_ADCMP1IE_LENGTH                   0x00000001

#define _IEC11_ADFLTR0IE_POSITION                0x00000003
#define _IEC11_ADFLTR0IE_MASK                    0x00000008
#define _IEC11_ADFLTR0IE_LENGTH                  0x00000001

#define _IEC11_ADFLTR1IE_POSITION                0x00000004
#define _IEC11_ADFLTR1IE_MASK                    0x00000010
#define _IEC11_ADFLTR1IE_LENGTH                  0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_IC1IP_POSITION                     0x00000004
#define _IPC0_IC1IP_MASK                         0x00000070
#define _IPC0_IC1IP_LENGTH                       0x00000003

#define _IPC0_OC1IP_POSITION                     0x00000008
#define _IPC0_OC1IP_MASK                         0x00000700
#define _IPC0_OC1IP_LENGTH                       0x00000003

#define _IPC0_T1IP_POSITION                      0x0000000C
#define _IPC0_T1IP_MASK                          0x00007000
#define _IPC0_T1IP_LENGTH                        0x00000003

#define _IPC0_INT0IP0_POSITION                   0x00000000
#define _IPC0_INT0IP0_MASK                       0x00000001
#define _IPC0_INT0IP0_LENGTH                     0x00000001

#define _IPC0_INT0IP1_POSITION                   0x00000001
#define _IPC0_INT0IP1_MASK                       0x00000002
#define _IPC0_INT0IP1_LENGTH                     0x00000001

#define _IPC0_INT0IP2_POSITION                   0x00000002
#define _IPC0_INT0IP2_MASK                       0x00000004
#define _IPC0_INT0IP2_LENGTH                     0x00000001

#define _IPC0_IC1IP0_POSITION                    0x00000004
#define _IPC0_IC1IP0_MASK                        0x00000010
#define _IPC0_IC1IP0_LENGTH                      0x00000001

#define _IPC0_IC1IP1_POSITION                    0x00000005
#define _IPC0_IC1IP1_MASK                        0x00000020
#define _IPC0_IC1IP1_LENGTH                      0x00000001

#define _IPC0_IC1IP2_POSITION                    0x00000006
#define _IPC0_IC1IP2_MASK                        0x00000040
#define _IPC0_IC1IP2_LENGTH                      0x00000001

#define _IPC0_OC1IP0_POSITION                    0x00000008
#define _IPC0_OC1IP0_MASK                        0x00000100
#define _IPC0_OC1IP0_LENGTH                      0x00000001

#define _IPC0_OC1IP1_POSITION                    0x00000009
#define _IPC0_OC1IP1_MASK                        0x00000200
#define _IPC0_OC1IP1_LENGTH                      0x00000001

#define _IPC0_OC1IP2_POSITION                    0x0000000A
#define _IPC0_OC1IP2_MASK                        0x00000400
#define _IPC0_OC1IP2_LENGTH                      0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_IC2IP0_POSITION                    0x00000004
#define _IPC1_IC2IP0_MASK                        0x00000010
#define _IPC1_IC2IP0_LENGTH                      0x00000001

#define _IPC1_IC2IP1_POSITION                    0x00000005
#define _IPC1_IC2IP1_MASK                        0x00000020
#define _IPC1_IC2IP1_LENGTH                      0x00000001

#define _IPC1_IC2IP2_POSITION                    0x00000006
#define _IPC1_IC2IP2_MASK                        0x00000040
#define _IPC1_IC2IP2_LENGTH                      0x00000001

#define _IPC1_OC2IP0_POSITION                    0x00000008
#define _IPC1_OC2IP0_MASK                        0x00000100
#define _IPC1_OC2IP0_LENGTH                      0x00000001

#define _IPC1_OC2IP1_POSITION                    0x00000009
#define _IPC1_OC2IP1_MASK                        0x00000200
#define _IPC1_OC2IP1_LENGTH                      0x00000001

#define _IPC1_OC2IP2_POSITION                    0x0000000A
#define _IPC1_OC2IP2_MASK                        0x00000400
#define _IPC1_OC2IP2_LENGTH                      0x00000001

#define _IPC1_T2IP0_POSITION                     0x0000000C
#define _IPC1_T2IP0_MASK                         0x00001000
#define _IPC1_T2IP0_LENGTH                       0x00000001

#define _IPC1_T2IP1_POSITION                     0x0000000D
#define _IPC1_T2IP1_MASK                         0x00002000
#define _IPC1_T2IP1_LENGTH                       0x00000001

#define _IPC1_T2IP2_POSITION                     0x0000000E
#define _IPC1_T2IP2_MASK                         0x00004000
#define _IPC1_T2IP2_LENGTH                       0x00000001

#define _IPC2_T3IP_POSITION                      0x00000000
#define _IPC2_T3IP_MASK                          0x00000007
#define _IPC2_T3IP_LENGTH                        0x00000003

#define _IPC2_SPI1EIP_POSITION                   0x00000004
#define _IPC2_SPI1EIP_MASK                       0x00000070
#define _IPC2_SPI1EIP_LENGTH                     0x00000003

#define _IPC2_SPI1IP_POSITION                    0x00000008
#define _IPC2_SPI1IP_MASK                        0x00000700
#define _IPC2_SPI1IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x0000000C
#define _IPC2_U1RXIP_MASK                        0x00007000
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_T3IP0_POSITION                     0x00000000
#define _IPC2_T3IP0_MASK                         0x00000001
#define _IPC2_T3IP0_LENGTH                       0x00000001

#define _IPC2_T3IP1_POSITION                     0x00000001
#define _IPC2_T3IP1_MASK                         0x00000002
#define _IPC2_T3IP1_LENGTH                       0x00000001

#define _IPC2_T3IP2_POSITION                     0x00000002
#define _IPC2_T3IP2_MASK                         0x00000004
#define _IPC2_T3IP2_LENGTH                       0x00000001

#define _IPC2_SPI1EIP0_POSITION                  0x00000004
#define _IPC2_SPI1EIP0_MASK                      0x00000010
#define _IPC2_SPI1EIP0_LENGTH                    0x00000001

#define _IPC2_SPI1EIP1_POSITION                  0x00000005
#define _IPC2_SPI1EIP1_MASK                      0x00000020
#define _IPC2_SPI1EIP1_LENGTH                    0x00000001

#define _IPC2_SPI1EIP2_POSITION                  0x00000006
#define _IPC2_SPI1EIP2_MASK                      0x00000040
#define _IPC2_SPI1EIP2_LENGTH                    0x00000001

#define _IPC2_SPI1IP0_POSITION                   0x00000008
#define _IPC2_SPI1IP0_MASK                       0x00000100
#define _IPC2_SPI1IP0_LENGTH                     0x00000001

#define _IPC2_SPI1IP1_POSITION                   0x00000009
#define _IPC2_SPI1IP1_MASK                       0x00000200
#define _IPC2_SPI1IP1_LENGTH                     0x00000001

#define _IPC2_SPI1IP2_POSITION                   0x0000000A
#define _IPC2_SPI1IP2_MASK                       0x00000400
#define _IPC2_SPI1IP2_LENGTH                     0x00000001

#define _IPC2_U1RXIP0_POSITION                   0x0000000C
#define _IPC2_U1RXIP0_MASK                       0x00001000
#define _IPC2_U1RXIP0_LENGTH                     0x00000001

#define _IPC2_U1RXIP1_POSITION                   0x0000000D
#define _IPC2_U1RXIP1_MASK                       0x00002000
#define _IPC2_U1RXIP1_LENGTH                     0x00000001

#define _IPC2_U1RXIP2_POSITION                   0x0000000E
#define _IPC2_U1RXIP2_MASK                       0x00004000
#define _IPC2_U1RXIP2_LENGTH                     0x00000001

#define _IPC3_U1TXIP_POSITION                    0x00000000
#define _IPC3_U1TXIP_MASK                        0x00000007
#define _IPC3_U1TXIP_LENGTH                      0x00000003

#define _IPC3_ADCIP_POSITION                     0x00000004
#define _IPC3_ADCIP_MASK                         0x00000070
#define _IPC3_ADCIP_LENGTH                       0x00000003

#define _IPC3_NVMIP_POSITION                     0x0000000C
#define _IPC3_NVMIP_MASK                         0x00007000
#define _IPC3_NVMIP_LENGTH                       0x00000003

#define _IPC3_U1TXIP0_POSITION                   0x00000000
#define _IPC3_U1TXIP0_MASK                       0x00000001
#define _IPC3_U1TXIP0_LENGTH                     0x00000001

#define _IPC3_U1TXIP1_POSITION                   0x00000001
#define _IPC3_U1TXIP1_MASK                       0x00000002
#define _IPC3_U1TXIP1_LENGTH                     0x00000001

#define _IPC3_U1TXIP2_POSITION                   0x00000002
#define _IPC3_U1TXIP2_MASK                       0x00000004
#define _IPC3_U1TXIP2_LENGTH                     0x00000001

#define _IPC3_ADCIP0_POSITION                    0x00000004
#define _IPC3_ADCIP0_MASK                        0x00000010
#define _IPC3_ADCIP0_LENGTH                      0x00000001

#define _IPC3_ADCIP1_POSITION                    0x00000005
#define _IPC3_ADCIP1_MASK                        0x00000020
#define _IPC3_ADCIP1_LENGTH                      0x00000001

#define _IPC3_ADCIP2_POSITION                    0x00000006
#define _IPC3_ADCIP2_MASK                        0x00000040
#define _IPC3_ADCIP2_LENGTH                      0x00000001

#define _IPC3_NVMIP0_POSITION                    0x0000000C
#define _IPC3_NVMIP0_MASK                        0x00001000
#define _IPC3_NVMIP0_LENGTH                      0x00000001

#define _IPC3_NVMIP1_POSITION                    0x0000000D
#define _IPC3_NVMIP1_MASK                        0x00002000
#define _IPC3_NVMIP1_LENGTH                      0x00000001

#define _IPC3_NVMIP2_POSITION                    0x0000000E
#define _IPC3_NVMIP2_MASK                        0x00004000
#define _IPC3_NVMIP2_LENGTH                      0x00000001

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

#define _IPC4_AC1IP_POSITION                     0x00000008
#define _IPC4_AC1IP_MASK                         0x00000700
#define _IPC4_AC1IP_LENGTH                       0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SI2C1IP0_POSITION                  0x00000000
#define _IPC4_SI2C1IP0_MASK                      0x00000001
#define _IPC4_SI2C1IP0_LENGTH                    0x00000001

#define _IPC4_SI2C1IP1_POSITION                  0x00000001
#define _IPC4_SI2C1IP1_MASK                      0x00000002
#define _IPC4_SI2C1IP1_LENGTH                    0x00000001

#define _IPC4_SI2C1IP2_POSITION                  0x00000002
#define _IPC4_SI2C1IP2_MASK                      0x00000004
#define _IPC4_SI2C1IP2_LENGTH                    0x00000001

#define _IPC4_MI2C1IP0_POSITION                  0x00000004
#define _IPC4_MI2C1IP0_MASK                      0x00000010
#define _IPC4_MI2C1IP0_LENGTH                    0x00000001

#define _IPC4_MI2C1IP1_POSITION                  0x00000005
#define _IPC4_MI2C1IP1_MASK                      0x00000020
#define _IPC4_MI2C1IP1_LENGTH                    0x00000001

#define _IPC4_MI2C1IP2_POSITION                  0x00000006
#define _IPC4_MI2C1IP2_MASK                      0x00000040
#define _IPC4_MI2C1IP2_LENGTH                    0x00000001

#define _IPC4_AC1IP0_POSITION                    0x00000008
#define _IPC4_AC1IP0_MASK                        0x00000100
#define _IPC4_AC1IP0_LENGTH                      0x00000001

#define _IPC4_AC1IP1_POSITION                    0x00000009
#define _IPC4_AC1IP1_MASK                        0x00000200
#define _IPC4_AC1IP1_LENGTH                      0x00000001

#define _IPC4_AC1IP2_POSITION                    0x0000000A
#define _IPC4_AC1IP2_MASK                        0x00000400
#define _IPC4_AC1IP2_LENGTH                      0x00000001

#define _IPC4_CNIP0_POSITION                     0x0000000C
#define _IPC4_CNIP0_MASK                         0x00001000
#define _IPC4_CNIP0_LENGTH                       0x00000001

#define _IPC4_CNIP1_POSITION                     0x0000000D
#define _IPC4_CNIP1_MASK                         0x00002000
#define _IPC4_CNIP1_LENGTH                       0x00000001

#define _IPC4_CNIP2_POSITION                     0x0000000E
#define _IPC4_CNIP2_MASK                         0x00004000
#define _IPC4_CNIP2_LENGTH                       0x00000001

#define _IPC5_INT1IP_POSITION                    0x00000000
#define _IPC5_INT1IP_MASK                        0x00000007
#define _IPC5_INT1IP_LENGTH                      0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

#define _IPC6_OC3IP0_POSITION                    0x00000004
#define _IPC6_OC3IP0_MASK                        0x00000010
#define _IPC6_OC3IP0_LENGTH                      0x00000001

#define _IPC6_OC3IP1_POSITION                    0x00000005
#define _IPC6_OC3IP1_MASK                        0x00000020
#define _IPC6_OC3IP1_LENGTH                      0x00000001

#define _IPC6_OC3IP2_POSITION                    0x00000006
#define _IPC6_OC3IP2_MASK                        0x00000040
#define _IPC6_OC3IP2_LENGTH                      0x00000001

#define _IPC6_OC4IP0_POSITION                    0x00000008
#define _IPC6_OC4IP0_MASK                        0x00000100
#define _IPC6_OC4IP0_LENGTH                      0x00000001

#define _IPC6_OC4IP1_POSITION                    0x00000009
#define _IPC6_OC4IP1_MASK                        0x00000200
#define _IPC6_OC4IP1_LENGTH                      0x00000001

#define _IPC6_OC4IP2_POSITION                    0x0000000A
#define _IPC6_OC4IP2_MASK                        0x00000400
#define _IPC6_OC4IP2_LENGTH                      0x00000001

#define _IPC6_T4IP0_POSITION                     0x0000000C
#define _IPC6_T4IP0_MASK                         0x00001000
#define _IPC6_T4IP0_LENGTH                       0x00000001

#define _IPC6_T4IP1_POSITION                     0x0000000D
#define _IPC6_T4IP1_MASK                         0x00002000
#define _IPC6_T4IP1_LENGTH                       0x00000001

#define _IPC6_T4IP2_POSITION                     0x0000000E
#define _IPC6_T4IP2_MASK                         0x00004000
#define _IPC6_T4IP2_LENGTH                       0x00000001

#define _IPC7_T5IP_POSITION                      0x00000000
#define _IPC7_T5IP_MASK                          0x00000007
#define _IPC7_T5IP_LENGTH                        0x00000003

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_U2RXIP_POSITION                    0x00000008
#define _IPC7_U2RXIP_MASK                        0x00000700
#define _IPC7_U2RXIP_LENGTH                      0x00000003

#define _IPC7_U2TXIP_POSITION                    0x0000000C
#define _IPC7_U2TXIP_MASK                        0x00007000
#define _IPC7_U2TXIP_LENGTH                      0x00000003

#define _IPC7_T5IP0_POSITION                     0x00000000
#define _IPC7_T5IP0_MASK                         0x00000001
#define _IPC7_T5IP0_LENGTH                       0x00000001

#define _IPC7_T5IP1_POSITION                     0x00000001
#define _IPC7_T5IP1_MASK                         0x00000002
#define _IPC7_T5IP1_LENGTH                       0x00000001

#define _IPC7_T5IP2_POSITION                     0x00000002
#define _IPC7_T5IP2_MASK                         0x00000004
#define _IPC7_T5IP2_LENGTH                       0x00000001

#define _IPC7_INT2IP0_POSITION                   0x00000004
#define _IPC7_INT2IP0_MASK                       0x00000010
#define _IPC7_INT2IP0_LENGTH                     0x00000001

#define _IPC7_INT2IP1_POSITION                   0x00000005
#define _IPC7_INT2IP1_MASK                       0x00000020
#define _IPC7_INT2IP1_LENGTH                     0x00000001

#define _IPC7_INT2IP2_POSITION                   0x00000006
#define _IPC7_INT2IP2_MASK                       0x00000040
#define _IPC7_INT2IP2_LENGTH                     0x00000001

#define _IPC7_U2RXIP0_POSITION                   0x00000008
#define _IPC7_U2RXIP0_MASK                       0x00000100
#define _IPC7_U2RXIP0_LENGTH                     0x00000001

#define _IPC7_U2RXIP1_POSITION                   0x00000009
#define _IPC7_U2RXIP1_MASK                       0x00000200
#define _IPC7_U2RXIP1_LENGTH                     0x00000001

#define _IPC7_U2RXIP2_POSITION                   0x0000000A
#define _IPC7_U2RXIP2_MASK                       0x00000400
#define _IPC7_U2RXIP2_LENGTH                     0x00000001

#define _IPC7_U2TXIP0_POSITION                   0x0000000C
#define _IPC7_U2TXIP0_MASK                       0x00001000
#define _IPC7_U2TXIP0_LENGTH                     0x00000001

#define _IPC7_U2TXIP1_POSITION                   0x0000000D
#define _IPC7_U2TXIP1_MASK                       0x00002000
#define _IPC7_U2TXIP1_LENGTH                     0x00000001

#define _IPC7_U2TXIP2_POSITION                   0x0000000E
#define _IPC7_U2TXIP2_MASK                       0x00004000
#define _IPC7_U2TXIP2_LENGTH                     0x00000001

#define _IPC8_SPI2EIP_POSITION                   0x00000000
#define _IPC8_SPI2EIP_MASK                       0x00000007
#define _IPC8_SPI2EIP_LENGTH                     0x00000003

#define _IPC8_SPI2IP_POSITION                    0x00000004
#define _IPC8_SPI2IP_MASK                        0x00000070
#define _IPC8_SPI2IP_LENGTH                      0x00000003

#define _IPC8_SPI2EIP0_POSITION                  0x00000000
#define _IPC8_SPI2EIP0_MASK                      0x00000001
#define _IPC8_SPI2EIP0_LENGTH                    0x00000001

#define _IPC8_SPI2EIP1_POSITION                  0x00000001
#define _IPC8_SPI2EIP1_MASK                      0x00000002
#define _IPC8_SPI2EIP1_LENGTH                    0x00000001

#define _IPC8_SPI2EIP2_POSITION                  0x00000002
#define _IPC8_SPI2EIP2_MASK                      0x00000004
#define _IPC8_SPI2EIP2_LENGTH                    0x00000001

#define _IPC8_SPI2IP0_POSITION                   0x00000004
#define _IPC8_SPI2IP0_MASK                       0x00000010
#define _IPC8_SPI2IP0_LENGTH                     0x00000001

#define _IPC8_SPI2IP1_POSITION                   0x00000005
#define _IPC8_SPI2IP1_MASK                       0x00000020
#define _IPC8_SPI2IP1_LENGTH                     0x00000001

#define _IPC8_SPI2IP2_POSITION                   0x00000006
#define _IPC8_SPI2IP2_MASK                       0x00000040
#define _IPC8_SPI2IP2_LENGTH                     0x00000001

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

#define _IPC9_IC3IP0_POSITION                    0x00000004
#define _IPC9_IC3IP0_MASK                        0x00000010
#define _IPC9_IC3IP0_LENGTH                      0x00000001

#define _IPC9_IC3IP1_POSITION                    0x00000005
#define _IPC9_IC3IP1_MASK                        0x00000020
#define _IPC9_IC3IP1_LENGTH                      0x00000001

#define _IPC9_IC3IP2_POSITION                    0x00000006
#define _IPC9_IC3IP2_MASK                        0x00000040
#define _IPC9_IC3IP2_LENGTH                      0x00000001

#define _IPC9_IC4IP0_POSITION                    0x00000008
#define _IPC9_IC4IP0_MASK                        0x00000100
#define _IPC9_IC4IP0_LENGTH                      0x00000001

#define _IPC9_IC4IP1_POSITION                    0x00000009
#define _IPC9_IC4IP1_MASK                        0x00000200
#define _IPC9_IC4IP1_LENGTH                      0x00000001

#define _IPC9_IC4IP2_POSITION                    0x0000000A
#define _IPC9_IC4IP2_MASK                        0x00000400
#define _IPC9_IC4IP2_LENGTH                      0x00000001

#define _IPC12_SI2C2IP_POSITION                  0x00000004
#define _IPC12_SI2C2IP_MASK                      0x00000070
#define _IPC12_SI2C2IP_LENGTH                    0x00000003

#define _IPC12_MI2C2IP_POSITION                  0x00000008
#define _IPC12_MI2C2IP_MASK                      0x00000700
#define _IPC12_MI2C2IP_LENGTH                    0x00000003

#define _IPC12_SI2C2IP0_POSITION                 0x00000004
#define _IPC12_SI2C2IP0_MASK                     0x00000010
#define _IPC12_SI2C2IP0_LENGTH                   0x00000001

#define _IPC12_SI2C2IP1_POSITION                 0x00000005
#define _IPC12_SI2C2IP1_MASK                     0x00000020
#define _IPC12_SI2C2IP1_LENGTH                   0x00000001

#define _IPC12_SI2C2IP2_POSITION                 0x00000006
#define _IPC12_SI2C2IP2_MASK                     0x00000040
#define _IPC12_SI2C2IP2_LENGTH                   0x00000001

#define _IPC12_MI2C2IP0_POSITION                 0x00000008
#define _IPC12_MI2C2IP0_MASK                     0x00000100
#define _IPC12_MI2C2IP0_LENGTH                   0x00000001

#define _IPC12_MI2C2IP1_POSITION                 0x00000009
#define _IPC12_MI2C2IP1_MASK                     0x00000200
#define _IPC12_MI2C2IP1_LENGTH                   0x00000001

#define _IPC12_MI2C2IP2_POSITION                 0x0000000A
#define _IPC12_MI2C2IP2_MASK                     0x00000400
#define _IPC12_MI2C2IP2_LENGTH                   0x00000001

#define _IPC13_INT4IP_POSITION                   0x00000008
#define _IPC13_INT4IP_MASK                       0x00000700
#define _IPC13_INT4IP_LENGTH                     0x00000003

#define _IPC13_INT4IP0_POSITION                  0x00000008
#define _IPC13_INT4IP0_MASK                      0x00000100
#define _IPC13_INT4IP0_LENGTH                    0x00000001

#define _IPC13_INT4IP1_POSITION                  0x00000009
#define _IPC13_INT4IP1_MASK                      0x00000200
#define _IPC13_INT4IP1_LENGTH                    0x00000001

#define _IPC13_INT4IP2_POSITION                  0x0000000A
#define _IPC13_INT4IP2_MASK                      0x00000400
#define _IPC13_INT4IP2_LENGTH                    0x00000001

#define _IPC14_PSEMIP_POSITION                   0x00000004
#define _IPC14_PSEMIP_MASK                       0x00000070
#define _IPC14_PSEMIP_LENGTH                     0x00000003

#define _IPC14_PSEMIP0_POSITION                  0x00000004
#define _IPC14_PSEMIP0_MASK                      0x00000010
#define _IPC14_PSEMIP0_LENGTH                    0x00000001

#define _IPC14_PSEMIP1_POSITION                  0x00000005
#define _IPC14_PSEMIP1_MASK                      0x00000020
#define _IPC14_PSEMIP1_LENGTH                    0x00000001

#define _IPC14_PSEMIP2_POSITION                  0x00000006
#define _IPC14_PSEMIP2_MASK                      0x00000040
#define _IPC14_PSEMIP2_LENGTH                    0x00000001

#define _IPC16_U1EIP_POSITION                    0x00000004
#define _IPC16_U1EIP_MASK                        0x00000070
#define _IPC16_U1EIP_LENGTH                      0x00000003

#define _IPC16_U2EIP_POSITION                    0x00000008
#define _IPC16_U2EIP_MASK                        0x00000700
#define _IPC16_U2EIP_LENGTH                      0x00000003

#define _IPC16_U1EIP0_POSITION                   0x00000004
#define _IPC16_U1EIP0_MASK                       0x00000010
#define _IPC16_U1EIP0_LENGTH                     0x00000001

#define _IPC16_U1EIP1_POSITION                   0x00000005
#define _IPC16_U1EIP1_MASK                       0x00000020
#define _IPC16_U1EIP1_LENGTH                     0x00000001

#define _IPC16_U1EIP2_POSITION                   0x00000006
#define _IPC16_U1EIP2_MASK                       0x00000040
#define _IPC16_U1EIP2_LENGTH                     0x00000001

#define _IPC16_U2EIP0_POSITION                   0x00000008
#define _IPC16_U2EIP0_MASK                       0x00000100
#define _IPC16_U2EIP0_LENGTH                     0x00000001

#define _IPC16_U2EIP1_POSITION                   0x00000009
#define _IPC16_U2EIP1_MASK                       0x00000200
#define _IPC16_U2EIP1_LENGTH                     0x00000001

#define _IPC16_U2EIP2_POSITION                   0x0000000A
#define _IPC16_U2EIP2_MASK                       0x00000400
#define _IPC16_U2EIP2_LENGTH                     0x00000001

#define _IPC18_PSESIP_POSITION                   0x00000004
#define _IPC18_PSESIP_MASK                       0x00000070
#define _IPC18_PSESIP_LENGTH                     0x00000003

#define _IPC18_PSESIP0_POSITION                  0x00000004
#define _IPC18_PSESIP0_MASK                      0x00000010
#define _IPC18_PSESIP0_LENGTH                    0x00000001

#define _IPC18_PSESIP1_POSITION                  0x00000005
#define _IPC18_PSESIP1_MASK                      0x00000020
#define _IPC18_PSESIP1_LENGTH                    0x00000001

#define _IPC18_PSESIP2_POSITION                  0x00000006
#define _IPC18_PSESIP2_MASK                      0x00000040
#define _IPC18_PSESIP2_LENGTH                    0x00000001

#define _IPC23_PWM1IP_POSITION                   0x00000008
#define _IPC23_PWM1IP_MASK                       0x00000700
#define _IPC23_PWM1IP_LENGTH                     0x00000003

#define _IPC23_PWM2IP_POSITION                   0x0000000C
#define _IPC23_PWM2IP_MASK                       0x00007000
#define _IPC23_PWM2IP_LENGTH                     0x00000003

#define _IPC23_PWM1IP0_POSITION                  0x00000008
#define _IPC23_PWM1IP0_MASK                      0x00000100
#define _IPC23_PWM1IP0_LENGTH                    0x00000001

#define _IPC23_PWM1IP1_POSITION                  0x00000009
#define _IPC23_PWM1IP1_MASK                      0x00000200
#define _IPC23_PWM1IP1_LENGTH                    0x00000001

#define _IPC23_PWM1IP2_POSITION                  0x0000000A
#define _IPC23_PWM1IP2_MASK                      0x00000400
#define _IPC23_PWM1IP2_LENGTH                    0x00000001

#define _IPC23_PWM2IP0_POSITION                  0x0000000C
#define _IPC23_PWM2IP0_MASK                      0x00001000
#define _IPC23_PWM2IP0_LENGTH                    0x00000001

#define _IPC23_PWM2IP1_POSITION                  0x0000000D
#define _IPC23_PWM2IP1_MASK                      0x00002000
#define _IPC23_PWM2IP1_LENGTH                    0x00000001

#define _IPC23_PWM2IP2_POSITION                  0x0000000E
#define _IPC23_PWM2IP2_MASK                      0x00004000
#define _IPC23_PWM2IP2_LENGTH                    0x00000001

#define _IPC24_PWM3IP_POSITION                   0x00000000
#define _IPC24_PWM3IP_MASK                       0x00000007
#define _IPC24_PWM3IP_LENGTH                     0x00000003

#define _IPC24_PWM4IP_POSITION                   0x00000004
#define _IPC24_PWM4IP_MASK                       0x00000070
#define _IPC24_PWM4IP_LENGTH                     0x00000003

#define _IPC24_PWM5IP_POSITION                   0x00000008
#define _IPC24_PWM5IP_MASK                       0x00000700
#define _IPC24_PWM5IP_LENGTH                     0x00000003

#define _IPC24_PWM3IP0_POSITION                  0x00000000
#define _IPC24_PWM3IP0_MASK                      0x00000001
#define _IPC24_PWM3IP0_LENGTH                    0x00000001

#define _IPC24_PWM3IP1_POSITION                  0x00000001
#define _IPC24_PWM3IP1_MASK                      0x00000002
#define _IPC24_PWM3IP1_LENGTH                    0x00000001

#define _IPC24_PWM3IP2_POSITION                  0x00000002
#define _IPC24_PWM3IP2_MASK                      0x00000004
#define _IPC24_PWM3IP2_LENGTH                    0x00000001

#define _IPC24_PWM4IP0_POSITION                  0x00000004
#define _IPC24_PWM4IP0_MASK                      0x00000010
#define _IPC24_PWM4IP0_LENGTH                    0x00000001

#define _IPC24_PWM4IP1_POSITION                  0x00000005
#define _IPC24_PWM4IP1_MASK                      0x00000020
#define _IPC24_PWM4IP1_LENGTH                    0x00000001

#define _IPC24_PWM4IP2_POSITION                  0x00000006
#define _IPC24_PWM4IP2_MASK                      0x00000040
#define _IPC24_PWM4IP2_LENGTH                    0x00000001

#define _IPC24_PWM5IP0_POSITION                  0x00000008
#define _IPC24_PWM5IP0_MASK                      0x00000100
#define _IPC24_PWM5IP0_LENGTH                    0x00000001

#define _IPC24_PWM5IP1_POSITION                  0x00000009
#define _IPC24_PWM5IP1_MASK                      0x00000200
#define _IPC24_PWM5IP1_LENGTH                    0x00000001

#define _IPC24_PWM5IP2_POSITION                  0x0000000A
#define _IPC24_PWM5IP2_MASK                      0x00000400
#define _IPC24_PWM5IP2_LENGTH                    0x00000001

#define _IPC25_AC2IP_POSITION                    0x0000000C
#define _IPC25_AC2IP_MASK                        0x00007000
#define _IPC25_AC2IP_LENGTH                      0x00000003

#define _IPC25_AC2IP0_POSITION                   0x0000000C
#define _IPC25_AC2IP0_MASK                       0x00001000
#define _IPC25_AC2IP0_LENGTH                     0x00000001

#define _IPC25_AC2IP1_POSITION                   0x0000000D
#define _IPC25_AC2IP1_MASK                       0x00002000
#define _IPC25_AC2IP1_LENGTH                     0x00000001

#define _IPC25_AC2IP2_POSITION                   0x0000000E
#define _IPC25_AC2IP2_MASK                       0x00004000
#define _IPC25_AC2IP2_LENGTH                     0x00000001

#define _IPC26_AC3IP_POSITION                    0x00000000
#define _IPC26_AC3IP_MASK                        0x00000007
#define _IPC26_AC3IP_LENGTH                      0x00000003

#define _IPC26_AC4IP_POSITION                    0x00000004
#define _IPC26_AC4IP_MASK                        0x00000070
#define _IPC26_AC4IP_LENGTH                      0x00000003

#define _IPC26_AC3IP0_POSITION                   0x00000000
#define _IPC26_AC3IP0_MASK                       0x00000001
#define _IPC26_AC3IP0_LENGTH                     0x00000001

#define _IPC26_AC3IP1_POSITION                   0x00000001
#define _IPC26_AC3IP1_MASK                       0x00000002
#define _IPC26_AC3IP1_LENGTH                     0x00000001

#define _IPC26_AC3IP2_POSITION                   0x00000002
#define _IPC26_AC3IP2_MASK                       0x00000004
#define _IPC26_AC3IP2_LENGTH                     0x00000001

#define _IPC26_AC4IP0_POSITION                   0x00000004
#define _IPC26_AC4IP0_MASK                       0x00000010
#define _IPC26_AC4IP0_LENGTH                     0x00000001

#define _IPC26_AC4IP1_POSITION                   0x00000005
#define _IPC26_AC4IP1_MASK                       0x00000020
#define _IPC26_AC4IP1_LENGTH                     0x00000001

#define _IPC26_AC4IP2_POSITION                   0x00000006
#define _IPC26_AC4IP2_MASK                       0x00000040
#define _IPC26_AC4IP2_LENGTH                     0x00000001

#define _IPC27_ADCAN0IP_POSITION                 0x00000008
#define _IPC27_ADCAN0IP_MASK                     0x00000700
#define _IPC27_ADCAN0IP_LENGTH                   0x00000003

#define _IPC27_ADCAN1IP_POSITION                 0x0000000C
#define _IPC27_ADCAN1IP_MASK                     0x00007000
#define _IPC27_ADCAN1IP_LENGTH                   0x00000003

#define _IPC27_ADCAN0IP0_POSITION                0x00000008
#define _IPC27_ADCAN0IP0_MASK                    0x00000100
#define _IPC27_ADCAN0IP0_LENGTH                  0x00000001

#define _IPC27_ADCAN0IP1_POSITION                0x00000009
#define _IPC27_ADCAN0IP1_MASK                    0x00000200
#define _IPC27_ADCAN0IP1_LENGTH                  0x00000001

#define _IPC27_ADCAN0IP2_POSITION                0x0000000A
#define _IPC27_ADCAN0IP2_MASK                    0x00000400
#define _IPC27_ADCAN0IP2_LENGTH                  0x00000001

#define _IPC27_ADCAN1IP0_POSITION                0x0000000C
#define _IPC27_ADCAN1IP0_MASK                    0x00001000
#define _IPC27_ADCAN1IP0_LENGTH                  0x00000001

#define _IPC27_ADCAN1IP1_POSITION                0x0000000D
#define _IPC27_ADCAN1IP1_MASK                    0x00002000
#define _IPC27_ADCAN1IP1_LENGTH                  0x00000001

#define _IPC27_ADCAN1IP2_POSITION                0x0000000E
#define _IPC27_ADCAN1IP2_MASK                    0x00004000
#define _IPC27_ADCAN1IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN2IP_POSITION                 0x00000000
#define _IPC28_ADCAN2IP_MASK                     0x00000007
#define _IPC28_ADCAN2IP_LENGTH                   0x00000003

#define _IPC28_ADCAN3IP_POSITION                 0x00000004
#define _IPC28_ADCAN3IP_MASK                     0x00000070
#define _IPC28_ADCAN3IP_LENGTH                   0x00000003

#define _IPC28_ADCAN4IP_POSITION                 0x00000008
#define _IPC28_ADCAN4IP_MASK                     0x00000700
#define _IPC28_ADCAN4IP_LENGTH                   0x00000003

#define _IPC28_ADCAN5IP_POSITION                 0x0000000C
#define _IPC28_ADCAN5IP_MASK                     0x00007000
#define _IPC28_ADCAN5IP_LENGTH                   0x00000003

#define _IPC28_ADCAN2IP0_POSITION                0x00000000
#define _IPC28_ADCAN2IP0_MASK                    0x00000001
#define _IPC28_ADCAN2IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN2IP1_POSITION                0x00000001
#define _IPC28_ADCAN2IP1_MASK                    0x00000002
#define _IPC28_ADCAN2IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN2IP2_POSITION                0x00000002
#define _IPC28_ADCAN2IP2_MASK                    0x00000004
#define _IPC28_ADCAN2IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN3IP0_POSITION                0x00000004
#define _IPC28_ADCAN3IP0_MASK                    0x00000010
#define _IPC28_ADCAN3IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN3IP1_POSITION                0x00000005
#define _IPC28_ADCAN3IP1_MASK                    0x00000020
#define _IPC28_ADCAN3IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN3IP2_POSITION                0x00000006
#define _IPC28_ADCAN3IP2_MASK                    0x00000040
#define _IPC28_ADCAN3IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN4IP0_POSITION                0x00000008
#define _IPC28_ADCAN4IP0_MASK                    0x00000100
#define _IPC28_ADCAN4IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN4IP1_POSITION                0x00000009
#define _IPC28_ADCAN4IP1_MASK                    0x00000200
#define _IPC28_ADCAN4IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN4IP2_POSITION                0x0000000A
#define _IPC28_ADCAN4IP2_MASK                    0x00000400
#define _IPC28_ADCAN4IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN5IP0_POSITION                0x0000000C
#define _IPC28_ADCAN5IP0_MASK                    0x00001000
#define _IPC28_ADCAN5IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN5IP1_POSITION                0x0000000D
#define _IPC28_ADCAN5IP1_MASK                    0x00002000
#define _IPC28_ADCAN5IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN5IP2_POSITION                0x0000000E
#define _IPC28_ADCAN5IP2_MASK                    0x00004000
#define _IPC28_ADCAN5IP2_LENGTH                  0x00000001

#define _IPC29_ADCAN6IP_POSITION                 0x00000000
#define _IPC29_ADCAN6IP_MASK                     0x00000007
#define _IPC29_ADCAN6IP_LENGTH                   0x00000003

#define _IPC29_ADCAN7IP_POSITION                 0x00000004
#define _IPC29_ADCAN7IP_MASK                     0x00000070
#define _IPC29_ADCAN7IP_LENGTH                   0x00000003

#define _IPC29_ADCAN6IP0_POSITION                0x00000000
#define _IPC29_ADCAN6IP0_MASK                    0x00000001
#define _IPC29_ADCAN6IP0_LENGTH                  0x00000001

#define _IPC29_ADCAN6IP1_POSITION                0x00000001
#define _IPC29_ADCAN6IP1_MASK                    0x00000002
#define _IPC29_ADCAN6IP1_LENGTH                  0x00000001

#define _IPC29_ADCAN6IP2_POSITION                0x00000002
#define _IPC29_ADCAN6IP2_MASK                    0x00000004
#define _IPC29_ADCAN6IP2_LENGTH                  0x00000001

#define _IPC29_ADCAN7IP0_POSITION                0x00000004
#define _IPC29_ADCAN7IP0_MASK                    0x00000010
#define _IPC29_ADCAN7IP0_LENGTH                  0x00000001

#define _IPC29_ADCAN7IP1_POSITION                0x00000005
#define _IPC29_ADCAN7IP1_MASK                    0x00000020
#define _IPC29_ADCAN7IP1_LENGTH                  0x00000001

#define _IPC29_ADCAN7IP2_POSITION                0x00000006
#define _IPC29_ADCAN7IP2_MASK                    0x00000040
#define _IPC29_ADCAN7IP2_LENGTH                  0x00000001

#define _IPC35_ICDIP_POSITION                    0x00000008
#define _IPC35_ICDIP_MASK                        0x00000700
#define _IPC35_ICDIP_LENGTH                      0x00000003

#define _IPC35_JTAGIP_POSITION                   0x0000000C
#define _IPC35_JTAGIP_MASK                       0x00007000
#define _IPC35_JTAGIP_LENGTH                     0x00000003

#define _IPC35_ICDIP0_POSITION                   0x00000008
#define _IPC35_ICDIP0_MASK                       0x00000100
#define _IPC35_ICDIP0_LENGTH                     0x00000001

#define _IPC35_ICDIP1_POSITION                   0x00000009
#define _IPC35_ICDIP1_MASK                       0x00000200
#define _IPC35_ICDIP1_LENGTH                     0x00000001

#define _IPC35_ICDIP2_POSITION                   0x0000000A
#define _IPC35_ICDIP2_MASK                       0x00000400
#define _IPC35_ICDIP2_LENGTH                     0x00000001

#define _IPC35_JTAGIP0_POSITION                  0x0000000C
#define _IPC35_JTAGIP0_MASK                      0x00001000
#define _IPC35_JTAGIP0_LENGTH                    0x00000001

#define _IPC35_JTAGIP1_POSITION                  0x0000000D
#define _IPC35_JTAGIP1_MASK                      0x00002000
#define _IPC35_JTAGIP1_LENGTH                    0x00000001

#define _IPC35_JTAGIP2_POSITION                  0x0000000E
#define _IPC35_JTAGIP2_MASK                      0x00004000
#define _IPC35_JTAGIP2_LENGTH                    0x00000001

#define _IPC40_ADCAN18IP_POSITION                0x00000004
#define _IPC40_ADCAN18IP_MASK                    0x00000070
#define _IPC40_ADCAN18IP_LENGTH                  0x00000003

#define _IPC40_ADCAN19IP_POSITION                0x00000008
#define _IPC40_ADCAN19IP_MASK                    0x00000700
#define _IPC40_ADCAN19IP_LENGTH                  0x00000003

#define _IPC40_ADCAN20IP_POSITION                0x0000000C
#define _IPC40_ADCAN20IP_MASK                    0x00007000
#define _IPC40_ADCAN20IP_LENGTH                  0x00000003

#define _IPC40_ADCAN18IP0_POSITION               0x00000004
#define _IPC40_ADCAN18IP0_MASK                   0x00000010
#define _IPC40_ADCAN18IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN18IP1_POSITION               0x00000005
#define _IPC40_ADCAN18IP1_MASK                   0x00000020
#define _IPC40_ADCAN18IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN18IP2_POSITION               0x00000006
#define _IPC40_ADCAN18IP2_MASK                   0x00000040
#define _IPC40_ADCAN18IP2_LENGTH                 0x00000001

#define _IPC40_ADCAN19IP0_POSITION               0x00000008
#define _IPC40_ADCAN19IP0_MASK                   0x00000100
#define _IPC40_ADCAN19IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN19IP1_POSITION               0x00000009
#define _IPC40_ADCAN19IP1_MASK                   0x00000200
#define _IPC40_ADCAN19IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN19IP2_POSITION               0x0000000A
#define _IPC40_ADCAN19IP2_MASK                   0x00000400
#define _IPC40_ADCAN19IP2_LENGTH                 0x00000001

#define _IPC40_ADCAN20IP0_POSITION               0x0000000C
#define _IPC40_ADCAN20IP0_MASK                   0x00001000
#define _IPC40_ADCAN20IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN20IP1_POSITION               0x0000000D
#define _IPC40_ADCAN20IP1_MASK                   0x00002000
#define _IPC40_ADCAN20IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN20IP2_POSITION               0x0000000E
#define _IPC40_ADCAN20IP2_MASK                   0x00004000
#define _IPC40_ADCAN20IP2_LENGTH                 0x00000001

#define _IPC41_ADCAN21IP_POSITION                0x00000000
#define _IPC41_ADCAN21IP_MASK                    0x00000007
#define _IPC41_ADCAN21IP_LENGTH                  0x00000003

#define _IPC41_ADCAN21IP0_POSITION               0x00000000
#define _IPC41_ADCAN21IP0_MASK                   0x00000001
#define _IPC41_ADCAN21IP0_LENGTH                 0x00000001

#define _IPC41_ADCAN21IP1_POSITION               0x00000001
#define _IPC41_ADCAN21IP1_MASK                   0x00000002
#define _IPC41_ADCAN21IP1_LENGTH                 0x00000001

#define _IPC41_ADCAN21IP2_POSITION               0x00000002
#define _IPC41_ADCAN21IP2_MASK                   0x00000004
#define _IPC41_ADCAN21IP2_LENGTH                 0x00000001

#define _IPC43_I2C1BCIP_POSITION                 0x00000004
#define _IPC43_I2C1BCIP_MASK                     0x00000070
#define _IPC43_I2C1BCIP_LENGTH                   0x00000003

#define _IPC43_I2C2BCIP_POSITION                 0x00000008
#define _IPC43_I2C2BCIP_MASK                     0x00000700
#define _IPC43_I2C2BCIP_LENGTH                   0x00000003

#define _IPC43_I2C1BCIP0_POSITION                0x00000004
#define _IPC43_I2C1BCIP0_MASK                    0x00000010
#define _IPC43_I2C1BCIP0_LENGTH                  0x00000001

#define _IPC43_I2C1BCIP1_POSITION                0x00000005
#define _IPC43_I2C1BCIP1_MASK                    0x00000020
#define _IPC43_I2C1BCIP1_LENGTH                  0x00000001

#define _IPC43_I2C1BCIP2_POSITION                0x00000006
#define _IPC43_I2C1BCIP2_MASK                    0x00000040
#define _IPC43_I2C1BCIP2_LENGTH                  0x00000001

#define _IPC43_I2C2BCIP0_POSITION                0x00000008
#define _IPC43_I2C2BCIP0_MASK                    0x00000100
#define _IPC43_I2C2BCIP0_LENGTH                  0x00000001

#define _IPC43_I2C2BCIP1_POSITION                0x00000009
#define _IPC43_I2C2BCIP1_MASK                    0x00000200
#define _IPC43_I2C2BCIP1_LENGTH                  0x00000001

#define _IPC43_I2C2BCIP2_POSITION                0x0000000A
#define _IPC43_I2C2BCIP2_MASK                    0x00000400
#define _IPC43_I2C2BCIP2_LENGTH                  0x00000001

#define _IPC44_ADCMP0IP_POSITION                 0x00000004
#define _IPC44_ADCMP0IP_MASK                     0x00000070
#define _IPC44_ADCMP0IP_LENGTH                   0x00000003

#define _IPC44_ADCMP1IP_POSITION                 0x00000008
#define _IPC44_ADCMP1IP_MASK                     0x00000700
#define _IPC44_ADCMP1IP_LENGTH                   0x00000003

#define _IPC44_ADFLTR0IP_POSITION                0x0000000C
#define _IPC44_ADFLTR0IP_MASK                    0x00007000
#define _IPC44_ADFLTR0IP_LENGTH                  0x00000003

#define _IPC44_ADCMP0IP0_POSITION                0x00000004
#define _IPC44_ADCMP0IP0_MASK                    0x00000010
#define _IPC44_ADCMP0IP0_LENGTH                  0x00000001

#define _IPC44_ADCMP0IP1_POSITION                0x00000005
#define _IPC44_ADCMP0IP1_MASK                    0x00000020
#define _IPC44_ADCMP0IP1_LENGTH                  0x00000001

#define _IPC44_ADCMP0IP2_POSITION                0x00000006
#define _IPC44_ADCMP0IP2_MASK                    0x00000040
#define _IPC44_ADCMP0IP2_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP0_POSITION                0x00000008
#define _IPC44_ADCMP1IP0_MASK                    0x00000100
#define _IPC44_ADCMP1IP0_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP1_POSITION                0x00000009
#define _IPC44_ADCMP1IP1_MASK                    0x00000200
#define _IPC44_ADCMP1IP1_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP2_POSITION                0x0000000A
#define _IPC44_ADCMP1IP2_MASK                    0x00000400
#define _IPC44_ADCMP1IP2_LENGTH                  0x00000001

#define _IPC44_ADFLTR0IP0_POSITION               0x0000000C
#define _IPC44_ADFLTR0IP0_MASK                   0x00001000
#define _IPC44_ADFLTR0IP0_LENGTH                 0x00000001

#define _IPC44_ADFLTR0IP1_POSITION               0x0000000D
#define _IPC44_ADFLTR0IP1_MASK                   0x00002000
#define _IPC44_ADFLTR0IP1_LENGTH                 0x00000001

#define _IPC44_ADFLTR0IP2_POSITION               0x0000000E
#define _IPC44_ADFLTR0IP2_MASK                   0x00004000
#define _IPC44_ADFLTR0IP2_LENGTH                 0x00000001

#define _IPC45_ADFLTR1IP_POSITION                0x00000000
#define _IPC45_ADFLTR1IP_MASK                    0x00000007
#define _IPC45_ADFLTR1IP_LENGTH                  0x00000003

#define _IPC45_ADFLTR1IP0_POSITION               0x00000000
#define _IPC45_ADFLTR1IP0_MASK                   0x00000001
#define _IPC45_ADFLTR1IP0_LENGTH                 0x00000001

#define _IPC45_ADFLTR1IP1_POSITION               0x00000001
#define _IPC45_ADFLTR1IP1_MASK                   0x00000002
#define _IPC45_ADFLTR1IP1_LENGTH                 0x00000001

#define _IPC45_ADFLTR1IP2_POSITION               0x00000002
#define _IPC45_ADFLTR1IP2_MASK                   0x00000004
#define _IPC45_ADFLTR1IP2_LENGTH                 0x00000001

#define _INTCON1_OSCFAIL_POSITION                0x00000001
#define _INTCON1_OSCFAIL_MASK                    0x00000002
#define _INTCON1_OSCFAIL_LENGTH                  0x00000001

#define _INTCON1_STKERR_POSITION                 0x00000002
#define _INTCON1_STKERR_MASK                     0x00000004
#define _INTCON1_STKERR_LENGTH                   0x00000001

#define _INTCON1_ADDRERR_POSITION                0x00000003
#define _INTCON1_ADDRERR_MASK                    0x00000008
#define _INTCON1_ADDRERR_LENGTH                  0x00000001

#define _INTCON1_MATHERR_POSITION                0x00000004
#define _INTCON1_MATHERR_MASK                    0x00000010
#define _INTCON1_MATHERR_LENGTH                  0x00000001

#define _INTCON1_DIV0ERR_POSITION                0x00000006
#define _INTCON1_DIV0ERR_MASK                    0x00000040
#define _INTCON1_DIV0ERR_LENGTH                  0x00000001

#define _INTCON1_SFTACERR_POSITION               0x00000007
#define _INTCON1_SFTACERR_MASK                   0x00000080
#define _INTCON1_SFTACERR_LENGTH                 0x00000001

#define _INTCON1_COVTE_POSITION                  0x00000008
#define _INTCON1_COVTE_MASK                      0x00000100
#define _INTCON1_COVTE_LENGTH                    0x00000001

#define _INTCON1_OVBTE_POSITION                  0x00000009
#define _INTCON1_OVBTE_MASK                      0x00000200
#define _INTCON1_OVBTE_LENGTH                    0x00000001

#define _INTCON1_OVATE_POSITION                  0x0000000A
#define _INTCON1_OVATE_MASK                      0x00000400
#define _INTCON1_OVATE_LENGTH                    0x00000001

#define _INTCON1_COVBERR_POSITION                0x0000000B
#define _INTCON1_COVBERR_MASK                    0x00000800
#define _INTCON1_COVBERR_LENGTH                  0x00000001

#define _INTCON1_COVAERR_POSITION                0x0000000C
#define _INTCON1_COVAERR_MASK                    0x00001000
#define _INTCON1_COVAERR_LENGTH                  0x00000001

#define _INTCON1_OVBERR_POSITION                 0x0000000D
#define _INTCON1_OVBERR_MASK                     0x00002000
#define _INTCON1_OVBERR_LENGTH                   0x00000001

#define _INTCON1_OVAERR_POSITION                 0x0000000E
#define _INTCON1_OVAERR_MASK                     0x00004000
#define _INTCON1_OVAERR_LENGTH                   0x00000001

#define _INTCON1_NSTDIS_POSITION                 0x0000000F
#define _INTCON1_NSTDIS_MASK                     0x00008000
#define _INTCON1_NSTDIS_LENGTH                   0x00000001

#define _INTCON2_INT0EP_POSITION                 0x00000000
#define _INTCON2_INT0EP_MASK                     0x00000001
#define _INTCON2_INT0EP_LENGTH                   0x00000001

#define _INTCON2_INT1EP_POSITION                 0x00000001
#define _INTCON2_INT1EP_MASK                     0x00000002
#define _INTCON2_INT1EP_LENGTH                   0x00000001

#define _INTCON2_INT2EP_POSITION                 0x00000002
#define _INTCON2_INT2EP_MASK                     0x00000004
#define _INTCON2_INT2EP_LENGTH                   0x00000001

#define _INTCON2_INT4EP_POSITION                 0x00000004
#define _INTCON2_INT4EP_MASK                     0x00000010
#define _INTCON2_INT4EP_LENGTH                   0x00000001

#define _INTCON2_AIVTEN_POSITION                 0x00000008
#define _INTCON2_AIVTEN_MASK                     0x00000100
#define _INTCON2_AIVTEN_LENGTH                   0x00000001

#define _INTCON2_SWTRAP_POSITION                 0x0000000D
#define _INTCON2_SWTRAP_MASK                     0x00002000
#define _INTCON2_SWTRAP_LENGTH                   0x00000001

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_GIE_POSITION                    0x0000000F
#define _INTCON2_GIE_MASK                        0x00008000
#define _INTCON2_GIE_LENGTH                      0x00000001

#define _INTCON3_APLL_POSITION                   0x00000000
#define _INTCON3_APLL_MASK                       0x00000001
#define _INTCON3_APLL_LENGTH                     0x00000001

#define _INTCON3_DOOVR_POSITION                  0x00000004
#define _INTCON3_DOOVR_MASK                      0x00000010
#define _INTCON3_DOOVR_LENGTH                    0x00000001

#define _INTCON3_NAE_POSITION                    0x00000008
#define _INTCON3_NAE_MASK                        0x00000100
#define _INTCON3_NAE_LENGTH                      0x00000001

#define _INTCON4_SGHT_POSITION                   0x00000000
#define _INTCON4_SGHT_MASK                       0x00000001
#define _INTCON4_SGHT_LENGTH                     0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x000000FF
#define _INTTREG_VECNUM_LENGTH                   0x00000008

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VECNUM0_POSITION                0x00000000
#define _INTTREG_VECNUM0_MASK                    0x00000001
#define _INTTREG_VECNUM0_LENGTH                  0x00000001

#define _INTTREG_VECNUM1_POSITION                0x00000001
#define _INTTREG_VECNUM1_MASK                    0x00000002
#define _INTTREG_VECNUM1_LENGTH                  0x00000001

#define _INTTREG_VECNUM2_POSITION                0x00000002
#define _INTTREG_VECNUM2_MASK                    0x00000004
#define _INTTREG_VECNUM2_LENGTH                  0x00000001

#define _INTTREG_VECNUM3_POSITION                0x00000003
#define _INTTREG_VECNUM3_MASK                    0x00000008
#define _INTTREG_VECNUM3_LENGTH                  0x00000001

#define _INTTREG_VECNUM4_POSITION                0x00000004
#define _INTTREG_VECNUM4_MASK                    0x00000010
#define _INTTREG_VECNUM4_LENGTH                  0x00000001

#define _INTTREG_VECNUM5_POSITION                0x00000005
#define _INTTREG_VECNUM5_MASK                    0x00000020
#define _INTTREG_VECNUM5_LENGTH                  0x00000001

#define _INTTREG_VECNUM6_POSITION                0x00000006
#define _INTTREG_VECNUM6_MASK                    0x00000040
#define _INTTREG_VECNUM6_LENGTH                  0x00000001

#define _INTTREG_VECNUM7_POSITION                0x00000007
#define _INTTREG_VECNUM7_MASK                    0x00000080
#define _INTTREG_VECNUM7_LENGTH                  0x00000001

#define _INTTREG_ILR0_POSITION                   0x00000008
#define _INTTREG_ILR0_MASK                       0x00000100
#define _INTTREG_ILR0_LENGTH                     0x00000001

#define _INTTREG_ILR1_POSITION                   0x00000009
#define _INTTREG_ILR1_MASK                       0x00000200
#define _INTTREG_ILR1_LENGTH                     0x00000001

#define _INTTREG_ILR2_POSITION                   0x0000000A
#define _INTTREG_ILR2_MASK                       0x00000400
#define _INTTREG_ILR2_LENGTH                     0x00000001

#define _INTTREG_ILR3_POSITION                   0x0000000B
#define _INTTREG_ILR3_MASK                       0x00000800
#define _INTTREG_ILR3_LENGTH                     0x00000001

#define _OC1CON1_OCM_POSITION                    0x00000000
#define _OC1CON1_OCM_MASK                        0x00000007
#define _OC1CON1_OCM_LENGTH                      0x00000003

#define _OC1CON1_TRIGMODE_POSITION               0x00000003
#define _OC1CON1_TRIGMODE_MASK                   0x00000008
#define _OC1CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC1CON1_OCFLTA_POSITION                 0x00000004
#define _OC1CON1_OCFLTA_MASK                     0x00000010
#define _OC1CON1_OCFLTA_LENGTH                   0x00000001

#define _OC1CON1_ENFLTA_POSITION                 0x00000007
#define _OC1CON1_ENFLTA_MASK                     0x00000080
#define _OC1CON1_ENFLTA_LENGTH                   0x00000001

#define _OC1CON1_OCTSEL_POSITION                 0x0000000A
#define _OC1CON1_OCTSEL_MASK                     0x00001C00
#define _OC1CON1_OCTSEL_LENGTH                   0x00000003

#define _OC1CON1_OCSIDL_POSITION                 0x0000000D
#define _OC1CON1_OCSIDL_MASK                     0x00002000
#define _OC1CON1_OCSIDL_LENGTH                   0x00000001

#define _OC1CON1_OCM0_POSITION                   0x00000000
#define _OC1CON1_OCM0_MASK                       0x00000001
#define _OC1CON1_OCM0_LENGTH                     0x00000001

#define _OC1CON1_OCM1_POSITION                   0x00000001
#define _OC1CON1_OCM1_MASK                       0x00000002
#define _OC1CON1_OCM1_LENGTH                     0x00000001

#define _OC1CON1_OCM2_POSITION                   0x00000002
#define _OC1CON1_OCM2_MASK                       0x00000004
#define _OC1CON1_OCM2_LENGTH                     0x00000001

#define _OC1CON1_OCFLT_POSITION                  0x00000004
#define _OC1CON1_OCFLT_MASK                      0x00000070
#define _OC1CON1_OCFLT_LENGTH                    0x00000003

#define _OC1CON1_ENFLT_POSITION                  0x00000007
#define _OC1CON1_ENFLT_MASK                      0x00000380
#define _OC1CON1_ENFLT_LENGTH                    0x00000003

#define _OC1CON1_OCTSEL0_POSITION                0x0000000A
#define _OC1CON1_OCTSEL0_MASK                    0x00000400
#define _OC1CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC1CON1_OCTSEL1_POSITION                0x0000000B
#define _OC1CON1_OCTSEL1_MASK                    0x00000800
#define _OC1CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC1CON1_OCTSEL2_POSITION                0x0000000C
#define _OC1CON1_OCTSEL2_MASK                    0x00001000
#define _OC1CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC1CON1_OCFLT0_POSITION                 0x00000004
#define _OC1CON1_OCFLT0_MASK                     0x00000010
#define _OC1CON1_OCFLT0_LENGTH                   0x00000001

#define _OC1CON1_ENFLT0_POSITION                 0x00000007
#define _OC1CON1_ENFLT0_MASK                     0x00000080
#define _OC1CON1_ENFLT0_LENGTH                   0x00000001

#define _OC1CON2_SYNCSEL_POSITION                0x00000000
#define _OC1CON2_SYNCSEL_MASK                    0x0000001F
#define _OC1CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC1CON2_OCTRIS_POSITION                 0x00000005
#define _OC1CON2_OCTRIS_MASK                     0x00000020
#define _OC1CON2_OCTRIS_LENGTH                   0x00000001

#define _OC1CON2_TRIGSTAT_POSITION               0x00000006
#define _OC1CON2_TRIGSTAT_MASK                   0x00000040
#define _OC1CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC1CON2_OCTRIG_POSITION                 0x00000007
#define _OC1CON2_OCTRIG_MASK                     0x00000080
#define _OC1CON2_OCTRIG_LENGTH                   0x00000001

#define _OC1CON2_OC32_POSITION                   0x00000008
#define _OC1CON2_OC32_MASK                       0x00000100
#define _OC1CON2_OC32_LENGTH                     0x00000001

#define _OC1CON2_OCINV_POSITION                  0x0000000C
#define _OC1CON2_OCINV_MASK                      0x00001000
#define _OC1CON2_OCINV_LENGTH                    0x00000001

#define _OC1CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC1CON2_FLTTRIEN_MASK                   0x00002000
#define _OC1CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC1CON2_FLTOUT_POSITION                 0x0000000E
#define _OC1CON2_FLTOUT_MASK                     0x00004000
#define _OC1CON2_FLTOUT_LENGTH                   0x00000001

#define _OC1CON2_FLTMD_POSITION                  0x0000000F
#define _OC1CON2_FLTMD_MASK                      0x00008000
#define _OC1CON2_FLTMD_LENGTH                    0x00000001

#define _OC1CON2_SYNCSEL0_POSITION               0x00000000
#define _OC1CON2_SYNCSEL0_MASK                   0x00000001
#define _OC1CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL1_POSITION               0x00000001
#define _OC1CON2_SYNCSEL1_MASK                   0x00000002
#define _OC1CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL2_POSITION               0x00000002
#define _OC1CON2_SYNCSEL2_MASK                   0x00000004
#define _OC1CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL3_POSITION               0x00000003
#define _OC1CON2_SYNCSEL3_MASK                   0x00000008
#define _OC1CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL4_POSITION               0x00000004
#define _OC1CON2_SYNCSEL4_MASK                   0x00000010
#define _OC1CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC1CON2_FLTMODE_POSITION                0x0000000E
#define _OC1CON2_FLTMODE_MASK                    0x00004000
#define _OC1CON2_FLTMODE_LENGTH                  0x00000001

#define _OC2CON1_OCM_POSITION                    0x00000000
#define _OC2CON1_OCM_MASK                        0x00000007
#define _OC2CON1_OCM_LENGTH                      0x00000003

#define _OC2CON1_TRIGMODE_POSITION               0x00000003
#define _OC2CON1_TRIGMODE_MASK                   0x00000008
#define _OC2CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC2CON1_OCFLTA_POSITION                 0x00000004
#define _OC2CON1_OCFLTA_MASK                     0x00000010
#define _OC2CON1_OCFLTA_LENGTH                   0x00000001

#define _OC2CON1_ENFLTA_POSITION                 0x00000007
#define _OC2CON1_ENFLTA_MASK                     0x00000080
#define _OC2CON1_ENFLTA_LENGTH                   0x00000001

#define _OC2CON1_OCTSEL_POSITION                 0x0000000A
#define _OC2CON1_OCTSEL_MASK                     0x00001C00
#define _OC2CON1_OCTSEL_LENGTH                   0x00000003

#define _OC2CON1_OCSIDL_POSITION                 0x0000000D
#define _OC2CON1_OCSIDL_MASK                     0x00002000
#define _OC2CON1_OCSIDL_LENGTH                   0x00000001

#define _OC2CON1_OCM0_POSITION                   0x00000000
#define _OC2CON1_OCM0_MASK                       0x00000001
#define _OC2CON1_OCM0_LENGTH                     0x00000001

#define _OC2CON1_OCM1_POSITION                   0x00000001
#define _OC2CON1_OCM1_MASK                       0x00000002
#define _OC2CON1_OCM1_LENGTH                     0x00000001

#define _OC2CON1_OCM2_POSITION                   0x00000002
#define _OC2CON1_OCM2_MASK                       0x00000004
#define _OC2CON1_OCM2_LENGTH                     0x00000001

#define _OC2CON1_OCFLT_POSITION                  0x00000004
#define _OC2CON1_OCFLT_MASK                      0x00000070
#define _OC2CON1_OCFLT_LENGTH                    0x00000003

#define _OC2CON1_ENFLT_POSITION                  0x00000007
#define _OC2CON1_ENFLT_MASK                      0x00000380
#define _OC2CON1_ENFLT_LENGTH                    0x00000003

#define _OC2CON1_OCTSEL0_POSITION                0x0000000A
#define _OC2CON1_OCTSEL0_MASK                    0x00000400
#define _OC2CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC2CON1_OCTSEL1_POSITION                0x0000000B
#define _OC2CON1_OCTSEL1_MASK                    0x00000800
#define _OC2CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC2CON1_OCTSEL2_POSITION                0x0000000C
#define _OC2CON1_OCTSEL2_MASK                    0x00001000
#define _OC2CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC2CON1_OCFLT0_POSITION                 0x00000004
#define _OC2CON1_OCFLT0_MASK                     0x00000010
#define _OC2CON1_OCFLT0_LENGTH                   0x00000001

#define _OC2CON1_ENFLT0_POSITION                 0x00000007
#define _OC2CON1_ENFLT0_MASK                     0x00000080
#define _OC2CON1_ENFLT0_LENGTH                   0x00000001

#define _OC2CON2_SYNCSEL_POSITION                0x00000000
#define _OC2CON2_SYNCSEL_MASK                    0x0000001F
#define _OC2CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC2CON2_OCTRIS_POSITION                 0x00000005
#define _OC2CON2_OCTRIS_MASK                     0x00000020
#define _OC2CON2_OCTRIS_LENGTH                   0x00000001

#define _OC2CON2_TRIGSTAT_POSITION               0x00000006
#define _OC2CON2_TRIGSTAT_MASK                   0x00000040
#define _OC2CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC2CON2_OCTRIG_POSITION                 0x00000007
#define _OC2CON2_OCTRIG_MASK                     0x00000080
#define _OC2CON2_OCTRIG_LENGTH                   0x00000001

#define _OC2CON2_OC32_POSITION                   0x00000008
#define _OC2CON2_OC32_MASK                       0x00000100
#define _OC2CON2_OC32_LENGTH                     0x00000001

#define _OC2CON2_OCINV_POSITION                  0x0000000C
#define _OC2CON2_OCINV_MASK                      0x00001000
#define _OC2CON2_OCINV_LENGTH                    0x00000001

#define _OC2CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC2CON2_FLTTRIEN_MASK                   0x00002000
#define _OC2CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC2CON2_FLTOUT_POSITION                 0x0000000E
#define _OC2CON2_FLTOUT_MASK                     0x00004000
#define _OC2CON2_FLTOUT_LENGTH                   0x00000001

#define _OC2CON2_FLTMD_POSITION                  0x0000000F
#define _OC2CON2_FLTMD_MASK                      0x00008000
#define _OC2CON2_FLTMD_LENGTH                    0x00000001

#define _OC2CON2_SYNCSEL0_POSITION               0x00000000
#define _OC2CON2_SYNCSEL0_MASK                   0x00000001
#define _OC2CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL1_POSITION               0x00000001
#define _OC2CON2_SYNCSEL1_MASK                   0x00000002
#define _OC2CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL2_POSITION               0x00000002
#define _OC2CON2_SYNCSEL2_MASK                   0x00000004
#define _OC2CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL3_POSITION               0x00000003
#define _OC2CON2_SYNCSEL3_MASK                   0x00000008
#define _OC2CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL4_POSITION               0x00000004
#define _OC2CON2_SYNCSEL4_MASK                   0x00000010
#define _OC2CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC2CON2_FLTMODE_POSITION                0x0000000E
#define _OC2CON2_FLTMODE_MASK                    0x00004000
#define _OC2CON2_FLTMODE_LENGTH                  0x00000001

#define _OC3CON1_OCM_POSITION                    0x00000000
#define _OC3CON1_OCM_MASK                        0x00000007
#define _OC3CON1_OCM_LENGTH                      0x00000003

#define _OC3CON1_TRIGMODE_POSITION               0x00000003
#define _OC3CON1_TRIGMODE_MASK                   0x00000008
#define _OC3CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC3CON1_OCFLTA_POSITION                 0x00000004
#define _OC3CON1_OCFLTA_MASK                     0x00000010
#define _OC3CON1_OCFLTA_LENGTH                   0x00000001

#define _OC3CON1_ENFLTA_POSITION                 0x00000007
#define _OC3CON1_ENFLTA_MASK                     0x00000080
#define _OC3CON1_ENFLTA_LENGTH                   0x00000001

#define _OC3CON1_OCTSEL_POSITION                 0x0000000A
#define _OC3CON1_OCTSEL_MASK                     0x00001C00
#define _OC3CON1_OCTSEL_LENGTH                   0x00000003

#define _OC3CON1_OCSIDL_POSITION                 0x0000000D
#define _OC3CON1_OCSIDL_MASK                     0x00002000
#define _OC3CON1_OCSIDL_LENGTH                   0x00000001

#define _OC3CON1_OCM0_POSITION                   0x00000000
#define _OC3CON1_OCM0_MASK                       0x00000001
#define _OC3CON1_OCM0_LENGTH                     0x00000001

#define _OC3CON1_OCM1_POSITION                   0x00000001
#define _OC3CON1_OCM1_MASK                       0x00000002
#define _OC3CON1_OCM1_LENGTH                     0x00000001

#define _OC3CON1_OCM2_POSITION                   0x00000002
#define _OC3CON1_OCM2_MASK                       0x00000004
#define _OC3CON1_OCM2_LENGTH                     0x00000001

#define _OC3CON1_OCFLT_POSITION                  0x00000004
#define _OC3CON1_OCFLT_MASK                      0x00000070
#define _OC3CON1_OCFLT_LENGTH                    0x00000003

#define _OC3CON1_ENFLT_POSITION                  0x00000007
#define _OC3CON1_ENFLT_MASK                      0x00000380
#define _OC3CON1_ENFLT_LENGTH                    0x00000003

#define _OC3CON1_OCTSEL0_POSITION                0x0000000A
#define _OC3CON1_OCTSEL0_MASK                    0x00000400
#define _OC3CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC3CON1_OCTSEL1_POSITION                0x0000000B
#define _OC3CON1_OCTSEL1_MASK                    0x00000800
#define _OC3CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC3CON1_OCTSEL2_POSITION                0x0000000C
#define _OC3CON1_OCTSEL2_MASK                    0x00001000
#define _OC3CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC3CON1_OCFLT0_POSITION                 0x00000004
#define _OC3CON1_OCFLT0_MASK                     0x00000010
#define _OC3CON1_OCFLT0_LENGTH                   0x00000001

#define _OC3CON1_ENFLT0_POSITION                 0x00000007
#define _OC3CON1_ENFLT0_MASK                     0x00000080
#define _OC3CON1_ENFLT0_LENGTH                   0x00000001

#define _OC3CON2_SYNCSEL_POSITION                0x00000000
#define _OC3CON2_SYNCSEL_MASK                    0x0000001F
#define _OC3CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC3CON2_OCTRIS_POSITION                 0x00000005
#define _OC3CON2_OCTRIS_MASK                     0x00000020
#define _OC3CON2_OCTRIS_LENGTH                   0x00000001

#define _OC3CON2_TRIGSTAT_POSITION               0x00000006
#define _OC3CON2_TRIGSTAT_MASK                   0x00000040
#define _OC3CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC3CON2_OCTRIG_POSITION                 0x00000007
#define _OC3CON2_OCTRIG_MASK                     0x00000080
#define _OC3CON2_OCTRIG_LENGTH                   0x00000001

#define _OC3CON2_OC32_POSITION                   0x00000008
#define _OC3CON2_OC32_MASK                       0x00000100
#define _OC3CON2_OC32_LENGTH                     0x00000001

#define _OC3CON2_OCINV_POSITION                  0x0000000C
#define _OC3CON2_OCINV_MASK                      0x00001000
#define _OC3CON2_OCINV_LENGTH                    0x00000001

#define _OC3CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC3CON2_FLTTRIEN_MASK                   0x00002000
#define _OC3CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC3CON2_FLTOUT_POSITION                 0x0000000E
#define _OC3CON2_FLTOUT_MASK                     0x00004000
#define _OC3CON2_FLTOUT_LENGTH                   0x00000001

#define _OC3CON2_FLTMD_POSITION                  0x0000000F
#define _OC3CON2_FLTMD_MASK                      0x00008000
#define _OC3CON2_FLTMD_LENGTH                    0x00000001

#define _OC3CON2_SYNCSEL0_POSITION               0x00000000
#define _OC3CON2_SYNCSEL0_MASK                   0x00000001
#define _OC3CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL1_POSITION               0x00000001
#define _OC3CON2_SYNCSEL1_MASK                   0x00000002
#define _OC3CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL2_POSITION               0x00000002
#define _OC3CON2_SYNCSEL2_MASK                   0x00000004
#define _OC3CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL3_POSITION               0x00000003
#define _OC3CON2_SYNCSEL3_MASK                   0x00000008
#define _OC3CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL4_POSITION               0x00000004
#define _OC3CON2_SYNCSEL4_MASK                   0x00000010
#define _OC3CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC3CON2_FLTMODE_POSITION                0x0000000E
#define _OC3CON2_FLTMODE_MASK                    0x00004000
#define _OC3CON2_FLTMODE_LENGTH                  0x00000001

#define _OC4CON1_OCM_POSITION                    0x00000000
#define _OC4CON1_OCM_MASK                        0x00000007
#define _OC4CON1_OCM_LENGTH                      0x00000003

#define _OC4CON1_TRIGMODE_POSITION               0x00000003
#define _OC4CON1_TRIGMODE_MASK                   0x00000008
#define _OC4CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC4CON1_OCFLTA_POSITION                 0x00000004
#define _OC4CON1_OCFLTA_MASK                     0x00000010
#define _OC4CON1_OCFLTA_LENGTH                   0x00000001

#define _OC4CON1_ENFLTA_POSITION                 0x00000007
#define _OC4CON1_ENFLTA_MASK                     0x00000080
#define _OC4CON1_ENFLTA_LENGTH                   0x00000001

#define _OC4CON1_OCTSEL_POSITION                 0x0000000A
#define _OC4CON1_OCTSEL_MASK                     0x00001C00
#define _OC4CON1_OCTSEL_LENGTH                   0x00000003

#define _OC4CON1_OCSIDL_POSITION                 0x0000000D
#define _OC4CON1_OCSIDL_MASK                     0x00002000
#define _OC4CON1_OCSIDL_LENGTH                   0x00000001

#define _OC4CON1_OCM0_POSITION                   0x00000000
#define _OC4CON1_OCM0_MASK                       0x00000001
#define _OC4CON1_OCM0_LENGTH                     0x00000001

#define _OC4CON1_OCM1_POSITION                   0x00000001
#define _OC4CON1_OCM1_MASK                       0x00000002
#define _OC4CON1_OCM1_LENGTH                     0x00000001

#define _OC4CON1_OCM2_POSITION                   0x00000002
#define _OC4CON1_OCM2_MASK                       0x00000004
#define _OC4CON1_OCM2_LENGTH                     0x00000001

#define _OC4CON1_OCFLT_POSITION                  0x00000004
#define _OC4CON1_OCFLT_MASK                      0x00000070
#define _OC4CON1_OCFLT_LENGTH                    0x00000003

#define _OC4CON1_ENFLT_POSITION                  0x00000007
#define _OC4CON1_ENFLT_MASK                      0x00000380
#define _OC4CON1_ENFLT_LENGTH                    0x00000003

#define _OC4CON1_OCTSEL0_POSITION                0x0000000A
#define _OC4CON1_OCTSEL0_MASK                    0x00000400
#define _OC4CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC4CON1_OCTSEL1_POSITION                0x0000000B
#define _OC4CON1_OCTSEL1_MASK                    0x00000800
#define _OC4CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC4CON1_OCTSEL2_POSITION                0x0000000C
#define _OC4CON1_OCTSEL2_MASK                    0x00001000
#define _OC4CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC4CON1_OCFLT0_POSITION                 0x00000004
#define _OC4CON1_OCFLT0_MASK                     0x00000010
#define _OC4CON1_OCFLT0_LENGTH                   0x00000001

#define _OC4CON1_ENFLT0_POSITION                 0x00000007
#define _OC4CON1_ENFLT0_MASK                     0x00000080
#define _OC4CON1_ENFLT0_LENGTH                   0x00000001

#define _OC4CON2_SYNCSEL_POSITION                0x00000000
#define _OC4CON2_SYNCSEL_MASK                    0x0000001F
#define _OC4CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC4CON2_OCTRIS_POSITION                 0x00000005
#define _OC4CON2_OCTRIS_MASK                     0x00000020
#define _OC4CON2_OCTRIS_LENGTH                   0x00000001

#define _OC4CON2_TRIGSTAT_POSITION               0x00000006
#define _OC4CON2_TRIGSTAT_MASK                   0x00000040
#define _OC4CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC4CON2_OCTRIG_POSITION                 0x00000007
#define _OC4CON2_OCTRIG_MASK                     0x00000080
#define _OC4CON2_OCTRIG_LENGTH                   0x00000001

#define _OC4CON2_OC32_POSITION                   0x00000008
#define _OC4CON2_OC32_MASK                       0x00000100
#define _OC4CON2_OC32_LENGTH                     0x00000001

#define _OC4CON2_OCINV_POSITION                  0x0000000C
#define _OC4CON2_OCINV_MASK                      0x00001000
#define _OC4CON2_OCINV_LENGTH                    0x00000001

#define _OC4CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC4CON2_FLTTRIEN_MASK                   0x00002000
#define _OC4CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC4CON2_FLTOUT_POSITION                 0x0000000E
#define _OC4CON2_FLTOUT_MASK                     0x00004000
#define _OC4CON2_FLTOUT_LENGTH                   0x00000001

#define _OC4CON2_FLTMD_POSITION                  0x0000000F
#define _OC4CON2_FLTMD_MASK                      0x00008000
#define _OC4CON2_FLTMD_LENGTH                    0x00000001

#define _OC4CON2_SYNCSEL0_POSITION               0x00000000
#define _OC4CON2_SYNCSEL0_MASK                   0x00000001
#define _OC4CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL1_POSITION               0x00000001
#define _OC4CON2_SYNCSEL1_MASK                   0x00000002
#define _OC4CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL2_POSITION               0x00000002
#define _OC4CON2_SYNCSEL2_MASK                   0x00000004
#define _OC4CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL3_POSITION               0x00000003
#define _OC4CON2_SYNCSEL3_MASK                   0x00000008
#define _OC4CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL4_POSITION               0x00000004
#define _OC4CON2_SYNCSEL4_MASK                   0x00000010
#define _OC4CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC4CON2_FLTMODE_POSITION                0x0000000E
#define _OC4CON2_FLTMODE_MASK                    0x00004000
#define _OC4CON2_FLTMODE_LENGTH                  0x00000001

#define _PTCON_SEVTPS_POSITION                   0x00000000
#define _PTCON_SEVTPS_MASK                       0x0000000F
#define _PTCON_SEVTPS_LENGTH                     0x00000004

#define _PTCON_SYNCSRC_POSITION                  0x00000004
#define _PTCON_SYNCSRC_MASK                      0x00000070
#define _PTCON_SYNCSRC_LENGTH                    0x00000003

#define _PTCON_SYNCEN_POSITION                   0x00000007
#define _PTCON_SYNCEN_MASK                       0x00000080
#define _PTCON_SYNCEN_LENGTH                     0x00000001

#define _PTCON_SYNCOEN_POSITION                  0x00000008
#define _PTCON_SYNCOEN_MASK                      0x00000100
#define _PTCON_SYNCOEN_LENGTH                    0x00000001

#define _PTCON_SYNCPOL_POSITION                  0x00000009
#define _PTCON_SYNCPOL_MASK                      0x00000200
#define _PTCON_SYNCPOL_LENGTH                    0x00000001

#define _PTCON_EIPU_POSITION                     0x0000000A
#define _PTCON_EIPU_MASK                         0x00000400
#define _PTCON_EIPU_LENGTH                       0x00000001

#define _PTCON_SEIEN_POSITION                    0x0000000B
#define _PTCON_SEIEN_MASK                        0x00000800
#define _PTCON_SEIEN_LENGTH                      0x00000001

#define _PTCON_SESTAT_POSITION                   0x0000000C
#define _PTCON_SESTAT_MASK                       0x00001000
#define _PTCON_SESTAT_LENGTH                     0x00000001

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_SEVTPS0_POSITION                  0x00000000
#define _PTCON_SEVTPS0_MASK                      0x00000001
#define _PTCON_SEVTPS0_LENGTH                    0x00000001

#define _PTCON_SEVTPS1_POSITION                  0x00000001
#define _PTCON_SEVTPS1_MASK                      0x00000002
#define _PTCON_SEVTPS1_LENGTH                    0x00000001

#define _PTCON_SEVTPS2_POSITION                  0x00000002
#define _PTCON_SEVTPS2_MASK                      0x00000004
#define _PTCON_SEVTPS2_LENGTH                    0x00000001

#define _PTCON_SEVTPS3_POSITION                  0x00000003
#define _PTCON_SEVTPS3_MASK                      0x00000008
#define _PTCON_SEVTPS3_LENGTH                    0x00000001

#define _PTCON_SYNCSRC0_POSITION                 0x00000004
#define _PTCON_SYNCSRC0_MASK                     0x00000010
#define _PTCON_SYNCSRC0_LENGTH                   0x00000001

#define _PTCON_SYNCSRC1_POSITION                 0x00000005
#define _PTCON_SYNCSRC1_MASK                     0x00000020
#define _PTCON_SYNCSRC1_LENGTH                   0x00000001

#define _PTCON_SYNCSRC2_POSITION                 0x00000006
#define _PTCON_SYNCSRC2_MASK                     0x00000040
#define _PTCON_SYNCSRC2_LENGTH                   0x00000001

#define _PTCON2_PCLKDIV_POSITION                 0x00000000
#define _PTCON2_PCLKDIV_MASK                     0x00000007
#define _PTCON2_PCLKDIV_LENGTH                   0x00000003

#define _PTCON2_PCLKDIV0_POSITION                0x00000000
#define _PTCON2_PCLKDIV0_MASK                    0x00000001
#define _PTCON2_PCLKDIV0_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV1_POSITION                0x00000001
#define _PTCON2_PCLKDIV1_MASK                    0x00000002
#define _PTCON2_PCLKDIV1_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV2_POSITION                0x00000002
#define _PTCON2_PCLKDIV2_MASK                    0x00000004
#define _PTCON2_PCLKDIV2_LENGTH                  0x00000001

#define _SEVTCMP_SEVTCMP_POSITION                0x00000003
#define _SEVTCMP_SEVTCMP_MASK                    0x0000FFF8
#define _SEVTCMP_SEVTCMP_LENGTH                  0x0000000D

#define _STCON_SEVTPS_POSITION                   0x00000000
#define _STCON_SEVTPS_MASK                       0x0000000F
#define _STCON_SEVTPS_LENGTH                     0x00000004

#define _STCON_SYNCSRC_POSITION                  0x00000004
#define _STCON_SYNCSRC_MASK                      0x00000070
#define _STCON_SYNCSRC_LENGTH                    0x00000003

#define _STCON_SYNCEN_POSITION                   0x00000007
#define _STCON_SYNCEN_MASK                       0x00000080
#define _STCON_SYNCEN_LENGTH                     0x00000001

#define _STCON_SYNCOEN_POSITION                  0x00000008
#define _STCON_SYNCOEN_MASK                      0x00000100
#define _STCON_SYNCOEN_LENGTH                    0x00000001

#define _STCON_SYNCPOL_POSITION                  0x00000009
#define _STCON_SYNCPOL_MASK                      0x00000200
#define _STCON_SYNCPOL_LENGTH                    0x00000001

#define _STCON_EIPU_POSITION                     0x0000000A
#define _STCON_EIPU_MASK                         0x00000400
#define _STCON_EIPU_LENGTH                       0x00000001

#define _STCON_SEIEN_POSITION                    0x0000000B
#define _STCON_SEIEN_MASK                        0x00000800
#define _STCON_SEIEN_LENGTH                      0x00000001

#define _STCON_SESTAT_POSITION                   0x0000000C
#define _STCON_SESTAT_MASK                       0x00001000
#define _STCON_SESTAT_LENGTH                     0x00000001

#define _STCON_SEVTPS0_POSITION                  0x00000000
#define _STCON_SEVTPS0_MASK                      0x00000001
#define _STCON_SEVTPS0_LENGTH                    0x00000001

#define _STCON_SEVTPS1_POSITION                  0x00000001
#define _STCON_SEVTPS1_MASK                      0x00000002
#define _STCON_SEVTPS1_LENGTH                    0x00000001

#define _STCON_SEVTPS2_POSITION                  0x00000002
#define _STCON_SEVTPS2_MASK                      0x00000004
#define _STCON_SEVTPS2_LENGTH                    0x00000001

#define _STCON_SEVTPS3_POSITION                  0x00000003
#define _STCON_SEVTPS3_MASK                      0x00000008
#define _STCON_SEVTPS3_LENGTH                    0x00000001

#define _STCON_SYNCSRC0_POSITION                 0x00000004
#define _STCON_SYNCSRC0_MASK                     0x00000010
#define _STCON_SYNCSRC0_LENGTH                   0x00000001

#define _STCON_SYNCSRC1_POSITION                 0x00000005
#define _STCON_SYNCSRC1_MASK                     0x00000020
#define _STCON_SYNCSRC1_LENGTH                   0x00000001

#define _STCON_SYNCSRC2_POSITION                 0x00000006
#define _STCON_SYNCSRC2_MASK                     0x00000040
#define _STCON_SYNCSRC2_LENGTH                   0x00000001

#define _STCON2_PCLKDIV_POSITION                 0x00000000
#define _STCON2_PCLKDIV_MASK                     0x00000007
#define _STCON2_PCLKDIV_LENGTH                   0x00000003

#define _STCON2_PCLKDIV0_POSITION                0x00000000
#define _STCON2_PCLKDIV0_MASK                    0x00000001
#define _STCON2_PCLKDIV0_LENGTH                  0x00000001

#define _STCON2_PCLKDIV1_POSITION                0x00000001
#define _STCON2_PCLKDIV1_MASK                    0x00000002
#define _STCON2_PCLKDIV1_LENGTH                  0x00000001

#define _STCON2_PCLKDIV2_POSITION                0x00000002
#define _STCON2_PCLKDIV2_MASK                    0x00000004
#define _STCON2_PCLKDIV2_LENGTH                  0x00000001

#define _SSEVTCMP_SSEVTCMP_POSITION              0x00000003
#define _SSEVTCMP_SSEVTCMP_MASK                  0x0000FFF8
#define _SSEVTCMP_SSEVTCMP_LENGTH                0x0000000D

#define _SSEVTCMP_SSEVTCMP0_POSITION             0x00000003
#define _SSEVTCMP_SSEVTCMP0_MASK                 0x00000008
#define _SSEVTCMP_SSEVTCMP0_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP1_POSITION             0x00000004
#define _SSEVTCMP_SSEVTCMP1_MASK                 0x00000010
#define _SSEVTCMP_SSEVTCMP1_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP2_POSITION             0x00000005
#define _SSEVTCMP_SSEVTCMP2_MASK                 0x00000020
#define _SSEVTCMP_SSEVTCMP2_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP3_POSITION             0x00000006
#define _SSEVTCMP_SSEVTCMP3_MASK                 0x00000040
#define _SSEVTCMP_SSEVTCMP3_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP4_POSITION             0x00000007
#define _SSEVTCMP_SSEVTCMP4_MASK                 0x00000080
#define _SSEVTCMP_SSEVTCMP4_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP5_POSITION             0x00000008
#define _SSEVTCMP_SSEVTCMP5_MASK                 0x00000100
#define _SSEVTCMP_SSEVTCMP5_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP6_POSITION             0x00000009
#define _SSEVTCMP_SSEVTCMP6_MASK                 0x00000200
#define _SSEVTCMP_SSEVTCMP6_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP7_POSITION             0x0000000A
#define _SSEVTCMP_SSEVTCMP7_MASK                 0x00000400
#define _SSEVTCMP_SSEVTCMP7_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP8_POSITION             0x0000000B
#define _SSEVTCMP_SSEVTCMP8_MASK                 0x00000800
#define _SSEVTCMP_SSEVTCMP8_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP9_POSITION             0x0000000C
#define _SSEVTCMP_SSEVTCMP9_MASK                 0x00001000
#define _SSEVTCMP_SSEVTCMP9_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP10_POSITION            0x0000000D
#define _SSEVTCMP_SSEVTCMP10_MASK                0x00002000
#define _SSEVTCMP_SSEVTCMP10_LENGTH              0x00000001

#define _SSEVTCMP_SSEVTCMP11_POSITION            0x0000000E
#define _SSEVTCMP_SSEVTCMP11_MASK                0x00004000
#define _SSEVTCMP_SSEVTCMP11_LENGTH              0x00000001

#define _SSEVTCMP_SSEVTCMP12_POSITION            0x0000000F
#define _SSEVTCMP_SSEVTCMP12_MASK                0x00008000
#define _SSEVTCMP_SSEVTCMP12_LENGTH              0x00000001

#define _CHOP_CHOPCLK_POSITION                   0x00000003
#define _CHOP_CHOPCLK_MASK                       0x000003F8
#define _CHOP_CHOPCLK_LENGTH                     0x00000007

#define _CHOP_CHPCLKEN_POSITION                  0x0000000F
#define _CHOP_CHPCLKEN_MASK                      0x00008000
#define _CHOP_CHPCLKEN_LENGTH                    0x00000001

#define _CHOP_CHOPCLK0_POSITION                  0x00000003
#define _CHOP_CHOPCLK0_MASK                      0x00000008
#define _CHOP_CHOPCLK0_LENGTH                    0x00000001

#define _CHOP_CHOPCLK1_POSITION                  0x00000004
#define _CHOP_CHOPCLK1_MASK                      0x00000010
#define _CHOP_CHOPCLK1_LENGTH                    0x00000001

#define _CHOP_CHOPCLK2_POSITION                  0x00000005
#define _CHOP_CHOPCLK2_MASK                      0x00000020
#define _CHOP_CHOPCLK2_LENGTH                    0x00000001

#define _CHOP_CHOPCLK3_POSITION                  0x00000006
#define _CHOP_CHOPCLK3_MASK                      0x00000040
#define _CHOP_CHOPCLK3_LENGTH                    0x00000001

#define _CHOP_CHOPCLK4_POSITION                  0x00000007
#define _CHOP_CHOPCLK4_MASK                      0x00000080
#define _CHOP_CHOPCLK4_LENGTH                    0x00000001

#define _CHOP_CHOPCLK5_POSITION                  0x00000008
#define _CHOP_CHOPCLK5_MASK                      0x00000100
#define _CHOP_CHOPCLK5_LENGTH                    0x00000001

#define _CHOP_CHOPCLK6_POSITION                  0x00000009
#define _CHOP_CHOPCLK6_MASK                      0x00000200
#define _CHOP_CHOPCLK6_LENGTH                    0x00000001

#define _PWMCON1_IUE_POSITION                    0x00000000
#define _PWMCON1_IUE_MASK                        0x00000001
#define _PWMCON1_IUE_LENGTH                      0x00000001

#define _PWMCON1_XPRES_POSITION                  0x00000001
#define _PWMCON1_XPRES_MASK                      0x00000002
#define _PWMCON1_XPRES_LENGTH                    0x00000001

#define _PWMCON1_CAM_POSITION                    0x00000002
#define _PWMCON1_CAM_MASK                        0x00000004
#define _PWMCON1_CAM_LENGTH                      0x00000001

#define _PWMCON1_MTBS_POSITION                   0x00000003
#define _PWMCON1_MTBS_MASK                       0x00000008
#define _PWMCON1_MTBS_LENGTH                     0x00000001

#define _PWMCON1_DTC_POSITION                    0x00000006
#define _PWMCON1_DTC_MASK                        0x000000C0
#define _PWMCON1_DTC_LENGTH                      0x00000002

#define _PWMCON1_MDCS_POSITION                   0x00000008
#define _PWMCON1_MDCS_MASK                       0x00000100
#define _PWMCON1_MDCS_LENGTH                     0x00000001

#define _PWMCON1_ITB_POSITION                    0x00000009
#define _PWMCON1_ITB_MASK                        0x00000200
#define _PWMCON1_ITB_LENGTH                      0x00000001

#define _PWMCON1_TRGIEN_POSITION                 0x0000000A
#define _PWMCON1_TRGIEN_MASK                     0x00000400
#define _PWMCON1_TRGIEN_LENGTH                   0x00000001

#define _PWMCON1_CLIEN_POSITION                  0x0000000B
#define _PWMCON1_CLIEN_MASK                      0x00000800
#define _PWMCON1_CLIEN_LENGTH                    0x00000001

#define _PWMCON1_FLTIEN_POSITION                 0x0000000C
#define _PWMCON1_FLTIEN_MASK                     0x00001000
#define _PWMCON1_FLTIEN_LENGTH                   0x00000001

#define _PWMCON1_TRGSTAT_POSITION                0x0000000D
#define _PWMCON1_TRGSTAT_MASK                    0x00002000
#define _PWMCON1_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON1_CLSTAT_POSITION                 0x0000000E
#define _PWMCON1_CLSTAT_MASK                     0x00004000
#define _PWMCON1_CLSTAT_LENGTH                   0x00000001

#define _PWMCON1_FLTSTAT_POSITION                0x0000000F
#define _PWMCON1_FLTSTAT_MASK                    0x00008000
#define _PWMCON1_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON1_DTC0_POSITION                   0x00000006
#define _PWMCON1_DTC0_MASK                       0x00000040
#define _PWMCON1_DTC0_LENGTH                     0x00000001

#define _PWMCON1_DTC1_POSITION                   0x00000007
#define _PWMCON1_DTC1_MASK                       0x00000080
#define _PWMCON1_DTC1_LENGTH                     0x00000001

#define _IOCON1_OSYNC_POSITION                   0x00000000
#define _IOCON1_OSYNC_MASK                       0x00000001
#define _IOCON1_OSYNC_LENGTH                     0x00000001

#define _IOCON1_SWAP_POSITION                    0x00000001
#define _IOCON1_SWAP_MASK                        0x00000002
#define _IOCON1_SWAP_LENGTH                      0x00000001

#define _IOCON1_CLDAT_POSITION                   0x00000002
#define _IOCON1_CLDAT_MASK                       0x0000000C
#define _IOCON1_CLDAT_LENGTH                     0x00000002

#define _IOCON1_FLTDAT_POSITION                  0x00000004
#define _IOCON1_FLTDAT_MASK                      0x00000030
#define _IOCON1_FLTDAT_LENGTH                    0x00000002

#define _IOCON1_OVRDAT_POSITION                  0x00000006
#define _IOCON1_OVRDAT_MASK                      0x000000C0
#define _IOCON1_OVRDAT_LENGTH                    0x00000002

#define _IOCON1_OVRENL_POSITION                  0x00000008
#define _IOCON1_OVRENL_MASK                      0x00000100
#define _IOCON1_OVRENL_LENGTH                    0x00000001

#define _IOCON1_OVRENH_POSITION                  0x00000009
#define _IOCON1_OVRENH_MASK                      0x00000200
#define _IOCON1_OVRENH_LENGTH                    0x00000001

#define _IOCON1_PMOD_POSITION                    0x0000000A
#define _IOCON1_PMOD_MASK                        0x00000C00
#define _IOCON1_PMOD_LENGTH                      0x00000002

#define _IOCON1_POLL_POSITION                    0x0000000C
#define _IOCON1_POLL_MASK                        0x00001000
#define _IOCON1_POLL_LENGTH                      0x00000001

#define _IOCON1_POLH_POSITION                    0x0000000D
#define _IOCON1_POLH_MASK                        0x00002000
#define _IOCON1_POLH_LENGTH                      0x00000001

#define _IOCON1_PENL_POSITION                    0x0000000E
#define _IOCON1_PENL_MASK                        0x00004000
#define _IOCON1_PENL_LENGTH                      0x00000001

#define _IOCON1_PENH_POSITION                    0x0000000F
#define _IOCON1_PENH_MASK                        0x00008000
#define _IOCON1_PENH_LENGTH                      0x00000001

#define _IOCON1_CLDAT0_POSITION                  0x00000002
#define _IOCON1_CLDAT0_MASK                      0x00000004
#define _IOCON1_CLDAT0_LENGTH                    0x00000001

#define _IOCON1_CLDAT1_POSITION                  0x00000003
#define _IOCON1_CLDAT1_MASK                      0x00000008
#define _IOCON1_CLDAT1_LENGTH                    0x00000001

#define _IOCON1_FLTDAT0_POSITION                 0x00000004
#define _IOCON1_FLTDAT0_MASK                     0x00000010
#define _IOCON1_FLTDAT0_LENGTH                   0x00000001

#define _IOCON1_FLTDAT1_POSITION                 0x00000005
#define _IOCON1_FLTDAT1_MASK                     0x00000020
#define _IOCON1_FLTDAT1_LENGTH                   0x00000001

#define _IOCON1_OVRDAT0_POSITION                 0x00000006
#define _IOCON1_OVRDAT0_MASK                     0x00000040
#define _IOCON1_OVRDAT0_LENGTH                   0x00000001

#define _IOCON1_OVRDAT1_POSITION                 0x00000007
#define _IOCON1_OVRDAT1_MASK                     0x00000080
#define _IOCON1_OVRDAT1_LENGTH                   0x00000001

#define _IOCON1_PMOD0_POSITION                   0x0000000A
#define _IOCON1_PMOD0_MASK                       0x00000400
#define _IOCON1_PMOD0_LENGTH                     0x00000001

#define _IOCON1_PMOD1_POSITION                   0x0000000B
#define _IOCON1_PMOD1_MASK                       0x00000800
#define _IOCON1_PMOD1_LENGTH                     0x00000001

#define _FCLCON1_FLTMOD_POSITION                 0x00000000
#define _FCLCON1_FLTMOD_MASK                     0x00000003
#define _FCLCON1_FLTMOD_LENGTH                   0x00000002

#define _FCLCON1_FLTPOL_POSITION                 0x00000002
#define _FCLCON1_FLTPOL_MASK                     0x00000004
#define _FCLCON1_FLTPOL_LENGTH                   0x00000001

#define _FCLCON1_FLTSRC_POSITION                 0x00000003
#define _FCLCON1_FLTSRC_MASK                     0x000000F8
#define _FCLCON1_FLTSRC_LENGTH                   0x00000005

#define _FCLCON1_CLMOD_POSITION                  0x00000008
#define _FCLCON1_CLMOD_MASK                      0x00000100
#define _FCLCON1_CLMOD_LENGTH                    0x00000001

#define _FCLCON1_CLPOL_POSITION                  0x00000009
#define _FCLCON1_CLPOL_MASK                      0x00000200
#define _FCLCON1_CLPOL_LENGTH                    0x00000001

#define _FCLCON1_CLSRC_POSITION                  0x0000000A
#define _FCLCON1_CLSRC_MASK                      0x00007C00
#define _FCLCON1_CLSRC_LENGTH                    0x00000005

#define _FCLCON1_IFLTMOD_POSITION                0x0000000F
#define _FCLCON1_IFLTMOD_MASK                    0x00008000
#define _FCLCON1_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD0_POSITION                0x00000000
#define _FCLCON1_FLTMOD0_MASK                    0x00000001
#define _FCLCON1_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD1_POSITION                0x00000001
#define _FCLCON1_FLTMOD1_MASK                    0x00000002
#define _FCLCON1_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC0_POSITION                0x00000003
#define _FCLCON1_FLTSRC0_MASK                    0x00000008
#define _FCLCON1_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC1_POSITION                0x00000004
#define _FCLCON1_FLTSRC1_MASK                    0x00000010
#define _FCLCON1_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC2_POSITION                0x00000005
#define _FCLCON1_FLTSRC2_MASK                    0x00000020
#define _FCLCON1_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC3_POSITION                0x00000006
#define _FCLCON1_FLTSRC3_MASK                    0x00000040
#define _FCLCON1_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC4_POSITION                0x00000007
#define _FCLCON1_FLTSRC4_MASK                    0x00000080
#define _FCLCON1_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON1_CLSRC0_POSITION                 0x0000000A
#define _FCLCON1_CLSRC0_MASK                     0x00000400
#define _FCLCON1_CLSRC0_LENGTH                   0x00000001

#define _FCLCON1_CLSRC1_POSITION                 0x0000000B
#define _FCLCON1_CLSRC1_MASK                     0x00000800
#define _FCLCON1_CLSRC1_LENGTH                   0x00000001

#define _FCLCON1_CLSRC2_POSITION                 0x0000000C
#define _FCLCON1_CLSRC2_MASK                     0x00001000
#define _FCLCON1_CLSRC2_LENGTH                   0x00000001

#define _FCLCON1_CLSRC3_POSITION                 0x0000000D
#define _FCLCON1_CLSRC3_MASK                     0x00002000
#define _FCLCON1_CLSRC3_LENGTH                   0x00000001

#define _FCLCON1_CLSRC4_POSITION                 0x0000000E
#define _FCLCON1_CLSRC4_MASK                     0x00004000
#define _FCLCON1_CLSRC4_LENGTH                   0x00000001

#define _TRIG1_TRGCMP_POSITION                   0x00000003
#define _TRIG1_TRGCMP_MASK                       0x0000FFF8
#define _TRIG1_TRGCMP_LENGTH                     0x0000000D

#define _TRIG1_TRGCMP0_POSITION                  0x00000003
#define _TRIG1_TRGCMP0_MASK                      0x00000008
#define _TRIG1_TRGCMP0_LENGTH                    0x00000001

#define _TRIG1_TRGCMP1_POSITION                  0x00000004
#define _TRIG1_TRGCMP1_MASK                      0x00000010
#define _TRIG1_TRGCMP1_LENGTH                    0x00000001

#define _TRIG1_TRGCMP2_POSITION                  0x00000005
#define _TRIG1_TRGCMP2_MASK                      0x00000020
#define _TRIG1_TRGCMP2_LENGTH                    0x00000001

#define _TRIG1_TRGCMP3_POSITION                  0x00000006
#define _TRIG1_TRGCMP3_MASK                      0x00000040
#define _TRIG1_TRGCMP3_LENGTH                    0x00000001

#define _TRIG1_TRGCMP4_POSITION                  0x00000007
#define _TRIG1_TRGCMP4_MASK                      0x00000080
#define _TRIG1_TRGCMP4_LENGTH                    0x00000001

#define _TRIG1_TRGCMP5_POSITION                  0x00000008
#define _TRIG1_TRGCMP5_MASK                      0x00000100
#define _TRIG1_TRGCMP5_LENGTH                    0x00000001

#define _TRIG1_TRGCMP6_POSITION                  0x00000009
#define _TRIG1_TRGCMP6_MASK                      0x00000200
#define _TRIG1_TRGCMP6_LENGTH                    0x00000001

#define _TRIG1_TRGCMP7_POSITION                  0x0000000A
#define _TRIG1_TRGCMP7_MASK                      0x00000400
#define _TRIG1_TRGCMP7_LENGTH                    0x00000001

#define _TRIG1_TRGCMP8_POSITION                  0x0000000B
#define _TRIG1_TRGCMP8_MASK                      0x00000800
#define _TRIG1_TRGCMP8_LENGTH                    0x00000001

#define _TRIG1_TRGCMP9_POSITION                  0x0000000C
#define _TRIG1_TRGCMP9_MASK                      0x00001000
#define _TRIG1_TRGCMP9_LENGTH                    0x00000001

#define _TRIG1_TRGCMP10_POSITION                 0x0000000D
#define _TRIG1_TRGCMP10_MASK                     0x00002000
#define _TRIG1_TRGCMP10_LENGTH                   0x00000001

#define _TRIG1_TRGCMP11_POSITION                 0x0000000E
#define _TRIG1_TRGCMP11_MASK                     0x00004000
#define _TRIG1_TRGCMP11_LENGTH                   0x00000001

#define _TRIG1_TRGCMP12_POSITION                 0x0000000F
#define _TRIG1_TRGCMP12_MASK                     0x00008000
#define _TRIG1_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON1_TRGSTRT_POSITION                0x00000000
#define _TRGCON1_TRGSTRT_MASK                    0x0000003F
#define _TRGCON1_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON1_DTM_POSITION                    0x00000007
#define _TRGCON1_DTM_MASK                        0x00000080
#define _TRGCON1_DTM_LENGTH                      0x00000001

#define _TRGCON1_TRGDIV_POSITION                 0x0000000C
#define _TRGCON1_TRGDIV_MASK                     0x0000F000
#define _TRGCON1_TRGDIV_LENGTH                   0x00000004

#define _TRGCON1_TRGSTRT0_POSITION               0x00000000
#define _TRGCON1_TRGSTRT0_MASK                   0x00000001
#define _TRGCON1_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT1_POSITION               0x00000001
#define _TRGCON1_TRGSTRT1_MASK                   0x00000002
#define _TRGCON1_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT2_POSITION               0x00000002
#define _TRGCON1_TRGSTRT2_MASK                   0x00000004
#define _TRGCON1_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT3_POSITION               0x00000003
#define _TRGCON1_TRGSTRT3_MASK                   0x00000008
#define _TRGCON1_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT4_POSITION               0x00000004
#define _TRGCON1_TRGSTRT4_MASK                   0x00000010
#define _TRGCON1_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT5_POSITION               0x00000005
#define _TRGCON1_TRGSTRT5_MASK                   0x00000020
#define _TRGCON1_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON1_TRGDIV0_POSITION                0x0000000C
#define _TRGCON1_TRGDIV0_MASK                    0x00001000
#define _TRGCON1_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV1_POSITION                0x0000000D
#define _TRGCON1_TRGDIV1_MASK                    0x00002000
#define _TRGCON1_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV2_POSITION                0x0000000E
#define _TRGCON1_TRGDIV2_MASK                    0x00004000
#define _TRGCON1_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV3_POSITION                0x0000000F
#define _TRGCON1_TRGDIV3_MASK                    0x00008000
#define _TRGCON1_TRGDIV3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP_POSITION                 0x00000003
#define _STRIG1_STRGCMP_MASK                     0x0000FFF8
#define _STRIG1_STRGCMP_LENGTH                   0x0000000D

#define _STRIG1_STRGCMP0_POSITION                0x00000003
#define _STRIG1_STRGCMP0_MASK                    0x00000008
#define _STRIG1_STRGCMP0_LENGTH                  0x00000001

#define _STRIG1_STRGCMP1_POSITION                0x00000004
#define _STRIG1_STRGCMP1_MASK                    0x00000010
#define _STRIG1_STRGCMP1_LENGTH                  0x00000001

#define _STRIG1_STRGCMP2_POSITION                0x00000005
#define _STRIG1_STRGCMP2_MASK                    0x00000020
#define _STRIG1_STRGCMP2_LENGTH                  0x00000001

#define _STRIG1_STRGCMP3_POSITION                0x00000006
#define _STRIG1_STRGCMP3_MASK                    0x00000040
#define _STRIG1_STRGCMP3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP4_POSITION                0x00000007
#define _STRIG1_STRGCMP4_MASK                    0x00000080
#define _STRIG1_STRGCMP4_LENGTH                  0x00000001

#define _STRIG1_STRGCMP5_POSITION                0x00000008
#define _STRIG1_STRGCMP5_MASK                    0x00000100
#define _STRIG1_STRGCMP5_LENGTH                  0x00000001

#define _STRIG1_STRGCMP6_POSITION                0x00000009
#define _STRIG1_STRGCMP6_MASK                    0x00000200
#define _STRIG1_STRGCMP6_LENGTH                  0x00000001

#define _STRIG1_STRGCMP7_POSITION                0x0000000A
#define _STRIG1_STRGCMP7_MASK                    0x00000400
#define _STRIG1_STRGCMP7_LENGTH                  0x00000001

#define _STRIG1_STRGCMP8_POSITION                0x0000000B
#define _STRIG1_STRGCMP8_MASK                    0x00000800
#define _STRIG1_STRGCMP8_LENGTH                  0x00000001

#define _STRIG1_STRGCMP9_POSITION                0x0000000C
#define _STRIG1_STRGCMP9_MASK                    0x00001000
#define _STRIG1_STRGCMP9_LENGTH                  0x00000001

#define _STRIG1_STRGCMP10_POSITION               0x0000000D
#define _STRIG1_STRGCMP10_MASK                   0x00002000
#define _STRIG1_STRGCMP10_LENGTH                 0x00000001

#define _STRIG1_STRGCMP11_POSITION               0x0000000E
#define _STRIG1_STRGCMP11_MASK                   0x00004000
#define _STRIG1_STRGCMP11_LENGTH                 0x00000001

#define _STRIG1_STRGCMP12_POSITION               0x0000000F
#define _STRIG1_STRGCMP12_MASK                   0x00008000
#define _STRIG1_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP_POSITION                 0x00000003
#define _PWMCAP1_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP1_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP1_PWMCAP0_POSITION                0x00000003
#define _PWMCAP1_PWMCAP0_MASK                    0x00000008
#define _PWMCAP1_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP1_POSITION                0x00000004
#define _PWMCAP1_PWMCAP1_MASK                    0x00000010
#define _PWMCAP1_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP2_POSITION                0x00000005
#define _PWMCAP1_PWMCAP2_MASK                    0x00000020
#define _PWMCAP1_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP3_POSITION                0x00000006
#define _PWMCAP1_PWMCAP3_MASK                    0x00000040
#define _PWMCAP1_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP4_POSITION                0x00000007
#define _PWMCAP1_PWMCAP4_MASK                    0x00000080
#define _PWMCAP1_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP5_POSITION                0x00000008
#define _PWMCAP1_PWMCAP5_MASK                    0x00000100
#define _PWMCAP1_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP6_POSITION                0x00000009
#define _PWMCAP1_PWMCAP6_MASK                    0x00000200
#define _PWMCAP1_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP1_PWMCAP7_MASK                    0x00000400
#define _PWMCAP1_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP1_PWMCAP8_MASK                    0x00000800
#define _PWMCAP1_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP1_PWMCAP9_MASK                    0x00001000
#define _PWMCAP1_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP1_PWMCAP10_MASK                   0x00002000
#define _PWMCAP1_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP1_PWMCAP11_MASK                   0x00004000
#define _PWMCAP1_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP1_PWMCAP12_MASK                   0x00008000
#define _PWMCAP1_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON1_BPLL_POSITION                   0x00000000
#define _LEBCON1_BPLL_MASK                       0x00000001
#define _LEBCON1_BPLL_LENGTH                     0x00000001

#define _LEBCON1_BPLH_POSITION                   0x00000001
#define _LEBCON1_BPLH_MASK                       0x00000002
#define _LEBCON1_BPLH_LENGTH                     0x00000001

#define _LEBCON1_BPHL_POSITION                   0x00000002
#define _LEBCON1_BPHL_MASK                       0x00000004
#define _LEBCON1_BPHL_LENGTH                     0x00000001

#define _LEBCON1_BPHH_POSITION                   0x00000003
#define _LEBCON1_BPHH_MASK                       0x00000008
#define _LEBCON1_BPHH_LENGTH                     0x00000001

#define _LEBCON1_BCL_POSITION                    0x00000004
#define _LEBCON1_BCL_MASK                        0x00000010
#define _LEBCON1_BCL_LENGTH                      0x00000001

#define _LEBCON1_BCH_POSITION                    0x00000005
#define _LEBCON1_BCH_MASK                        0x00000020
#define _LEBCON1_BCH_LENGTH                      0x00000001

#define _LEBCON1_CLLEBEN_POSITION                0x0000000A
#define _LEBCON1_CLLEBEN_MASK                    0x00000400
#define _LEBCON1_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON1_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON1_FLTLEBEN_MASK                   0x00000800
#define _LEBCON1_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON1_PLF_POSITION                    0x0000000C
#define _LEBCON1_PLF_MASK                        0x00001000
#define _LEBCON1_PLF_LENGTH                      0x00000001

#define _LEBCON1_PLR_POSITION                    0x0000000D
#define _LEBCON1_PLR_MASK                        0x00002000
#define _LEBCON1_PLR_LENGTH                      0x00000001

#define _LEBCON1_PHF_POSITION                    0x0000000E
#define _LEBCON1_PHF_MASK                        0x00004000
#define _LEBCON1_PHF_LENGTH                      0x00000001

#define _LEBCON1_PHR_POSITION                    0x0000000F
#define _LEBCON1_PHR_MASK                        0x00008000
#define _LEBCON1_PHR_LENGTH                      0x00000001

#define _LEBDLY1_LEB_POSITION                    0x00000003
#define _LEBDLY1_LEB_MASK                        0x00000FF8
#define _LEBDLY1_LEB_LENGTH                      0x00000009

#define _LEBDLY1_LEB0_POSITION                   0x00000003
#define _LEBDLY1_LEB0_MASK                       0x00000008
#define _LEBDLY1_LEB0_LENGTH                     0x00000001

#define _LEBDLY1_LEB1_POSITION                   0x00000004
#define _LEBDLY1_LEB1_MASK                       0x00000010
#define _LEBDLY1_LEB1_LENGTH                     0x00000001

#define _LEBDLY1_LEB2_POSITION                   0x00000005
#define _LEBDLY1_LEB2_MASK                       0x00000020
#define _LEBDLY1_LEB2_LENGTH                     0x00000001

#define _LEBDLY1_LEB3_POSITION                   0x00000006
#define _LEBDLY1_LEB3_MASK                       0x00000040
#define _LEBDLY1_LEB3_LENGTH                     0x00000001

#define _LEBDLY1_LEB4_POSITION                   0x00000007
#define _LEBDLY1_LEB4_MASK                       0x00000080
#define _LEBDLY1_LEB4_LENGTH                     0x00000001

#define _LEBDLY1_LEB5_POSITION                   0x00000008
#define _LEBDLY1_LEB5_MASK                       0x00000100
#define _LEBDLY1_LEB5_LENGTH                     0x00000001

#define _LEBDLY1_LEB6_POSITION                   0x00000009
#define _LEBDLY1_LEB6_MASK                       0x00000200
#define _LEBDLY1_LEB6_LENGTH                     0x00000001

#define _LEBDLY1_LEB7_POSITION                   0x0000000A
#define _LEBDLY1_LEB7_MASK                       0x00000400
#define _LEBDLY1_LEB7_LENGTH                     0x00000001

#define _LEBDLY1_LEB8_POSITION                   0x0000000B
#define _LEBDLY1_LEB8_MASK                       0x00000800
#define _LEBDLY1_LEB8_LENGTH                     0x00000001

#define _AUXCON1_CHOPLEN_POSITION                0x00000000
#define _AUXCON1_CHOPLEN_MASK                    0x00000001
#define _AUXCON1_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPHEN_POSITION                0x00000001
#define _AUXCON1_CHOPHEN_MASK                    0x00000002
#define _AUXCON1_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPSEL_POSITION                0x00000002
#define _AUXCON1_CHOPSEL_MASK                    0x0000003C
#define _AUXCON1_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON1_BLANKSEL_POSITION               0x00000008
#define _AUXCON1_BLANKSEL_MASK                   0x00000F00
#define _AUXCON1_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON1_HRDDIS_POSITION                 0x0000000E
#define _AUXCON1_HRDDIS_MASK                     0x00004000
#define _AUXCON1_HRDDIS_LENGTH                   0x00000001

#define _AUXCON1_HRPDIS_POSITION                 0x0000000F
#define _AUXCON1_HRPDIS_MASK                     0x00008000
#define _AUXCON1_HRPDIS_LENGTH                   0x00000001

#define _AUXCON1_CHOPSEL0_POSITION               0x00000002
#define _AUXCON1_CHOPSEL0_MASK                   0x00000004
#define _AUXCON1_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL1_POSITION               0x00000003
#define _AUXCON1_CHOPSEL1_MASK                   0x00000008
#define _AUXCON1_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL2_POSITION               0x00000004
#define _AUXCON1_CHOPSEL2_MASK                   0x00000010
#define _AUXCON1_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL3_POSITION               0x00000005
#define _AUXCON1_CHOPSEL3_MASK                   0x00000020
#define _AUXCON1_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON1_BLANKSEL0_POSITION              0x00000008
#define _AUXCON1_BLANKSEL0_MASK                  0x00000100
#define _AUXCON1_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL1_POSITION              0x00000009
#define _AUXCON1_BLANKSEL1_MASK                  0x00000200
#define _AUXCON1_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON1_BLANKSEL2_MASK                  0x00000400
#define _AUXCON1_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON1_BLANKSEL3_MASK                  0x00000800
#define _AUXCON1_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON2_IUE_POSITION                    0x00000000
#define _PWMCON2_IUE_MASK                        0x00000001
#define _PWMCON2_IUE_LENGTH                      0x00000001

#define _PWMCON2_XPRES_POSITION                  0x00000001
#define _PWMCON2_XPRES_MASK                      0x00000002
#define _PWMCON2_XPRES_LENGTH                    0x00000001

#define _PWMCON2_CAM_POSITION                    0x00000002
#define _PWMCON2_CAM_MASK                        0x00000004
#define _PWMCON2_CAM_LENGTH                      0x00000001

#define _PWMCON2_MTBS_POSITION                   0x00000003
#define _PWMCON2_MTBS_MASK                       0x00000008
#define _PWMCON2_MTBS_LENGTH                     0x00000001

#define _PWMCON2_DTC_POSITION                    0x00000006
#define _PWMCON2_DTC_MASK                        0x000000C0
#define _PWMCON2_DTC_LENGTH                      0x00000002

#define _PWMCON2_MDCS_POSITION                   0x00000008
#define _PWMCON2_MDCS_MASK                       0x00000100
#define _PWMCON2_MDCS_LENGTH                     0x00000001

#define _PWMCON2_ITB_POSITION                    0x00000009
#define _PWMCON2_ITB_MASK                        0x00000200
#define _PWMCON2_ITB_LENGTH                      0x00000001

#define _PWMCON2_TRGIEN_POSITION                 0x0000000A
#define _PWMCON2_TRGIEN_MASK                     0x00000400
#define _PWMCON2_TRGIEN_LENGTH                   0x00000001

#define _PWMCON2_CLIEN_POSITION                  0x0000000B
#define _PWMCON2_CLIEN_MASK                      0x00000800
#define _PWMCON2_CLIEN_LENGTH                    0x00000001

#define _PWMCON2_FLTIEN_POSITION                 0x0000000C
#define _PWMCON2_FLTIEN_MASK                     0x00001000
#define _PWMCON2_FLTIEN_LENGTH                   0x00000001

#define _PWMCON2_TRGSTAT_POSITION                0x0000000D
#define _PWMCON2_TRGSTAT_MASK                    0x00002000
#define _PWMCON2_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON2_CLSTAT_POSITION                 0x0000000E
#define _PWMCON2_CLSTAT_MASK                     0x00004000
#define _PWMCON2_CLSTAT_LENGTH                   0x00000001

#define _PWMCON2_FLTSTAT_POSITION                0x0000000F
#define _PWMCON2_FLTSTAT_MASK                    0x00008000
#define _PWMCON2_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON2_DTC0_POSITION                   0x00000006
#define _PWMCON2_DTC0_MASK                       0x00000040
#define _PWMCON2_DTC0_LENGTH                     0x00000001

#define _PWMCON2_DTC1_POSITION                   0x00000007
#define _PWMCON2_DTC1_MASK                       0x00000080
#define _PWMCON2_DTC1_LENGTH                     0x00000001

#define _IOCON2_OSYNC_POSITION                   0x00000000
#define _IOCON2_OSYNC_MASK                       0x00000001
#define _IOCON2_OSYNC_LENGTH                     0x00000001

#define _IOCON2_SWAP_POSITION                    0x00000001
#define _IOCON2_SWAP_MASK                        0x00000002
#define _IOCON2_SWAP_LENGTH                      0x00000001

#define _IOCON2_CLDAT_POSITION                   0x00000002
#define _IOCON2_CLDAT_MASK                       0x0000000C
#define _IOCON2_CLDAT_LENGTH                     0x00000002

#define _IOCON2_FLTDAT_POSITION                  0x00000004
#define _IOCON2_FLTDAT_MASK                      0x00000030
#define _IOCON2_FLTDAT_LENGTH                    0x00000002

#define _IOCON2_OVRDAT_POSITION                  0x00000006
#define _IOCON2_OVRDAT_MASK                      0x000000C0
#define _IOCON2_OVRDAT_LENGTH                    0x00000002

#define _IOCON2_OVRENL_POSITION                  0x00000008
#define _IOCON2_OVRENL_MASK                      0x00000100
#define _IOCON2_OVRENL_LENGTH                    0x00000001

#define _IOCON2_OVRENH_POSITION                  0x00000009
#define _IOCON2_OVRENH_MASK                      0x00000200
#define _IOCON2_OVRENH_LENGTH                    0x00000001

#define _IOCON2_PMOD_POSITION                    0x0000000A
#define _IOCON2_PMOD_MASK                        0x00000C00
#define _IOCON2_PMOD_LENGTH                      0x00000002

#define _IOCON2_POLL_POSITION                    0x0000000C
#define _IOCON2_POLL_MASK                        0x00001000
#define _IOCON2_POLL_LENGTH                      0x00000001

#define _IOCON2_POLH_POSITION                    0x0000000D
#define _IOCON2_POLH_MASK                        0x00002000
#define _IOCON2_POLH_LENGTH                      0x00000001

#define _IOCON2_PENL_POSITION                    0x0000000E
#define _IOCON2_PENL_MASK                        0x00004000
#define _IOCON2_PENL_LENGTH                      0x00000001

#define _IOCON2_PENH_POSITION                    0x0000000F
#define _IOCON2_PENH_MASK                        0x00008000
#define _IOCON2_PENH_LENGTH                      0x00000001

#define _IOCON2_CLDAT0_POSITION                  0x00000002
#define _IOCON2_CLDAT0_MASK                      0x00000004
#define _IOCON2_CLDAT0_LENGTH                    0x00000001

#define _IOCON2_CLDAT1_POSITION                  0x00000003
#define _IOCON2_CLDAT1_MASK                      0x00000008
#define _IOCON2_CLDAT1_LENGTH                    0x00000001

#define _IOCON2_FLTDAT0_POSITION                 0x00000004
#define _IOCON2_FLTDAT0_MASK                     0x00000010
#define _IOCON2_FLTDAT0_LENGTH                   0x00000001

#define _IOCON2_FLTDAT1_POSITION                 0x00000005
#define _IOCON2_FLTDAT1_MASK                     0x00000020
#define _IOCON2_FLTDAT1_LENGTH                   0x00000001

#define _IOCON2_OVRDAT0_POSITION                 0x00000006
#define _IOCON2_OVRDAT0_MASK                     0x00000040
#define _IOCON2_OVRDAT0_LENGTH                   0x00000001

#define _IOCON2_OVRDAT1_POSITION                 0x00000007
#define _IOCON2_OVRDAT1_MASK                     0x00000080
#define _IOCON2_OVRDAT1_LENGTH                   0x00000001

#define _IOCON2_PMOD0_POSITION                   0x0000000A
#define _IOCON2_PMOD0_MASK                       0x00000400
#define _IOCON2_PMOD0_LENGTH                     0x00000001

#define _IOCON2_PMOD1_POSITION                   0x0000000B
#define _IOCON2_PMOD1_MASK                       0x00000800
#define _IOCON2_PMOD1_LENGTH                     0x00000001

#define _FCLCON2_FLTMOD_POSITION                 0x00000000
#define _FCLCON2_FLTMOD_MASK                     0x00000003
#define _FCLCON2_FLTMOD_LENGTH                   0x00000002

#define _FCLCON2_FLTPOL_POSITION                 0x00000002
#define _FCLCON2_FLTPOL_MASK                     0x00000004
#define _FCLCON2_FLTPOL_LENGTH                   0x00000001

#define _FCLCON2_FLTSRC_POSITION                 0x00000003
#define _FCLCON2_FLTSRC_MASK                     0x000000F8
#define _FCLCON2_FLTSRC_LENGTH                   0x00000005

#define _FCLCON2_CLMOD_POSITION                  0x00000008
#define _FCLCON2_CLMOD_MASK                      0x00000100
#define _FCLCON2_CLMOD_LENGTH                    0x00000001

#define _FCLCON2_CLPOL_POSITION                  0x00000009
#define _FCLCON2_CLPOL_MASK                      0x00000200
#define _FCLCON2_CLPOL_LENGTH                    0x00000001

#define _FCLCON2_CLSRC_POSITION                  0x0000000A
#define _FCLCON2_CLSRC_MASK                      0x00007C00
#define _FCLCON2_CLSRC_LENGTH                    0x00000005

#define _FCLCON2_IFLTMOD_POSITION                0x0000000F
#define _FCLCON2_IFLTMOD_MASK                    0x00008000
#define _FCLCON2_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON2_FLTMOD0_POSITION                0x00000000
#define _FCLCON2_FLTMOD0_MASK                    0x00000001
#define _FCLCON2_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON2_FLTMOD1_POSITION                0x00000001
#define _FCLCON2_FLTMOD1_MASK                    0x00000002
#define _FCLCON2_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC0_POSITION                0x00000003
#define _FCLCON2_FLTSRC0_MASK                    0x00000008
#define _FCLCON2_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC1_POSITION                0x00000004
#define _FCLCON2_FLTSRC1_MASK                    0x00000010
#define _FCLCON2_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC2_POSITION                0x00000005
#define _FCLCON2_FLTSRC2_MASK                    0x00000020
#define _FCLCON2_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC3_POSITION                0x00000006
#define _FCLCON2_FLTSRC3_MASK                    0x00000040
#define _FCLCON2_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC4_POSITION                0x00000007
#define _FCLCON2_FLTSRC4_MASK                    0x00000080
#define _FCLCON2_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON2_CLSRC0_POSITION                 0x0000000A
#define _FCLCON2_CLSRC0_MASK                     0x00000400
#define _FCLCON2_CLSRC0_LENGTH                   0x00000001

#define _FCLCON2_CLSRC1_POSITION                 0x0000000B
#define _FCLCON2_CLSRC1_MASK                     0x00000800
#define _FCLCON2_CLSRC1_LENGTH                   0x00000001

#define _FCLCON2_CLSRC2_POSITION                 0x0000000C
#define _FCLCON2_CLSRC2_MASK                     0x00001000
#define _FCLCON2_CLSRC2_LENGTH                   0x00000001

#define _FCLCON2_CLSRC3_POSITION                 0x0000000D
#define _FCLCON2_CLSRC3_MASK                     0x00002000
#define _FCLCON2_CLSRC3_LENGTH                   0x00000001

#define _FCLCON2_CLSRC4_POSITION                 0x0000000E
#define _FCLCON2_CLSRC4_MASK                     0x00004000
#define _FCLCON2_CLSRC4_LENGTH                   0x00000001

#define _TRIG2_TRGCMP_POSITION                   0x00000003
#define _TRIG2_TRGCMP_MASK                       0x0000FFF8
#define _TRIG2_TRGCMP_LENGTH                     0x0000000D

#define _TRIG2_TRGCMP0_POSITION                  0x00000003
#define _TRIG2_TRGCMP0_MASK                      0x00000008
#define _TRIG2_TRGCMP0_LENGTH                    0x00000001

#define _TRIG2_TRGCMP1_POSITION                  0x00000004
#define _TRIG2_TRGCMP1_MASK                      0x00000010
#define _TRIG2_TRGCMP1_LENGTH                    0x00000001

#define _TRIG2_TRGCMP2_POSITION                  0x00000005
#define _TRIG2_TRGCMP2_MASK                      0x00000020
#define _TRIG2_TRGCMP2_LENGTH                    0x00000001

#define _TRIG2_TRGCMP3_POSITION                  0x00000006
#define _TRIG2_TRGCMP3_MASK                      0x00000040
#define _TRIG2_TRGCMP3_LENGTH                    0x00000001

#define _TRIG2_TRGCMP4_POSITION                  0x00000007
#define _TRIG2_TRGCMP4_MASK                      0x00000080
#define _TRIG2_TRGCMP4_LENGTH                    0x00000001

#define _TRIG2_TRGCMP5_POSITION                  0x00000008
#define _TRIG2_TRGCMP5_MASK                      0x00000100
#define _TRIG2_TRGCMP5_LENGTH                    0x00000001

#define _TRIG2_TRGCMP6_POSITION                  0x00000009
#define _TRIG2_TRGCMP6_MASK                      0x00000200
#define _TRIG2_TRGCMP6_LENGTH                    0x00000001

#define _TRIG2_TRGCMP7_POSITION                  0x0000000A
#define _TRIG2_TRGCMP7_MASK                      0x00000400
#define _TRIG2_TRGCMP7_LENGTH                    0x00000001

#define _TRIG2_TRGCMP8_POSITION                  0x0000000B
#define _TRIG2_TRGCMP8_MASK                      0x00000800
#define _TRIG2_TRGCMP8_LENGTH                    0x00000001

#define _TRIG2_TRGCMP9_POSITION                  0x0000000C
#define _TRIG2_TRGCMP9_MASK                      0x00001000
#define _TRIG2_TRGCMP9_LENGTH                    0x00000001

#define _TRIG2_TRGCMP10_POSITION                 0x0000000D
#define _TRIG2_TRGCMP10_MASK                     0x00002000
#define _TRIG2_TRGCMP10_LENGTH                   0x00000001

#define _TRIG2_TRGCMP11_POSITION                 0x0000000E
#define _TRIG2_TRGCMP11_MASK                     0x00004000
#define _TRIG2_TRGCMP11_LENGTH                   0x00000001

#define _TRIG2_TRGCMP12_POSITION                 0x0000000F
#define _TRIG2_TRGCMP12_MASK                     0x00008000
#define _TRIG2_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON2_TRGSTRT_POSITION                0x00000000
#define _TRGCON2_TRGSTRT_MASK                    0x0000003F
#define _TRGCON2_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON2_DTM_POSITION                    0x00000007
#define _TRGCON2_DTM_MASK                        0x00000080
#define _TRGCON2_DTM_LENGTH                      0x00000001

#define _TRGCON2_TRGDIV_POSITION                 0x0000000C
#define _TRGCON2_TRGDIV_MASK                     0x0000F000
#define _TRGCON2_TRGDIV_LENGTH                   0x00000004

#define _TRGCON2_TRGSTRT0_POSITION               0x00000000
#define _TRGCON2_TRGSTRT0_MASK                   0x00000001
#define _TRGCON2_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT1_POSITION               0x00000001
#define _TRGCON2_TRGSTRT1_MASK                   0x00000002
#define _TRGCON2_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT2_POSITION               0x00000002
#define _TRGCON2_TRGSTRT2_MASK                   0x00000004
#define _TRGCON2_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT3_POSITION               0x00000003
#define _TRGCON2_TRGSTRT3_MASK                   0x00000008
#define _TRGCON2_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT4_POSITION               0x00000004
#define _TRGCON2_TRGSTRT4_MASK                   0x00000010
#define _TRGCON2_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT5_POSITION               0x00000005
#define _TRGCON2_TRGSTRT5_MASK                   0x00000020
#define _TRGCON2_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON2_TRGDIV0_POSITION                0x0000000C
#define _TRGCON2_TRGDIV0_MASK                    0x00001000
#define _TRGCON2_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV1_POSITION                0x0000000D
#define _TRGCON2_TRGDIV1_MASK                    0x00002000
#define _TRGCON2_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV2_POSITION                0x0000000E
#define _TRGCON2_TRGDIV2_MASK                    0x00004000
#define _TRGCON2_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV3_POSITION                0x0000000F
#define _TRGCON2_TRGDIV3_MASK                    0x00008000
#define _TRGCON2_TRGDIV3_LENGTH                  0x00000001

#define _STRIG2_STRGCMP_POSITION                 0x00000003
#define _STRIG2_STRGCMP_MASK                     0x0000FFF8
#define _STRIG2_STRGCMP_LENGTH                   0x0000000D

#define _STRIG2_STRGCMP0_POSITION                0x00000003
#define _STRIG2_STRGCMP0_MASK                    0x00000008
#define _STRIG2_STRGCMP0_LENGTH                  0x00000001

#define _STRIG2_STRGCMP1_POSITION                0x00000004
#define _STRIG2_STRGCMP1_MASK                    0x00000010
#define _STRIG2_STRGCMP1_LENGTH                  0x00000001

#define _STRIG2_STRGCMP2_POSITION                0x00000005
#define _STRIG2_STRGCMP2_MASK                    0x00000020
#define _STRIG2_STRGCMP2_LENGTH                  0x00000001

#define _STRIG2_STRGCMP3_POSITION                0x00000006
#define _STRIG2_STRGCMP3_MASK                    0x00000040
#define _STRIG2_STRGCMP3_LENGTH                  0x00000001

#define _STRIG2_STRGCMP4_POSITION                0x00000007
#define _STRIG2_STRGCMP4_MASK                    0x00000080
#define _STRIG2_STRGCMP4_LENGTH                  0x00000001

#define _STRIG2_STRGCMP5_POSITION                0x00000008
#define _STRIG2_STRGCMP5_MASK                    0x00000100
#define _STRIG2_STRGCMP5_LENGTH                  0x00000001

#define _STRIG2_STRGCMP6_POSITION                0x00000009
#define _STRIG2_STRGCMP6_MASK                    0x00000200
#define _STRIG2_STRGCMP6_LENGTH                  0x00000001

#define _STRIG2_STRGCMP7_POSITION                0x0000000A
#define _STRIG2_STRGCMP7_MASK                    0x00000400
#define _STRIG2_STRGCMP7_LENGTH                  0x00000001

#define _STRIG2_STRGCMP8_POSITION                0x0000000B
#define _STRIG2_STRGCMP8_MASK                    0x00000800
#define _STRIG2_STRGCMP8_LENGTH                  0x00000001

#define _STRIG2_STRGCMP9_POSITION                0x0000000C
#define _STRIG2_STRGCMP9_MASK                    0x00001000
#define _STRIG2_STRGCMP9_LENGTH                  0x00000001

#define _STRIG2_STRGCMP10_POSITION               0x0000000D
#define _STRIG2_STRGCMP10_MASK                   0x00002000
#define _STRIG2_STRGCMP10_LENGTH                 0x00000001

#define _STRIG2_STRGCMP11_POSITION               0x0000000E
#define _STRIG2_STRGCMP11_MASK                   0x00004000
#define _STRIG2_STRGCMP11_LENGTH                 0x00000001

#define _STRIG2_STRGCMP12_POSITION               0x0000000F
#define _STRIG2_STRGCMP12_MASK                   0x00008000
#define _STRIG2_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP2_PWMCAP_POSITION                 0x00000003
#define _PWMCAP2_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP2_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP2_PWMCAP0_POSITION                0x00000003
#define _PWMCAP2_PWMCAP0_MASK                    0x00000008
#define _PWMCAP2_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP1_POSITION                0x00000004
#define _PWMCAP2_PWMCAP1_MASK                    0x00000010
#define _PWMCAP2_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP2_POSITION                0x00000005
#define _PWMCAP2_PWMCAP2_MASK                    0x00000020
#define _PWMCAP2_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP3_POSITION                0x00000006
#define _PWMCAP2_PWMCAP3_MASK                    0x00000040
#define _PWMCAP2_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP4_POSITION                0x00000007
#define _PWMCAP2_PWMCAP4_MASK                    0x00000080
#define _PWMCAP2_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP5_POSITION                0x00000008
#define _PWMCAP2_PWMCAP5_MASK                    0x00000100
#define _PWMCAP2_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP6_POSITION                0x00000009
#define _PWMCAP2_PWMCAP6_MASK                    0x00000200
#define _PWMCAP2_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP2_PWMCAP7_MASK                    0x00000400
#define _PWMCAP2_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP2_PWMCAP8_MASK                    0x00000800
#define _PWMCAP2_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP2_PWMCAP9_MASK                    0x00001000
#define _PWMCAP2_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP2_PWMCAP10_MASK                   0x00002000
#define _PWMCAP2_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP2_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP2_PWMCAP11_MASK                   0x00004000
#define _PWMCAP2_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP2_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP2_PWMCAP12_MASK                   0x00008000
#define _PWMCAP2_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON2_BPLL_POSITION                   0x00000000
#define _LEBCON2_BPLL_MASK                       0x00000001
#define _LEBCON2_BPLL_LENGTH                     0x00000001

#define _LEBCON2_BPLH_POSITION                   0x00000001
#define _LEBCON2_BPLH_MASK                       0x00000002
#define _LEBCON2_BPLH_LENGTH                     0x00000001

#define _LEBCON2_BPHL_POSITION                   0x00000002
#define _LEBCON2_BPHL_MASK                       0x00000004
#define _LEBCON2_BPHL_LENGTH                     0x00000001

#define _LEBCON2_BPHH_POSITION                   0x00000003
#define _LEBCON2_BPHH_MASK                       0x00000008
#define _LEBCON2_BPHH_LENGTH                     0x00000001

#define _LEBCON2_BCL_POSITION                    0x00000004
#define _LEBCON2_BCL_MASK                        0x00000010
#define _LEBCON2_BCL_LENGTH                      0x00000001

#define _LEBCON2_BCH_POSITION                    0x00000005
#define _LEBCON2_BCH_MASK                        0x00000020
#define _LEBCON2_BCH_LENGTH                      0x00000001

#define _LEBCON2_CLLEBEN_POSITION                0x0000000A
#define _LEBCON2_CLLEBEN_MASK                    0x00000400
#define _LEBCON2_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON2_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON2_FLTLEBEN_MASK                   0x00000800
#define _LEBCON2_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON2_PLF_POSITION                    0x0000000C
#define _LEBCON2_PLF_MASK                        0x00001000
#define _LEBCON2_PLF_LENGTH                      0x00000001

#define _LEBCON2_PLR_POSITION                    0x0000000D
#define _LEBCON2_PLR_MASK                        0x00002000
#define _LEBCON2_PLR_LENGTH                      0x00000001

#define _LEBCON2_PHF_POSITION                    0x0000000E
#define _LEBCON2_PHF_MASK                        0x00004000
#define _LEBCON2_PHF_LENGTH                      0x00000001

#define _LEBCON2_PHR_POSITION                    0x0000000F
#define _LEBCON2_PHR_MASK                        0x00008000
#define _LEBCON2_PHR_LENGTH                      0x00000001

#define _LEBDLY2_LEB_POSITION                    0x00000003
#define _LEBDLY2_LEB_MASK                        0x00000FF8
#define _LEBDLY2_LEB_LENGTH                      0x00000009

#define _LEBDLY2_LEB0_POSITION                   0x00000003
#define _LEBDLY2_LEB0_MASK                       0x00000008
#define _LEBDLY2_LEB0_LENGTH                     0x00000001

#define _LEBDLY2_LEB1_POSITION                   0x00000004
#define _LEBDLY2_LEB1_MASK                       0x00000010
#define _LEBDLY2_LEB1_LENGTH                     0x00000001

#define _LEBDLY2_LEB2_POSITION                   0x00000005
#define _LEBDLY2_LEB2_MASK                       0x00000020
#define _LEBDLY2_LEB2_LENGTH                     0x00000001

#define _LEBDLY2_LEB3_POSITION                   0x00000006
#define _LEBDLY2_LEB3_MASK                       0x00000040
#define _LEBDLY2_LEB3_LENGTH                     0x00000001

#define _LEBDLY2_LEB4_POSITION                   0x00000007
#define _LEBDLY2_LEB4_MASK                       0x00000080
#define _LEBDLY2_LEB4_LENGTH                     0x00000001

#define _LEBDLY2_LEB5_POSITION                   0x00000008
#define _LEBDLY2_LEB5_MASK                       0x00000100
#define _LEBDLY2_LEB5_LENGTH                     0x00000001

#define _LEBDLY2_LEB6_POSITION                   0x00000009
#define _LEBDLY2_LEB6_MASK                       0x00000200
#define _LEBDLY2_LEB6_LENGTH                     0x00000001

#define _LEBDLY2_LEB7_POSITION                   0x0000000A
#define _LEBDLY2_LEB7_MASK                       0x00000400
#define _LEBDLY2_LEB7_LENGTH                     0x00000001

#define _LEBDLY2_LEB8_POSITION                   0x0000000B
#define _LEBDLY2_LEB8_MASK                       0x00000800
#define _LEBDLY2_LEB8_LENGTH                     0x00000001

#define _AUXCON2_CHOPLEN_POSITION                0x00000000
#define _AUXCON2_CHOPLEN_MASK                    0x00000001
#define _AUXCON2_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON2_CHOPHEN_POSITION                0x00000001
#define _AUXCON2_CHOPHEN_MASK                    0x00000002
#define _AUXCON2_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON2_CHOPSEL_POSITION                0x00000002
#define _AUXCON2_CHOPSEL_MASK                    0x0000003C
#define _AUXCON2_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON2_BLANKSEL_POSITION               0x00000008
#define _AUXCON2_BLANKSEL_MASK                   0x00000F00
#define _AUXCON2_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON2_HRDDIS_POSITION                 0x0000000E
#define _AUXCON2_HRDDIS_MASK                     0x00004000
#define _AUXCON2_HRDDIS_LENGTH                   0x00000001

#define _AUXCON2_HRPDIS_POSITION                 0x0000000F
#define _AUXCON2_HRPDIS_MASK                     0x00008000
#define _AUXCON2_HRPDIS_LENGTH                   0x00000001

#define _AUXCON2_CHOPSEL0_POSITION               0x00000002
#define _AUXCON2_CHOPSEL0_MASK                   0x00000004
#define _AUXCON2_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL1_POSITION               0x00000003
#define _AUXCON2_CHOPSEL1_MASK                   0x00000008
#define _AUXCON2_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL2_POSITION               0x00000004
#define _AUXCON2_CHOPSEL2_MASK                   0x00000010
#define _AUXCON2_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL3_POSITION               0x00000005
#define _AUXCON2_CHOPSEL3_MASK                   0x00000020
#define _AUXCON2_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON2_BLANKSEL0_POSITION              0x00000008
#define _AUXCON2_BLANKSEL0_MASK                  0x00000100
#define _AUXCON2_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL1_POSITION              0x00000009
#define _AUXCON2_BLANKSEL1_MASK                  0x00000200
#define _AUXCON2_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON2_BLANKSEL2_MASK                  0x00000400
#define _AUXCON2_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON2_BLANKSEL3_MASK                  0x00000800
#define _AUXCON2_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON3_IUE_POSITION                    0x00000000
#define _PWMCON3_IUE_MASK                        0x00000001
#define _PWMCON3_IUE_LENGTH                      0x00000001

#define _PWMCON3_XPRES_POSITION                  0x00000001
#define _PWMCON3_XPRES_MASK                      0x00000002
#define _PWMCON3_XPRES_LENGTH                    0x00000001

#define _PWMCON3_CAM_POSITION                    0x00000002
#define _PWMCON3_CAM_MASK                        0x00000004
#define _PWMCON3_CAM_LENGTH                      0x00000001

#define _PWMCON3_MTBS_POSITION                   0x00000003
#define _PWMCON3_MTBS_MASK                       0x00000008
#define _PWMCON3_MTBS_LENGTH                     0x00000001

#define _PWMCON3_DTC_POSITION                    0x00000006
#define _PWMCON3_DTC_MASK                        0x000000C0
#define _PWMCON3_DTC_LENGTH                      0x00000002

#define _PWMCON3_MDCS_POSITION                   0x00000008
#define _PWMCON3_MDCS_MASK                       0x00000100
#define _PWMCON3_MDCS_LENGTH                     0x00000001

#define _PWMCON3_ITB_POSITION                    0x00000009
#define _PWMCON3_ITB_MASK                        0x00000200
#define _PWMCON3_ITB_LENGTH                      0x00000001

#define _PWMCON3_TRGIEN_POSITION                 0x0000000A
#define _PWMCON3_TRGIEN_MASK                     0x00000400
#define _PWMCON3_TRGIEN_LENGTH                   0x00000001

#define _PWMCON3_CLIEN_POSITION                  0x0000000B
#define _PWMCON3_CLIEN_MASK                      0x00000800
#define _PWMCON3_CLIEN_LENGTH                    0x00000001

#define _PWMCON3_FLTIEN_POSITION                 0x0000000C
#define _PWMCON3_FLTIEN_MASK                     0x00001000
#define _PWMCON3_FLTIEN_LENGTH                   0x00000001

#define _PWMCON3_TRGSTAT_POSITION                0x0000000D
#define _PWMCON3_TRGSTAT_MASK                    0x00002000
#define _PWMCON3_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON3_CLSTAT_POSITION                 0x0000000E
#define _PWMCON3_CLSTAT_MASK                     0x00004000
#define _PWMCON3_CLSTAT_LENGTH                   0x00000001

#define _PWMCON3_FLTSTAT_POSITION                0x0000000F
#define _PWMCON3_FLTSTAT_MASK                    0x00008000
#define _PWMCON3_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON3_DTC0_POSITION                   0x00000006
#define _PWMCON3_DTC0_MASK                       0x00000040
#define _PWMCON3_DTC0_LENGTH                     0x00000001

#define _PWMCON3_DTC1_POSITION                   0x00000007
#define _PWMCON3_DTC1_MASK                       0x00000080
#define _PWMCON3_DTC1_LENGTH                     0x00000001

#define _IOCON3_OSYNC_POSITION                   0x00000000
#define _IOCON3_OSYNC_MASK                       0x00000001
#define _IOCON3_OSYNC_LENGTH                     0x00000001

#define _IOCON3_SWAP_POSITION                    0x00000001
#define _IOCON3_SWAP_MASK                        0x00000002
#define _IOCON3_SWAP_LENGTH                      0x00000001

#define _IOCON3_CLDAT_POSITION                   0x00000002
#define _IOCON3_CLDAT_MASK                       0x0000000C
#define _IOCON3_CLDAT_LENGTH                     0x00000002

#define _IOCON3_FLTDAT_POSITION                  0x00000004
#define _IOCON3_FLTDAT_MASK                      0x00000030
#define _IOCON3_FLTDAT_LENGTH                    0x00000002

#define _IOCON3_OVRDAT_POSITION                  0x00000006
#define _IOCON3_OVRDAT_MASK                      0x000000C0
#define _IOCON3_OVRDAT_LENGTH                    0x00000002

#define _IOCON3_OVRENL_POSITION                  0x00000008
#define _IOCON3_OVRENL_MASK                      0x00000100
#define _IOCON3_OVRENL_LENGTH                    0x00000001

#define _IOCON3_OVRENH_POSITION                  0x00000009
#define _IOCON3_OVRENH_MASK                      0x00000200
#define _IOCON3_OVRENH_LENGTH                    0x00000001

#define _IOCON3_PMOD_POSITION                    0x0000000A
#define _IOCON3_PMOD_MASK                        0x00000C00
#define _IOCON3_PMOD_LENGTH                      0x00000002

#define _IOCON3_POLL_POSITION                    0x0000000C
#define _IOCON3_POLL_MASK                        0x00001000
#define _IOCON3_POLL_LENGTH                      0x00000001

#define _IOCON3_POLH_POSITION                    0x0000000D
#define _IOCON3_POLH_MASK                        0x00002000
#define _IOCON3_POLH_LENGTH                      0x00000001

#define _IOCON3_PENL_POSITION                    0x0000000E
#define _IOCON3_PENL_MASK                        0x00004000
#define _IOCON3_PENL_LENGTH                      0x00000001

#define _IOCON3_PENH_POSITION                    0x0000000F
#define _IOCON3_PENH_MASK                        0x00008000
#define _IOCON3_PENH_LENGTH                      0x00000001

#define _IOCON3_CLDAT0_POSITION                  0x00000002
#define _IOCON3_CLDAT0_MASK                      0x00000004
#define _IOCON3_CLDAT0_LENGTH                    0x00000001

#define _IOCON3_CLDAT1_POSITION                  0x00000003
#define _IOCON3_CLDAT1_MASK                      0x00000008
#define _IOCON3_CLDAT1_LENGTH                    0x00000001

#define _IOCON3_FLTDAT0_POSITION                 0x00000004
#define _IOCON3_FLTDAT0_MASK                     0x00000010
#define _IOCON3_FLTDAT0_LENGTH                   0x00000001

#define _IOCON3_FLTDAT1_POSITION                 0x00000005
#define _IOCON3_FLTDAT1_MASK                     0x00000020
#define _IOCON3_FLTDAT1_LENGTH                   0x00000001

#define _IOCON3_OVRDAT0_POSITION                 0x00000006
#define _IOCON3_OVRDAT0_MASK                     0x00000040
#define _IOCON3_OVRDAT0_LENGTH                   0x00000001

#define _IOCON3_OVRDAT1_POSITION                 0x00000007
#define _IOCON3_OVRDAT1_MASK                     0x00000080
#define _IOCON3_OVRDAT1_LENGTH                   0x00000001

#define _IOCON3_PMOD0_POSITION                   0x0000000A
#define _IOCON3_PMOD0_MASK                       0x00000400
#define _IOCON3_PMOD0_LENGTH                     0x00000001

#define _IOCON3_PMOD1_POSITION                   0x0000000B
#define _IOCON3_PMOD1_MASK                       0x00000800
#define _IOCON3_PMOD1_LENGTH                     0x00000001

#define _FCLCON3_FLTMOD_POSITION                 0x00000000
#define _FCLCON3_FLTMOD_MASK                     0x00000003
#define _FCLCON3_FLTMOD_LENGTH                   0x00000002

#define _FCLCON3_FLTPOL_POSITION                 0x00000002
#define _FCLCON3_FLTPOL_MASK                     0x00000004
#define _FCLCON3_FLTPOL_LENGTH                   0x00000001

#define _FCLCON3_FLTSRC_POSITION                 0x00000003
#define _FCLCON3_FLTSRC_MASK                     0x000000F8
#define _FCLCON3_FLTSRC_LENGTH                   0x00000005

#define _FCLCON3_CLMOD_POSITION                  0x00000008
#define _FCLCON3_CLMOD_MASK                      0x00000100
#define _FCLCON3_CLMOD_LENGTH                    0x00000001

#define _FCLCON3_CLPOL_POSITION                  0x00000009
#define _FCLCON3_CLPOL_MASK                      0x00000200
#define _FCLCON3_CLPOL_LENGTH                    0x00000001

#define _FCLCON3_CLSRC_POSITION                  0x0000000A
#define _FCLCON3_CLSRC_MASK                      0x00007C00
#define _FCLCON3_CLSRC_LENGTH                    0x00000005

#define _FCLCON3_IFLTMOD_POSITION                0x0000000F
#define _FCLCON3_IFLTMOD_MASK                    0x00008000
#define _FCLCON3_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON3_FLTMOD0_POSITION                0x00000000
#define _FCLCON3_FLTMOD0_MASK                    0x00000001
#define _FCLCON3_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON3_FLTMOD1_POSITION                0x00000001
#define _FCLCON3_FLTMOD1_MASK                    0x00000002
#define _FCLCON3_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC0_POSITION                0x00000003
#define _FCLCON3_FLTSRC0_MASK                    0x00000008
#define _FCLCON3_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC1_POSITION                0x00000004
#define _FCLCON3_FLTSRC1_MASK                    0x00000010
#define _FCLCON3_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC2_POSITION                0x00000005
#define _FCLCON3_FLTSRC2_MASK                    0x00000020
#define _FCLCON3_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC3_POSITION                0x00000006
#define _FCLCON3_FLTSRC3_MASK                    0x00000040
#define _FCLCON3_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC4_POSITION                0x00000007
#define _FCLCON3_FLTSRC4_MASK                    0x00000080
#define _FCLCON3_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON3_CLSRC0_POSITION                 0x0000000A
#define _FCLCON3_CLSRC0_MASK                     0x00000400
#define _FCLCON3_CLSRC0_LENGTH                   0x00000001

#define _FCLCON3_CLSRC1_POSITION                 0x0000000B
#define _FCLCON3_CLSRC1_MASK                     0x00000800
#define _FCLCON3_CLSRC1_LENGTH                   0x00000001

#define _FCLCON3_CLSRC2_POSITION                 0x0000000C
#define _FCLCON3_CLSRC2_MASK                     0x00001000
#define _FCLCON3_CLSRC2_LENGTH                   0x00000001

#define _FCLCON3_CLSRC3_POSITION                 0x0000000D
#define _FCLCON3_CLSRC3_MASK                     0x00002000
#define _FCLCON3_CLSRC3_LENGTH                   0x00000001

#define _FCLCON3_CLSRC4_POSITION                 0x0000000E
#define _FCLCON3_CLSRC4_MASK                     0x00004000
#define _FCLCON3_CLSRC4_LENGTH                   0x00000001

#define _TRIG3_TRGCMP_POSITION                   0x00000003
#define _TRIG3_TRGCMP_MASK                       0x0000FFF8
#define _TRIG3_TRGCMP_LENGTH                     0x0000000D

#define _TRIG3_TRGCMP0_POSITION                  0x00000003
#define _TRIG3_TRGCMP0_MASK                      0x00000008
#define _TRIG3_TRGCMP0_LENGTH                    0x00000001

#define _TRIG3_TRGCMP1_POSITION                  0x00000004
#define _TRIG3_TRGCMP1_MASK                      0x00000010
#define _TRIG3_TRGCMP1_LENGTH                    0x00000001

#define _TRIG3_TRGCMP2_POSITION                  0x00000005
#define _TRIG3_TRGCMP2_MASK                      0x00000020
#define _TRIG3_TRGCMP2_LENGTH                    0x00000001

#define _TRIG3_TRGCMP3_POSITION                  0x00000006
#define _TRIG3_TRGCMP3_MASK                      0x00000040
#define _TRIG3_TRGCMP3_LENGTH                    0x00000001

#define _TRIG3_TRGCMP4_POSITION                  0x00000007
#define _TRIG3_TRGCMP4_MASK                      0x00000080
#define _TRIG3_TRGCMP4_LENGTH                    0x00000001

#define _TRIG3_TRGCMP5_POSITION                  0x00000008
#define _TRIG3_TRGCMP5_MASK                      0x00000100
#define _TRIG3_TRGCMP5_LENGTH                    0x00000001

#define _TRIG3_TRGCMP6_POSITION                  0x00000009
#define _TRIG3_TRGCMP6_MASK                      0x00000200
#define _TRIG3_TRGCMP6_LENGTH                    0x00000001

#define _TRIG3_TRGCMP7_POSITION                  0x0000000A
#define _TRIG3_TRGCMP7_MASK                      0x00000400
#define _TRIG3_TRGCMP7_LENGTH                    0x00000001

#define _TRIG3_TRGCMP8_POSITION                  0x0000000B
#define _TRIG3_TRGCMP8_MASK                      0x00000800
#define _TRIG3_TRGCMP8_LENGTH                    0x00000001

#define _TRIG3_TRGCMP9_POSITION                  0x0000000C
#define _TRIG3_TRGCMP9_MASK                      0x00001000
#define _TRIG3_TRGCMP9_LENGTH                    0x00000001

#define _TRIG3_TRGCMP10_POSITION                 0x0000000D
#define _TRIG3_TRGCMP10_MASK                     0x00002000
#define _TRIG3_TRGCMP10_LENGTH                   0x00000001

#define _TRIG3_TRGCMP11_POSITION                 0x0000000E
#define _TRIG3_TRGCMP11_MASK                     0x00004000
#define _TRIG3_TRGCMP11_LENGTH                   0x00000001

#define _TRIG3_TRGCMP12_POSITION                 0x0000000F
#define _TRIG3_TRGCMP12_MASK                     0x00008000
#define _TRIG3_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON3_TRGSTRT_POSITION                0x00000000
#define _TRGCON3_TRGSTRT_MASK                    0x0000003F
#define _TRGCON3_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON3_DTM_POSITION                    0x00000007
#define _TRGCON3_DTM_MASK                        0x00000080
#define _TRGCON3_DTM_LENGTH                      0x00000001

#define _TRGCON3_TRGDIV_POSITION                 0x0000000C
#define _TRGCON3_TRGDIV_MASK                     0x0000F000
#define _TRGCON3_TRGDIV_LENGTH                   0x00000004

#define _TRGCON3_TRGSTRT0_POSITION               0x00000000
#define _TRGCON3_TRGSTRT0_MASK                   0x00000001
#define _TRGCON3_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT1_POSITION               0x00000001
#define _TRGCON3_TRGSTRT1_MASK                   0x00000002
#define _TRGCON3_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT2_POSITION               0x00000002
#define _TRGCON3_TRGSTRT2_MASK                   0x00000004
#define _TRGCON3_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT3_POSITION               0x00000003
#define _TRGCON3_TRGSTRT3_MASK                   0x00000008
#define _TRGCON3_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT4_POSITION               0x00000004
#define _TRGCON3_TRGSTRT4_MASK                   0x00000010
#define _TRGCON3_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT5_POSITION               0x00000005
#define _TRGCON3_TRGSTRT5_MASK                   0x00000020
#define _TRGCON3_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON3_TRGDIV0_POSITION                0x0000000C
#define _TRGCON3_TRGDIV0_MASK                    0x00001000
#define _TRGCON3_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV1_POSITION                0x0000000D
#define _TRGCON3_TRGDIV1_MASK                    0x00002000
#define _TRGCON3_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV2_POSITION                0x0000000E
#define _TRGCON3_TRGDIV2_MASK                    0x00004000
#define _TRGCON3_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV3_POSITION                0x0000000F
#define _TRGCON3_TRGDIV3_MASK                    0x00008000
#define _TRGCON3_TRGDIV3_LENGTH                  0x00000001

#define _STRIG3_STRGCMP_POSITION                 0x00000003
#define _STRIG3_STRGCMP_MASK                     0x0000FFF8
#define _STRIG3_STRGCMP_LENGTH                   0x0000000D

#define _STRIG3_STRGCMP0_POSITION                0x00000003
#define _STRIG3_STRGCMP0_MASK                    0x00000008
#define _STRIG3_STRGCMP0_LENGTH                  0x00000001

#define _STRIG3_STRGCMP1_POSITION                0x00000004
#define _STRIG3_STRGCMP1_MASK                    0x00000010
#define _STRIG3_STRGCMP1_LENGTH                  0x00000001

#define _STRIG3_STRGCMP2_POSITION                0x00000005
#define _STRIG3_STRGCMP2_MASK                    0x00000020
#define _STRIG3_STRGCMP2_LENGTH                  0x00000001

#define _STRIG3_STRGCMP3_POSITION                0x00000006
#define _STRIG3_STRGCMP3_MASK                    0x00000040
#define _STRIG3_STRGCMP3_LENGTH                  0x00000001

#define _STRIG3_STRGCMP4_POSITION                0x00000007
#define _STRIG3_STRGCMP4_MASK                    0x00000080
#define _STRIG3_STRGCMP4_LENGTH                  0x00000001

#define _STRIG3_STRGCMP5_POSITION                0x00000008
#define _STRIG3_STRGCMP5_MASK                    0x00000100
#define _STRIG3_STRGCMP5_LENGTH                  0x00000001

#define _STRIG3_STRGCMP6_POSITION                0x00000009
#define _STRIG3_STRGCMP6_MASK                    0x00000200
#define _STRIG3_STRGCMP6_LENGTH                  0x00000001

#define _STRIG3_STRGCMP7_POSITION                0x0000000A
#define _STRIG3_STRGCMP7_MASK                    0x00000400
#define _STRIG3_STRGCMP7_LENGTH                  0x00000001

#define _STRIG3_STRGCMP8_POSITION                0x0000000B
#define _STRIG3_STRGCMP8_MASK                    0x00000800
#define _STRIG3_STRGCMP8_LENGTH                  0x00000001

#define _STRIG3_STRGCMP9_POSITION                0x0000000C
#define _STRIG3_STRGCMP9_MASK                    0x00001000
#define _STRIG3_STRGCMP9_LENGTH                  0x00000001

#define _STRIG3_STRGCMP10_POSITION               0x0000000D
#define _STRIG3_STRGCMP10_MASK                   0x00002000
#define _STRIG3_STRGCMP10_LENGTH                 0x00000001

#define _STRIG3_STRGCMP11_POSITION               0x0000000E
#define _STRIG3_STRGCMP11_MASK                   0x00004000
#define _STRIG3_STRGCMP11_LENGTH                 0x00000001

#define _STRIG3_STRGCMP12_POSITION               0x0000000F
#define _STRIG3_STRGCMP12_MASK                   0x00008000
#define _STRIG3_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP3_PWMCAP_POSITION                 0x00000003
#define _PWMCAP3_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP3_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP3_PWMCAP0_POSITION                0x00000003
#define _PWMCAP3_PWMCAP0_MASK                    0x00000008
#define _PWMCAP3_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP1_POSITION                0x00000004
#define _PWMCAP3_PWMCAP1_MASK                    0x00000010
#define _PWMCAP3_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP2_POSITION                0x00000005
#define _PWMCAP3_PWMCAP2_MASK                    0x00000020
#define _PWMCAP3_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP3_POSITION                0x00000006
#define _PWMCAP3_PWMCAP3_MASK                    0x00000040
#define _PWMCAP3_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP4_POSITION                0x00000007
#define _PWMCAP3_PWMCAP4_MASK                    0x00000080
#define _PWMCAP3_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP5_POSITION                0x00000008
#define _PWMCAP3_PWMCAP5_MASK                    0x00000100
#define _PWMCAP3_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP6_POSITION                0x00000009
#define _PWMCAP3_PWMCAP6_MASK                    0x00000200
#define _PWMCAP3_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP3_PWMCAP7_MASK                    0x00000400
#define _PWMCAP3_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP3_PWMCAP8_MASK                    0x00000800
#define _PWMCAP3_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP3_PWMCAP9_MASK                    0x00001000
#define _PWMCAP3_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP3_PWMCAP10_MASK                   0x00002000
#define _PWMCAP3_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP3_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP3_PWMCAP11_MASK                   0x00004000
#define _PWMCAP3_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP3_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP3_PWMCAP12_MASK                   0x00008000
#define _PWMCAP3_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON3_BPLL_POSITION                   0x00000000
#define _LEBCON3_BPLL_MASK                       0x00000001
#define _LEBCON3_BPLL_LENGTH                     0x00000001

#define _LEBCON3_BPLH_POSITION                   0x00000001
#define _LEBCON3_BPLH_MASK                       0x00000002
#define _LEBCON3_BPLH_LENGTH                     0x00000001

#define _LEBCON3_BPHL_POSITION                   0x00000002
#define _LEBCON3_BPHL_MASK                       0x00000004
#define _LEBCON3_BPHL_LENGTH                     0x00000001

#define _LEBCON3_BPHH_POSITION                   0x00000003
#define _LEBCON3_BPHH_MASK                       0x00000008
#define _LEBCON3_BPHH_LENGTH                     0x00000001

#define _LEBCON3_BCL_POSITION                    0x00000004
#define _LEBCON3_BCL_MASK                        0x00000010
#define _LEBCON3_BCL_LENGTH                      0x00000001

#define _LEBCON3_BCH_POSITION                    0x00000005
#define _LEBCON3_BCH_MASK                        0x00000020
#define _LEBCON3_BCH_LENGTH                      0x00000001

#define _LEBCON3_CLLEBEN_POSITION                0x0000000A
#define _LEBCON3_CLLEBEN_MASK                    0x00000400
#define _LEBCON3_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON3_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON3_FLTLEBEN_MASK                   0x00000800
#define _LEBCON3_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON3_PLF_POSITION                    0x0000000C
#define _LEBCON3_PLF_MASK                        0x00001000
#define _LEBCON3_PLF_LENGTH                      0x00000001

#define _LEBCON3_PLR_POSITION                    0x0000000D
#define _LEBCON3_PLR_MASK                        0x00002000
#define _LEBCON3_PLR_LENGTH                      0x00000001

#define _LEBCON3_PHF_POSITION                    0x0000000E
#define _LEBCON3_PHF_MASK                        0x00004000
#define _LEBCON3_PHF_LENGTH                      0x00000001

#define _LEBCON3_PHR_POSITION                    0x0000000F
#define _LEBCON3_PHR_MASK                        0x00008000
#define _LEBCON3_PHR_LENGTH                      0x00000001

#define _LEBDLY3_LEB_POSITION                    0x00000003
#define _LEBDLY3_LEB_MASK                        0x00000FF8
#define _LEBDLY3_LEB_LENGTH                      0x00000009

#define _LEBDLY3_LEB0_POSITION                   0x00000003
#define _LEBDLY3_LEB0_MASK                       0x00000008
#define _LEBDLY3_LEB0_LENGTH                     0x00000001

#define _LEBDLY3_LEB1_POSITION                   0x00000004
#define _LEBDLY3_LEB1_MASK                       0x00000010
#define _LEBDLY3_LEB1_LENGTH                     0x00000001

#define _LEBDLY3_LEB2_POSITION                   0x00000005
#define _LEBDLY3_LEB2_MASK                       0x00000020
#define _LEBDLY3_LEB2_LENGTH                     0x00000001

#define _LEBDLY3_LEB3_POSITION                   0x00000006
#define _LEBDLY3_LEB3_MASK                       0x00000040
#define _LEBDLY3_LEB3_LENGTH                     0x00000001

#define _LEBDLY3_LEB4_POSITION                   0x00000007
#define _LEBDLY3_LEB4_MASK                       0x00000080
#define _LEBDLY3_LEB4_LENGTH                     0x00000001

#define _LEBDLY3_LEB5_POSITION                   0x00000008
#define _LEBDLY3_LEB5_MASK                       0x00000100
#define _LEBDLY3_LEB5_LENGTH                     0x00000001

#define _LEBDLY3_LEB6_POSITION                   0x00000009
#define _LEBDLY3_LEB6_MASK                       0x00000200
#define _LEBDLY3_LEB6_LENGTH                     0x00000001

#define _LEBDLY3_LEB7_POSITION                   0x0000000A
#define _LEBDLY3_LEB7_MASK                       0x00000400
#define _LEBDLY3_LEB7_LENGTH                     0x00000001

#define _LEBDLY3_LEB8_POSITION                   0x0000000B
#define _LEBDLY3_LEB8_MASK                       0x00000800
#define _LEBDLY3_LEB8_LENGTH                     0x00000001

#define _AUXCON3_CHOPLEN_POSITION                0x00000000
#define _AUXCON3_CHOPLEN_MASK                    0x00000001
#define _AUXCON3_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON3_CHOPHEN_POSITION                0x00000001
#define _AUXCON3_CHOPHEN_MASK                    0x00000002
#define _AUXCON3_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON3_CHOPSEL_POSITION                0x00000002
#define _AUXCON3_CHOPSEL_MASK                    0x0000003C
#define _AUXCON3_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON3_BLANKSEL_POSITION               0x00000008
#define _AUXCON3_BLANKSEL_MASK                   0x00000F00
#define _AUXCON3_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON3_HRDDIS_POSITION                 0x0000000E
#define _AUXCON3_HRDDIS_MASK                     0x00004000
#define _AUXCON3_HRDDIS_LENGTH                   0x00000001

#define _AUXCON3_HRPDIS_POSITION                 0x0000000F
#define _AUXCON3_HRPDIS_MASK                     0x00008000
#define _AUXCON3_HRPDIS_LENGTH                   0x00000001

#define _AUXCON3_CHOPSEL0_POSITION               0x00000002
#define _AUXCON3_CHOPSEL0_MASK                   0x00000004
#define _AUXCON3_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL1_POSITION               0x00000003
#define _AUXCON3_CHOPSEL1_MASK                   0x00000008
#define _AUXCON3_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL2_POSITION               0x00000004
#define _AUXCON3_CHOPSEL2_MASK                   0x00000010
#define _AUXCON3_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL3_POSITION               0x00000005
#define _AUXCON3_CHOPSEL3_MASK                   0x00000020
#define _AUXCON3_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON3_BLANKSEL0_POSITION              0x00000008
#define _AUXCON3_BLANKSEL0_MASK                  0x00000100
#define _AUXCON3_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL1_POSITION              0x00000009
#define _AUXCON3_BLANKSEL1_MASK                  0x00000200
#define _AUXCON3_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON3_BLANKSEL2_MASK                  0x00000400
#define _AUXCON3_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON3_BLANKSEL3_MASK                  0x00000800
#define _AUXCON3_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON4_IUE_POSITION                    0x00000000
#define _PWMCON4_IUE_MASK                        0x00000001
#define _PWMCON4_IUE_LENGTH                      0x00000001

#define _PWMCON4_XPRES_POSITION                  0x00000001
#define _PWMCON4_XPRES_MASK                      0x00000002
#define _PWMCON4_XPRES_LENGTH                    0x00000001

#define _PWMCON4_CAM_POSITION                    0x00000002
#define _PWMCON4_CAM_MASK                        0x00000004
#define _PWMCON4_CAM_LENGTH                      0x00000001

#define _PWMCON4_MTBS_POSITION                   0x00000003
#define _PWMCON4_MTBS_MASK                       0x00000008
#define _PWMCON4_MTBS_LENGTH                     0x00000001

#define _PWMCON4_DTC_POSITION                    0x00000006
#define _PWMCON4_DTC_MASK                        0x000000C0
#define _PWMCON4_DTC_LENGTH                      0x00000002

#define _PWMCON4_MDCS_POSITION                   0x00000008
#define _PWMCON4_MDCS_MASK                       0x00000100
#define _PWMCON4_MDCS_LENGTH                     0x00000001

#define _PWMCON4_ITB_POSITION                    0x00000009
#define _PWMCON4_ITB_MASK                        0x00000200
#define _PWMCON4_ITB_LENGTH                      0x00000001

#define _PWMCON4_TRGIEN_POSITION                 0x0000000A
#define _PWMCON4_TRGIEN_MASK                     0x00000400
#define _PWMCON4_TRGIEN_LENGTH                   0x00000001

#define _PWMCON4_CLIEN_POSITION                  0x0000000B
#define _PWMCON4_CLIEN_MASK                      0x00000800
#define _PWMCON4_CLIEN_LENGTH                    0x00000001

#define _PWMCON4_FLTIEN_POSITION                 0x0000000C
#define _PWMCON4_FLTIEN_MASK                     0x00001000
#define _PWMCON4_FLTIEN_LENGTH                   0x00000001

#define _PWMCON4_TRGSTAT_POSITION                0x0000000D
#define _PWMCON4_TRGSTAT_MASK                    0x00002000
#define _PWMCON4_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON4_CLSTAT_POSITION                 0x0000000E
#define _PWMCON4_CLSTAT_MASK                     0x00004000
#define _PWMCON4_CLSTAT_LENGTH                   0x00000001

#define _PWMCON4_FLTSTAT_POSITION                0x0000000F
#define _PWMCON4_FLTSTAT_MASK                    0x00008000
#define _PWMCON4_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON4_DTC0_POSITION                   0x00000006
#define _PWMCON4_DTC0_MASK                       0x00000040
#define _PWMCON4_DTC0_LENGTH                     0x00000001

#define _PWMCON4_DTC1_POSITION                   0x00000007
#define _PWMCON4_DTC1_MASK                       0x00000080
#define _PWMCON4_DTC1_LENGTH                     0x00000001

#define _IOCON4_OSYNC_POSITION                   0x00000000
#define _IOCON4_OSYNC_MASK                       0x00000001
#define _IOCON4_OSYNC_LENGTH                     0x00000001

#define _IOCON4_SWAP_POSITION                    0x00000001
#define _IOCON4_SWAP_MASK                        0x00000002
#define _IOCON4_SWAP_LENGTH                      0x00000001

#define _IOCON4_CLDAT_POSITION                   0x00000002
#define _IOCON4_CLDAT_MASK                       0x0000000C
#define _IOCON4_CLDAT_LENGTH                     0x00000002

#define _IOCON4_FLTDAT_POSITION                  0x00000004
#define _IOCON4_FLTDAT_MASK                      0x00000030
#define _IOCON4_FLTDAT_LENGTH                    0x00000002

#define _IOCON4_OVRDAT_POSITION                  0x00000006
#define _IOCON4_OVRDAT_MASK                      0x000000C0
#define _IOCON4_OVRDAT_LENGTH                    0x00000002

#define _IOCON4_OVRENL_POSITION                  0x00000008
#define _IOCON4_OVRENL_MASK                      0x00000100
#define _IOCON4_OVRENL_LENGTH                    0x00000001

#define _IOCON4_OVRENH_POSITION                  0x00000009
#define _IOCON4_OVRENH_MASK                      0x00000200
#define _IOCON4_OVRENH_LENGTH                    0x00000001

#define _IOCON4_PMOD_POSITION                    0x0000000A
#define _IOCON4_PMOD_MASK                        0x00000C00
#define _IOCON4_PMOD_LENGTH                      0x00000002

#define _IOCON4_POLL_POSITION                    0x0000000C
#define _IOCON4_POLL_MASK                        0x00001000
#define _IOCON4_POLL_LENGTH                      0x00000001

#define _IOCON4_POLH_POSITION                    0x0000000D
#define _IOCON4_POLH_MASK                        0x00002000
#define _IOCON4_POLH_LENGTH                      0x00000001

#define _IOCON4_PENL_POSITION                    0x0000000E
#define _IOCON4_PENL_MASK                        0x00004000
#define _IOCON4_PENL_LENGTH                      0x00000001

#define _IOCON4_PENH_POSITION                    0x0000000F
#define _IOCON4_PENH_MASK                        0x00008000
#define _IOCON4_PENH_LENGTH                      0x00000001

#define _IOCON4_CLDAT0_POSITION                  0x00000002
#define _IOCON4_CLDAT0_MASK                      0x00000004
#define _IOCON4_CLDAT0_LENGTH                    0x00000001

#define _IOCON4_CLDAT1_POSITION                  0x00000003
#define _IOCON4_CLDAT1_MASK                      0x00000008
#define _IOCON4_CLDAT1_LENGTH                    0x00000001

#define _IOCON4_FLTDAT0_POSITION                 0x00000004
#define _IOCON4_FLTDAT0_MASK                     0x00000010
#define _IOCON4_FLTDAT0_LENGTH                   0x00000001

#define _IOCON4_FLTDAT1_POSITION                 0x00000005
#define _IOCON4_FLTDAT1_MASK                     0x00000020
#define _IOCON4_FLTDAT1_LENGTH                   0x00000001

#define _IOCON4_OVRDAT0_POSITION                 0x00000006
#define _IOCON4_OVRDAT0_MASK                     0x00000040
#define _IOCON4_OVRDAT0_LENGTH                   0x00000001

#define _IOCON4_OVRDAT1_POSITION                 0x00000007
#define _IOCON4_OVRDAT1_MASK                     0x00000080
#define _IOCON4_OVRDAT1_LENGTH                   0x00000001

#define _IOCON4_PMOD0_POSITION                   0x0000000A
#define _IOCON4_PMOD0_MASK                       0x00000400
#define _IOCON4_PMOD0_LENGTH                     0x00000001

#define _IOCON4_PMOD1_POSITION                   0x0000000B
#define _IOCON4_PMOD1_MASK                       0x00000800
#define _IOCON4_PMOD1_LENGTH                     0x00000001

#define _FCLCON4_FLTMOD_POSITION                 0x00000000
#define _FCLCON4_FLTMOD_MASK                     0x00000003
#define _FCLCON4_FLTMOD_LENGTH                   0x00000002

#define _FCLCON4_FLTPOL_POSITION                 0x00000002
#define _FCLCON4_FLTPOL_MASK                     0x00000004
#define _FCLCON4_FLTPOL_LENGTH                   0x00000001

#define _FCLCON4_FLTSRC_POSITION                 0x00000003
#define _FCLCON4_FLTSRC_MASK                     0x000000F8
#define _FCLCON4_FLTSRC_LENGTH                   0x00000005

#define _FCLCON4_CLMOD_POSITION                  0x00000008
#define _FCLCON4_CLMOD_MASK                      0x00000100
#define _FCLCON4_CLMOD_LENGTH                    0x00000001

#define _FCLCON4_CLPOL_POSITION                  0x00000009
#define _FCLCON4_CLPOL_MASK                      0x00000200
#define _FCLCON4_CLPOL_LENGTH                    0x00000001

#define _FCLCON4_CLSRC_POSITION                  0x0000000A
#define _FCLCON4_CLSRC_MASK                      0x00007C00
#define _FCLCON4_CLSRC_LENGTH                    0x00000005

#define _FCLCON4_IFLTMOD_POSITION                0x0000000F
#define _FCLCON4_IFLTMOD_MASK                    0x00008000
#define _FCLCON4_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD0_POSITION                0x00000000
#define _FCLCON4_FLTMOD0_MASK                    0x00000001
#define _FCLCON4_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD1_POSITION                0x00000001
#define _FCLCON4_FLTMOD1_MASK                    0x00000002
#define _FCLCON4_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC0_POSITION                0x00000003
#define _FCLCON4_FLTSRC0_MASK                    0x00000008
#define _FCLCON4_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC1_POSITION                0x00000004
#define _FCLCON4_FLTSRC1_MASK                    0x00000010
#define _FCLCON4_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC2_POSITION                0x00000005
#define _FCLCON4_FLTSRC2_MASK                    0x00000020
#define _FCLCON4_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC3_POSITION                0x00000006
#define _FCLCON4_FLTSRC3_MASK                    0x00000040
#define _FCLCON4_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC4_POSITION                0x00000007
#define _FCLCON4_FLTSRC4_MASK                    0x00000080
#define _FCLCON4_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON4_CLSRC0_POSITION                 0x0000000A
#define _FCLCON4_CLSRC0_MASK                     0x00000400
#define _FCLCON4_CLSRC0_LENGTH                   0x00000001

#define _FCLCON4_CLSRC1_POSITION                 0x0000000B
#define _FCLCON4_CLSRC1_MASK                     0x00000800
#define _FCLCON4_CLSRC1_LENGTH                   0x00000001

#define _FCLCON4_CLSRC2_POSITION                 0x0000000C
#define _FCLCON4_CLSRC2_MASK                     0x00001000
#define _FCLCON4_CLSRC2_LENGTH                   0x00000001

#define _FCLCON4_CLSRC3_POSITION                 0x0000000D
#define _FCLCON4_CLSRC3_MASK                     0x00002000
#define _FCLCON4_CLSRC3_LENGTH                   0x00000001

#define _FCLCON4_CLSRC4_POSITION                 0x0000000E
#define _FCLCON4_CLSRC4_MASK                     0x00004000
#define _FCLCON4_CLSRC4_LENGTH                   0x00000001

#define _TRIG4_TRGCMP_POSITION                   0x00000003
#define _TRIG4_TRGCMP_MASK                       0x0000FFF8
#define _TRIG4_TRGCMP_LENGTH                     0x0000000D

#define _TRIG4_TRGCMP0_POSITION                  0x00000003
#define _TRIG4_TRGCMP0_MASK                      0x00000008
#define _TRIG4_TRGCMP0_LENGTH                    0x00000001

#define _TRIG4_TRGCMP1_POSITION                  0x00000004
#define _TRIG4_TRGCMP1_MASK                      0x00000010
#define _TRIG4_TRGCMP1_LENGTH                    0x00000001

#define _TRIG4_TRGCMP2_POSITION                  0x00000005
#define _TRIG4_TRGCMP2_MASK                      0x00000020
#define _TRIG4_TRGCMP2_LENGTH                    0x00000001

#define _TRIG4_TRGCMP3_POSITION                  0x00000006
#define _TRIG4_TRGCMP3_MASK                      0x00000040
#define _TRIG4_TRGCMP3_LENGTH                    0x00000001

#define _TRIG4_TRGCMP4_POSITION                  0x00000007
#define _TRIG4_TRGCMP4_MASK                      0x00000080
#define _TRIG4_TRGCMP4_LENGTH                    0x00000001

#define _TRIG4_TRGCMP5_POSITION                  0x00000008
#define _TRIG4_TRGCMP5_MASK                      0x00000100
#define _TRIG4_TRGCMP5_LENGTH                    0x00000001

#define _TRIG4_TRGCMP6_POSITION                  0x00000009
#define _TRIG4_TRGCMP6_MASK                      0x00000200
#define _TRIG4_TRGCMP6_LENGTH                    0x00000001

#define _TRIG4_TRGCMP7_POSITION                  0x0000000A
#define _TRIG4_TRGCMP7_MASK                      0x00000400
#define _TRIG4_TRGCMP7_LENGTH                    0x00000001

#define _TRIG4_TRGCMP8_POSITION                  0x0000000B
#define _TRIG4_TRGCMP8_MASK                      0x00000800
#define _TRIG4_TRGCMP8_LENGTH                    0x00000001

#define _TRIG4_TRGCMP9_POSITION                  0x0000000C
#define _TRIG4_TRGCMP9_MASK                      0x00001000
#define _TRIG4_TRGCMP9_LENGTH                    0x00000001

#define _TRIG4_TRGCMP10_POSITION                 0x0000000D
#define _TRIG4_TRGCMP10_MASK                     0x00002000
#define _TRIG4_TRGCMP10_LENGTH                   0x00000001

#define _TRIG4_TRGCMP11_POSITION                 0x0000000E
#define _TRIG4_TRGCMP11_MASK                     0x00004000
#define _TRIG4_TRGCMP11_LENGTH                   0x00000001

#define _TRIG4_TRGCMP12_POSITION                 0x0000000F
#define _TRIG4_TRGCMP12_MASK                     0x00008000
#define _TRIG4_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON4_TRGSTRT_POSITION                0x00000000
#define _TRGCON4_TRGSTRT_MASK                    0x0000003F
#define _TRGCON4_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON4_DTM_POSITION                    0x00000007
#define _TRGCON4_DTM_MASK                        0x00000080
#define _TRGCON4_DTM_LENGTH                      0x00000001

#define _TRGCON4_TRGDIV_POSITION                 0x0000000C
#define _TRGCON4_TRGDIV_MASK                     0x0000F000
#define _TRGCON4_TRGDIV_LENGTH                   0x00000004

#define _TRGCON4_TRGSTRT0_POSITION               0x00000000
#define _TRGCON4_TRGSTRT0_MASK                   0x00000001
#define _TRGCON4_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT1_POSITION               0x00000001
#define _TRGCON4_TRGSTRT1_MASK                   0x00000002
#define _TRGCON4_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT2_POSITION               0x00000002
#define _TRGCON4_TRGSTRT2_MASK                   0x00000004
#define _TRGCON4_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT3_POSITION               0x00000003
#define _TRGCON4_TRGSTRT3_MASK                   0x00000008
#define _TRGCON4_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT4_POSITION               0x00000004
#define _TRGCON4_TRGSTRT4_MASK                   0x00000010
#define _TRGCON4_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT5_POSITION               0x00000005
#define _TRGCON4_TRGSTRT5_MASK                   0x00000020
#define _TRGCON4_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON4_TRGDIV0_POSITION                0x0000000C
#define _TRGCON4_TRGDIV0_MASK                    0x00001000
#define _TRGCON4_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV1_POSITION                0x0000000D
#define _TRGCON4_TRGDIV1_MASK                    0x00002000
#define _TRGCON4_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV2_POSITION                0x0000000E
#define _TRGCON4_TRGDIV2_MASK                    0x00004000
#define _TRGCON4_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV3_POSITION                0x0000000F
#define _TRGCON4_TRGDIV3_MASK                    0x00008000
#define _TRGCON4_TRGDIV3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP_POSITION                 0x00000003
#define _STRIG4_STRGCMP_MASK                     0x0000FFF8
#define _STRIG4_STRGCMP_LENGTH                   0x0000000D

#define _STRIG4_STRGCMP0_POSITION                0x00000003
#define _STRIG4_STRGCMP0_MASK                    0x00000008
#define _STRIG4_STRGCMP0_LENGTH                  0x00000001

#define _STRIG4_STRGCMP1_POSITION                0x00000004
#define _STRIG4_STRGCMP1_MASK                    0x00000010
#define _STRIG4_STRGCMP1_LENGTH                  0x00000001

#define _STRIG4_STRGCMP2_POSITION                0x00000005
#define _STRIG4_STRGCMP2_MASK                    0x00000020
#define _STRIG4_STRGCMP2_LENGTH                  0x00000001

#define _STRIG4_STRGCMP3_POSITION                0x00000006
#define _STRIG4_STRGCMP3_MASK                    0x00000040
#define _STRIG4_STRGCMP3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP4_POSITION                0x00000007
#define _STRIG4_STRGCMP4_MASK                    0x00000080
#define _STRIG4_STRGCMP4_LENGTH                  0x00000001

#define _STRIG4_STRGCMP5_POSITION                0x00000008
#define _STRIG4_STRGCMP5_MASK                    0x00000100
#define _STRIG4_STRGCMP5_LENGTH                  0x00000001

#define _STRIG4_STRGCMP6_POSITION                0x00000009
#define _STRIG4_STRGCMP6_MASK                    0x00000200
#define _STRIG4_STRGCMP6_LENGTH                  0x00000001

#define _STRIG4_STRGCMP7_POSITION                0x0000000A
#define _STRIG4_STRGCMP7_MASK                    0x00000400
#define _STRIG4_STRGCMP7_LENGTH                  0x00000001

#define _STRIG4_STRGCMP8_POSITION                0x0000000B
#define _STRIG4_STRGCMP8_MASK                    0x00000800
#define _STRIG4_STRGCMP8_LENGTH                  0x00000001

#define _STRIG4_STRGCMP9_POSITION                0x0000000C
#define _STRIG4_STRGCMP9_MASK                    0x00001000
#define _STRIG4_STRGCMP9_LENGTH                  0x00000001

#define _STRIG4_STRGCMP10_POSITION               0x0000000D
#define _STRIG4_STRGCMP10_MASK                   0x00002000
#define _STRIG4_STRGCMP10_LENGTH                 0x00000001

#define _STRIG4_STRGCMP11_POSITION               0x0000000E
#define _STRIG4_STRGCMP11_MASK                   0x00004000
#define _STRIG4_STRGCMP11_LENGTH                 0x00000001

#define _STRIG4_STRGCMP12_POSITION               0x0000000F
#define _STRIG4_STRGCMP12_MASK                   0x00008000
#define _STRIG4_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP4_PWMCAP_POSITION                 0x00000003
#define _PWMCAP4_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP4_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP4_PWMCAP0_POSITION                0x00000003
#define _PWMCAP4_PWMCAP0_MASK                    0x00000008
#define _PWMCAP4_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP1_POSITION                0x00000004
#define _PWMCAP4_PWMCAP1_MASK                    0x00000010
#define _PWMCAP4_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP2_POSITION                0x00000005
#define _PWMCAP4_PWMCAP2_MASK                    0x00000020
#define _PWMCAP4_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP3_POSITION                0x00000006
#define _PWMCAP4_PWMCAP3_MASK                    0x00000040
#define _PWMCAP4_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP4_POSITION                0x00000007
#define _PWMCAP4_PWMCAP4_MASK                    0x00000080
#define _PWMCAP4_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP5_POSITION                0x00000008
#define _PWMCAP4_PWMCAP5_MASK                    0x00000100
#define _PWMCAP4_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP6_POSITION                0x00000009
#define _PWMCAP4_PWMCAP6_MASK                    0x00000200
#define _PWMCAP4_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP4_PWMCAP7_MASK                    0x00000400
#define _PWMCAP4_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP4_PWMCAP8_MASK                    0x00000800
#define _PWMCAP4_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP4_PWMCAP9_MASK                    0x00001000
#define _PWMCAP4_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP4_PWMCAP10_MASK                   0x00002000
#define _PWMCAP4_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP4_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP4_PWMCAP11_MASK                   0x00004000
#define _PWMCAP4_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP4_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP4_PWMCAP12_MASK                   0x00008000
#define _PWMCAP4_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON4_BPLL_POSITION                   0x00000000
#define _LEBCON4_BPLL_MASK                       0x00000001
#define _LEBCON4_BPLL_LENGTH                     0x00000001

#define _LEBCON4_BPLH_POSITION                   0x00000001
#define _LEBCON4_BPLH_MASK                       0x00000002
#define _LEBCON4_BPLH_LENGTH                     0x00000001

#define _LEBCON4_BPHL_POSITION                   0x00000002
#define _LEBCON4_BPHL_MASK                       0x00000004
#define _LEBCON4_BPHL_LENGTH                     0x00000001

#define _LEBCON4_BPHH_POSITION                   0x00000003
#define _LEBCON4_BPHH_MASK                       0x00000008
#define _LEBCON4_BPHH_LENGTH                     0x00000001

#define _LEBCON4_BCL_POSITION                    0x00000004
#define _LEBCON4_BCL_MASK                        0x00000010
#define _LEBCON4_BCL_LENGTH                      0x00000001

#define _LEBCON4_BCH_POSITION                    0x00000005
#define _LEBCON4_BCH_MASK                        0x00000020
#define _LEBCON4_BCH_LENGTH                      0x00000001

#define _LEBCON4_CLLEBEN_POSITION                0x0000000A
#define _LEBCON4_CLLEBEN_MASK                    0x00000400
#define _LEBCON4_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON4_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON4_FLTLEBEN_MASK                   0x00000800
#define _LEBCON4_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON4_PLF_POSITION                    0x0000000C
#define _LEBCON4_PLF_MASK                        0x00001000
#define _LEBCON4_PLF_LENGTH                      0x00000001

#define _LEBCON4_PLR_POSITION                    0x0000000D
#define _LEBCON4_PLR_MASK                        0x00002000
#define _LEBCON4_PLR_LENGTH                      0x00000001

#define _LEBCON4_PHF_POSITION                    0x0000000E
#define _LEBCON4_PHF_MASK                        0x00004000
#define _LEBCON4_PHF_LENGTH                      0x00000001

#define _LEBCON4_PHR_POSITION                    0x0000000F
#define _LEBCON4_PHR_MASK                        0x00008000
#define _LEBCON4_PHR_LENGTH                      0x00000001

#define _LEBDLY4_LEB_POSITION                    0x00000003
#define _LEBDLY4_LEB_MASK                        0x00000FF8
#define _LEBDLY4_LEB_LENGTH                      0x00000009

#define _LEBDLY4_LEB0_POSITION                   0x00000003
#define _LEBDLY4_LEB0_MASK                       0x00000008
#define _LEBDLY4_LEB0_LENGTH                     0x00000001

#define _LEBDLY4_LEB1_POSITION                   0x00000004
#define _LEBDLY4_LEB1_MASK                       0x00000010
#define _LEBDLY4_LEB1_LENGTH                     0x00000001

#define _LEBDLY4_LEB2_POSITION                   0x00000005
#define _LEBDLY4_LEB2_MASK                       0x00000020
#define _LEBDLY4_LEB2_LENGTH                     0x00000001

#define _LEBDLY4_LEB3_POSITION                   0x00000006
#define _LEBDLY4_LEB3_MASK                       0x00000040
#define _LEBDLY4_LEB3_LENGTH                     0x00000001

#define _LEBDLY4_LEB4_POSITION                   0x00000007
#define _LEBDLY4_LEB4_MASK                       0x00000080
#define _LEBDLY4_LEB4_LENGTH                     0x00000001

#define _LEBDLY4_LEB5_POSITION                   0x00000008
#define _LEBDLY4_LEB5_MASK                       0x00000100
#define _LEBDLY4_LEB5_LENGTH                     0x00000001

#define _LEBDLY4_LEB6_POSITION                   0x00000009
#define _LEBDLY4_LEB6_MASK                       0x00000200
#define _LEBDLY4_LEB6_LENGTH                     0x00000001

#define _LEBDLY4_LEB7_POSITION                   0x0000000A
#define _LEBDLY4_LEB7_MASK                       0x00000400
#define _LEBDLY4_LEB7_LENGTH                     0x00000001

#define _LEBDLY4_LEB8_POSITION                   0x0000000B
#define _LEBDLY4_LEB8_MASK                       0x00000800
#define _LEBDLY4_LEB8_LENGTH                     0x00000001

#define _AUXCON4_CHOPLEN_POSITION                0x00000000
#define _AUXCON4_CHOPLEN_MASK                    0x00000001
#define _AUXCON4_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPHEN_POSITION                0x00000001
#define _AUXCON4_CHOPHEN_MASK                    0x00000002
#define _AUXCON4_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPSEL_POSITION                0x00000002
#define _AUXCON4_CHOPSEL_MASK                    0x0000003C
#define _AUXCON4_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON4_BLANKSEL_POSITION               0x00000008
#define _AUXCON4_BLANKSEL_MASK                   0x00000F00
#define _AUXCON4_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON4_HRDDIS_POSITION                 0x0000000E
#define _AUXCON4_HRDDIS_MASK                     0x00004000
#define _AUXCON4_HRDDIS_LENGTH                   0x00000001

#define _AUXCON4_HRPDIS_POSITION                 0x0000000F
#define _AUXCON4_HRPDIS_MASK                     0x00008000
#define _AUXCON4_HRPDIS_LENGTH                   0x00000001

#define _AUXCON4_CHOPSEL0_POSITION               0x00000002
#define _AUXCON4_CHOPSEL0_MASK                   0x00000004
#define _AUXCON4_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL1_POSITION               0x00000003
#define _AUXCON4_CHOPSEL1_MASK                   0x00000008
#define _AUXCON4_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL2_POSITION               0x00000004
#define _AUXCON4_CHOPSEL2_MASK                   0x00000010
#define _AUXCON4_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL3_POSITION               0x00000005
#define _AUXCON4_CHOPSEL3_MASK                   0x00000020
#define _AUXCON4_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON4_BLANKSEL0_POSITION              0x00000008
#define _AUXCON4_BLANKSEL0_MASK                  0x00000100
#define _AUXCON4_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL1_POSITION              0x00000009
#define _AUXCON4_BLANKSEL1_MASK                  0x00000200
#define _AUXCON4_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON4_BLANKSEL2_MASK                  0x00000400
#define _AUXCON4_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON4_BLANKSEL3_MASK                  0x00000800
#define _AUXCON4_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON5_IUE_POSITION                    0x00000000
#define _PWMCON5_IUE_MASK                        0x00000001
#define _PWMCON5_IUE_LENGTH                      0x00000001

#define _PWMCON5_XPRES_POSITION                  0x00000001
#define _PWMCON5_XPRES_MASK                      0x00000002
#define _PWMCON5_XPRES_LENGTH                    0x00000001

#define _PWMCON5_CAM_POSITION                    0x00000002
#define _PWMCON5_CAM_MASK                        0x00000004
#define _PWMCON5_CAM_LENGTH                      0x00000001

#define _PWMCON5_MTBS_POSITION                   0x00000003
#define _PWMCON5_MTBS_MASK                       0x00000008
#define _PWMCON5_MTBS_LENGTH                     0x00000001

#define _PWMCON5_DTC_POSITION                    0x00000006
#define _PWMCON5_DTC_MASK                        0x000000C0
#define _PWMCON5_DTC_LENGTH                      0x00000002

#define _PWMCON5_MDCS_POSITION                   0x00000008
#define _PWMCON5_MDCS_MASK                       0x00000100
#define _PWMCON5_MDCS_LENGTH                     0x00000001

#define _PWMCON5_ITB_POSITION                    0x00000009
#define _PWMCON5_ITB_MASK                        0x00000200
#define _PWMCON5_ITB_LENGTH                      0x00000001

#define _PWMCON5_TRGIEN_POSITION                 0x0000000A
#define _PWMCON5_TRGIEN_MASK                     0x00000400
#define _PWMCON5_TRGIEN_LENGTH                   0x00000001

#define _PWMCON5_CLIEN_POSITION                  0x0000000B
#define _PWMCON5_CLIEN_MASK                      0x00000800
#define _PWMCON5_CLIEN_LENGTH                    0x00000001

#define _PWMCON5_FLTIEN_POSITION                 0x0000000C
#define _PWMCON5_FLTIEN_MASK                     0x00001000
#define _PWMCON5_FLTIEN_LENGTH                   0x00000001

#define _PWMCON5_TRGSTAT_POSITION                0x0000000D
#define _PWMCON5_TRGSTAT_MASK                    0x00002000
#define _PWMCON5_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON5_CLSTAT_POSITION                 0x0000000E
#define _PWMCON5_CLSTAT_MASK                     0x00004000
#define _PWMCON5_CLSTAT_LENGTH                   0x00000001

#define _PWMCON5_FLTSTAT_POSITION                0x0000000F
#define _PWMCON5_FLTSTAT_MASK                    0x00008000
#define _PWMCON5_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON5_DTC0_POSITION                   0x00000006
#define _PWMCON5_DTC0_MASK                       0x00000040
#define _PWMCON5_DTC0_LENGTH                     0x00000001

#define _PWMCON5_DTC1_POSITION                   0x00000007
#define _PWMCON5_DTC1_MASK                       0x00000080
#define _PWMCON5_DTC1_LENGTH                     0x00000001

#define _IOCON5_OSYNC_POSITION                   0x00000000
#define _IOCON5_OSYNC_MASK                       0x00000001
#define _IOCON5_OSYNC_LENGTH                     0x00000001

#define _IOCON5_SWAP_POSITION                    0x00000001
#define _IOCON5_SWAP_MASK                        0x00000002
#define _IOCON5_SWAP_LENGTH                      0x00000001

#define _IOCON5_CLDAT_POSITION                   0x00000002
#define _IOCON5_CLDAT_MASK                       0x0000000C
#define _IOCON5_CLDAT_LENGTH                     0x00000002

#define _IOCON5_FLTDAT_POSITION                  0x00000004
#define _IOCON5_FLTDAT_MASK                      0x00000030
#define _IOCON5_FLTDAT_LENGTH                    0x00000002

#define _IOCON5_OVRDAT_POSITION                  0x00000006
#define _IOCON5_OVRDAT_MASK                      0x000000C0
#define _IOCON5_OVRDAT_LENGTH                    0x00000002

#define _IOCON5_OVRENL_POSITION                  0x00000008
#define _IOCON5_OVRENL_MASK                      0x00000100
#define _IOCON5_OVRENL_LENGTH                    0x00000001

#define _IOCON5_OVRENH_POSITION                  0x00000009
#define _IOCON5_OVRENH_MASK                      0x00000200
#define _IOCON5_OVRENH_LENGTH                    0x00000001

#define _IOCON5_PMOD_POSITION                    0x0000000A
#define _IOCON5_PMOD_MASK                        0x00000C00
#define _IOCON5_PMOD_LENGTH                      0x00000002

#define _IOCON5_POLL_POSITION                    0x0000000C
#define _IOCON5_POLL_MASK                        0x00001000
#define _IOCON5_POLL_LENGTH                      0x00000001

#define _IOCON5_POLH_POSITION                    0x0000000D
#define _IOCON5_POLH_MASK                        0x00002000
#define _IOCON5_POLH_LENGTH                      0x00000001

#define _IOCON5_PENL_POSITION                    0x0000000E
#define _IOCON5_PENL_MASK                        0x00004000
#define _IOCON5_PENL_LENGTH                      0x00000001

#define _IOCON5_PENH_POSITION                    0x0000000F
#define _IOCON5_PENH_MASK                        0x00008000
#define _IOCON5_PENH_LENGTH                      0x00000001

#define _IOCON5_CLDAT0_POSITION                  0x00000002
#define _IOCON5_CLDAT0_MASK                      0x00000004
#define _IOCON5_CLDAT0_LENGTH                    0x00000001

#define _IOCON5_CLDAT1_POSITION                  0x00000003
#define _IOCON5_CLDAT1_MASK                      0x00000008
#define _IOCON5_CLDAT1_LENGTH                    0x00000001

#define _IOCON5_FLTDAT0_POSITION                 0x00000004
#define _IOCON5_FLTDAT0_MASK                     0x00000010
#define _IOCON5_FLTDAT0_LENGTH                   0x00000001

#define _IOCON5_FLTDAT1_POSITION                 0x00000005
#define _IOCON5_FLTDAT1_MASK                     0x00000020
#define _IOCON5_FLTDAT1_LENGTH                   0x00000001

#define _IOCON5_OVRDAT0_POSITION                 0x00000006
#define _IOCON5_OVRDAT0_MASK                     0x00000040
#define _IOCON5_OVRDAT0_LENGTH                   0x00000001

#define _IOCON5_OVRDAT1_POSITION                 0x00000007
#define _IOCON5_OVRDAT1_MASK                     0x00000080
#define _IOCON5_OVRDAT1_LENGTH                   0x00000001

#define _IOCON5_PMOD0_POSITION                   0x0000000A
#define _IOCON5_PMOD0_MASK                       0x00000400
#define _IOCON5_PMOD0_LENGTH                     0x00000001

#define _IOCON5_PMOD1_POSITION                   0x0000000B
#define _IOCON5_PMOD1_MASK                       0x00000800
#define _IOCON5_PMOD1_LENGTH                     0x00000001

#define _FCLCON5_FLTMOD_POSITION                 0x00000000
#define _FCLCON5_FLTMOD_MASK                     0x00000003
#define _FCLCON5_FLTMOD_LENGTH                   0x00000002

#define _FCLCON5_FLTPOL_POSITION                 0x00000002
#define _FCLCON5_FLTPOL_MASK                     0x00000004
#define _FCLCON5_FLTPOL_LENGTH                   0x00000001

#define _FCLCON5_FLTSRC_POSITION                 0x00000003
#define _FCLCON5_FLTSRC_MASK                     0x000000F8
#define _FCLCON5_FLTSRC_LENGTH                   0x00000005

#define _FCLCON5_CLMOD_POSITION                  0x00000008
#define _FCLCON5_CLMOD_MASK                      0x00000100
#define _FCLCON5_CLMOD_LENGTH                    0x00000001

#define _FCLCON5_CLPOL_POSITION                  0x00000009
#define _FCLCON5_CLPOL_MASK                      0x00000200
#define _FCLCON5_CLPOL_LENGTH                    0x00000001

#define _FCLCON5_CLSRC_POSITION                  0x0000000A
#define _FCLCON5_CLSRC_MASK                      0x00007C00
#define _FCLCON5_CLSRC_LENGTH                    0x00000005

#define _FCLCON5_IFLTMOD_POSITION                0x0000000F
#define _FCLCON5_IFLTMOD_MASK                    0x00008000
#define _FCLCON5_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON5_FLTMOD0_POSITION                0x00000000
#define _FCLCON5_FLTMOD0_MASK                    0x00000001
#define _FCLCON5_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON5_FLTMOD1_POSITION                0x00000001
#define _FCLCON5_FLTMOD1_MASK                    0x00000002
#define _FCLCON5_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC0_POSITION                0x00000003
#define _FCLCON5_FLTSRC0_MASK                    0x00000008
#define _FCLCON5_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC1_POSITION                0x00000004
#define _FCLCON5_FLTSRC1_MASK                    0x00000010
#define _FCLCON5_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC2_POSITION                0x00000005
#define _FCLCON5_FLTSRC2_MASK                    0x00000020
#define _FCLCON5_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC3_POSITION                0x00000006
#define _FCLCON5_FLTSRC3_MASK                    0x00000040
#define _FCLCON5_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC4_POSITION                0x00000007
#define _FCLCON5_FLTSRC4_MASK                    0x00000080
#define _FCLCON5_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON5_CLSRC0_POSITION                 0x0000000A
#define _FCLCON5_CLSRC0_MASK                     0x00000400
#define _FCLCON5_CLSRC0_LENGTH                   0x00000001

#define _FCLCON5_CLSRC1_POSITION                 0x0000000B
#define _FCLCON5_CLSRC1_MASK                     0x00000800
#define _FCLCON5_CLSRC1_LENGTH                   0x00000001

#define _FCLCON5_CLSRC2_POSITION                 0x0000000C
#define _FCLCON5_CLSRC2_MASK                     0x00001000
#define _FCLCON5_CLSRC2_LENGTH                   0x00000001

#define _FCLCON5_CLSRC3_POSITION                 0x0000000D
#define _FCLCON5_CLSRC3_MASK                     0x00002000
#define _FCLCON5_CLSRC3_LENGTH                   0x00000001

#define _FCLCON5_CLSRC4_POSITION                 0x0000000E
#define _FCLCON5_CLSRC4_MASK                     0x00004000
#define _FCLCON5_CLSRC4_LENGTH                   0x00000001

#define _TRIG5_TRGCMP_POSITION                   0x00000003
#define _TRIG5_TRGCMP_MASK                       0x0000FFF8
#define _TRIG5_TRGCMP_LENGTH                     0x0000000D

#define _TRIG5_TRGCMP0_POSITION                  0x00000003
#define _TRIG5_TRGCMP0_MASK                      0x00000008
#define _TRIG5_TRGCMP0_LENGTH                    0x00000001

#define _TRIG5_TRGCMP1_POSITION                  0x00000004
#define _TRIG5_TRGCMP1_MASK                      0x00000010
#define _TRIG5_TRGCMP1_LENGTH                    0x00000001

#define _TRIG5_TRGCMP2_POSITION                  0x00000005
#define _TRIG5_TRGCMP2_MASK                      0x00000020
#define _TRIG5_TRGCMP2_LENGTH                    0x00000001

#define _TRIG5_TRGCMP3_POSITION                  0x00000006
#define _TRIG5_TRGCMP3_MASK                      0x00000040
#define _TRIG5_TRGCMP3_LENGTH                    0x00000001

#define _TRIG5_TRGCMP4_POSITION                  0x00000007
#define _TRIG5_TRGCMP4_MASK                      0x00000080
#define _TRIG5_TRGCMP4_LENGTH                    0x00000001

#define _TRIG5_TRGCMP5_POSITION                  0x00000008
#define _TRIG5_TRGCMP5_MASK                      0x00000100
#define _TRIG5_TRGCMP5_LENGTH                    0x00000001

#define _TRIG5_TRGCMP6_POSITION                  0x00000009
#define _TRIG5_TRGCMP6_MASK                      0x00000200
#define _TRIG5_TRGCMP6_LENGTH                    0x00000001

#define _TRIG5_TRGCMP7_POSITION                  0x0000000A
#define _TRIG5_TRGCMP7_MASK                      0x00000400
#define _TRIG5_TRGCMP7_LENGTH                    0x00000001

#define _TRIG5_TRGCMP8_POSITION                  0x0000000B
#define _TRIG5_TRGCMP8_MASK                      0x00000800
#define _TRIG5_TRGCMP8_LENGTH                    0x00000001

#define _TRIG5_TRGCMP9_POSITION                  0x0000000C
#define _TRIG5_TRGCMP9_MASK                      0x00001000
#define _TRIG5_TRGCMP9_LENGTH                    0x00000001

#define _TRIG5_TRGCMP10_POSITION                 0x0000000D
#define _TRIG5_TRGCMP10_MASK                     0x00002000
#define _TRIG5_TRGCMP10_LENGTH                   0x00000001

#define _TRIG5_TRGCMP11_POSITION                 0x0000000E
#define _TRIG5_TRGCMP11_MASK                     0x00004000
#define _TRIG5_TRGCMP11_LENGTH                   0x00000001

#define _TRIG5_TRGCMP12_POSITION                 0x0000000F
#define _TRIG5_TRGCMP12_MASK                     0x00008000
#define _TRIG5_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON5_TRGSTRT_POSITION                0x00000000
#define _TRGCON5_TRGSTRT_MASK                    0x0000003F
#define _TRGCON5_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON5_DTM_POSITION                    0x00000007
#define _TRGCON5_DTM_MASK                        0x00000080
#define _TRGCON5_DTM_LENGTH                      0x00000001

#define _TRGCON5_TRGDIV_POSITION                 0x0000000C
#define _TRGCON5_TRGDIV_MASK                     0x0000F000
#define _TRGCON5_TRGDIV_LENGTH                   0x00000004

#define _TRGCON5_TRGSTRT0_POSITION               0x00000000
#define _TRGCON5_TRGSTRT0_MASK                   0x00000001
#define _TRGCON5_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT1_POSITION               0x00000001
#define _TRGCON5_TRGSTRT1_MASK                   0x00000002
#define _TRGCON5_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT2_POSITION               0x00000002
#define _TRGCON5_TRGSTRT2_MASK                   0x00000004
#define _TRGCON5_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT3_POSITION               0x00000003
#define _TRGCON5_TRGSTRT3_MASK                   0x00000008
#define _TRGCON5_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT4_POSITION               0x00000004
#define _TRGCON5_TRGSTRT4_MASK                   0x00000010
#define _TRGCON5_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT5_POSITION               0x00000005
#define _TRGCON5_TRGSTRT5_MASK                   0x00000020
#define _TRGCON5_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON5_TRGDIV0_POSITION                0x0000000C
#define _TRGCON5_TRGDIV0_MASK                    0x00001000
#define _TRGCON5_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV1_POSITION                0x0000000D
#define _TRGCON5_TRGDIV1_MASK                    0x00002000
#define _TRGCON5_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV2_POSITION                0x0000000E
#define _TRGCON5_TRGDIV2_MASK                    0x00004000
#define _TRGCON5_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV3_POSITION                0x0000000F
#define _TRGCON5_TRGDIV3_MASK                    0x00008000
#define _TRGCON5_TRGDIV3_LENGTH                  0x00000001

#define _STRIG5_STRGCMP_POSITION                 0x00000003
#define _STRIG5_STRGCMP_MASK                     0x0000FFF8
#define _STRIG5_STRGCMP_LENGTH                   0x0000000D

#define _STRIG5_STRGCMP0_POSITION                0x00000003
#define _STRIG5_STRGCMP0_MASK                    0x00000008
#define _STRIG5_STRGCMP0_LENGTH                  0x00000001

#define _STRIG5_STRGCMP1_POSITION                0x00000004
#define _STRIG5_STRGCMP1_MASK                    0x00000010
#define _STRIG5_STRGCMP1_LENGTH                  0x00000001

#define _STRIG5_STRGCMP2_POSITION                0x00000005
#define _STRIG5_STRGCMP2_MASK                    0x00000020
#define _STRIG5_STRGCMP2_LENGTH                  0x00000001

#define _STRIG5_STRGCMP3_POSITION                0x00000006
#define _STRIG5_STRGCMP3_MASK                    0x00000040
#define _STRIG5_STRGCMP3_LENGTH                  0x00000001

#define _STRIG5_STRGCMP4_POSITION                0x00000007
#define _STRIG5_STRGCMP4_MASK                    0x00000080
#define _STRIG5_STRGCMP4_LENGTH                  0x00000001

#define _STRIG5_STRGCMP5_POSITION                0x00000008
#define _STRIG5_STRGCMP5_MASK                    0x00000100
#define _STRIG5_STRGCMP5_LENGTH                  0x00000001

#define _STRIG5_STRGCMP6_POSITION                0x00000009
#define _STRIG5_STRGCMP6_MASK                    0x00000200
#define _STRIG5_STRGCMP6_LENGTH                  0x00000001

#define _STRIG5_STRGCMP7_POSITION                0x0000000A
#define _STRIG5_STRGCMP7_MASK                    0x00000400
#define _STRIG5_STRGCMP7_LENGTH                  0x00000001

#define _STRIG5_STRGCMP8_POSITION                0x0000000B
#define _STRIG5_STRGCMP8_MASK                    0x00000800
#define _STRIG5_STRGCMP8_LENGTH                  0x00000001

#define _STRIG5_STRGCMP9_POSITION                0x0000000C
#define _STRIG5_STRGCMP9_MASK                    0x00001000
#define _STRIG5_STRGCMP9_LENGTH                  0x00000001

#define _STRIG5_STRGCMP10_POSITION               0x0000000D
#define _STRIG5_STRGCMP10_MASK                   0x00002000
#define _STRIG5_STRGCMP10_LENGTH                 0x00000001

#define _STRIG5_STRGCMP11_POSITION               0x0000000E
#define _STRIG5_STRGCMP11_MASK                   0x00004000
#define _STRIG5_STRGCMP11_LENGTH                 0x00000001

#define _STRIG5_STRGCMP12_POSITION               0x0000000F
#define _STRIG5_STRGCMP12_MASK                   0x00008000
#define _STRIG5_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP5_PWMCAP_POSITION                 0x00000003
#define _PWMCAP5_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP5_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP5_PWMCAP0_POSITION                0x00000003
#define _PWMCAP5_PWMCAP0_MASK                    0x00000008
#define _PWMCAP5_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP1_POSITION                0x00000004
#define _PWMCAP5_PWMCAP1_MASK                    0x00000010
#define _PWMCAP5_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP2_POSITION                0x00000005
#define _PWMCAP5_PWMCAP2_MASK                    0x00000020
#define _PWMCAP5_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP3_POSITION                0x00000006
#define _PWMCAP5_PWMCAP3_MASK                    0x00000040
#define _PWMCAP5_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP4_POSITION                0x00000007
#define _PWMCAP5_PWMCAP4_MASK                    0x00000080
#define _PWMCAP5_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP5_POSITION                0x00000008
#define _PWMCAP5_PWMCAP5_MASK                    0x00000100
#define _PWMCAP5_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP6_POSITION                0x00000009
#define _PWMCAP5_PWMCAP6_MASK                    0x00000200
#define _PWMCAP5_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP5_PWMCAP7_MASK                    0x00000400
#define _PWMCAP5_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP5_PWMCAP8_MASK                    0x00000800
#define _PWMCAP5_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP5_PWMCAP9_MASK                    0x00001000
#define _PWMCAP5_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP5_PWMCAP10_MASK                   0x00002000
#define _PWMCAP5_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP5_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP5_PWMCAP11_MASK                   0x00004000
#define _PWMCAP5_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP5_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP5_PWMCAP12_MASK                   0x00008000
#define _PWMCAP5_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON5_BPLL_POSITION                   0x00000000
#define _LEBCON5_BPLL_MASK                       0x00000001
#define _LEBCON5_BPLL_LENGTH                     0x00000001

#define _LEBCON5_BPLH_POSITION                   0x00000001
#define _LEBCON5_BPLH_MASK                       0x00000002
#define _LEBCON5_BPLH_LENGTH                     0x00000001

#define _LEBCON5_BPHL_POSITION                   0x00000002
#define _LEBCON5_BPHL_MASK                       0x00000004
#define _LEBCON5_BPHL_LENGTH                     0x00000001

#define _LEBCON5_BPHH_POSITION                   0x00000003
#define _LEBCON5_BPHH_MASK                       0x00000008
#define _LEBCON5_BPHH_LENGTH                     0x00000001

#define _LEBCON5_BCL_POSITION                    0x00000004
#define _LEBCON5_BCL_MASK                        0x00000010
#define _LEBCON5_BCL_LENGTH                      0x00000001

#define _LEBCON5_BCH_POSITION                    0x00000005
#define _LEBCON5_BCH_MASK                        0x00000020
#define _LEBCON5_BCH_LENGTH                      0x00000001

#define _LEBCON5_CLLEBEN_POSITION                0x0000000A
#define _LEBCON5_CLLEBEN_MASK                    0x00000400
#define _LEBCON5_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON5_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON5_FLTLEBEN_MASK                   0x00000800
#define _LEBCON5_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON5_PLF_POSITION                    0x0000000C
#define _LEBCON5_PLF_MASK                        0x00001000
#define _LEBCON5_PLF_LENGTH                      0x00000001

#define _LEBCON5_PLR_POSITION                    0x0000000D
#define _LEBCON5_PLR_MASK                        0x00002000
#define _LEBCON5_PLR_LENGTH                      0x00000001

#define _LEBCON5_PHF_POSITION                    0x0000000E
#define _LEBCON5_PHF_MASK                        0x00004000
#define _LEBCON5_PHF_LENGTH                      0x00000001

#define _LEBCON5_PHR_POSITION                    0x0000000F
#define _LEBCON5_PHR_MASK                        0x00008000
#define _LEBCON5_PHR_LENGTH                      0x00000001

#define _LEBDLY5_LEB_POSITION                    0x00000003
#define _LEBDLY5_LEB_MASK                        0x00000FF8
#define _LEBDLY5_LEB_LENGTH                      0x00000009

#define _LEBDLY5_LEB0_POSITION                   0x00000003
#define _LEBDLY5_LEB0_MASK                       0x00000008
#define _LEBDLY5_LEB0_LENGTH                     0x00000001

#define _LEBDLY5_LEB1_POSITION                   0x00000004
#define _LEBDLY5_LEB1_MASK                       0x00000010
#define _LEBDLY5_LEB1_LENGTH                     0x00000001

#define _LEBDLY5_LEB2_POSITION                   0x00000005
#define _LEBDLY5_LEB2_MASK                       0x00000020
#define _LEBDLY5_LEB2_LENGTH                     0x00000001

#define _LEBDLY5_LEB3_POSITION                   0x00000006
#define _LEBDLY5_LEB3_MASK                       0x00000040
#define _LEBDLY5_LEB3_LENGTH                     0x00000001

#define _LEBDLY5_LEB4_POSITION                   0x00000007
#define _LEBDLY5_LEB4_MASK                       0x00000080
#define _LEBDLY5_LEB4_LENGTH                     0x00000001

#define _LEBDLY5_LEB5_POSITION                   0x00000008
#define _LEBDLY5_LEB5_MASK                       0x00000100
#define _LEBDLY5_LEB5_LENGTH                     0x00000001

#define _LEBDLY5_LEB6_POSITION                   0x00000009
#define _LEBDLY5_LEB6_MASK                       0x00000200
#define _LEBDLY5_LEB6_LENGTH                     0x00000001

#define _LEBDLY5_LEB7_POSITION                   0x0000000A
#define _LEBDLY5_LEB7_MASK                       0x00000400
#define _LEBDLY5_LEB7_LENGTH                     0x00000001

#define _LEBDLY5_LEB8_POSITION                   0x0000000B
#define _LEBDLY5_LEB8_MASK                       0x00000800
#define _LEBDLY5_LEB8_LENGTH                     0x00000001

#define _AUXCON5_CHOPLEN_POSITION                0x00000000
#define _AUXCON5_CHOPLEN_MASK                    0x00000001
#define _AUXCON5_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON5_CHOPHEN_POSITION                0x00000001
#define _AUXCON5_CHOPHEN_MASK                    0x00000002
#define _AUXCON5_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON5_CHOPSEL_POSITION                0x00000002
#define _AUXCON5_CHOPSEL_MASK                    0x0000003C
#define _AUXCON5_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON5_BLANKSEL_POSITION               0x00000008
#define _AUXCON5_BLANKSEL_MASK                   0x00000F00
#define _AUXCON5_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON5_HRDDIS_POSITION                 0x0000000E
#define _AUXCON5_HRDDIS_MASK                     0x00004000
#define _AUXCON5_HRDDIS_LENGTH                   0x00000001

#define _AUXCON5_HRPDIS_POSITION                 0x0000000F
#define _AUXCON5_HRPDIS_MASK                     0x00008000
#define _AUXCON5_HRPDIS_LENGTH                   0x00000001

#define _AUXCON5_CHOPSEL0_POSITION               0x00000002
#define _AUXCON5_CHOPSEL0_MASK                   0x00000004
#define _AUXCON5_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL1_POSITION               0x00000003
#define _AUXCON5_CHOPSEL1_MASK                   0x00000008
#define _AUXCON5_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL2_POSITION               0x00000004
#define _AUXCON5_CHOPSEL2_MASK                   0x00000010
#define _AUXCON5_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL3_POSITION               0x00000005
#define _AUXCON5_CHOPSEL3_MASK                   0x00000020
#define _AUXCON5_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON5_BLANKSEL0_POSITION              0x00000008
#define _AUXCON5_BLANKSEL0_MASK                  0x00000100
#define _AUXCON5_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL1_POSITION              0x00000009
#define _AUXCON5_BLANKSEL1_MASK                  0x00000200
#define _AUXCON5_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON5_BLANKSEL2_MASK                  0x00000400
#define _AUXCON5_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON5_BLANKSEL3_MASK                  0x00000800
#define _AUXCON5_BLANKSEL3_LENGTH                0x00000001

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _CNENA_CNIEA0_POSITION                   0x00000000
#define _CNENA_CNIEA0_MASK                       0x00000001
#define _CNENA_CNIEA0_LENGTH                     0x00000001

#define _CNENA_CNIEA1_POSITION                   0x00000001
#define _CNENA_CNIEA1_MASK                       0x00000002
#define _CNENA_CNIEA1_LENGTH                     0x00000001

#define _CNENA_CNIEA2_POSITION                   0x00000002
#define _CNENA_CNIEA2_MASK                       0x00000004
#define _CNENA_CNIEA2_LENGTH                     0x00000001

#define _CNENA_CNIEA3_POSITION                   0x00000003
#define _CNENA_CNIEA3_MASK                       0x00000008
#define _CNENA_CNIEA3_LENGTH                     0x00000001

#define _CNENA_CNIEA4_POSITION                   0x00000004
#define _CNENA_CNIEA4_MASK                       0x00000010
#define _CNENA_CNIEA4_LENGTH                     0x00000001

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _CNENB_CNIEB0_POSITION                   0x00000000
#define _CNENB_CNIEB0_MASK                       0x00000001
#define _CNENB_CNIEB0_LENGTH                     0x00000001

#define _CNENB_CNIEB1_POSITION                   0x00000001
#define _CNENB_CNIEB1_MASK                       0x00000002
#define _CNENB_CNIEB1_LENGTH                     0x00000001

#define _CNENB_CNIEB2_POSITION                   0x00000002
#define _CNENB_CNIEB2_MASK                       0x00000004
#define _CNENB_CNIEB2_LENGTH                     0x00000001

#define _CNENB_CNIEB3_POSITION                   0x00000003
#define _CNENB_CNIEB3_MASK                       0x00000008
#define _CNENB_CNIEB3_LENGTH                     0x00000001

#define _CNENB_CNIEB4_POSITION                   0x00000004
#define _CNENB_CNIEB4_MASK                       0x00000010
#define _CNENB_CNIEB4_LENGTH                     0x00000001

#define _CNENB_CNIEB5_POSITION                   0x00000005
#define _CNENB_CNIEB5_MASK                       0x00000020
#define _CNENB_CNIEB5_LENGTH                     0x00000001

#define _CNENB_CNIEB6_POSITION                   0x00000006
#define _CNENB_CNIEB6_MASK                       0x00000040
#define _CNENB_CNIEB6_LENGTH                     0x00000001

#define _CNENB_CNIEB7_POSITION                   0x00000007
#define _CNENB_CNIEB7_MASK                       0x00000080
#define _CNENB_CNIEB7_LENGTH                     0x00000001

#define _CNENB_CNIEB8_POSITION                   0x00000008
#define _CNENB_CNIEB8_MASK                       0x00000100
#define _CNENB_CNIEB8_LENGTH                     0x00000001

#define _CNENB_CNIEB9_POSITION                   0x00000009
#define _CNENB_CNIEB9_MASK                       0x00000200
#define _CNENB_CNIEB9_LENGTH                     0x00000001

#define _CNENB_CNIEB10_POSITION                  0x0000000A
#define _CNENB_CNIEB10_MASK                      0x00000400
#define _CNENB_CNIEB10_LENGTH                    0x00000001

#define _CNENB_CNIEB11_POSITION                  0x0000000B
#define _CNENB_CNIEB11_MASK                      0x00000800
#define _CNENB_CNIEB11_LENGTH                    0x00000001

#define _CNENB_CNIEB12_POSITION                  0x0000000C
#define _CNENB_CNIEB12_MASK                      0x00001000
#define _CNENB_CNIEB12_LENGTH                    0x00000001

#define _CNENB_CNIEB13_POSITION                  0x0000000D
#define _CNENB_CNIEB13_MASK                      0x00002000
#define _CNENB_CNIEB13_LENGTH                    0x00000001

#define _CNENB_CNIEB14_POSITION                  0x0000000E
#define _CNENB_CNIEB14_MASK                      0x00004000
#define _CNENB_CNIEB14_LENGTH                    0x00000001

#define _CNENB_CNIEB15_POSITION                  0x0000000F
#define _CNENB_CNIEB15_MASK                      0x00008000
#define _CNENB_CNIEB15_LENGTH                    0x00000001

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB3_POSITION                   0x00000003
#define _CNPUB_CNPUB3_MASK                       0x00000008
#define _CNPUB_CNPUB3_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB5_POSITION                   0x00000005
#define _CNPUB_CNPUB5_MASK                       0x00000020
#define _CNPUB_CNPUB5_LENGTH                     0x00000001

#define _CNPUB_CNPUB6_POSITION                   0x00000006
#define _CNPUB_CNPUB6_MASK                       0x00000040
#define _CNPUB_CNPUB6_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB10_POSITION                  0x0000000A
#define _CNPUB_CNPUB10_MASK                      0x00000400
#define _CNPUB_CNPUB10_LENGTH                    0x00000001

#define _CNPUB_CNPUB11_POSITION                  0x0000000B
#define _CNPUB_CNPUB11_MASK                      0x00000800
#define _CNPUB_CNPUB11_LENGTH                    0x00000001

#define _CNPUB_CNPUB12_POSITION                  0x0000000C
#define _CNPUB_CNPUB12_MASK                      0x00001000
#define _CNPUB_CNPUB12_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB3_POSITION                   0x00000003
#define _CNPDB_CNPDB3_MASK                       0x00000008
#define _CNPDB_CNPDB3_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB5_POSITION                   0x00000005
#define _CNPDB_CNPDB5_MASK                       0x00000020
#define _CNPDB_CNPDB5_LENGTH                     0x00000001

#define _CNPDB_CNPDB6_POSITION                   0x00000006
#define _CNPDB_CNPDB6_MASK                       0x00000040
#define _CNPDB_CNPDB6_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB10_POSITION                  0x0000000A
#define _CNPDB_CNPDB10_MASK                      0x00000400
#define _CNPDB_CNPDB10_LENGTH                    0x00000001

#define _CNPDB_CNPDB11_POSITION                  0x0000000B
#define _CNPDB_CNPDB11_MASK                      0x00000800
#define _CNPDB_CNPDB11_LENGTH                    0x00000001

#define _CNPDB_CNPDB12_POSITION                  0x0000000C
#define _CNPDB_CNPDB12_MASK                      0x00001000
#define _CNPDB_CNPDB12_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB5_POSITION                   0x00000005
#define _ANSELB_ANSB5_MASK                       0x00000020
#define _ANSELB_ANSB5_LENGTH                     0x00000001

#define _ANSELB_ANSB6_POSITION                   0x00000006
#define _ANSELB_ANSB6_MASK                       0x00000040
#define _ANSELB_ANSB6_LENGTH                     0x00000001

#define _ANSELB_ANSB7_POSITION                   0x00000007
#define _ANSELB_ANSB7_MASK                       0x00000080
#define _ANSELB_ANSB7_LENGTH                     0x00000001

#define _ANSELB_ANSB9_POSITION                   0x00000009
#define _ANSELB_ANSB9_MASK                       0x00000200
#define _ANSELB_ANSB9_LENGTH                     0x00000001

#define _ANSELB_ANSB10_POSITION                  0x0000000A
#define _ANSELB_ANSB10_MASK                      0x00000400
#define _ANSELB_ANSB10_LENGTH                    0x00000001

#define _APPS_APIFUL_POSITION                    0x00000000
#define _APPS_APIFUL_MASK                        0x00000001
#define _APPS_APIFUL_LENGTH                      0x00000001

#define _APPS_APIOV_POSITION                     0x00000001
#define _APPS_APIOV_MASK                         0x00000002
#define _APPS_APIOV_LENGTH                       0x00000001

#define _APPS_APOFUL_POSITION                    0x00000002
#define _APPS_APOFUL_MASK                        0x00000004
#define _APPS_APOFUL_LENGTH                      0x00000001

#define _APPS_APOOV_POSITION                     0x00000003
#define _APPS_APOOV_MASK                         0x00000008
#define _APPS_APOOV_LENGTH                       0x00000001

#define _APPS_STRFUL_POSITION                    0x00000004
#define _APPS_STRFUL_MASK                        0x00000010
#define _APPS_STRFUL_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FSEC (0x5780)                               */

extern __attribute__((space(prog))) unsigned int _FSEC;
#define _FSEC(x) __attribute__((section("__FSEC.sec"),space(prog))) unsigned int _FSEC = (x);

/*
** Only one invocation of FSEC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSEC.
** Multiple options may be combined, as shown:
**
** _FSEC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Write-Protect bit:
**     BWRP_ON              Boot Segment is write protected
**     BWRP_OFF             Boot Segment may be written
**
**   Boot Segment Code-Protect Level bits:
**     BSS_HIGH             High Security
**     BSS_STNDRD           Standard Security
**     BSS_DISABLED         No Protection (other than BWRP)
**
**   Boot Segment Control bit:
**     BSEN_ON              Boot Segment size determined by FBSLIM
**     BSEN_OFF             No Boot Segment
**
**   General Segment Write-Protect bit:
**     GWRP_ON              General Segment is write protected
**     GWRP_OFF             General Segment may be written
**
**   General Segment Code-Protect Level bits:
**     GSS_HIGH             High Security
**     GSS_STNDRD           Standard Security
**     GSS_DISABLED         No Protection (other than GWRP)
**
**   Configuration Segment Write-Protect bit:
**     CWRP_ON              Configuration Segment is write protected
**     CWRP_OFF             Configuration Segment may be written
**
**   Configuration Segment Code-Protect Level bits:
**     CSS_HIGH             High Security
**     CSS_ENHNCD           Enhanced Security
**     CSS_STNDRD           Standard Security
**     CSS_DISABLED         No Protection (other than CWRP)
**
**   Alternate Interrupt Vector Table bit:
**     AIVTDIS_ON           Enabled AIVT
**     AIVTDIS_OFF          Disabled AIVT
**
*/

#define BWRP_ON              0xFFFE
#define BWRP_OFF             0xFFFF

#define BSS_HIGH             0xFFF9
#define BSS_STNDRD           0xFFFD
#define BSS_DISABLED         0xFFFF

#define BSEN_ON              0xFFF7
#define BSEN_OFF             0xFFFF

#define GWRP_ON              0xFFDF
#define GWRP_OFF             0xFFFF

#define GSS_HIGH             0xFF3F
#define GSS_STNDRD           0xFFBF
#define GSS_DISABLED         0xFFFF

#define CWRP_ON              0xFEFF
#define CWRP_OFF             0xFFFF

#define CSS_HIGH             0xF1FF
#define CSS_ENHNCD           0xF9FF
#define CSS_STNDRD           0xFDFF
#define CSS_DISABLED         0xFFFF

#define AIVTDIS_ON           0x7FFF
#define AIVTDIS_OFF          0xFFFF

/* Register FBSLIM (0x5790)                               */

extern __attribute__((space(prog))) unsigned int _FBSLIM;
#define _FBSLIM(x) __attribute__((section("__FBSLIM.sec"),space(prog))) unsigned int _FBSLIM = (x);

/*
** Only one invocation of FBSLIM should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBSLIM.
** Multiple options may be combined, as shown:
**
** _FBSLIM( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Flash Page Address Limit bits:
**     BSLIM_BSLIM          Boot Segment Flash page address  limit
**
*/

#define BSLIM_BSLIM          0xE000

/* Register FSIGN (0x5794)                               */

extern __attribute__((space(prog))) unsigned int _FSIGN;
#define _FSIGN(x) __attribute__((section("__FSIGN.sec"),space(prog))) unsigned int _FSIGN = (x);

/*
** Only one invocation of FSIGN should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSIGN.
** Multiple options may be combined, as shown:
**
** _FSIGN( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register FOSCSEL (0x5798)                               */

extern __attribute__((space(prog))) unsigned int _FOSCSEL;
#define _FOSCSEL(x) __attribute__((section("__FOSCSEL.sec"),space(prog))) unsigned int _FOSCSEL = (x);

/*
** Only one invocation of FOSCSEL should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSCSEL.
** Multiple options may be combined, as shown:
**
** _FOSCSEL( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Oscillator Source Selection:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) 
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV16       Fast RC Oscillator with divide-by-16
**     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
**
**   Two-speed Oscillator Start-up Enable bit:
**     IESO_OFF             Start up with user-selected oscillator source
**     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
**
*/

#define FNOSC_FRC            0xFFF8
#define FNOSC_FRCPLL         0xFFF9
#define FNOSC_PRI            0xFFFA
#define FNOSC_PRIPLL         0xFFFB
#define FNOSC_LPRC           0xFFFD
#define FNOSC_FRCDIV16       0xFFFE
#define FNOSC_FRCDIVN        0xFFFF

#define IESO_OFF             0xFF7F
#define IESO_ON              0xFFFF

/* Register FOSC (0x579c)                               */

extern __attribute__((space(prog))) unsigned int _FOSC;
#define _FOSC(x) __attribute__((section("__FOSC.sec"),space(prog))) unsigned int _FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** _FOSC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Mode Select bits:
**     POSCMD_EC            EC (External Clock) Mode
**     POSCMD_XT            XT Crystal Oscillator Mode
**     POSCMD_HS            HS Crystal Oscillator Mode
**     POSCMD_NONE          Primary Oscillator disabled
**
**   OSC2 Pin Function bit:
**     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
**     OSCIOFNC_OFF         OSC2 is clock output
**
**   Peripheral pin select configuration bit:
**     IOL1WAY_OFF          Allow multiple reconfigurations
**     IOL1WAY_ON           Allow only one reconfiguration
**
**   Clock Switching Mode bits:
**     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
**
**   PLL Lock Enable Bit:
**     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal
**     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid
**
*/

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

#define OSCIOFNC_ON          0xFFFB
#define OSCIOFNC_OFF         0xFFFF

#define IOL1WAY_OFF          0xFFDF
#define IOL1WAY_ON           0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

#define PLLKEN_OFF           0xFEFF
#define PLLKEN_ON            0xFFFF

/* Register FWDT (0x57a0)                               */

extern __attribute__((space(prog))) unsigned int _FWDT;
#define _FWDT(x) __attribute__((section("__FWDT.sec"),space(prog))) unsigned int _FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** _FWDT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler bits:
**     WDTPOST_PS1          1:1
**     WDTPOST_PS2          1:2
**     WDTPOST_PS4          1:4
**     WDTPOST_PS8          1:8
**     WDTPOST_PS16         1:16
**     WDTPOST_PS32         1:32
**     WDTPOST_PS64         1:64
**     WDTPOST_PS128        1:128
**     WDTPOST_PS256        1:256
**     WDTPOST_PS512        1:512
**     WDTPOST_PS1024       1:1,024
**     WDTPOST_PS2048       1:2,048
**     WDTPOST_PS4096       1:4,096
**     WDTPOST_PS8192       1:8,192
**     WDTPOST_PS16384      1:16,384
**     WDTPOST_PS32768      1:32,768
**
**   Watchdog Timer Prescaler bit:
**     WDTPRE_PR32          1:32
**     WDTPRE_PR128         1:128
**
**   Watchdog Timer Enable bits:
**     WDTEN_OFF            WDT and SWDTEN disabled
**     WDTEN_ON_DIS_SLEEP   WDT Enabled only while device is active (disabled in sleep, SWDTEN disabled)
**     WDTEN_ON_SWDTEN      WDT Enabled/Disabled (controlled using SWDTEN bit)
**     WDTEN_ON             WDT Enabled
**
**   Watchdog Timer Window Enable bit:
**     WINDIS_ON            Watchdog Timer in Window mode
**     WINDIS_OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Window Select bits:
**     WDTWIN_WIN75         WDT Windo is 75% of WDT period
**     WDTWIN_WIN50         WDT Window is 50% of WDT period
**     WDTWIN_WIN37         WDT Window is 37.5% of WDT period
**     WDTWIN_WIN25         WDT Window is 25% of WDT period
**
*/

#define WDTPOST_PS1          0xFFF0
#define WDTPOST_PS2          0xFFF1
#define WDTPOST_PS4          0xFFF2
#define WDTPOST_PS8          0xFFF3
#define WDTPOST_PS16         0xFFF4
#define WDTPOST_PS32         0xFFF5
#define WDTPOST_PS64         0xFFF6
#define WDTPOST_PS128        0xFFF7
#define WDTPOST_PS256        0xFFF8
#define WDTPOST_PS512        0xFFF9
#define WDTPOST_PS1024       0xFFFA
#define WDTPOST_PS2048       0xFFFB
#define WDTPOST_PS4096       0xFFFC
#define WDTPOST_PS8192       0xFFFD
#define WDTPOST_PS16384      0xFFFE
#define WDTPOST_PS32768      0xFFFF

#define WDTPRE_PR32          0xFFEF
#define WDTPRE_PR128         0xFFFF

#define WDTEN_OFF            0xFF9F
#define WDTEN_ON_DIS_SLEEP   0xFFBF
#define WDTEN_ON_SWDTEN      0xFFDF
#define WDTEN_ON             0xFFFF

#define WINDIS_ON            0xFF7F
#define WINDIS_OFF           0xFFFF

#define WDTWIN_WIN75         0xFCFF
#define WDTWIN_WIN50         0xFDFF
#define WDTWIN_WIN37         0xFEFF
#define WDTWIN_WIN25         0xFFFF

/* Register FPOR (0x57a4)                               */

extern __attribute__((space(prog))) unsigned int _FPOR;
#define _FPOR(x) __attribute__((section("__FPOR.sec"),space(prog))) unsigned int _FPOR = (x);

/*
** Only one invocation of FPOR should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FPOR.
** Multiple options may be combined, as shown:
**
** _FPOR( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register FICD (0x57a8)                               */

extern __attribute__((space(prog))) unsigned int _FICD;
#define _FICD(x) __attribute__((section("__FICD.sec"),space(prog))) unsigned int _FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** _FICD( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   ICD Communication Channel Select bits:
**     ICS_NONE             Reserved, do not use
**     ICS_PGD3             Communicate on PGEC3 and PGED3
**     ICS_PGD2             Communicate on PGEC2 and PGED2
**     ICS_PGD1             Communicate on PGEC1 and PGED1
**
**   JTAG Enable bit:
**     JTAGEN_OFF           JTAG is disabled
**     JTAGEN_ON            JTAG is enabled
**
**   BOOTSWP Instruction Enable/Disable bit:
**     BTSWP_ON             BOOTSWP instruction is enabled
**     BTSWP_OFF            BOOTSWP instruction is disabled
**
*/

#define ICS_NONE             0xFFFC
#define ICS_PGD3             0xFFFD
#define ICS_PGD2             0xFFFE
#define ICS_PGD1             0xFFFF

#define JTAGEN_OFF           0xFFDF
#define JTAGEN_ON            0xFFFF

#define BTSWP_ON             0x7FFF
#define BTSWP_OFF            0xFFFF

/* Register FDEVOPT (0x57ac)                               */

extern __attribute__((space(prog))) unsigned int _FDEVOPT;
#define _FDEVOPT(x) __attribute__((section("__FDEVOPT.sec"),space(prog))) unsigned int _FDEVOPT = (x);

/*
** Only one invocation of FDEVOPT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FDEVOPT.
** Multiple options may be combined, as shown:
**
** _FDEVOPT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   PWMx Lock Enable bit:
**     PWMLOCK_OFF          PWM registers may be written without key sequence
**     PWMLOCK_ON           Certain PWM registers may only be written after key sequency
**
**   Alternate I2C1 Pin bit:
**     ALTI2C1_ON           I2C1 mapped to ASDA1/ASCL1 pins
**     ALTI2C1_OFF          I2C1 mapped to SDA1/SCL1 pins
**
**   Alternate I2C2 Pin bit:
**     ALTI2C2_ON           I2C2 mapped to ASDA2/ASCL2 pins
**     ALTI2C2_OFF          I2C2 mapped to SDA2/SCL2 pins
**
**   DACx Output Cross Connection bit:
**     DBCC_ON              Interconnects DACOUT1 and DACOUT2
**     DBCC_OFF             No Cross Connection between DAC outputs
**
*/

#define PWMLOCK_OFF          0xFFFE
#define PWMLOCK_ON           0xFFFF

#define ALTI2C1_ON           0xFFF7
#define ALTI2C1_OFF          0xFFFF

#define ALTI2C2_ON           0xFFEF
#define ALTI2C2_OFF          0xFFFF

#define DBCC_ON              0xFFBF
#define DBCC_OFF             0xFFFF

/* Register FALTREG (0x57b0)                               */

extern __attribute__((space(prog))) unsigned int _FALTREG;
#define _FALTREG(x) __attribute__((section("__FALTREG.sec"),space(prog))) unsigned int _FALTREG = (x);

/*
** Only one invocation of FALTREG should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FALTREG.
** Multiple options may be combined, as shown:
**
** _FALTREG( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits:
**     CTXT1_IPL1           Alternate Register set assigned to IPL level 1
**     CTXT1_IPL2           Alternate Register set assigned to IPL level 2
**     CTXT1_IPL3           Alternate Register set assigned to IPL level 3
**     CTXT1_IPL4           Alternate Register set assigned to IPL level 4
**     CTXT1_IPL5           Alternate Register set assigned to IPL level 5
**     CTXT1_IPL6           Alternate Register set assigned to IPL level 6
**     CTXT1_IPL7           Alternate Register set assigned to IPL level 7
**     CTXT1_OFF            Not Assigned
**
**   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits:
**     CTXT2_IPL1           Alternate Register set assigned to IPL level 1
**     CTXT2_IPL2           Alternate Register set assigned to IPL level 2
**     CTXT2_IPL3           Alternate Register set assigned to IPL level 3
**     CTXT2_IPL4           Alternate Register set assigned to IPL level 4
**     CTXT2_IPL5           Alternate Register set assigned to IPL level 5
**     CTXT2_IPL6           Alternate Register set assigned to IPL level 6
**     CTXT2_IPL7           Alternate Register set assigned to IPL level 7
**     CTXT2_OFF            Not Assigned
**
*/

#define CTXT1_IPL1           0xFFF8
#define CTXT1_IPL2           0xFFF9
#define CTXT1_IPL3           0xFFFA
#define CTXT1_IPL4           0xFFFB
#define CTXT1_IPL5           0xFFFC
#define CTXT1_IPL6           0xFFFD
#define CTXT1_IPL7           0xFFFE
#define CTXT1_OFF            0xFFFF

#define CTXT2_IPL1           0xFF8F
#define CTXT2_IPL2           0xFF9F
#define CTXT2_IPL3           0xFFAF
#define CTXT2_IPL4           0xFFBF
#define CTXT2_IPL5           0xFFCF
#define CTXT2_IPL6           0xFFDF
#define CTXT2_IPL7           0xFFEF
#define CTXT2_OFF            0xFFFF



/*
 * Memory Segments Sizes
 */

#define __AIVT_BASE 0x0
#define __AIVT_LENGTH 0x200

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0x1fc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0x5580

#define __FSEC_BASE 0x5780
#define __FSEC_LENGTH 0x2

#define __FBSLIM_BASE 0x5790
#define __FBSLIM_LENGTH 0x2

#define __FSIGN_BASE 0x5794
#define __FSIGN_LENGTH 0x2

#define __FOSCSEL_BASE 0x5798
#define __FOSCSEL_LENGTH 0x2

#define __FOSC_BASE 0x579c
#define __FOSC_LENGTH 0x2

#define __FWDT_BASE 0x57a0
#define __FWDT_LENGTH 0x2

#define __FPOR_BASE 0x57a4
#define __FPOR_LENGTH 0x2

#define __FICD_BASE 0x57a8
#define __FICD_LENGTH 0x2

#define __FDEVOPT_BASE 0x57ac
#define __FDEVOPT_LENGTH 0x2

#define __FALTREG_BASE 0x57b0
#define __FALTREG_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x1000

#define __DATA_BASE 0x1000
#define __DATA_LENGTH 0x1000


#endif
