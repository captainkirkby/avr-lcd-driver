// input.h
// Dylan Kirkby
// 4/3/15
// input helper functions

void initInputs(){
	DDRB &= ~(1<<PB3);					// Switch input
	PORTB |= (1<<PB3);					// With pull-up resistor
}

// Tests an input pin returns true if input is low
uint8_t testInput(){
	uint8_t input = PINB;
	return !(input & (1<<PB3));
}