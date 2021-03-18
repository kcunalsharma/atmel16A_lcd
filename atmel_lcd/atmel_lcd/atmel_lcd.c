#define F_CPU 16000000UL        // Define CPU Frequency here it 16MHz
#include <avr/io.h>             // Include AVR std. library file
#include <util/delay.h>         // Include Delay header file

#include "lcd.c"


int main()
{
lcd_port_config();	
lcd_init ();
lcd_string(1,1,"  Kunal Sharma ");
lcd_string(2,1,"Mavuno Tech");	
_delay_ms(100);
lcd_clear();
lcd_string(1,1,"  Kunal Sharma ");
lcd_string(2,1,"Mavuno Technologies");
}


