#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2022
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         8btnswitch

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4, D0, D1, B6 }
#define UNUSED_PINS


#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
#define VIAL_KEYBOARD_UID {0x38, 0xF6, 0xC9, 0xC5, 0x7D, 0x1D, 0xE8, 0x7C}
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
