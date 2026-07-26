#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"

const uint PIN_LED_BLUE = 13;
const uint PIN_LED_RED = 12;
const uint PIN_BUZZER = 2;
const uint PIN_BUTTON = 14;

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

    gpio_init(PIN_LED_BLUE);
    gpio_set_dir(PIN_LED_BLUE, GPIO_OUT);

    gpio_init(PIN_LED_RED);
    gpio_set_dir(PIN_LED_RED, GPIO_OUT);

    gpio_set_function(PIN_BUZZER, GPIO_FUNC_PWM);

    gpio_init(PIN_BUTTON);
    gpio_set_dir(PIN_BUTTON, GPIO_IN);
    gpio_pull_up(PIN_BUTTON);

    while (true) {
        bool boton_actual = gpio_get(PIN_BUTTON) == 1;
        if (boton_actual == 0) {
            gpio_put(PIN_LED_BLUE, 1);
            gpio_put(PIN_LED_RED, 0);
            buzzer_set_tone(PIN_BUZZER, 1000);
            sleep_ms(150);

            gpio_put(PIN_LED_BLUE, 0);
            gpio_put(PIN_LED_RED, 1);
            buzzer_set_tone(PIN_BUZZER, 2000);
            sleep_ms(150);
        } 
        else {
            gpio_put(PIN_LED_BLUE, 0);
            gpio_put(PIN_LED_RED, 0);
            buzzer_set_tone(PIN_BUZZER, 0);
            
            sleep_ms(50);
        }
    }
}           
