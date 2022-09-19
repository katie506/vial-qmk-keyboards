#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2022
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         3buttons

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { B5, D7, D0 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
#define VIAL_KEYBOARD_UID {0x5D, 0xC3, 0xFE, 0x8A, 0xF4, 0x6C, 0x0D, 0x51}
#define DYNAMIC_KEYMAP_LAYER_COUNT 1