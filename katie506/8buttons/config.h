#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         8buttons

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5  
#define VIAL_KEYBOARD_UID {0xC6, 0xAE, 0x3C, 0x1B, 0x32, 0x19, 0xB7, 0x21}
#define DYNAMIC_KEYMAP_LAYER_COUNT 1
