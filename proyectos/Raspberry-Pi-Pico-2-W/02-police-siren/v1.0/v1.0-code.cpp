#include <stdio.h>
#include "pico/stdlib.h"

const uint PIN_LED_BLUE = 13;
const uint PIN_LED_RED = 12;

int main() {
    stdio_init_all();

    gpio_init(PIN_LED_BLUE);
    gpio_init(PIN_LED_RED);

    gpio_set_dir(PIN_LED_BLUE, GPIO_OUT);
    gpio_set_dir(PIN_LED_RED, GPIO_OUT);       

    while (true) {
        gpio_put(PIN_LED_BLUE, 1);
        gpio_put(PIN_LED_RED, 0);
        sleep_ms(120);

        gpio_put(PIN_LED_BLUE, 0);
        gpio_put(PIN_LED_RED, 1);
        sleep_ms(120);
    }
}
