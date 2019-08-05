#include <tm4c123gh6pm.h>    //including libraries and files
#include <stdint.h>

#define LED_RED    0x02    //hexadecimal values to represent the register bit field to each LED pin
#define LED_BLUE    0x04
#define LED_GREEN    0x08

int main(void) {            
    
    long unsigned int i=0;     //variable used in the delays of the for loops
    int j;            //declaring integer variables
    int x;

        SYSCTL_RCGC2_R = SYSCTL_RCGC2_GPIOF;                  // enable PORT F GPIO
        GPIO_PORTF_DIR_R = LED_RED|LED_BLUE|LED_GREEN;      // set PORT F as output
        GPIO_PORTF_DEN_R = LED_RED|LED_BLUE|LED_GREEN;    // enable digital PORT F
        GPIO_PORTF_DATA_R = 0;                              // sets all PORT F pins low


while(1){                    //While LED_RED pin is high
int r;                //declaring r, b, and g integer variables
    int b;
    int g;

    for(r = 1 ; r < 6; r++){                //count through 5 cycles
        GPIO_PORTF_DATA_R =0;        //turns off all LED pins
        GPIO_PORTF_DATA_R = LED_RED;    //writes a logical 1 to the red LED pin turning it on
        for(i=0; i < 400000; i ++){}            //delay (keeps LED on)
        GPIO_PORTF_DATA_R = 0;        //turns off all LED pins
        for(i=0; i < 400000; i ++){}            //delay
        }

    for(b = 1; b < 6; b++){                //count through 5 cycles
        GPIO_PORTF_DATA_R =0;        //turns off all LED pins
        GPIO_PORTF_DATA_R = LED_BLUE;    //turns on the Blue LED
        for(i = 0; i < 400000; i ++){}            //delay (keeps LED on)
        GPIO_PORTF_DATA_R = 0;        //turns off all LED pins
        for(i = 0; i < 400000; i ++){}            //delay
        }

    for(g = 1; g < 6; g++){                //count through 5 cycles
        GPIO_PORTF_DATA_R =0;        //turns off all LED pins
        GPIO_PORTF_DATA_R = LED_GREEN;    //turns on green LED pin
        for(i=0; i < 400000; i ++){}            //delay (keeps LED on)
        GPIO_PORTF_DATA_R = 0;        //turns off all LED pins
        for(i=0; i < 400000; i ++){}            //delay
        }
    }
}
