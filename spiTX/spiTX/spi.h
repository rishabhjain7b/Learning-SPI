/*
 * spi.h
 *
 * Created: 27-05-2016 00:23:11
 *  Author: RISHABH JAIN
 */ 


#ifndef SPI_H_
#define SPI_H_
#include <avr/io.h>
#include <util/delay.h>
void master(unsigned char x,unsigned int i);
char slave();
#endif /* SPI_H_ */