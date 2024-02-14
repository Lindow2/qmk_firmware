#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, LT(1,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, LALT_T(KC_LGUI), KC_LBRC, LCTL(KC_W), RCS(KC_W), KC_HOME, KC_END, KC_RBRC, QK_REP, KC_TAB, TT(1), TT(2), KC_SPC, KC_BSPC, KC_LCTL, KC_RSFT, KC_ENT),
	[1] = LAYOUT(KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_F), KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, QK_BOOT, KC_PLUS, KC_NO, KC_EXLM, KC_AMPR, KC_PIPE, KC_DLR, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_MINS, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_EQL, KC_UNDS, KC_NO, KC_NO, KC_P0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_LCTL, KC_LALT, KC_SPC, KC_BSPC, KC_TRNS, KC_TRNS, KC_ENT),
	[2] = LAYOUT(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MSTP, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_HOME, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





