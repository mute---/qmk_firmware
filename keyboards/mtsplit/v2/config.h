
#ifndef V2_CONFIG_H
#define V2_CONFIG_H

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_COLS 7
#define MATRIX_ROW_PINS { F4, F5, D4, B4, B2 }
#define MATRIX_COL_PINS { D2, D3, F6, F7, E6, B1, B3 }
#define UNUSED_PINS

#define NO_ACTION_ONESHOT

#undef  DEVICE_VER
#define DEVICE_VER      0x0002

#define KEYMAP( \
         l01, l02, l03, l04, l05, l06,              r06, r05, r04, r03, r02, r01,      \
    l10, l11, l12, l13, l14, l15, l16,              r16, r15, r14, r13, r12, r11, r10, \
         l21, l22, l23, l24, l25, l26,              r26, r25, r24, r23, r22, r21,      \
         l31, l32, l33, l34, l35, l36,              r36, r35, r34, r33, r32, r31,      \
              l42, l43, l44, l45, l46, l47,    r47, r46, r45, r44, r43, r42            \
) \
{ \
    { l01, l02, l03, l04, l05, l06, KC_NO }, \
    { l11, l12, l13, l14, l15, l16, KC_NO }, \
    { l21, l22, l23, l24, l25, l26, KC_NO }, \
    { l31, l32, l33, l34, l35, l36, KC_NO }, \
    { l10, l42, l43, l44, l45, l46, l47   }, \
    { r01, r02, r03, r04, r05, r06, KC_NO }, \
    { r11, r12, r13, r14, r15, r16, KC_NO }, \
    { r21, r22, r23, r24, r25, r26, KC_NO }, \
    { r31, r32, r33, r34, r35, r36, KC_NO }, \
    { r10, r42, r43, r44, r45, r46, r47   }  \
}

#endif