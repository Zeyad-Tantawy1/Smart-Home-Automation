#ifndef LED_H_
#define LED_H_
#include "std_types.h"

typedef enum {RED_LED=5,GREEN_LED=6,BLUE_LED=7} LED_ID;

void LEDS_init(void);
void LED_on(LED_ID id);
void LED_off(LED_ID id);

#endif
