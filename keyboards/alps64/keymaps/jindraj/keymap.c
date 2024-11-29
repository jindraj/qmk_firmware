#include QMK_KEYBOARD_H
#include "users/jindraj/keymap_incl.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  [0] = LAYOUT_all(
    KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , XXXXXXX, KC_BSPC,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
    MO(1)  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT ,
    KC_LSFT, XXXXXXX, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, XXXXXXX,
    KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC ,                                     KC_APP , KC_RALT, KC_RGUI, MO(2)
  ),

  [1] = LAYOUT_all(
    KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_DEL,
    KC_CAPS, _______, KC_UP  , _______, _______, KC_PAUS, KC_HOME, KC_PGUP, SS_CKLB, _______, _______, _______, _______, QK_BOOT,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_SCRL, KC_END , KC_PGDN, _______, _______, _______, _______, CW_TOGG,
    _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, KC_VOLD, KC_VOLU, KC_MUTE, TG(2)  , _______, _______, _______, _______, XXXXXXX,
    _______, _______, _______,                   _______,                                     _______, _______, _______, _______
  ),

  [2] = LAYOUT_all(
    _______, KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_F21 , KC_F22 , KC_F23 , KC_F24 , XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP  , DM_REC1, DM_REC2, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
    _______, XXXXXXX, _______, _______, _______, _______, _______, _______, TG(2)  , DM_PLY1, DM_PLY2, DM_RSTP, KC_UP  , XXXXXXX,
    _______, _______, _______,                   _______,                                     _______, KC_LEFT, KC_DOWN, KC_RIGHT
  ),

};
