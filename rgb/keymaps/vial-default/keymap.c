/* Copyright 2022 Nikolay Nazarov
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

enum my_layers {
    layer0,
    layer1,
    layer2,
    layer3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [layer0] = LAYOUT(
        KC_ESC,  KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        RGB_TOG, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        RGB_MOD, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P0,   KC_P1,   KC_P2,   KC_P3,   MO(layer1),
        KC_P0,   KC_P0,   KC_P0,   KC_PDOT, KC_PENT
    ),
    [layer1] = LAYOUT(
        RGB_TOG,    RGB_MOD,    RGB_RMOD,   RGB_M_P, RGB_HUI,
        RGB_VAI,    RGB_SAI,    RGB_HUI,    RGB_SPI, RGB_M_B,
        RGB_VAD,    RGB_SAD,    RGB_HUD,    RGB_SPD, KC_NO,
        TG(layer2), TG(layer3), TG(layer2), KC_NO,   _______,
        TG(layer2), TG(layer3), TG(layer2), KC_NO,   KC_NO
    ),
    [layer2] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P2,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [layer3] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, KC_P3,   _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, TO(layer0),
        _______, _______, _______, _______, _______
    )
};

