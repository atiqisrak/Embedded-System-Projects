/*
 * main.c
 *
 *  Created on: Feb 25, 2019
 *      Author: niloy
 */

#include <avr/io.h>
#include <avr/delay.h>

#define F_CPU 16000000UL

const uint8_t segment_look_up[10] ={
		0b01111110,//0
		0b00110000,//1
		0b01101101,//2
		0b01111001,//3
		0b00110011,//4
		0b01011011,//5
		0b00011111,//6
		0b01110000,//7
		0b01111111,//8
		0b01110011 //9
/*
		0b01110111,//A
		0b01111100,//b
		0b00111001,//C
		0b01011110,//d
		0b01111001,//E
		0b01110001 //F
		*/
};


int main()
{
	DDRD = 0xFF;
	PORTD = 0x00;
	while(1)
	{
/*

			PORTD= 0b01111110; //0
			_delay_ms(400);
			PORTD= 0b00110000; //1
			_delay_ms(400);
			PORTD= 0b01101101; //2
			_delay_ms(400);
			PORTD= 0b01111001; //3
			_delay_ms(400);
			PORTD= 0b00110011; //4
			_delay_ms(400);
			PORTD= 0b01011011; //5
			_delay_ms(400);
			PORTD= 0b00011111; //6
			_delay_ms(400);
			PORTD= 0b01110000; //7
			_delay_ms(400);
			PORTD= 0b01111111; //8
			_delay_ms(400);
			PORTD= 0b01110011; //9
			_delay_ms(400);
*/
		for(uint8_t i=0;i<16;i++)
				{
					PORTD= segment_look_up[i];
					_delay_ms(500);
				}
	}
}
