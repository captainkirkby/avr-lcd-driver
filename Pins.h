// Name: Pins.h
// Dylan Kirkby
// 4/15/15
// Wiring constants to drive a 16x2 LCD

#ifndef PINS_H
#define PINS_H

#include <avr/io.h>

// Control Bus
#define CONTROL PORTB
#define CONTROL_DDR DDRB
#define RS PB0
#define RW PB1
#define E PB2

// Data Bus
#define DATA PORTD
#define DATA_DDR DDRD
#define D0 PD0 
#define D1 PD1
#define D2 PD2 
#define D3 PD3 
#define D4 PD4 
#define D5 PD5 
#define D6 PD6 
#define D7 PD7 

void initPins(void)
{
	// Configure control bits as outputs
	CONTROL_DDR |= (1<<RS) | (1<<RW) | (1<<E);
	// Configure data bits as outputs
	DATA_DDR = 0xFF;
}

void CTRL_HI(uint8_t pin)
{
	CONTROL |= (1<<pin);
}

void CTRL_LO(uint8_t pin)
{
	CONTROL &= ~(1<<pin);
}


#endif
