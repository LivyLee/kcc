
/*
 * pic18f252.h - 18F252 Device Library Header
 *
 * This file is part of the GNU PIC Library.
 *
 * January, 2004
 * The GNU PIC Library is maintained by,
 * 	Vangelis Rokas <vrokas@otenet.gr>
 *
 * $Id$
 *
 */

#ifndef __PIC18F252_H__
#define __PIC18F252_H__

extern sfr at 0xf80 PORTA;
typedef union {
	struct {
		unsigned RA0:1;
		unsigned RA1:1;
		unsigned RA2:1;
		unsigned RA3:1;
		unsigned RA4:1;
		unsigned RA5:1;
		unsigned RA6:1;
		unsigned :1;
	};

	struct {
		unsigned AN0:1;
		unsigned AN1:1;
		unsigned AN2:1;
		unsigned AN3:1;
		unsigned :1;
		unsigned AN4:1;
		unsigned OSC2:1;
		unsigned :1;
	};

	struct {
		unsigned :1;
		unsigned :1;
		unsigned VREFM:1;
		unsigned VREFP:1;
		unsigned T0CKI:1;
		unsigned SS:1;
		unsigned CLK0:1;
		unsigned :1;
	};

	struct {
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned LVDIN:1;
		unsigned :1;
		unsigned :1;
	};
} PORTAbits_t;

extern volatile PORTAbits_t at 0xf80 PORTAbits;

