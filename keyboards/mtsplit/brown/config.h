
#ifndef BROWN_CONFIG_H
#define BROWN_CONFIG_H

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
#define MATRIX_ROW_PINS { F4, F5, F6, B2, B6 }
#define MATRIX_COL_PINS { E6, D2, D3, B4, C6, D7, B5 }
#define UNUSED_PINS

#define KEYMAP( \
         l01, l02, l03, l04, l05, l06,              r07, r08, r09, r010,  r011, r012, \
         l11, l12, l13, l14, l15, l16,              r17, r18, r19, r110,  r111, r112, \
         l21, l22, l23, l24, l25, l26,              r27, r28, r29, r210,  r211, r212, \
         l31, l32, l33, l34, l35, l36,              r37, r38, r39, r310,  r311, r312, \
              l41, l42, l43, l44, l45, l46,    r47, r48, r49, r410, r411, r412        \
) \
{ \
    { l06, l05, l04,  l03,  l02,  l01,   KC_NO }, \
    { l16, l15, l14,  l13,  l12,  l11,   KC_NO }, \
    { l26, l25, l24,  l23,  l22,  l21,   KC_NO }, \
    { l36, l35, l34,  l33,  l32,  l31,   KC_NO }, \
    { l45, l44, l43,  l42,  l41,  KC_NO, l46   }, \
    { r07, r08, r09,  r010, r011, r012,  KC_NO }, \
    { r17, r18, r19,  r110, r111, r112,  KC_NO }, \
    { r27, r28, r29,  r210, r211, r212,  KC_NO }, \
    { r37, r38, r39,  r310, r311, r312,  KC_NO }, \
    { r48, r49, r410, r411, r412, KC_NO, r47   }  \
}

#endif