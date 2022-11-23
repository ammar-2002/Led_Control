#include "DIO.h"
#include "Mcu_Hw.h"

void PIN_DIR(u8 x,u8 state){
	  u8 pin  = x % 10;
    u8 port = x / 10;
    switch(port){
        case 0:
            switch(state){
                case INPUT:
                    break;
                case OUTPUT:
                    break;
                default:
                    break;
            }
            break;
        case 1:
            switch(state){
                case INPUT:
                    break;
                case OUTPUT:
                    break;
                default:
                    break;
            }
            break;
        case 2:
            switch(state){
                case INPUT: 
                    break;
                case OUTPUT:
                    break;
                default:
                    break;
            }
            break;
        case 3:
            switch(state){
                case INPUT:
                    break;
                case OUTPUT:
                    break;
                default:
                    break;
            }
            break;
				case 5:
					  switch(state){
                case INPUT:
                    switch(pin){
											case 0:
												PORTF_DIR.B.BIT_0 = INPUT;
												break;
											case 1:
												PORTF_DIR.B.BIT_1 = INPUT;
												break;
											case 2:
												PORTF_DIR.B.BIT_2 = INPUT;
												break;
											case 3:
												PORTF_DIR.B.BIT_3 = INPUT;
												break;
											case 4:
												PORTF_DIR.B.BIT_4 = INPUT;
												break;
											case 5:
												PORTF_DIR.B.BIT_5 = INPUT;
												break;
											case 6:
												PORTF_DIR.B.BIT_6 = INPUT;
												break;
											case 7:
												PORTF_DIR.B.BIT_7 = INPUT;
												break;
										}
                    break;
                case OUTPUT:
                    switch(pin){
											case 0:
												PORTF_DIR.B.BIT_0 = OUTPUT;
												break;
											case 1:
												PORTF_DIR.B.BIT_1 = OUTPUT;
												break;
											case 2:
												PORTF_DIR.B.BIT_2 = OUTPUT;
												break;
											case 3:
												PORTF_DIR.B.BIT_3 = OUTPUT;
												break;
											case 4:
												PORTF_DIR.B.BIT_4 = OUTPUT;
												break;
											case 5:
												PORTF_DIR.B.BIT_5 = OUTPUT;
												break;
											case 6:
												PORTF_DIR.B.BIT_6 = OUTPUT;
												break;
											case 7:
												PORTF_DIR.B.BIT_7 = OUTPUT;
												break;
										}
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}

void PIN_DATA(u8 x,u8 state){
	u8 pin  = x % 10;
    u8 port = x / 10;
    switch(port){
        case 0:
            switch(state){
                case HIGH:
                    break;
                case LOW:
                    break;
                default:
                    break;
            }
            break;
        case 1:
            switch(state){
                case HIGH:
                    break;
                case LOW:
                    break;
                default:
                    break;
            }
            break;
        case 2:
            switch(state){
                case HIGH: 
                    break;
                case LOW:
                    break;
                default:
                    break;
            }
            break;
        case 3:
            switch(state){
                case HIGH:
                    break;
                case LOW:
                    break;
                default:
                    break;
            }
            break;
				case 5:
					  switch(state){
                case HIGH:
                    switch(pin){
											case 0:
												PORTF_DATA.B.BIT_0 = HIGH;
												break;
											case 1:
												PORTF_DATA.B.BIT_1 = HIGH;
												break;
											case 2:
												PORTF_DATA.B.BIT_2 = HIGH;
												break;
											case 3:
												PORTF_DATA.B.BIT_3 = HIGH;
												break;
											case 4:
												PORTF_DATA.B.BIT_4 = HIGH;
												break;
											case 5:
												PORTF_DATA.B.BIT_5 = HIGH;
												break;
											case 6:
												PORTF_DATA.B.BIT_6 = HIGH;
												break;
											case 7:
												PORTF_DATA.B.BIT_7 = HIGH;
												break;
										}
                    break;
                case LOW:
                    switch(pin){
											case 0:
												PORTF_DATA.B.BIT_0 = LOW;
												break;
											case 1:
												PORTF_DATA.B.BIT_1 = LOW;
												break;
											case 2:
												PORTF_DATA.B.BIT_2 = LOW;
												break;
											case 3:
												PORTF_DATA.B.BIT_3 = LOW;
												break;
											case 4:
												PORTF_DATA.B.BIT_4 = LOW;
												break;
											case 5:
												PORTF_DATA.B.BIT_5 = LOW;
												break;
											case 6:
												PORTF_DATA.B.BIT_6 = LOW;
												break;
											case 7:
												PORTF_DATA.B.BIT_7 = LOW;
												break;
										}
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}
