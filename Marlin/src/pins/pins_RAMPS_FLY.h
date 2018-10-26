/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/** 
 * RAMPS_FLY is a powerful RAMPS standard board support up to 8 steppers 
 * and 4 hotends. 
 */

// numbers in parenthesis () are the mega2560 equivalent pin numbers

#define BOARD_NAME "FLY"

#include "pins_RAMPS.h"

//
// Servos
//

#if defined(NUM_SERVOS) && NUM_SERVOS > 2
  #error "FLY supports only 1 servo. Comment out this line to continue."
#endif
#ifdef SERVO0_PIN
  #undef SERVO0_PIN
#endif
#ifdef SERVO1_PIN
  #undef SERVO1_PIN
#endif
#define SERVO0_PIN          6

//
// Limit Switches
//

