#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        W, 7,   8,   9, \
        S, 4,   5,   6, \
        FN0 , UP,   2,   3,  \
        LCTL, DOWN,   RGHT,   LALT),
	/* 1: FN 1 */
    KEYMAP(MUTE,  F12,  VOLU, VOLD, \
           PGUP, UP,   TRNS, DEL,  \
           TRNS, LEFT, RGHT, TRNS,  \
           END,  DOWN, TRNS, TRNS),           
};
const action_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
 //   [1] = ACTION_LAYER_TOGGLE(1),     // toggle arrow overlay
 //   [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
 //   [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
 //   [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
 //   [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
 //   [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
 //   [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
 //   [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
