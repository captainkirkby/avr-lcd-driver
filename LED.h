// LED.h
// Dylan Kirkby
// 4/3/15
// LED helper functions

// Configure inputs and outputs
void initLEDs()
{
	// LED output
    DDRB |= (1<<PB0);
    DDRB |= (1<<PB5);
}

// Turns an LED on
void LED_On()
{
    PORTB |= (1<<PB0);
}

// Turns an LED off
void LED_Off()
{
    PORTB &= ~(1<<PB0);
}

// Toggles an LED
void LED_Toggle()
{
    PORTB ^= (1<<PB0);
}

// Turns an LED on
void Onboard_LED_On()
{
    PORTB |= (1<<PB5);
}

// Turns an LED off
void Onboard_LED_Off()
{
    PORTB &= ~(1<<PB5);
}

// Toggles an LED
void Onboard_LED_Toggle()
{
    PORTB ^= (1<<PB0);
}
