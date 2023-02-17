// Copyright 2022 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Qwerty */
    /*
   * Del    1      2      3      T       ||      Y     7     8     9     0 
   * Q      W      E      R      T       ||      Y     U     I     O     P
   * A      S      D      F      G       ||      H     J     K     L     ;
   * Z      X      C      V      B       ||      N     M     ,     .     /
   * SFT    WIN    CTL    ESC   BKSP     ALT    SPC    4     5     6     ENT
   */
        KC_DEL,  KC_1,    KC_2,    KC_3,                               KC_7,    KC_8,    KC_9,    KC_0,
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    MO(1),   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(2),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LSFT, KC_LGUI, KC_LCTL, KC_ESC,  KC_BSPC, KC_LALT, KC_SPC,  KC_ENT,  KC_4,    KC_5,    KC_6    
    ),
    [1] = LAYOUT(
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH,                            KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, 
        KC_TAB,  KC_UP,   _______, _______, _______,          _______, _______, _______, _______, _______,
        KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_DLR,  KC_PERC, KC_CIRC 
    ),
    [2] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,
        _______, KC_TILD, _______, _______, KC_F5,            KC_F6,   _______, _______, _______, KC_PSCR,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_MUTE, KC_VOLU, KC_VOLD, _______, _______, _______, KC_HOME, KC_PGUP, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_END,  KC_PGDN, _______
    )
};
