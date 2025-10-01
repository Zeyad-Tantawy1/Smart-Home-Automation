#include "Flame/flame.h"
#include <avr/io.h>

#define FLAME PD2

void FlameSensor_init(void){ DDRD &= ~(1<<FLAME); }
uint8 FlameSensor_getValue(void){ return (PIND & (1<<FLAME))?1:0; }
