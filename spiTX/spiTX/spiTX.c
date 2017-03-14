/*
 * spiTX.c
 *
 * Created: 27-05-2016 11:16:21
 *  Author: RISHABH JAIN
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "adc.h"
#include "spi.h"

void main()
{
	int d,i;
	char arr[10]="sushant";
	
    while(1)
    {ADMUX|=(1<<REFS0);
        d=adc_init();
		int w=d;   //higher byte
		int x=(d>>8);    //lower byte
	//	_delay_ms(20);
	
		_delay_ms(400);
		master(w,2);
		_delay_ms(400);
		master(x,2);
	
	
		
	//	_delay_ms(10);
		
		
    }
}