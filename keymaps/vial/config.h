/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x17, 0x8C, 0x63, 0x1A, 0x5B, 0xBD, 0xFF, 0x9C}


#define VIAL_UNLOCK_COMBO_ROWS { 2, 7 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

#define AUDIO_PIN B5
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_STATE_TIMER GPTD4

#define VIAL_ENCODER_DEFAULT { KC_MS_WH_UP, KC_MS_WH_DOWN, KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, KC_TRNS, KC_TRNS }