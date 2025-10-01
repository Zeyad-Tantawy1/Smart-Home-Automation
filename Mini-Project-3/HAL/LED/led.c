#include "LED/led.h"
#include <avr/io.h>

void LEDS_init(void){
    DDRB |= (1<<RED_LED)|(1<<GREEN_LED)|(1<<BLUE_LED);
    PORTB &= ~((1<<RED_LED)|(1<<GREEN_LED)|(1<<BLUE_LED));
}

void LED_on(LED_ID id){ PORTB |= (1<<id); }
void LED_off(LED_ID id){ PORTB &= ~(1<<id); }
