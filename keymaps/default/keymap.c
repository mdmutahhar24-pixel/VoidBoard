// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H


enum layers {
    BASE,
    SHORTCUTS,
    NUMPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * └───┴───┴───┘
     */

    [BASE] = LAYOUT_ortho_3x3(
        KC_Q,    KC_W,    KC_E,
        KC_A,    KC_S,    KC_D,
        KC_TAB,    KC_SPC,    KC_F
    ),

    [SHORTCUTS] = LAYOUT_ortho_3x3(
        LCA(KC_A),    LCA(KC_B),    LCA(KC_C),
        LCA(KC_D),    LCA(KC_E),    LCA(KC_F),
        LCA(KC_G),    LCA(KC_H),    LCA(KC_I)
    ),

    [NUMPAD] = LAYOUT_ortho_3x3(
        KC_7,    KC_8,    KC_9,
        KC_4,    KC_5,    KC_6,
        KC_1,    KC_2,    KC_3
    )
};