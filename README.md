##CPE 329 Project 1 - LCD Driver
Dylan Kirkby

4/15/15

To Compile:
```
make
```
To Program on my Macbook:
```
make flash
```
Wiring

	Arduino Uno Pins				LCD Pins
		0 - 7 . . . . . . . . . . . . 7 - 14
		8 . . . . . . . . . . . . . . 4
		9 . . . . . . . . . . . . . . 5
		10  . . . . . . . . . . . . . 6
		5V  . . . . . . . . . . . . . 2
		GND   . . . . . . . . . . . . 1
					 \. . . . . . . . 3 *

* Pin 3 of the LCD needs to be grounded too!!

LCD datasheet
https://www.digilentinc.com/Data/Products/PMOD-CLP/PmodCLP_rm_RevA.pdf
