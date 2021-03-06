#include "WS2811.h"
#include "graphics.h"

void wait(uint32_t cycles){
	for(uint32_t i = 0; i < cycles; i++);
}

void showLED(){
	LED_TO_PWM();
	wait(10000);
}
int main(void)
{
	ws2811_init();
	clearAllLED();
    while(1)
    {
    	//try knightrider animation
    	//startup
    	setLED(2, 8,0,0);
    	setLED(1, 64,0,0);
    	setLED(0, 255, 0, 0);
    	showLED();

    	shiftRight(1);
    	setLED(0, 64,0,0);
    	showLED();

    	shiftRight(1);
    	setLED(0, 8,0,0);
    	showLED();

    	for(uint8_t i = 3; i< NR_LEDS; i++){
    		shiftRight(1);
    		showLED();
    	}

    	shiftLeft(1);
		setLED(NR_LEDS-1, 64,0,0);
		showLED();

		shiftLeft(1);
		setLED(NR_LEDS-1, 8,0,0);
		showLED();

		for(uint8_t i = 3; i< NR_LEDS; i++){
			shiftLeft(1);
			showLED();
		}
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(i,i,i);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(i,i,i);
//			showLED();
//		}
//
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(i,0,0);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(i,0,0);
//			showLED();
//		}
//
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(0,i,0);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(0,i,0);
//			showLED();
//		}
//
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(0,0,i);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(0,0,i);
//			showLED();
//		}
//
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(i,i,0);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(i,i,0);
//			showLED();
//		}
//
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(0,i,i);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(0,i,i);
//			showLED();
//		}
//
//
//		for(uint8_t i = 1; i>0; i++){
//			setAllLED(i,0,i);
//			showLED();
//		}
//		for(uint8_t i = 255; i>0; i--){
//			setAllLED(i,0,i);
//			showLED();
//		}

    }
}
