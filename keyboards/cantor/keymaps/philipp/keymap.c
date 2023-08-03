// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Left-hand home row mods
#define HOME_Z LGUI_T(KC_Z)
#define HOME_X LALT_T(KC_X)
#define HOME_C LSFT_T(KC_C)
#define HOME_D LCTL_T(KC_D)

// Right-hand home row mods
#define HOME_H    RCTL_T(KC_H)
#define HOME_COM  RSFT_T(KC_COMM)
#define HOME_DOT  RALT_T(KC_DOT)
#define HOME_SLS  RGUI_T(KC_SLSH)



    // Colemak-DH
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                            KC_J,    KC_L,    KC_U,     KC_Y,     KC_SCLN,    KC_MINS,
        KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                            KC_M,    KC_N,    KC_E,     KC_I,     KC_O,       KC_QUOT,
        KC_LSFT, HOME_Z,  HOME_X,  HOME_C,  HOME_D,  KC_V,                            KC_K,    HOME_H,  HOME_COM ,HOME_DOT ,HOME_SLS,   KC_RSFT,
                                            KC_NO,   KC_LALT, KC_SPC,         KC_ENT, KC_BSPC, TO(1)
    ),

    // Nav/Numpad Layer
    [1] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,  KC_ESC,
        KC_TRNS, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                          KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LGUI,
        KC_TRNS, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                         KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,
                                            TO(0),   KC_0, KC_MINS,          KC_ENT, KC_BSPC,  TO(2)
    ),

    // Symbol/Fun Layer
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS, S(KC_LBRC), S(KC_7),    S(KC_8),    S(KC_9),    S(KC_RBRC),                KC_NO,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
        KC_TRNS, S(KC_SCLN), S(KC_4),    S(KC_5),    S(KC_6),    S(KC_EQL),                 S(KC_9), KC_F5,   KC_F6,   KC_F7,   KC_8,    S(KC_0),
        KC_TRNS, S(KC_GRV),  S(KC_1),    S(KC_2),    S(KC_3),    S(KC_BSLS),                KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,
                                           TO(0),    S(KC_0), S(KC_MINS),           KC_ENT, KC_BSPC,  TO(3)
    ),

    // QWERTY
    [3] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            TO(0),   KC_LALT, KC_SPC,         KC_ENT, KC_BSPC, TO(0)
    )

};
