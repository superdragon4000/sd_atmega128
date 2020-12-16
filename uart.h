#ifndef _uart_h
#define _uart_h
#include <avr/pgmspace.h>

/************************************
*   uart.h v1 - 11/02/2018
************************************/
#define BAUD2BRR(x)     (((F_CPU/((x)*16UL))) - 1)
#define UART_pputs(x)   UART_puts_p(PSTR(x))

// UART functions
void UART_init(void);
void UART_putc(const unsigned char data);
void UART_puts(const char* charString);
void UART_puthex8(uint8_t val);
unsigned char UART_getc(void);
void UART_puts_p(const char* ps);

#endif
