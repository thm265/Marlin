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
 * Velleman K8400 (Vertex)
 * 3DRAG clone
 *
 * K8400 has some minor differences over a normal 3Drag:
 *  - No X/Y max endstops
 *  - Second extruder step pin has moved
 *  - No power supply control
 *  - Second heater has moved pin
 */

#define BOARD_NAME              "K8400"
#define DEFAULT_MACHINE_NAME    "Vertex"
#define DEFAULT_SOURCE_CODE_URL "https://github.com/birkett/Vertex-K8400-Firmware"

//#include "pins_3DRAG.h"

//
// Limit Switches
//
#define X_STOP_PIN  3
#define Y_STOP_PIN 14

#undef X_MIN_PIN
#undef X_MAX_PIN
#undef Y_MIN_PIN
#undef Y_MAX_PIN

//
// Steppers
//
#undef E1_STEP_PIN
#define E1_STEP_PIN   32

//
// Heaters / Fans
//
#undef HEATER_1_PIN
#define HEATER_1_PIN  11
#undef FAN_PIN
#define FAN_PIN 2

//
// Misc. Functions
//
#undef PS_ON_PIN
#undef KILL_PIN
#undef SD_DETECT_PIN

#if Z_STEP_PIN == 26
  #undef Z_STEP_PIN
  #define Z_STEP_PIN 32
#endif

// !start EDIT
// From original firmware
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           -1

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          -1

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       63
#define Z_MIN_PIN          18
#define Z_MAX_PIN          -1

#define Z2_STEP_PIN        -1
#define Z2_DIR_PIN         -1
#define Z2_ENABLE_PIN      -1

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        32
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30

#define SDPOWER            -1
#define SDSS               25//53
#define LED_PIN            13

#define FAN_PIN            2
#define FAN1_PIN           8

#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN       10  //E0
#define HEATER_1_PIN       11  //E1
#define HEATER_2_PIN       6   //BED

#define TEMP_0_PIN         13   // ANALOG NUMBERING
#define TEMP_1_PIN         15   // ANALOG NUMBERING
#define TEMP_2_PIN         -1   // ANALOG NUMBERING
#define HEATER_BED_PIN     9    // BED
#define TEMP_BED_PIN       14   // ANALOG NUMBERING

#ifdef ULTRA_LCD

    //arduino pin which triggers an piezzo beeper

  #define LCD_PINS_RS 16
  #define LCD_PINS_ENABLE 17
  #define LCD_PINS_D4 23
  #define LCD_PINS_D5 25
  #define LCD_PINS_D6 27
  #define LCD_PINS_D7 29

  //buttons are directly attached using AUX-2
  #define BTN_EN1 37
  #define BTN_EN2 35
  #define BTN_ENC 31  //the click

  #define BLEN_C 2
  #define BLEN_B 1
  #define BLEN_A 0

  #define SD_DETECT_PIN -1		// Ramps does not use this port

  //encoder rotation values
  #define encrot0 0
  #define encrot1 2
  #define encrot2 3
  #define encrot3 1

  #define BEEPER_PIN -1			// Beeper on AUX-4

  #define LCD_PINS_RS 27
  #define LCD_PINS_ENABLE 29
  #define LCD_PINS_D4 37
  #define LCD_PINS_D5 35
  #define LCD_PINS_D6 33
  #define LCD_PINS_D7 31

    //buttons are directly attached using AUX-2
  #define BTN_EN1 17
  #define BTN_EN2 16
  #define BTN_ENC 23  //the click

#endif
// !end EDIT
