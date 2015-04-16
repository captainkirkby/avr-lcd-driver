// Name: main.c
// Dylan Kirkby
// 4/15/15
// Drives a 16x2 LCD Screen

#include <avr/io.h>
#include <util/delay.h>

#include "Pins.h"
#include "LCD.h"
#include "LED.h"

int main()
{
	initLCD();
	writeString("Frodo Lives!");
	while(1);
	return 0;
}
