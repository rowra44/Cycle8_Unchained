/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Get unique UID by doing the following: From the root of vial-qmk, run 
     "C:\Program Files\Python313\python.exe" util/vial_generate_keyboard_uid.py
in order to generate a unique Vial keyboard ID.

//Output will be something like this: #define VIAL_KEYBOARD_UID {0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX}
*/

#define VIAL_KEYBOARD_UID {0xA2, 0xB9, 0x89, 0x26, 0x67, 0xD2, 0x47, 0x19}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
