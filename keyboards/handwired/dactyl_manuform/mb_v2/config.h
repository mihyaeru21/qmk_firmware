/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

// left
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }

// right
#define MATRIX_ROW_PINS_RIGHT { D0, F4, F5, F6, F7 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, E6, D7, C6, D4 }

#define DIODE_DIRECTION COL2ROW

#define PMW33XX_CS_PIN B6
#define PMW33XX_LIFTOFF_DISTANCE 0x02
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_INVERT_X
#define PMW33XX_CPI 1000
#define ROTATIONAL_TRANSFORM_ANGLE 60
