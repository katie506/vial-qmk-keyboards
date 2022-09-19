#include QMK_KEYBOARD_H

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
  
[0] = LAYOUT(KC_A, KC_B, KC_C, KC_MUTE, KC_E, KC_F, KC_G, MO(1)),
[1] = LAYOUT(KC_1, KC_2, KC_3, KC_MUTE, KC_5, KC_6, KC_7, KC_TRANSPARENT)
};