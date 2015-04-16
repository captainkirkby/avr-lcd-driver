##CPE 329 Project 1 - LCD Driver
Dylan Kirkby

4/15/15

To Compile:
```
make
```
To Program on my Macbook (note: must temporarily disconnect Tx and Rx - pins 0 and 1 on the Arduino)
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
					 
![img_3316](https://cloud.githubusercontent.com/assets/3489773/7175507/073916ec-e3ca-11e4-99fa-02d7f9bb8d3e.JPG)
![img_3320](https://cloud.githubusercontent.com/assets/3489773/7175508/08922092-e3ca-11e4-97f4-8ebf722ecce2.JPG)

* Pin 3 of the LCD needs to be grounded too!!

LCD datasheet
https://www.digilentinc.com/Data/Products/PMOD-CLP/PmodCLP_rm_RevA.pdf
