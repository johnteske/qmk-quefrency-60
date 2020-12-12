/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Danny Nguyen <danny@keeb.io>

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

/* Use I2C or Serial, not both */

#define USE_SERIAL
//#define USE_I2C

#ifdef AUDIO_ENABLE
  #define B7_AUDIO // B7 (timer 1) exposed on Elite-C 
  #define NO_MUSIC_MODE

  #define TEMPO_DEFAULT 100

  // SEEGSON Rewire System Boot
  // TODO rests do not seem to work
  #define SEEGSON Q__NOTE(_C4), Q__NOTE(_REST), Q__NOTE(_E4), Q__NOTE(_REST), Q__NOTE(_G4), Q__NOTE(_REST), Q__NOTE(_C4), Q__NOTE(_REST), Q__NOTE(_E4), Q__NOTE(_REST), Q__NOTE(_G4), Q__NOTE(_REST), Q__NOTE(_C5)
  #define STARTUP_SONG SONG(SEEGSON)

  #define AUDIO_CLICKY
  #define AUDIO_CLICKY_FREQ_DEFAULT 70.0f
#endif

#ifdef RGBLIGHT_ENABLE
  #undef RGBLIGHT_ANIMATIONS
  #undef RGBLED_NUM
  #define RGBLED_NUM 8
  #define RGBLIGHT_LAYERS
  #define RGBLIGHT_SLEEP
  #endif
