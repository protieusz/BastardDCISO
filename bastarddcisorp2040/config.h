#pragma once

#include "config_common.h"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 11


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
