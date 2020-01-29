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

#define _______ KC_TRNS
#define xxxxxxx KC_NO

#define MAIN   0
#define GAME   1
#define EXT    3
#define NAV    4
#define FUN    5
#define ADJUST 10

#define NAVESC LT(NAV, KC_ESC)

#define FUNDEL LT(FUN, KC_DEL)
#define FUNBSP LT(FUN, KC_BSPC)
#define SFTSPC LSFT_T(KC_SPC)
#define SFTENT RSFT_T(KC_ENT)

#define RCTLLT RCTL_T(KC_LEFT)
#define RALTDN RALT_T(KC_DOWN)
#define RGUIUP RGUI_T(KC_UP)
#define EXTRGT LT(EXT, KC_RGHT)

enum os_dependent_codes {
  LANG = SAFE_RANGE,
  VD_NEXT,
  VD_PREV
};

#define DEFCOMBO2(name, key1, key2) const uint16_t PROGMEM name[] = {key1, key2, COMBO_END};
#define DEFCOMBO3(name, key1, key2, key3) const uint16_t PROGMEM name[] = {key1, key2, key3, COMBO_END};


enum combos {
  LANG_COMBO
};

DEFCOMBO2(backslash_combo, KC_SLSH, KC_RBRC)
DEFCOMBO2(rbrc_combo, KC_P, KC_LBRC)
DEFCOMBO2(grave_combo, KC_1, KC_2)
DEFCOMBO3(lang_combo, KC_A, KC_S, KC_D)

combo_t key_combos[COMBO_COUNT] = {
  [LANG_COMBO] = COMBO_ACTION(lang_combo),
  COMBO(backslash_combo, KC_BSLS),
  COMBO(rbrc_combo, KC_RBRC),
  COMBO(grave_combo, KC_GRV),
  };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAIN] = KEYMAP( \
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, \
  NAVESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC, \
           MO(EXT), KC_LGUI, KC_LALT, KC_LCTL, SFTSPC, FUNDEL,   FUNBSP,  SFTENT,  RCTLLT,  RALTDN,  RGUIUP,  EXTRGT            \
),
[GAME] = KEYMAP( \
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, \
  KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC, \
           KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, FUNDEL,   FUNBSP,  SFTENT,  RCTLLT,  RALTDN,  RGUIUP,  EXTRGT            \
),
[EXT] = KEYMAP( \
  _______, _______, _______, _______, _______, _______,                   _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, \
  _______, _______, _______, _______, _______, KC_PSCR,                   _______, KC_P7,   KC_P8,   KC_P9,   _______, _______, \
  KC_CAPS, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                   _______, KC_P4,   KC_P5,   KC_P6,   _______, _______, \
  _______, _______, _______, _______, KC_MUTE, KC_VOLD,                   _______, KC_P1,   KC_P2,   KC_P3,   _______, _______, \
           _______, _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, _______           \
),
[NAV] = KEYMAP( \
  _______, _______, _______, _______, _______, _______,                   KC_INS,  KC_DEL,  _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, _______, \
  _______, _______, _______, VD_PREV, VD_NEXT, _______,                   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, VD_PREV, KC_DOWN, VD_NEXT, _______, _______, \
           _______, _______, _______, _______, _______, _______, _______, _______, KC_RCTL, KC_RALT, KC_RGUI, MO(EXT)           \
),
[FUN] = KEYMAP( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   \
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
           _______, _______, _______, _______, _______, _______, _______, _______, KC_RCTL, KC_RALT, KC_RGUI, MO(EXT)           \
),
[ADJUST] = KEYMAP( \
  DF(MAIN), DF(GAME), _______, _______, _______, RESET,                     RESET,   _______, _______, _______, DF(GAME), DF(MAIN), \
  _______, _______,   _______, _______, _______, NK_TOGG,                   NK_TOGG, _______, _______, _______, _______,  _______,  \
  _______, _______,   _______, _______, _______, CG_TOGG,                   CG_TOGG, _______, _______, _______, _______,  _______,  \
  _______, _______,   _______, _______, _______, _______,                   _______, _______, _______, _______, _______,  _______,  \
           _______,   _______, _______, _______, _______, _______, _______, _______, KC_RCTL, KC_RALT, KC_RGUI, MO(EXT)             \
),
};

/* Template
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______           \
*/

uint16_t get_tapping_term(uint16_t keycode) {
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

void process_lang_code(bool is_mac) {
  register_code(KC_LCTL);
  if (is_mac) tap_code(KC_SPACE); else tap_code(KC_LSFT);
  clear_mods();
}

void process_combo_event(uint8_t combo_index, bool pressed) {
  bool is_mac = keymap_config.swap_lctl_lgui;

  switch(combo_index) {
    case LANG_COMBO:
      if (pressed) {
        process_lang_code(is_mac);
      }
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool is_mac = keymap_config.swap_lctl_lgui;

  switch(keycode) {
    case LANG:
      if (record->event.pressed) {
        process_lang_code(is_mac);
        return false;
      }

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
  }

  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {
  if (IS_LAYER_ON(FUN)) {
    fn0_led_on();
  } else {
    fn0_led_off();
  }

  if (IS_LAYER_ON(EXT)) {
    fn1_led_on();
  } else {
    fn1_led_off();
  }
}

void led_set_user(uint8_t usb_led) {

}
