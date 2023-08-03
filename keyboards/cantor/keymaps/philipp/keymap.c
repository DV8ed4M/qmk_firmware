// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    // Colemak-DH
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                            KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_MINS,
        KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                            KC_M,    KC_N,    KC_E,    KC_I,    KC_O,       KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                            KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,
                                            KC_NO,   KC_LALT, KC_SPC,         KC_ENT, KC_BSPC, TO(1)
    )

    // Nav/Numpad Layer
    [1] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,  KC_ESC,
        KC_TRNS, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                          KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
        KC_TRNS, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                         KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  CW_TOGG,
                                            TO(0),   KC_MINS, KC_0,           KC_ENT, KC_BSPC,  TO(2)

    // Symbol/Fun Layer
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS, S(KC_LBRC), S(KC_7),    S(KC_8),    S(KC_9),    S(KC_RBRC),                KC_NO,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
        KC_TRNS, S(KC_SCLN), S(KC_4),    S(KC_5),    S(KC_6),    S(KC_EQL),                 S(KC_9), KC_F5,   KC_F6,   KC_F7,   KC_8,    S(KC_0),
        KC_TRNS, S(KC_GRV),  S(KC_1),    S(KC_2),    S(KC_3),    S(KC_BSLS),                KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_TRNS,
                                           TO(0),    S(KC_MINS), S(KC_0),           KC_ENT, KC_BSPC,  TO(3)

    // QWERTY
    [3] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            TO(0),   KC_LALT, KC_SPC,         KC_ENT, KC_BSPC, TO(0)
    )


};
