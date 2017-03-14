/*
 * spi.c
 *
 * Created: 27-05-2016 00:21:55
 *  Author: RISHABH JAIN
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "spi.h"
#define sel PORTB

void master(unsigned char x, unsigned int i)
{
	DDRB=0xEF;
	SPCR|=(1<<SPE)|(1<<SPIE)|(1<<MSTR);
	_delay_ms(2);
	sel|=(1<<i);
	_delay_ms(10);
	sel&=~(1<<i);
	SPDR=x;
	while((SPSR & (1<<SPIF))==0);
	sel|=(1<<i);
}

char slave()
{
	DDRB=0x10;
	SPCR|=(1<<SPE)|(1<<SPIE);
	_delay_ms(2);
	while((SPSR & (1<<SPIF))==0);
	return SPDR;
}