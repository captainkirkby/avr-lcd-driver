// Name: LCD.h
// Dylan Kirkby
// 4/15/15
// Helper Functions to drive a 16x2 LCD

#ifndef LCD_H
#define LCD_H

#include <util/delay.h>
#include "Pins.h"

void writeCMD(uint8_t cmd);
void writeChar(uint8_t character);
void writeString(char *string);

void initLCD(void)
{
	initPins();

	// Power is on
	_delay_ms(40);

	// Set LCD in 8-bit, 2-line, 5x8char mode
	writeCMD(0b00111000);
	// _delay_ms(5);

	_delay_us(74);

	// Set display to be on without a cursor
	writeCMD(0b00001100);

	_delay_us(74);

	// Clear the display
	writeCMD(0b00000001);

	_delay_us(3040);

	// Ready to go!
	// Write DDRAM Address of first row first slot
	writeCMD(0x80);
}

void writeCMD(uint8_t cmd)
{
	CTRL_LO(E);
	CTRL_LO(RS);
	CTRL_LO(RW);
	// 60ns delay
	CTRL_HI(E);
	// Write data
	DATA = cmd;
	// tw delay in digilent datasheet
	_delay_us(1);
	CTRL_LO(E);
	_delay_ms(1);
}

void writeChar(uint8_t character)
{
	CTRL_LO(E);
	CTRL_HI(RS);
	CTRL_LO(RW);
	// 60ns delay
	CTRL_HI(E);
	// Write Data
	DATA = character;
	// tw delay in digilent datasheet
	_delay_us(1);
	CTRL_LO(E);
	_delay_ms(1);
}

void writeString(char *string)
{
	// Clear the display
	writeCMD(0b00000001);

	_delay_ms(1);

	while(*string != '\0')
	{
		writeChar(*string);
		string++;
	}
}


#endif
