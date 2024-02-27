#include QMK_KEYBOARD_H

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } 
    return false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
  [0] = LAYOUT_h(
     KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_MUTE
  )
};
