#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_delaytime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_delaytime);
	digitalWrite(_pin,LOW);
	delay(_delaytime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_delaytime*4);
	digitalWrite(_pin,LOW);
	delay(_delaytime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_delaytime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_delaytime*7);
}
