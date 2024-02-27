#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         6buttonrow

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { E6, D7, C6, D4, D0, D1 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
//#define VIAL_KEYBOARD_UID {0x28, 0x12, 0xEB, 0xC0, 0x07, 0xF6, 0xFB, 0x7B}
#define VIAL_KEYBOARD_UID {0x48, 0xB5, 0xC8, 0xB2, 0x2D, 0x03, 0xF1, 0x3C}
#define DYNAMIC_KEYMAP_LAYER_COUNT 1