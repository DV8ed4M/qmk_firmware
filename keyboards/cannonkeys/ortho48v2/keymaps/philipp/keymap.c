#include QMK_KEYBOARD_H

	// Left-hand home row mods
	#define HOME_Z LGUI_T(KC_Z)
	#define HOME_X LALT_T(KC_X)
	#define HOME_C LSFT_T(KC_C)
	#define HOME_D LCTL_T(KC_D)

	#define HOME_GRV LGUI_T(S(KC_GRV))
	#define HOME_1   LALT_T(S(KC_1))
	#define HOME_2   LSFT_T(S(KC_2))
	#define HOME_3   LCTL_T(S(KC_3))

	// Right-hand home row mod
	#define HOME_H    RCTL_T(KC_H)
	#define HOME_COM  RSFT_T(KC_COMM)
	#define HOME_DOT  RALT_T(KC_DOT)
	#define HOME_SLS  RGUI_T(KC_SLSH)

	#define HOMEHOME  RCTL_T(KC_HOME)
	#define HOME_PDN  RSFT_T(KC_PGDN)
	#define HOME_PUP  RALT_T(KC_PGUP)
	#define HOME_END  RGUI_T(KC_END)

	// Layer Holds
	#define LAY_SPC   LT(2,KC_SPC)
	#define LAY_ENT   LT(3,KC_ENT)
	#define LAY_BSPC  LT(2,KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Colemak-DH Layer
	[0] = LAYOUT_ortho_4x12(
		KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,               KC_J,    KC_L,    KC_U,     KC_Y,     KC_SCLN,    KC_MINS,
		KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,               KC_M,    KC_N,    KC_E,     KC_I,     KC_O,       KC_QUOT,
		KC_LSFT, HOME_Z,  HOME_X,  HOME_C,  HOME_D,  KC_V,               KC_K,    HOME_H,  HOME_COM, HOME_DOT, HOME_SLS,   KC_RSFT,
		KC_NO,   KC_NO,   KC_NO,   KC_LGUI, KC_RALT, LAY_SPC,            LAY_ENT, LAY_BSPC, KC_DEL,  KC_NO,    KC_NO,      KC_NO
	),

	// QWERTY Layer
	[1] = LAYOUT_ortho_4x12(
		KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_MINS,
		KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,               KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
		KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,               KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
		KC_NO,   KC_NO,   KC_NO,   KC_LGUI, KC_RALT, KC_SPC,             KC_ENT,  KC_BSPC,  KC_DEL,  KC_NO,   KC_NO,    KC_NO
	),

	// Nav/Numpad Layer
	[2] = LAYOUT_ortho_4x12(
		KC_TRNS, KC_LBRC,  KC_7,    KC_8,    KC_9,    KC_RBRC,           KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_DEL,    KC_ESC,
		KC_TRNS, KC_SCLN,  KC_4,    KC_5,    KC_6,    KC_EQL,            KC_NO,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,   KC_LGUI,
		KC_TRNS, HOME_GRV, HOME_1,  HOME_2,  HOME_3,  KC_BSLS,           KC_NO,   HOMEHOME, HOME_PDN, HOME_PUP, HOME_END,  KC_NO,
		KC_NO,   KC_NO,    KC_NO,   KC_0,    KC_MINS, KC_SPC,            KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,    KC_NO,     KC_NO
	),

	// Symbol/Fun Layer
	[3] = LAYOUT_ortho_4x12(
		KC_NO,  S(KC_LBRC), S(KC_7), S(KC_8), S(KC_9),    S(KC_RBRC),        KC_NO,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
		KC_NO,  S(KC_SCLN), S(KC_4), S(KC_5), S(KC_6),    S(KC_EQL),         S(KC_9), KC_F5,   KC_F6,   KC_F7,   KC_8,    S(KC_0),
		KC_NO,  S(KC_GRV),  S(KC_1), S(KC_2), S(KC_3),    S(KC_BSLS),        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,
		KC_NO,  KC_NO,      KC_NO,   S(KC_0), S(KC_MINS), KC_SPC,            KC_ENT,  KC_BSPC, KC_DEL,  KC_NO,   KC_NO,   KC_NO
	),

};
