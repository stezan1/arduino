/*
 * led.c
 *
 * Created: 5/2/2023 5:26:06 PM
 *  Author: Acer
 */ 



#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRC=0XFF;
	
	while(1)
	{
		
		/*PORTC=0XFF;
		_delay_ms(1000);
		PORTC=0;
		_delay_ms(500);*/
		PORTC=0B10000000;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B01000000;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B00100000;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B00010000;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B00001000;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B00000100;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B00000010;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
		PORTC=0B00000001;
		_delay_ms(100);
		PORTC=0;
		_delay_ms(10);
	}
}