#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"

const uint PIN_LED_BLUE = 13;
const uint PIN_LED_RED = 12;
const uint PIN_BUZZER = 2;

void buzzer_set_tone(uint pin, uint32_t wrap) {
    uint slice_num = pwm_gpio_to_slice_num(pin);
    uint channel = pwm_gpio_to_channel(pin);

    pwm_set_wrap(slice_num, wrap);
    pwm_set_clkdiv(slice_num, 125.0f);
    pwm_set_chan_level(slice_num, channel, wrap / 2);
    pwm_set_enabled(slice_num, true);
}

int main() {
    stdio_init_all();

    // LED BLUE
    gpio_init(PIN_LED_BLUE);
    gpio_set_dir(PIN_LED_BLUE, GPIO_OUT);

    // LED RED
    gpio_init(PIN_LED_RED);
    gpio_set_dir(PIN_LED_RED, GPIO_OUT);

    // PIN PWM
    gpio_set_function(PIN_BUZZER, GPIO_FUNC_PWM);
    buzzer_set_tone(PIN_BUZZER, 440);

    while (true) {
        gpio_put(PIN_LED_BLUE, 1);
        gpio_put(PIN_LED_RED, 0);
        buzzer_set_tone(PIN_BUZZER, 1000);
        sleep_ms(120);

        gpio_put(PIN_LED_BLUE, 0);
        gpio_put(PIN_LED_RED, 1);
        buzzer_set_tone(PIN_BUZZER, 2000);
        sleep_ms(120);
    }
}
