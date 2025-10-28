#include <stdio.h>
#include <led.h>
#include <display.h>
#include <sensor.h>



void app_main(void)
{
    led_init();
    display_init();
    sensor_init();
    
}