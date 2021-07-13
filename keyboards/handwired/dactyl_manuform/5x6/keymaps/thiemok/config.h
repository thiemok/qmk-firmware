/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#define USE_SERIAL

#define EE_HANDS
// Rows are doubled-up

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 6
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

#define SERIAL_USE_MULTI_TRANSACTION
#define SPLIT_NUM_TRANSACTIONS_USER 1

// TT Amount of taps to toggle a layer on
#define TAPPING_TOGGLE 2

// rgb lighting
#undef RGB_DI_PIN
#define RGB_DI_PIN D1
#undef RGBLED_NUM
#define RGBLED_NUM 32
#define RGBLED_SPLIT { 16, 16 }
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT

#define RGBLIGHT_LIMIT_VAL 150
