
#ifndef BLUE_CONFIG_H
#define BLUE_CONFIG_H

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
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { F4, F5, F6, E6, B4 }
#define MATRIX_COL_PINS { D7, C6, D4, D2, D3, B5 }
#define UNUSED_PINS

#define KEYMAP( \
    l01, l02, l03, l04, l05, l06,              r07, r08, r09, r010,  r011, r012, \
    l11, l12, l13, l14, l15, l16,              r17, r18, r19, r110,  r111, r112, \
    l21, l22, l23, l24, l25, l26,              r27, r28, r29, r210,  r211, r212, \
    l31, l32, l33, l34, l35, l36,              r37, r38, r39, r310,  r311, r312, \
         l41, l42, l43, l44, l45, l46,    r47, r48, r49, r410, r411, r412        \
) \
{ \
    { l06, l05, l04,  l03,  l02,  l01,  }, \
    { l16, l15, l14,  l13,  l12,  l11,  }, \
    { l26, l25, l24,  l23,  l22,  l21,  }, \
    { l36, l35, l34,  l33,  l32,  l31,  }, \
    { l45, l44, l43,  l42,  l41,  l46   }, \
    { r07, r08, r09,  r010, r011, r012, }, \
    { r17, r18, r19,  r110, r111, r112, }, \
    { r27, r28, r29,  r210, r211, r212, }, \
    { r37, r38, r39,  r310, r311, r312, }, \
    { r48, r49, r410, r411, r412, r47   }  \
}

#endif