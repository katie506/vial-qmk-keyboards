#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2022
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         6btnknob

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4, B6 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_RESOLUTION 4

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
#define VIAL_KEYBOARD_UID {0x87, 0x60, 0xBA, 0xB2, 0x68, 0x03, 0x25, 0xD8}
#define DYNAMIC_KEYMAP_LAYER_COUNT 1
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
#define VIAL_ENCODER_KEYCODE_DELAY 20
#define ENCODER_DIRECTION_FLIP 