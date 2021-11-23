// Copyright 2021 Jakub Jindra (@jindraj)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "users/jindraj/keymap_incl.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT_ansi(
	KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,                    KC_F13 , KC_F14 , KC_F15 ,                              MO(1)  ,

	KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS, KC_BSPC,  KC_INS , KC_HOME, KC_PGUP,   TG(2)  , KC_PEQL, KC_PSLS, KC_PAST,
	KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,                    KC_DEL , KC_END , KC_PGDN,   KC_P7  , KC_P8  , KC_P9  , KC_PMNS,
	KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT ,                                                 KC_P4  , KC_P5  , KC_P6  , KC_PPLS,
	KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,          KC_RSFT,                             KC_UP  ,            KC_P1  , KC_P2  , KC_P3  , KC_PENT,
	KC_LCTL, KC_LOPT, KC_LCMD,                   KC_SPC ,                                     KC_RALT, KC_RCMD, MO(1)  ,                    KC_LEFT, KC_DOWN, KC_RGHT,   KC_P0  ,          KC_PDOT
    ),

    [1] = LAYOUT_ansi( // media, dynmacros
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______, _______, _______,                              _______,

	_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, _______,  _______, _______, _______,   _______, _______, _______, _______,
	_______, _______, _______, _______, _______, KC_PAUS, KC_HOME, KC_PGUP, _______, _______, KC_UP  , _______, _______,                    _______, _______, _______,   _______, _______, _______, _______,
	_______, _______, _______, _______, _______, KC_SLCK, KC_END , KC_PGDN, _______, KC_RGHT, KC_DOWN, KC_LEFT, _______,                                                 DM_PLY1, DM_PLY2, KC_P6  , _______,
	_______, KC_MRWD, KC_MPLY, KC_MFFD, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______,          _______,                             _______,            DM_REC1, DM_REC2, KC_P3  , _______,
	_______, _______, _______,                   _______,                                     _______, _______, _______,                    _______, _______, _______,   DM_RSTP,          _______
    ),

    [2] = LAYOUT_ansi( //mouse on numpad layout
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______, _______, _______,                              _______,

	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,   TG(2)  , KC_BTN3, KC_BTN4, KC_ACL2,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______, _______, _______,   KC_BTN1, KC_MS_U, KC_BTN2, KC_ACL1,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                                 KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL0,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                             _______,            KC_WH_L, KC_WH_R, KC_WH_U, _______,
	_______, _______, _______,                   _______,                                     _______, _______, _______,                    _______, _______, _______,   _______,          KC_WH_D
    )
};
