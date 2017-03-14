/*
 * spiRX.c
 *
 * Created: 27-05-2016 11:10:10
 *  Author: RISHABH JAIN
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
#include "spi.h"
#include <string.h>

void main()
{
	DDRD=0xFF;
	char arr[5];
	DDRC|=(1<<PC1)|(1<<PC2)|(1<<PC3);
	char r;
	lcd_init();
	while(1)
	{
		slave();
		/*_delay_ms(100);
	int a,b,d;
		a=r;
		b=r;
		d=a|(b*256);
		
		
		_delay_ms(20);
	
		//data(r);
		*/
	}
}