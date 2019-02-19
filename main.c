/*
 * main.c
 *
 *  Created on: Feb 19, 2019
 *      Author: students
 */

/*
 * lightpatterns.c
 *
 *  Created on: Feb 17, 2019
 *      Author: niloy
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void){

	DDRD = 0xFF;
	PORTD = 0x00;
	DDRB = 0xFF;
		PORTB = 0x00;

	while(1)

//		// Both side
//	   {
//		for (uint8_t i = 0; i<8; i++){
//			PORTD = (128>>i) | (1<<i);
//				_delay_ms(20);
//		}
//
//	//L2R & R2L
//		 {
//						for (uint8_t i = 0; i<8; i++){
//							PORTD = (128>>i);
//								_delay_ms(20);
//						}
//						for (uint8_t i = 0; i<8; i++){
//							PORTD = (1<<i);
//							_delay_ms(20);
//						}
//		} }

		//3 LED L2R - R2L
//		{
//				for (uint8_t i = 0; i<8; i++){
//					PORTD = (128>>i) | (64>>i) | (32 >> i);
//						_delay_ms(5);
//				}
//				for (uint8_t i = 0; i<8; i++){
//					PORTD = (1<<i) | (2<<i) | (3<<i);
//					_delay_ms(5);
//				}
//		}

		//

}

