#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
  [0] = LAYOUT_h(
     KC_1, KC_2, KC_3, MO(1)
  ),
  [1] = LAYOUT_h(
     KC_F1, KC_F2, KC_F3, KC_TRANSPARENT
  ),
};