#include "Buzzer/buzzer.h"
#include <avr/io.h>

#define BUZZER PD3

void Buzzer_init(void){
    DDRD |= (1<<BUZZER);
    PORTD &= ~(1<<BUZZER);
}

void Buzzer_on(void){ PORTD |= (1<<BUZZER); }
void Buzzer_off(void){ PORTD &= ~(1<<BUZZER); }
