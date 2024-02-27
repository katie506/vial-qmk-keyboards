#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2022
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         3buttonknob

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { B5, D7, D0, B6 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }
#define ENCODER_RESOLUTION 4

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
#define VIAL_KEYBOARD_UID {0xE2, 0x9E, 0xE3, 0x3F, 0x89, 0xC5, 0xA4, 0xE4}
#define DYNAMIC_KEYMAP_LAYER_COUNT 1
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
#define VIAL_ENCODER_KEYCODE_DELAY 20
/* #define ENCODER_DIRECTION_FLIP */