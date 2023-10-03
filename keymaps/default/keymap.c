/* Copyright 2022 dari-studios (@dari-studios)
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

/* Defines names for use in layer keycodes and the keymap*/

enum layer_names {
    	_BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    	[_BASE] = LAYOUT(
        		LT(1, KC_COMM), KC_O, KC_A, KC_H, KC_T, KC_R, KC_D, CTL_T(KC_SPC), GUI_T(KC_SCLN), ALT_T(KC_QUOT), KC_C, SFT_T(KC_ENT), KC_E, KC_L, KC_I, KC_S, KC_N, LT(3, .)
    	),

};

/*
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
*/


