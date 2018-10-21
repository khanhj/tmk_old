#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC, F1, F2, F3, F5, F6, F7, F8, F10, F11,F12, PSCR, INS, DEL, \
  	   GRV, 1, 2, 3, F4, 6, 7, F9, 0, MINS, EQL, RBRC, BSPC, HOME, \
           TAB, Q, W, E, 4, 5, 8, 9, O, P, LBRC, QUOT, BSLS, PGUP, \
           MUTE, A, S, D, R, T, U, I, K, L, SCLN, RSFT, ENT, PGDN, \
           LSFT, Z, X, C, F, Y, H, J, COMM, DOT, SLSH, LEFT, UP, END, \
           LCTL, LGUI, LALT, SPC, V, G, B, N, M, RALT, FN0, RCTL, DOWN, RGHT),

    /* 1: FN 1 */
    KEYMAP(MUTE, VOLU, VOLD, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
	   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),

};

const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1)

};
