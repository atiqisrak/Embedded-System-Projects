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
		/*
	   {
		for (uint8_t i = 0; i<8; i++){
			PORTD = (128>>i) | (1<<i);
				_delay_ms(300);
		}



		 {
						for (uint8_t i = 0; i<8; i++){
							PORTD = (128>>i);
								_delay_ms(100);
						}
						for (uint8_t i = 0; i<8; i++){
							PORTD = (1<<i);
							_delay_ms(100);
						}
				} */
				// */
		/*{
				for (uint8_t i = 0; i<8; i++){
					PORTD = (128>>i) | (64>>i);
						_delay_ms(100);
				}
				for (uint8_t i = 0; i<8; i++){
					PORTD = (1<<i) | (2<<i);
					_delay_ms(100);
				}
		}
		 */
	{
							for (uint8_t i = 0; i<7; i++){
								PORTB = (128>>i);
									_delay_ms(200);
							}
									for (uint8_t i = 0; i<7; i++){
															PORTD = (128 >> i);
																	_delay_ms(200);
														}

/*							for (uint8_t i = 0; i<7; i++){
								PORTD = (1<<i);
									_delay_ms(200);
							}
									for (uint8_t i = 0; i<7; i++){
															PORTB = (1<< i);
																	_delay_ms(200);
														}
*/
}
}
