#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

const uint PIN_LED = 17;
const uint PIN_SENSOR_LUZ = 28; 

int main() {
    stdio_init_all();

    gpio_init(PIN_LED);
    gpio_set_dir(PIN_LED, GPIO_OUT);

    adc_init();
    adc_gpio_init(PIN_SENSOR_LUZ);
    adc_select_input(2);

    while (true) {
        uint16_t lectura_luz = adc_read();

        printf("Luz: %d\n", lectura_luz);

        if (lectura_luz < 2000) {
            gpio_put(PIN_LED, 1);
        } 
        else {
            gpio_put(PIN_LED, 0);
        }

        sleep_ms(200);
    }
}
