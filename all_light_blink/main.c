/*
 * main.c
 *
 *  Created on: Feb 13, 2019
 *      Author: niloy
 */


#include <avr/io.h>
#include<util/delay.h>

int main(void){

	DDRD = 0xFF;
	PORTD = 0x00;

	while(1){
	PORTD ^= 0xFF;
	_delay_ms(500);
	}
}
