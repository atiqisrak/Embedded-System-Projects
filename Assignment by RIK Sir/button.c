
/*
 * button.c
 *
 *  Created on: Feb 20, 2019
 *      Author: niloy
 */

#include <avr/io.h>
#include <avr/delay.h>
#include <time.h>
#include<stdio.h>


#define F_CPU 16000000UL


int main(void)
{
	DDRD &= ~_BV(DDD2); // Set as input
	DDRB |= _BV(DDB5);  // set as output
	PORTB= 0x00;

	uint8_t condition = 0;
	uint8_t bpc = 0;

	while(1)
	{

		if(condition == 0)
		{
			PORTB = (1 << PB5); // light on
		}
		if(condition == 1)
		{
			PORTB = 0x00; // light off
		}

		if (bit_is_set(PIND, PIND2))
		{
			while(bit_is_set(PIND, PIND2))
				continue;				//No reaction until button released

			++bpc;	//increasing button count

			if (condition == 0)
			{
				if (bpc == 10)	//if light = off & Button pressed 10 times
				{
				condition = 1;
				bpc = 0;	//Button Press Count reset
				}
			}
			else if (condition == 1)
				{
				if (bpc == 5)	//if light = on & Button pressed 5 times
				{
				condition = 0;
				bpc = 0;	//Button Press Count reset
				}
			}
		}
	}
}
