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
#ifndef YAP_H
#define YAP_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
       k11,   k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
       k21,   k22, k23, k24, k25, k26, k27, k28, k29, k210, k211,    k212,    \
    k30, k31, k32, k33, k34,     k35,     k37,   k39, k310, k311, k312,  k313 \
) \
{ \
    { k00,   k01, k02, k03, k04, k05, k06,   k07, k08,   k09, k010, k011, k012,  k013 },    \
    { KC_NO, k11, k12, k13, k14, k15, k16,   k17, k18,   k19, k110, k111, k112,  k113 },    \
    { KC_NO, k21, k22, k23, k24, k25, k26,   k27, k28,   k29, k210, k211, k212, KC_NO },    \
    { k30,   k31, k32, k33, k34, k35, KC_NO, k37, KC_NO, k39, k310, k311, k312,  k313 }     \
}

#endif
