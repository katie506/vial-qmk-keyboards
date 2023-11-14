#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
  [0] = LAYOUT_h(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, MO(1)),
  [1] = LAYOUT_h(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H, MO(0)) 
};