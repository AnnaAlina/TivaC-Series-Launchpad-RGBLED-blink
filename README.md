# TivaC-Series-Launchpad-RGBLED-blink

To begin, we had to include two different libraries to make our code run. The first, tm4c123gh6pm, is a specific library designed for the microcontroller. This library defines an identifier of specific register address locations to assign integer value to. The stdint.h library is used to define specific integer widths. The #define LED_RED, LED_BLUE, and LED_GREEN lines of code uses hexadecimal to represent the register bit field to each LED pin. 

Inside int main, SYSCTL_RCGC2_R is used to enable the PORT F GPIO. It does this by utilizing the hexadecimal value of 20 that the port is assigned to in the tm4c123gh6pm library. Next, GPIO_PORTF_DIR_R is a register used in the direction of data. Utilized in this code, it sets the red, blue, and green pins as outputs. The GPIO_PORTF_DEN_R register allows the PORT F GPIO pins as digital outputs. It is a digital enable register bit field in the code that is set to the LED_RED, LED_BLUE, and LED_GREEN hexadecimal values.


