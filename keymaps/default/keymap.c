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
	_LEFT,
	_L_LEFT,
	_RIGHT,
	_R_RIGHT,
	_LEFT_RIGHT,
	_GAMER		
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    	[_BASE] = LAYOUT(
        		LT(_LEFT, KC_COMM), KC_O, KC_A, KC_H, KC_T, KC_R, KC_D, CTL_T(KC_SPC), GUI_T(KC_SCLN), ALT_T(KC_QUOT), KC_C, SFT_T(KC_ENT), KC_E, KC_L, KC_I, KC_S, KC_N, LT(3, KC_DOT)
    	),
		[_LEFT] = LAYOUT(
        		KC_TRNS, LT(2, Z), KC_1, KC_4, KC_2, KC_5, KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_J, KC_TRNS, KC_F, KC_K, KC_U, KC_B, KC_W, KC_TRNS
    	),
		[_L_LEFT] = LAYOUT(
        		KC_TRNS, KC_TRNS, KC_6, KC_9, KC_7, KC_0, KC_8, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_TRNS, KC_MINS, KC_LBRC, KC_EQL, KC_RBRC, KC_BSLS, KC_SLSH
    	),
		[_RIGHT] = LAYOUT(
        		KC_TRNS, KC_G, KC_M, KC_Y, KC_P, KC_V, KC_X, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_BSPS, KC_END, KC_DEL, KC_INS, LT(4, KC_Q), KC_TRNS
    	),
		[_R_RIGHT] = LAYOUT(
        		KC_F1, KC_F2, KC_F3, KC_F9, KC_4, KC_10, KC_5, KC_TRNS, KC_TRNS, KC_TRNS, KC_F6, KC_TRNS, KC_F7, KC_F11, KC_F8, KC_12, KC_TRNS, KC_TRNS
    	),
		[_LEFT_RIGHT] = LAYOUT(
        		KC_TRNS, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, KC_TAB, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_VOLD, BL_DEC, KC_VOLU, BL_INC, TG(6), KC_TRNS
    	),
		[_GAMER] = LAYOUT(
        		KC_Q, KC_A, KC_W, KC_S, KC_D, KC_F, KC_T, KC_SPC, KC_V, TG(6), KC_Z, KC_LCTL, KC_X, KC_1, KC_C, KC_2, KC_3, KC_4
    	)

};


layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LEFT, _RIGHT, _LEFT_RIGHT);
}



