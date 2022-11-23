#ifndef LED_CONTROL_DIO_H
#define LED_CONTROL_DIO_H

#define PF0  50
#define PF1  51
#define PF2  52
#define PF3  53
#define PF4  54
#define PF5  55
#define PF6  56
#define PF7  57

#define HIGH 1
#define LOW  0

#define OUTPUT 1
#define INPUT  0


#include "STD_TYPES.h"

void PIN_DIR(u8,u8);
void PIN_DATA(u8,u8);

#endif