extern sfr at 0xf81 PORTB;
typedef union {
	struct {
		unsigned RB0:1;
		unsigned RB1:1;
		unsigned RB2:1;
		unsigned RB3:1;
		unsigned RB4:1;
		unsigned RB5:1;
		unsigned RB6:1;
		unsigned RB7:1;
	};

	struct {
		unsigned INT0:1;
		unsigned INT1:1;
		unsigned INT2:1;
		unsigned INT3:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} PORTBbits_t;

extern volatile PORTBbits_t at 0xf81 PORTBbits;

extern sfr at 0xf82 PORTC;
typedef union {
	struct {
		unsigned RC0:1;
		unsigned RC1:1;
		unsigned RC2:1;
		unsigned RC3:1;
		unsigned RC4:1;
		unsigned RC5:1;
		unsigned RC6:1;
		unsigned RC7:1;
	};

	struct {
		unsigned T1OSO:1;
		unsigned T1OSI:1;
		unsigned :1;
		unsigned SCK:1;
		unsigned SDI:1;
		unsigned SDO:1;
		unsigned TX:1;
		unsigned RX:1;
	};

	struct {
		unsigned T1CKI:1;
		unsigned CCP2:1;
		unsigned CCP1:1;
		unsigned SCL:1;
		unsigned SDA:1;
		unsigned :1;
		unsigned CK:1;
		unsigned DT:1;
	};
} PORTCbits_t;

extern volatile PORTCbits_t at 0xf82 PORTCbits;

extern sfr at 0xf89 LATA;
typedef union {
	struct {
		unsigned LATA0:1;
		unsigned LATA1:1;
		unsigned LATA2:1;
		unsigned LATA3:1;
		unsigned LATA4:1;
		unsigned LATA5:1;
		unsigned LATA6:1;
		unsigned :1;
	};
} LATAbits_t;

extern volatile LATAbits_t at 0xf89 LATAbits;

extern sfr at 0xf8a LATB;
typedef union {
	struct {
		unsigned LATB0:1;
		unsigned LATB1:1;
		unsigned LATB2:1;
		unsigned LATB3:1;
		unsigned LATB4:1;
		unsigned LATB5:1;
		unsigned LATB6:1;
		unsigned LATB7:1;
	};
} LATBbits_t;

extern volatile LATBbits_t at 0xf8a LATBbits;

extern sfr at 0xf8b LATC;
typedef union {
	struct {
		unsigned LATC0:1;
		unsigned LATC1:1;
		unsigned LATC2:1;
		unsigned LATC3:1;
		unsigned LATC4:1;
		unsigned LATC5:1;
		unsigned LATC6:1;
		unsigned LATC7:1;
	};
} LATCbits_t;

extern volatile LATCbits_t at 0xf8b LATCbits;

extern sfr at 0xf92 TRISA;
typedef union {
	struct {
		unsigned TRISA0:1;
		unsigned TRISA1:1;
		unsigned TRISA2:1;
		unsigned TRISA3:1;
		unsigned TRISA4:1;
		unsigned TRISA5:1;
		unsigned TRISA6:1;
		unsigned :1;
	};
} TRISAbits_t;

extern volatile TRISAbits_t at 0xf92 TRISAbits;

extern sfr at 0xf93 TRISB;
typedef union {
	struct {
		unsigned TRISB0:1;
		unsigned TRISB1:1;
		unsigned TRISB2:1;
		unsigned TRISB3:1;
		unsigned TRISB4:1;
		unsigned TRISB5:1;
		unsigned TRISB6:1;
		unsigned TRISB7:1;
	};
} TRISBbits_t;

extern volatile TRISBbits_t at 0xf93 TRISBbits;

extern sfr at 0xf94 TRISC;
typedef union {
	struct {
		unsigned TRISC0:1;
		unsigned TRISC1:1;
		unsigned TRISC2:1;
		unsigned TRISC3:1;
		unsigned TRISC4:1;
		unsigned TRISC5:1;
		unsigned TRISC6:1;
		unsigned TRISC7:1;
	};
} TRISCbits_t;

extern volatile TRISCbits_t at 0xf94 TRISCbits;

extern sfr at 0xf9d PIE1;
typedef union {
	struct {
		unsigned TMR1IE:1;
		unsigned TMR2IE:1;
		unsigned CCP1IE:1;
		unsigned SSPIE:1;
		unsigned TXIE:1;
		unsigned RCIE:1;
		unsigned ADIE:1;
		unsigned PSPIE:1;
	};
} PIE1bits_t;

extern volatile PIE1bits_t at 0xf9d PIE1bits;

extern sfr at 0xf9e PIR1;
typedef union {
	struct {
		unsigned TMR1IF:1;
		unsigned TMR2IF:1;
		unsigned CCP1IF:1;
		unsigned SSPIF:1;
		unsigned TXIF:1;
		unsigned RCIF:1;
		unsigned ADIF:1;
		unsigned PSPIF:1;
	};
} PIR1bits_t;

extern volatile PIR1bits_t at 0xf9e PIR1bits;

extern sfr at 0xf9f IPR1;
typedef union {
	struct {
		unsigned TMR1IP:1;
		unsigned TMR2IP:1;
		unsigned CCP1IP:1;
		unsigned SSPIP:1;
		unsigned TXIP:1;
		unsigned RCIP:1;
		unsigned ADIP:1;
		unsigned PSPIP:1;
	};
} IPR1bits_t;

extern volatile IPR1bits_t at 0xf9f IPR1bits;

extern sfr at 0xfa0 PIE2;
typedef union {
	struct {
		unsigned CCP2IE:1;
		unsigned TMR3IE:1;
		unsigned LVDIE:1;
		unsigned BCLIE:1;
		unsigned EEIE:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} PIE2bits_t;

extern volatile PIE2bits_t at 0xfa0 PIE2bits;

extern sfr at 0xfa1 PIR2;
typedef union {
	struct {
		unsigned CCP2IF:1;
		unsigned TMR3IF:1;
		unsigned LVDIF:1;
		unsigned BCLIF:1;
		unsigned EEIF:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} PIR2bits_t;

extern volatile PIR2bits_t at 0xfa1 PIR2bits;

extern sfr at 0xfa2 IPR2;
typedef union {
	struct {
		unsigned CCP2IP:1;
		unsigned TMR3IP:1;
		unsigned LVDIP:1;
		unsigned BCLIP:1;
		unsigned EEIP:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} IPR2bits_t;

extern volatile IPR2bits_t at 0xfa2 IPR2bits;

extern sfr at 0xfa6 EECON1;
typedef union {
	struct {
		unsigned RD:1;
		unsigned WR:1;
		unsigned WREN:1;
		unsigned WRERR:1;
		unsigned FREE:1;
		unsigned :1;
		unsigned CFGS:1;
		unsigned EEPGD:1;
	};
} EECON1bits_t;

extern volatile EECON1bits_t at 0xfa6 EECON1bits;

extern sfr at 0xfa7 EECON2;
extern sfr at 0xfa8 EEDATA;
extern sfr at 0xfa9 EEADR;
extern sfr at 0xfab RCSTA;
typedef union {
	struct {
		unsigned RX9D:1;
		unsigned OERR:1;
		unsigned FERR:1;
		unsigned ADDEN:1;
		unsigned CREN:1;
		unsigned SREN:1;
		unsigned RX9:1;
		unsigned SPEN:1;
	};
} RCSTAbits_t;

extern volatile RCSTAbits_t at 0xfab RCSTAbits;

extern sfr at 0xfac TXSTA;
typedef union {
	struct {
		unsigned TX9D:1;
		unsigned TRMT:1;
		unsigned BRGH:1;
		unsigned :1;
		unsigned SYNC:1;
		unsigned TXEN:1;
		unsigned TX9:1;
		unsigned CSRC:1;
	};
} TXSTAbits_t;

extern volatile TXSTAbits_t at 0xfac TXSTAbits;

extern sfr at 0xfad TXREG;
extern sfr at 0xfae RCREG;
extern sfr at 0xfaf SPBRG;
extern sfr at 0xfb1 T3CON;
typedef union {
	struct {
		unsigned TMR3ON:1;
		unsigned TMR3CS:1;
		unsigned T3SYNC:1;
		unsigned T3CCP1:1;
		unsigned T3CKPS0:1;
		unsigned T3CKPS1:1;
		unsigned T3CCP2:1;
		unsigned RD16:1;
	};
} T3CONbits_t;

extern volatile T3CONbits_t at 0xfb1 T3CONbits;

extern sfr at 0xfb2 TMR3L;
extern sfr at 0xfb3 TMR3H;
extern sfr at 0xfba CCP2CON;
typedef union {
	struct {
		unsigned CCP2M0:1;
		unsigned CCP2M1:1;
		unsigned CCP2M2:1;
		unsigned CCP2M3:1;
		unsigned DCCP2Y:1;
		unsigned DCCP2X:1;
		unsigned :1;
		unsigned :1;
	};
} CCP2CONbits_t;

extern volatile CCP2CONbits_t at 0xfba CCP2CONbits;

extern sfr at 0xfbb CCPR2L;
extern sfr at 0xfbc CCPR2H;
extern sfr at 0xfbd CCP1CON;
typedef union {
	struct {
		unsigned CCP1M0:1;
		unsigned CCP1M1:1;
		unsigned CCP1M2:1;
		unsigned CCP1M3:1;
		unsigned DCCP1Y:1;
		unsigned DCCP1X:1;
		unsigned :1;
		unsigned :1;
	};
} CCP1CONbits_t;

extern volatile CCP1CONbits_t at 0xfbd CCP1CONbits;

extern sfr at 0xfbe CCPR1L;
extern sfr at 0xfbf CCPR1H;
extern sfr at 0xfc1 ADCON1;
typedef union {
	struct {
		unsigned PCFG0:1;
		unsigned PCFG1:1;
		unsigned PCFG2:1;
		unsigned PCFG3:1;
		unsigned :1;
		unsigned :1;
		unsigned ADCS2:1;
		unsigned ADFM:1;
	};
} ADCON1bits_t;

extern volatile ADCON1bits_t at 0xfc1 ADCON1bits;

extern sfr at 0xfc2 ADCON0;
typedef union {
	struct {
		unsigned ADON:1;
		unsigned :1;
		unsigned GO:1;
		unsigned CHS0:1;
		unsigned CHS1:1;
		unsigned CHS2:1;
		unsigned ADCS0:1;
		unsigned ADCS1:1;
	};
} ADCON0bits_t;

extern volatile ADCON0bits_t at 0xfc2 ADCON0bits;

extern sfr at 0xfc3 ADRESL;
extern sfr at 0xfc4 ADRESH;
extern sfr at 0xfc5 SSPCON2;
typedef union {
	struct {
		unsigned SEN:1;
		unsigned RSEN:1;
		unsigned PEN:1;
		unsigned RCEN:1;
		unsigned ACKEN:1;
		unsigned ACKDT:1;
		unsigned ACKSTAT:1;
		unsigned GCEN:1;
	};
} SSPCON2bits_t;

extern volatile SSPCON2bits_t at 0xfc5 SSPCON2bits;

extern sfr at 0xfc6 SSPCON1;
typedef union {
	struct {
		unsigned SSPM0:1;
		unsigned SSPM1:1;
		unsigned SSPM2:1;
		unsigned SSPM3:1;
		unsigned CKP:1;
		unsigned SSPEN:1;
		unsigned SSPOV:1;
		unsigned WCOL:1;
	};
} SSPCON1bits_t;

extern volatile SSPCON1bits_t at 0xfc6 SSPCON1bits;

extern sfr at 0xfc7 SSPSTAT;
typedef union {
	struct {
		unsigned BF:1;
		unsigned UA:1;
		unsigned R_W:1;
		unsigned S:1;
		unsigned P:1;
		unsigned D_A:1;
		unsigned CKE:1;
		unsigned SMP:1;
	};
} SSPSTATbits_t;

extern volatile SSPSTATbits_t at 0xfc7 SSPSTATbits;

extern sfr at 0xfc8 SSPADD;
extern sfr at 0xfc9 SSPBUF;
extern sfr at 0xfca T2CON;
typedef union {
	struct {
		unsigned T2CKPS0:1;
		unsigned T2CKPS1:1;
		unsigned TMR2ON:1;
		unsigned TOUTPS0:1;
		unsigned TOUTPS1:1;
		unsigned TOUTPS2:1;
		unsigned TOUTPS3:1;
		unsigned :1;
	};
} T2CONbits_t;

extern volatile T2CONbits_t at 0xfca T2CONbits;

extern sfr at 0xfcb PR2;
extern sfr at 0xfcc TMR2;
extern sfr at 0xfcd T1CON;
typedef union {
	struct {
		unsigned TMR1ON:1;
		unsigned TMR1CS:1;
		unsigned NOT_T1SYNC:1;
		unsigned T1OSCEN:1;
		unsigned T1CKPS0:1;
		unsigned T1CKPS1:1;
		unsigned :1;
		unsigned RD16:1;
	};
} T1CONbits_t;

extern volatile T1CONbits_t at 0xfcd T1CONbits;

extern sfr at 0xfce TMR1L;
extern sfr at 0xfcf TMR1H;
extern sfr at 0xfd0 RCON;
typedef union {
	struct {
		unsigned BOR:1;
		unsigned POR:1;
		unsigned PD:1;
		unsigned TO:1;
		unsigned RI:1;
		unsigned :1;
		unsigned :1;
		unsigned IPEN:1;
	};
} RCONbits_t;

extern volatile RCONbits_t at 0xfd0 RCONbits;

extern sfr at 0xfd1 WDTCON;
typedef union {
	struct {
		unsigned SWDTEN:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};

	struct {
		unsigned SWDTE:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} WDTCONbits_t;

extern volatile WDTCONbits_t at 0xfd1 WDTCONbits;

extern sfr at 0xfd2 LVDCON;
typedef union {
	struct {
		unsigned LVDL0:1;
		unsigned LVDL1:1;
		unsigned LVDL2:1;
		unsigned LVDL3:1;
		unsigned LVDEN:1;
		unsigned VRST:1;
		unsigned :1;
		unsigned :1;
	};

	struct {
		unsigned LVV0:1;
		unsigned LVV1:1;
		unsigned LVV2:1;
		unsigned LVV3:1;
		unsigned :1;
		unsigned BGST:1;
		unsigned :1;
		unsigned :1;
	};
} LVDCONbits_t;

extern volatile LVDCONbits_t at 0xfd2 LVDCONbits;

extern sfr at 0xfd3 OSCCON;
typedef union {
	struct {
		unsigned SCS:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} OSCCONbits_t;

extern volatile OSCCONbits_t at 0xfd3 OSCCONbits;

extern sfr at 0xfd5 T0CON;
extern sfr at 0xfd6 TMR0L;
extern sfr at 0xfd7 TMR0H;
extern sfr at 0xfd8 STATUS;
typedef union {
	struct {
		unsigned C:1;
		unsigned DC:1;
		unsigned Z:1;
		unsigned OV:1;
		unsigned N:1;
		unsigned :1;
		unsigned :1;
		unsigned :1;
	};
} STATUSbits_t;

extern volatile STATUSbits_t at 0xfd8 STATUSbits;

extern sfr at 0xfd9 FSR2L;
extern sfr at 0xfda FSR2H;
extern sfr at 0xfdb PLUSW2;
extern sfr at 0xfdc PREINC2;
extern sfr at 0xfdd POSTDEC2;
extern sfr at 0xfde POSTINC2;
extern sfr at 0xfdf INDF2;
extern sfr at 0xfe0 BSR;
extern sfr at 0xfe1 FSR1L;
extern sfr at 0xfe2 FSR1H;
extern sfr at 0xfe3 PLUSW1;
extern sfr at 0xfe4 PREINC1;
extern sfr at 0xfe5 POSTDEC1;
extern sfr at 0xfe6 POSTINC1;
extern sfr at 0xfe7 INDF1;
extern sfr at 0xfe8 WREG;
extern sfr at 0xfe9 FSR0L;
extern sfr at 0xfea FSR0H;
extern sfr at 0xfeb PLUSW0;
extern sfr at 0xfec PREINC0;
extern sfr at 0xfed POSTDEC0;
extern sfr at 0xfee POSTINC0;
extern sfr at 0xfef INDF0;
extern sfr at 0xff0 INTCON3;
typedef union {
	struct {
		unsigned INT1F:1;
		unsigned INT2F:1;
		unsigned :1;
		unsigned INT1E:1;
		unsigned INT2E:1;
		unsigned :1;
		unsigned INT1P:1;
		unsigned INT2P:1;
	};

	struct {
		unsigned INT1IF:1;
		unsigned INT2IF:1;
		unsigned :1;
		unsigned INT1IE:1;
		unsigned INT2IE:1;
		unsigned :1;
		unsigned INT1IP:1;
		unsigned INT2IP:1;
	};
} INTCON3bits_t;

extern volatile INTCON3bits_t at 0xff0 INTCON3bits;

extern sfr at 0xff1 INTCON2;
typedef union {
	struct {
		unsigned RBIP:1;
		unsigned :1;
		unsigned T0IP:1;
		unsigned :1;
		unsigned INTEDG2:1;
		unsigned INTEDG1:1;
		unsigned INTEDG0:1;
		unsigned RBPU:1;
	};
} INTCON2bits_t;

extern volatile INTCON2bits_t at 0xff1 INTCON2bits;

extern sfr at 0xff2 INTCON;
typedef union {
	struct {
		unsigned RBIF:1;
		unsigned INT0F:1;
		unsigned T0IF:1;
		unsigned RBIE:1;
		unsigned INT0E:1;
		unsigned T0IE:1;
		unsigned PEIE:1;
		unsigned GIE:1;
	};
} INTCONbits_t;

extern volatile INTCONbits_t at 0xff2 INTCONbits;

extern sfr at 0xff3 PRODL;
extern sfr at 0xff4 PRODH;
extern sfr at 0xff5 TABLAT;
extern sfr at 0xff6 TBLPTRL;
extern sfr at 0xff7 TBLPTRH;
extern sfr at 0xff8 TBLPTRU;
extern sfr at 0xff9 PCL;
extern sfr at 0xffa PCLATH;
extern sfr at 0xffb PCLATU;
extern sfr at 0xffc STKPTR;
typedef union {
	struct {
		unsigned STKPTR0:1;
		unsigned STKPTR1:1;
		unsigned STKPTR2:1;
		unsigned STKPTR3:1;
		unsigned STKPTR4:1;
		unsigned :1;
		unsigned STKUNF:1;
		unsigned STKFUL:1;
	};
} STKPTRbits_t;

extern volatile STKPTRbits_t at 0xffc STKPTRbits;

extern sfr at 0xffd TOSL;
extern sfr at 0xffe TOSH;
extern sfr at 0xfff TOSU;


#endif

