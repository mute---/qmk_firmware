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
#include "yap.h"

#define _______ KC_TRNS
#define xxxxxxx KC_NO

// enum my_keycodes {
//   CTLSFT = SAFE_RANGE
// };

#define CTLSFT  LCTL(KC_LSFT)
#define RCTLLT  MT(MOD_RCTL, KC_LEFT)
#define RALTDN  MT(MOD_RALT, KC_DOWN)
#define RGUIUP  MT(MOD_RGUI, KC_UP)
#define RMEHRT  MT(MOD_MEH, KC_RGHT)

#define MAIN  0
#define FN1   1
#define FN2   2
#define FN3   3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAIN] = KEYMAP( \
  KC_ESC,  KC_GRAVE, KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,   KC_U,     KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  \
   ALT_T(KC_TAB),    KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,   KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,  \
         KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,   KC_M,     KC_COMM, KC_DOT,  KC_SLSH,  SFT_T(KC_ENTER),  \
  MO(FN2), KC_MEH,   KC_LGUI, KC_LALT, KC_LCTL, LT(FN1, KC_SPC), LT(FN1, KC_BSPC), RCTLLT,  RALTDN,  RGUIUP,  RMEHRT,  LT(FN2, KC_DEL)   \
), 
[FN1] = KEYMAP( \
  _______, _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  \
     _______,       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, \
     _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,    \
  _______, _______, _______, _______, _______,      _______,         _______,      _______, _______, _______, _______, _______  \
),
[FN2] = KEYMAP( \
  _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,    \
     KC_CAPS,       xxxxxxx, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS, KC_PSCR, KC_PAUS,   \
     _______,       xxxxxxx, xxxxxxx, xxxxxxx, KC_MUTE, KC_VOLD, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,       _______,      \
     _______, _______, _______, _______, _______,      _______,         _______,     _______, _______, _______, _______, _______ \
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
  // switch (keycode) {
  //   case CTLSFT:
  //     if (record->event.pressed) {
  //       register_code(KC_LCTL);
  //       register_code(KC_LSFT);
  //       unregister_code(KC_LSFT);
  //       unregister_code(KC_LCTL);
  //     } 
      
  //     return false;
  // }
  return true;
}

void led_set_user(uint8_t usb_led) {

}
