#include "GPIO/gpio.h"

void GPIO_setupPinDirection(uint8 port_num, uint8 pin_num, uint8 direction){
    switch(port_num){
        case 'A': if(direction) DDRA |= (1<<pin_num); else DDRA &= ~(1<<pin_num); break;
        case 'B': if(direction) DDRB |= (1<<pin_num); else DDRB &= ~(1<<pin_num); break;
        case 'C': if(direction) DDRC |= (1<<pin_num); else DDRC &= ~(1<<pin_num); break;
        case 'D': if(direction) DDRD |= (1<<pin_num); else DDRD &= ~(1<<pin_num); break;
    }
}

void GPIO_writePin(uint8 port_num, uint8 pin_num, uint8 value){
    switch(port_num){
        case 'A': if(value) PORTA |= (1<<pin_num); else PORTA &= ~(1<<pin_num); break;
        case 'B': if(value) PORTB |= (1<<pin_num); else PORTB &= ~(1<<pin_num); break;
        case 'C': if(value) PORTC |= (1<<pin_num); else PORTC &= ~(1<<pin_num); break;
        case 'D': if(value) PORTD |= (1<<pin_num); else PORTD &= ~(1<<pin_num); break;
    }
}

uint8 GPIO_readPin(uint8 port_num, uint8 pin_num){
    switch(port_num){
        case 'A': return (PINA & (1<<pin_num))?1:0;
        case 'B': return (PINB & (1<<pin_num))?1:0;
        case 'C': return (PINC & (1<<pin_num))?1:0;
        case 'D': return (PIND & (1<<pin_num))?1:0;
    }
    return 0;
}
