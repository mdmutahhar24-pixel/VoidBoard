#include QMK_KEYBOARD_H
#include "animation.h"
#include "gpio.h"

enum custom_keycodes{
	ENC_PRESS = SAFE_RANGE,
};

enum layers {
    BASE,
    SHORTCUTS,
    NUMPAD
};

void matrix_init_user(void) {
    gpio_set_pin_input_high(GP7);
}

void matrix_scan_user(void) {
    static uint32_t last_press = 0;
    static bool last_state = true;

    bool pressed = !gpio_read_pin(GP7);

    if (pressed && !last_state) {
        if (timer_elapsed32(last_press) > 200) {
            last_press = timer_read32();

            switch (get_highest_layer(layer_state)) {
                case BASE:
                    layer_move(SHORTCUTS);
                    break;
                case SHORTCUTS:
                    layer_move(NUMPAD);
                    break;
                default:
                    layer_move(BASE);
                    break;
            }
        }
    }

    last_state = pressed;
}

bool encoder_update_user(uint8_t index, bool clockwise) {

    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }

    return true;
};

static const uint8_t *const frames[] = {
    (const uint8_t *)epd_bitmap_frame_00_delay_0,
	(const uint8_t *)epd_bitmap_frame_01_delay_0,
	(const uint8_t *)epd_bitmap_frame_02_delay_0,
	(const uint8_t *)epd_bitmap_frame_03_delay_0,
	(const uint8_t *)epd_bitmap_frame_04_delay_0,
	(const uint8_t *)epd_bitmap_frame_05_delay_0,
	(const uint8_t *)epd_bitmap_frame_06_delay_0,
	(const uint8_t *)epd_bitmap_frame_07_delay_0,
	(const uint8_t *)epd_bitmap_frame_08_delay_0,
	(const uint8_t *)epd_bitmap_frame_09_delay_0,
	(const uint8_t *)epd_bitmap_frame_10_delay_0,
	(const uint8_t *)epd_bitmap_frame_11_delay_0,
	(const uint8_t *)epd_bitmap_frame_12_delay_0,
	(const uint8_t *)epd_bitmap_frame_13_delay_0,
	(const uint8_t *)epd_bitmap_frame_14_delay_0,
	(const uint8_t *)epd_bitmap_frame_15_delay_0,
	(const uint8_t *)epd_bitmap_frame_16_delay_0,
	(const uint8_t *)epd_bitmap_frame_17_delay_0,
	(const uint8_t *)epd_bitmap_frame_18_delay_0,
	(const uint8_t *)epd_bitmap_frame_19_delay_0,
	(const uint8_t *)epd_bitmap_frame_20_delay_0,
	(const uint8_t *)epd_bitmap_frame_21_delay_0,
	(const uint8_t *)epd_bitmap_frame_22_delay_0,
	(const uint8_t *)epd_bitmap_frame_23_delay_0,
	(const uint8_t *)epd_bitmap_frame_24_delay_0
};

static uint32_t anim_timer = 0;
static uint8_t currentFrame = 0;

void render(void) {
	#define FRAME_SIZE 128

	if (timer_elapsed32(anim_timer) > 100) {
    	anim_timer = timer_read32();
    	currentFrame = (currentFrame + 1) % 25;
	}

	oled_set_cursor(0, 0);

	oled_write_raw(
		(const char *)frames[currentFrame],
		FRAME_SIZE
	);
};

bool oled_task_user(void) {

	render();

	oled_set_cursor(6, 0);
    oled_write_ln_P(PSTR("VoidBoard"), false);

    switch (get_highest_layer(layer_state)) {
		case BASE:
			oled_write_ln_P(PSTR("Layer: BASE"), false);
			break;
		case SHORTCUTS:
			oled_write_ln_P(PSTR("Layer: SHORTCUTS"), false);
			break;
		case NUMPAD:
			oled_write_ln_P(PSTR("Layer: NUMPAD"), false);
			break;
	}

	return false;
};