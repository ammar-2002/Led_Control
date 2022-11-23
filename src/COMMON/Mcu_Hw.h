#ifndef LED_CONTROL_MCU_HW_H
#define LED_CONTROL_MCU_HW_H

#include "STD_TYPES.h"


typedef struct {
	u32 BIT_0:1;
	u32 BIT_1:1;
	u32 BIT_2:1;
	u32 BIT_3:1;
	u32 BIT_4:1;
	u32 BIT_5:1;
	u32 BIT_6:1;
	u32 BIT_7:1;
	u32 :24;
}GPIODIR_S;

typedef union {
	u32 R;
	GPIODIR_S B;
}GPIODIR;

typedef struct {
	u32 BIT_0:1;
	u32 BIT_1:1;
	u32 BIT_2:1;
	u32 BIT_3:1;
	u32 BIT_4:1;
	u32 BIT_5:1;
	u32 BIT_6:1;
	u32 BIT_7:1;
	u32 :24;
}GPIODEN_S;

typedef union {
	u32 R;
	GPIODEN_S B;
}GPIODEN;

typedef struct {
	u32 BIT_0:1;
	u32 BIT_1:1;
	u32 BIT_2:1;
	u32 BIT_3:1;
	u32 BIT_4:1;
	u32 BIT_5:1;
	u32 BIT_6:1;
	u32 BIT_7:1;
	u32 :24;
}GPIODATA_S;

typedef union {
	u32 R;
	GPIODATA_S B;
}GPIODATA;

#define PORTF_DIR            (*((volatile  GPIODIR *)(0x40025000 + 0x400)))
#define PORTF_DEN            (*((volatile  GPIODEN *)(0x40025000 + 0x51C))) /* IF F0 is used */
#define PORTF_DATA           (*((volatile GPIODATA *)(0x40025000 + 0x000)))

#endif
