/*
 * complex.c
 *
 *  Created on: Feb 25, 2019
 *      Author: Team Foxtrot
*/

#include <avr/io.h>
#include <stdlib.h>
#include<util/delay.h>

void p0()
{
	PORTD = 0x00;
	for (uint8_t i = 0; i < 4; i++)
	{
		PORTD |= (128 >> i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
	}
	_delay_ms(250);

	PORTD = 0x00;
	for (uint8_t i = 0; i < 4; i++)
	{
		PORTD |= (1 << i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
	}
	_delay_ms(250);
}

void p1()
{
	PORTD = 0x00;
	for (uint8_t i = 0; i < 7; i++)
	{
		PORTD = (192 >> i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(150);

	}
	for (uint8_t i = 0; i < 7; i++)
	{
		PORTD = (3 << i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(150);
	}
}
void p2()
{
	PORTD = 0x00;
	for (uint8_t i = 0; i < 8; i++)
	{
		PORTD = (448 >> i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(150);
	}
}
void p3()
	{
		PORTD = 0x00;
		for (uint8_t i = 0; i < 4; i++)
		{
				PORTD |= (16 << i) | (8 >> i);
				if (bit_is_clear(PINB, PINB2))
				{
					return;
				}
				_delay_ms(200);
			}
			for (uint8_t i = 0; i < 4; i++)
			{
				PORTD &= ~((16 << i) | (8 >> i));
				if (bit_is_clear(PINB, PINB2))
				{
					return;
				}
				_delay_ms(200);
			}
			for (uint8_t i = 0; i < 4; i++)
			{
				PORTD |= ((128 >> i) | (1 << i));
				if (bit_is_clear(PINB, PINB2))
				{
					return;
				}
				_delay_ms(200);
			}
			for (uint8_t i = 0; i < 4; i++){
				PORTD &= ~((128 >> i) | (1 << i));
				if (bit_is_clear(PINB, PINB2))
				{
					return;
				}
				_delay_ms(200);
			}
	}

void p4()
{
	PORTD = 0x00;
	for(uint8_t j = 0; j < 10; j++)
	{
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (128 >> i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}
	}
}

void p5()
{
	PORTD = 0x00;
	for (uint8_t i = 0; i < 8; i++)
	{
		PORTD = (192 >> i) | (3<< i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(200);
	}
}

void p6()
{
	PORTD = 0x00;
	for(uint8_t j = 0; j < 10; j++)
	{
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (1 << i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (128 >> i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}
	}
}

void p7()
{
	PORTD = 0x00;
	for(uint8_t j = 0; j < 10; j++)
	{
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (128 >> i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (1 << i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}
	}
}

void p8()
{
	PORTD = 0x00;
	for (uint8_t i = 0; i < 8; i++)
	{
		PORTD |= (128 >> i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(150);
	}
}

void p9()
{
	PORTD = 0x00;
	for (uint8_t i = 0; i < 4; i++)
	{
		PORTD |= (16 << i) | (8 >> i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(200);
	}
	for (uint8_t i = 0; i < 4; i++)
	{
		PORTD &= ~((16 << i) | (8 >> i));
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(200);
	}
	for (uint8_t i = 0; i < 4; i++)
	{
		PORTD |= ((128 >> i) | (1 << i));
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(200);
	}
	for (uint8_t i = 0; i < 4; i++)
	{
		PORTD &= ~((128 >> i) | (1 << i));
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(200);
	}
}

void p10()
{
	PORTD = 0x00;
	for(uint8_t j = 0; j < 10; j++)
	{
		for(uint8_t i = 4; i < 8;i++)
		{
		PORTD ^= (1<<i) | (128>>i);
		if (bit_is_clear(PINB, PINB2))
		{
			return;
		}
		_delay_ms(200);
	}
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (1<<i) | (128>>i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}

	}
}

void p11()
{
	PORTD = 0x00;
	for(uint8_t j = 0; j < 10; j++)
	{
		for(uint8_t i = 0; i < 8; i+=2)
		{
				PORTD ^= (1<<i);
				if (bit_is_clear(PINB, PINB2))
				{
					return;
				}
				_delay_ms(200);
		}
		for(uint8_t i = 7; ; i-=2)
		{
			PORTD ^= (1<<i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
			if(i == 1)break;
		}
	}
}

void p12()
{
	PORTD = 0x00;
	for(uint8_t j = 0; j < 10; j++)
	{
		for(uint8_t i = 0; i < 8; i++)
		{
			PORTD ^= (1 << i);
			if (bit_is_clear(PINB, PINB2))
			{
				return;
			}
			_delay_ms(200);
		}
	}
}

void switchPattern(uint8_t i)
{
	switch(i)
	{
	    case 0:
	    	p0();
	    	break;
		case 1:
			p1();
			break;
		case 2:
			p2();
			break;
		case 3:
			p3();
			break;
		case 4:
			p4();
			break;
		case 5:
			p5();
			break;
		case 6:
			p6();
			break;
		case 7:
			p7();
			break;
		case 8:
			p8();
			break;
		case 9:
			p9();
			break;
		case 10:
			p10();
			break;
		case 11:
			p11();
			break;
		case 12:
			p12();
			break;
			break;
		default:
			return;
	}
}

int main()
{
	DDRD = 0xFF; // set PORTD as output
	PORTD = 0x00;
	DDRB &= ~(1 << PB2); // PORTB2 as input
	uint8_t i = 0;

	while(1)
	{
		switchPattern(i); //switching patterns

		if (bit_is_clear(PINB, PINB2))
		{
			_delay_ms(100);
			while(bit_is_clear(PINB, PINB2))
			{
				_delay_ms(100);
				PORTD = 0x00;
				continue;
			}
			i = (i + 1) % 13; //pattern number change
		}
	}
}
