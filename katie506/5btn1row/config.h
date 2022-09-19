#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Katies Gadgets
#define PRODUCT         5buttons

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

/* key matrix pins */
#define DIRECT_PINS {   \
    { D1, D0, D4, C6, D7} \
}
#define UNUSED_PINS


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x6B, 0x1F, 0x88, 0xAE, 0x0C, 0x8C, 0x8D, 0x1A}