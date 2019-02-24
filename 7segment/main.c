/*
 * main.c
 *
 *  Created on: Feb 24, 2019
 *      Author: students
 */

#include <avr/io.h>
#include <avr/delay.h>

#define F_CPU 16000000UL

const uint8_t segment_look_up[16] ={
		0b00111111,//0
		0b00000110,//1
		0b01011011,//2
		0b01001111,//3
		0b01100110,//4
		0b01101101,//5
		0b01111101,//6
		0b00000111,//7
		0b01111111,//8
		0b01101111,//9
		0b01110111,//A
		0b01111100,//b
		0b00111001,//C
		0b01011110,//d
		0b01111001,//E
		0b01110001 //F
};

int main()
{
	DDRD = 0xFF;
	PORTD = 0x00;
	while(1)
	{
/*
			PORTD= 0b0111111; //0
			_delay_ms(400);

			PORTD= 0b00000110; //1
			_delay_ms(400);
			PORTD= 0b01011011; //2
			_delay_ms(400);
			PORTD= 0b01001111; //3
			_delay_ms(400);
			PORTD= 0b01100110; //4
			_delay_ms(400);
			PORTD= 0b01101101; //5
			_delay_ms(400);
			PORTD= 0b01111101; //6
			_delay_ms(400);
			PORTD= 0b00000111; //7
			_delay_ms(400);
			PORTD= 0b01111111; //8
			_delay_ms(400);
			PORTD= 0b01101111; //9
			_delay_ms(400);
*/
		for(uint8_t i=0;i<16;i++)
				{
					PORTD= segment_look_up[i];
					_delay_ms(500);
				}

	}

}




