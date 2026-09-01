/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0x97, 0xD0, 0xA5, 0x97, 0x57, 0x48, 0xD0, 0x4F}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Handedness: EE_HANDS with the side baked in per build, written to EEPROM
// on first boot. Selected at build time via
//   EXTRAFLAGS=-DINIT_EE_HANDS_LEFT | -DINIT_EE_HANDS_RIGHT
// (same mechanism the upstream _LEFT/_RIGHT release images use).
#define EE_HANDS

// Cyclotab: macOS app switcher, lazier timeout for arrow-key browsing.
#define CYCLOTAB_KEYS LCMD(KC_TAB), S(LCMD(KC_TAB))
#define CYCLOTAB_TIMEOUT 2000
