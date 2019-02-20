/*
 * button.c
 *
 *  Created on: Feb 20, 2019
 *      Author: niloy
 */

#include <avr/io.h>
#include <avr/delay.h>

#define F_CPU 16000000UL

int main(void)
{
	DDRD &= ~_BV(DDD5); //Set as input
	DDRB |= _BV(DDB5); // set as output
	PORTB= 0x00;
	uint8_t bc = 0;


	while(1) {

/*
		if(bc<=3){
			if(bit_is_clear(PIND,PIND5)){
				PORTB |= _BV(PORTB5);
			}
		}
		else if (bc >3){
			if (bit_is_set(PIND,PIND5)){
			PORTB &=~ _BV(PORTB5);
			}
		}

*/
		while(bit_is_set(PIND,PIND5) && bc<10)
					{
						bc++;
					}

					if(bc==10)
					{
						PORTB &= ~_BV(PORTB5); // off led
						bc=0;
					}



				     while(!(bit_is_clear(PIND,PIND5)) && bc<5)
						{
						bc++;
						}

						if(bc==5)
							{
							 PORTB|= _BV(PORTB5); //on
							bc=0;
							}


/*		if (bit_is_clear(PIND,PIND5) && bc < 3)
		{
			PORTB |= _BV(PORTB5);

			if (bit_is_set(PIND,PIND5) && bc < 3){
				bc += 1;
			}

		}
			else if (bit_is_clear(PIND,PIND5) && bc == 3)
			{
			PORTB &=~ _BV(PORTB5);
			_delay_ms(1000);
			}*/
/*

		if (bit_is_clear(PIND,PIND5))
				{
			PORTB |= (1<<PB5);
				}
		else{
			PORTB &= ~ (1<<PB5);
		}
*/



/*for (uint8_t i = 0; i <=3; i++){
		if (bit_is_clear(PIND,PIND5) && bc < 3)
				{
					PORTB |= _BV(PORTB5);
				}

		else if (bit_is_set(PIND,PIND5))
		{
			if (bc==3){
				PORTB &=~ _BV(PORTB5);
				_delay_ms(20);
			}
			else
			{
				bc+=1;
			}
		}
}*/

/*

		if (bit_is_clear(PIND,PIND5) || bc < 4)
						{
					PORTB |= (1<<PB5);
						}
				else if(bit_is_set(PIND,PIND5) || bc >= 4){
									bc+=1;
									if(bit_is_clear(PIND,PIND5) || bc >= 4){
														PORTB &= ~ (1<<PB5);
														_delay_ms(300);
													}
								}
*/

		}
}
