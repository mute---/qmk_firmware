/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "yak.h"

#define _______ KC_TRNS
#define xxxxxxx KC_NO

#define CTLSFT LCTL(KC_LSFT)

#define SFTENT MT(MOD_RSFT, KC_ENT)

#define MAIN  0
#define FN0   1
#define FN1   2
#define FN2   3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAIN] = KEYMAP( \
  KC_ESC,       KC_GRAVE,  KC_Q,    KC_W,    KC_E,    KC_R, KC_T,                                            KC_Y, KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, \
  KC_LCTL, ALT_T(KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F, KC_G,                                            KC_H, KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, \
     KC_LSFT,              KC_Z,    KC_X,    KC_C,    KC_V, KC_B,                                            KC_N, KC_M,   KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,    \
                           KC_LGUI, KC_LALT, KC_LCTL, MO(FN0),         MO(FN1),  CTLSFT,     KC_DEL, KC_BSPC,      MO(FN2), KC_RCTL, KC_RALT, KC_RGUI,                   \
                                                      KC_SPC,         MT(MOD_LSFT, KC_TAB), LT(FN1, KC_BSPC), SFTENT                                                   \
), 
[FN0] = KEYMAP( \
  _______, _______, KC_1,    KC_2 ,   KC_3,    KC_4 ,   KC_5,                                          KC_6 ,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  \
  _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, \
       _______,     _______, _______, _______, _______, _______,                                       _______, _______, _______, _______, _______,      _______,     \
           _______, _______, _______, _______,                  _______ , _______,  _______,  _______ ,         _______, _______, _______, _______,                   \
                                                                _______ , _______,  _______,  _______                                                                 \
),
[FN1] = KEYMAP( \
  RESET,   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
  _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                                       KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, KC_PSCR, KC_PAUS, \
     _______,       _______, _______, _______, KC_MUTE, KC_VOLD,                                       KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______,       _______,    \
           _______, _______, _______, _______,                  _______ , _______,  _______,  _______ ,         _______, _______, _______, _______,                   \
                                                                _______ , _______,  _______,  _______                                                                 \
), 
[FN2] = KEYMAP( \
  _______, _______, _______, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL,                                        _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, KC_LBRC, KC_RBRC, KC_UNDS, KC_PLUS,                                       CTLSFT,  KC_BSPC, _______, KC_ENT,  _______, _______, _______, \
     _______,       _______, KC_LCBR, KC_RCBR, KC_DLR,  _______,                                       _______, KC_DEL,  _______, _______, _______,       _______,    \
           _______, _______, _______, _______,                  _______ , _______,  _______,  _______ ,         _______, _______, _______, _______,                   \
                                                                _______ , _______,  _______,  _______                                                                 \
)
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      // switch(id) {
      //   case 0:
      //     if (record->event.pressed) {
      //       register_code(KC_RSFT);
      //     } else {
      //       unregister_code(KC_RSFT);
      //     }
      //   break;
      // }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
