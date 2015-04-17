// Name: main.c
// Dylan Kirkby
// 4/15/15
// Drives a 16x2 LCD Screen

#include <avr/io.h>
#include <util/delay.h>

#include "Pins.h"
#include "LCD.h"
#include "LED.h"
#include "input.h"

int main()
{
	initInputs();
	initLCD();
	uint8_t state = 0;
	writeString("Hello World");
	while(1)
	{
		uint8_t input = testInput();
		if(input)
		{
			// Write on state change
			if(state != input)
			{
				writeString("Frodo Lives");
			}
			state = 1;
		} 
		else 
		{
			// Write on state Change
			if(state != input)
			{
				writeString("Hello World");
			}
			state = 0;
		}
	}
	return 0;
}
