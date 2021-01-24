/* Copyright 2019 %YOUR_NAME%
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
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define MAIN   0
#define GAME   1
#define EXT    3
#define FUN    4
#define ADJUST 10

#define FUNDEL LT(FUN, KC_DEL)
#define FUNBSP LT(FUN, KC_BSPC)
#define SFTSPC LSFT_T(KC_SPC)
#define SFTENT RSFT_T(KC_ENT)

#define RCTLLT RCTL_T(KC_LEFT)
#define RALTDN RALT_T(KC_DOWN)
#define RGUIUP RGUI_T(KC_UP)
#define EXTRGT LT(EXT, KC_RGHT)
#define GUIESC MT(MOD_LGUI, KC_ESC)

enum custom_codes {
  VD_NEXT = SAFE_RANGE,
  VD_PREV,
  PC_MAC,
  PC_WIN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAIN] = KEYMAP( \
           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           \
  KC_GRV,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_BSLS, \
           GUIESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          \
           KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,          \
                    MO(EXT), KC_LGUI, KC_LALT, KC_LCTL, SFTSPC, FUNDEL,   FUNBSP,  SFTENT,  RCTLLT,  RALTDN,  RGUIUP,  EXTRGT                     \
),
[GAME] = KEYMAP( \
           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           \
  KC_GRV,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_BSLS, \
           KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          \
           KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,          \
                    KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, FUNDEL,   FUNBSP,  SFTENT,  RCTLLT,  RALTDN,  RGUIUP,  EXTRGT                     \
),
[EXT] = KEYMAP( \
           KC_SLCK, _______, _______, _______, _______, _______,                   _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______,          \
  _______, _______, _______, _______, _______, _______, KC_PSCR,                   _______, KC_P7,   KC_P8,   KC_P9,   _______, _______, _______, \
           KC_CAPS, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                   _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,          \
           _______, _______, _______, _______, KC_MUTE, KC_VOLD,                   _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,          \
                    _______, _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, _______                    \
),
[FUN] = KEYMAP( \
           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,            \
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, \
           _______, _______, _______, VD_PREV, VD_NEXT, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          \
           KC_INS,  _______, _______, _______, _______, _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,          \
                    _______, _______, _______, _______, _______, _______, _______, _______, KC_RCTL, KC_RALT, KC_RGUI, MO(EXT)                    \
),
[ADJUST] = KEYMAP( \
           DF(MAIN), DF(GAME), _______, _______, _______,  RESET,                      RESET,  _______, _______, _______, DF(GAME), DF(MAIN),        \
  _______, PC_WIN,   PC_MAC,    _______, _______, _______, NK_TOGG,                   NK_TOGG, _______, _______, _______, PC_MAC,   PC_WIN, _______, \
           _______,  _______,   _______, _______, _______, CG_TOGG,                   CG_TOGG, _______, _______, _______, _______,  _______,         \
           _______,  _______,   _______, _______, _______, _______,                   _______, _______, _______, _______, _______,  _______,         \
                     _______,   _______, _______, _______, _______, _______, _______, _______, KC_RCTL, KC_RALT, KC_RGUI, MO(EXT)                    \
),
};

/* Template
           _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,         \
  _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______ \
           _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,         \
           _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,         \
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______                   \
*/

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SFTSPC:
      return 120;
    case FUNBSP:
    case FUNDEL:
    case SFTENT:
      return 100;
    default:
      return TAPPING_TERM;
  }
}

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, FUN, EXT, ADJUST);
}

void toggleCtlSwap(void) {
  keymap_config.swap_lctl_lgui = !keymap_config.swap_lctl_lgui;
  keymap_config.swap_rctl_rgui = keymap_config.swap_lctl_lgui;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool is_mac = keymap_config.swap_lctl_lgui;

  switch(keycode) {
    case VD_NEXT:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        if (!is_mac) register_code(KC_LGUI);
        tap_code(KC_RIGHT);
        clear_mods();
        return false;
      }
    case VD_PREV:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        if (!is_mac) register_code(KC_LGUI);
        tap_code(KC_LEFT);
        clear_mods();
        return false;
      }
    case PC_MAC:
      if (record->event.pressed) {
        tap_code(KC_SLCK);
        tap_code(KC_SLCK);
        tap_code(KC_KP_2);
        toggleCtlSwap();
        return false;
      }
    case PC_WIN:
      if (record->event.pressed) {
        tap_code(KC_SLCK);
        tap_code(KC_SLCK);
        tap_code(KC_KP_1);
        toggleCtlSwap();
        return false;
      }
  }

  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
