#ifndef GPIO
#define GPIO
#define PIC18F4585

void INIT_GPIO(void);

#define GPIO_PortA_SetDigitalInput()    do { TRISA = 1; } while(0)
#define GPIO_PortA_SetDigitalOutput()   do { TRISA = 0; } while(0)
#define GPIO_PortA_GetValue()           PORTA
#define GPIO_PortA_SetHigh()            do { LATA = 1; } while(0)
#define GPIO_PortA_SetLow()             do { LATA = 0; } while(0)

#define GPIO_PortB_SetDigitalInput()    do { TRISB = 1; } while(0)
#define GPIO_PortB_SetDigitalOutput()   do { TRISB = 0; } while(0)
#define GPIO_PortB_GetValue()           PORTB
#define GPIO_PortB_SetHigh()            do { LATB = 1; } while(0)
#define GPIO_PortB_SetLow()             do { LATB = 0; } while(0)

#define GPIO_PortC_SetDigitalInput()    do { TRISC = 1; } while(0)
#define GPIO_PortC_SetDigitalOutput()   do { TRISC = 0; } while(0)
#define GPIO_PortC_GetValue()           PORTC
#define GPIO_PortC_SetHigh()            do { LATC = 1; } while(0)
#define GPIO_PortC_SetLow()             do { LATC = 0; } while(0)

#define GPIO_PortD_SetDigitalInput()    do { TRISD = 1; } while(0)
#define GPIO_PortD_SetDigitalOutput()   do { TRISD = 0; } while(0)
#define GPIO_PortD_GetValue()           PORTD
#define GPIO_PortD_SetHigh()            do { LATD = 1; } while(0)
#define GPIO_PortD_SetLow()             do { LATD = 0; } while(0)


#define GPIO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define GPIO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define GPIO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define GPIO_RA0_GetValue()           PORTAbits.RA0
#define GPIO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define GPIO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)

#define GPIO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define GPIO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define GPIO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define GPIO_RA1_GetValue()           PORTAbits.RA1
#define GPIO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define GPIO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)

#define GPIO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define GPIO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define GPIO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define GPIO_RA2_GetValue()           PORTAbits.RA2
#define GPIO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define GPIO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)

#define GPIO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define GPIO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define GPIO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define GPIO_RA3_GetValue()           PORTAbits.RA3
#define GPIO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define GPIO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)

#define GPIO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define GPIO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define GPIO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define GPIO_RA4_GetValue()           PORTAbits.RA4
#define GPIO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define GPIO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

#define GPIO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define GPIO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define GPIO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define GPIO_RA5_GetValue()           PORTAbits.RA5
#define GPIO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define GPIO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)

#define GPIO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define GPIO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define GPIO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define GPIO_RA6_GetValue()           PORTAbits.RA6
#define GPIO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define GPIO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

#ifdef PIC18F4585
#define GPIO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define GPIO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define GPIO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define GPIO_RA7_GetValue()           PORTAbits.RA7
#define GPIO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define GPIO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#endif

#define GPIO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define GPIO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define GPIO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define GPIO_RB0_GetValue()           PORTBbits.RB0
#define GPIO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define GPIO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)

#define GPIO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define GPIO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define GPIO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define GPIO_RB1_GetValue()           PORTBbits.RB1
#define GPIO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define GPIO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)

#define GPIO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define GPIO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define GPIO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define GPIO_RB2_GetValue()           PORTBbits.RB2
#define GPIO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define GPIO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)

#define GPIO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define GPIO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define GPIO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define GPIO_RB3_GetValue()           PORTBbits.RB3
#define GPIO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define GPIO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)

#define GPIO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define GPIO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define GPIO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define GPIO_RB4_GetValue()           PORTBbits.RB4
#define GPIO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define GPIO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)

#define GPIO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define GPIO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define GPIO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define GPIO_RB5_GetValue()           PORTBbits.RB5
#define GPIO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define GPIO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)

#define GPIO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define GPIO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define GPIO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define GPIO_RB6_GetValue()           PORTBbits.RB6
#define GPIO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define GPIO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)

#define GPIO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define GPIO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define GPIO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define GPIO_RB7_GetValue()           PORTBbits.RB7
#define GPIO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define GPIO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)

#define GPIO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define GPIO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define GPIO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define GPIO_RC0_GetValue()           PORTCbits.RC0
#define GPIO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define GPIO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

#define GPIO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define GPIO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define GPIO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define GPIO_RC1_GetValue()           PORTCbits.RC1
#define GPIO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define GPIO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

#define GPIO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define GPIO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define GPIO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define GPIO_RC2_GetValue()           PORTCbits.RC2
#define GPIO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define GPIO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

#ifdef PIC18F4585
#define GPIO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define GPIO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define GPIO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define GPIO_RC3_GetValue()           PORTCbits.RC3
#define GPIO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define GPIO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#endif

#define GPIO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define GPIO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define GPIO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define GPIO_RC4_GetValue()           PORTCbits.RC4
#define GPIO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define GPIO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

#define GPIO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define GPIO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define GPIO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define GPIO_RC5_GetValue()           PORTCbits.RC5
#define GPIO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define GPIO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

#define GPIO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define GPIO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define GPIO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define GPIO_RC6_GetValue()           PORTCbits.RC6
#define GPIO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define GPIO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

#define GPIO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define GPIO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define GPIO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define GPIO_RC7_GetValue()           PORTCbits.RC7
#define GPIO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define GPIO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

#define GPIO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define GPIO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define GPIO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define GPIO_RD0_GetValue()           PORTDbits.RD0
#define GPIO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define GPIO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)

#define GPIO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define GPIO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define GPIO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define GPIO_RD1_GetValue()           PORTDbits.RD1
#define GPIO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define GPIO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)

#define GPIO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define GPIO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define GPIO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define GPIO_RD2_GetValue()           PORTDbits.RD2
#define GPIO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define GPIO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)

#define GPIO_RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define GPIO_RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define GPIO_RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define GPIO_RD3_GetValue()           PORTDbits.RD3
#define GPIO_RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define GPIO_RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)

#define GPIO_RD4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define GPIO_RD4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define GPIO_RD4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define GPIO_RD4_GetValue()           PORTDbits.RD4
#define GPIO_RD4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define GPIO_RD4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)

#define GPIO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define GPIO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define GPIO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define GPIO_RD5_GetValue()           PORTDbits.RD5
#define GPIO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define GPIO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)

#define GPIO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define GPIO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define GPIO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define GPIO_RD6_GetValue()           PORTDbits.RD6
#define GPIO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define GPIO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)

#define GPIO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define GPIO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define GPIO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define GPIO_RD7_GetValue()           PORTDbits.RD7
#define GPIO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define GPIO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)

#endif