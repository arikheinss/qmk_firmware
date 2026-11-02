/* Copyright 2024 @ Keychron (https://www.keychron.com)
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



/*
Howto:

- QMK MSYS öffnen
- qmk compile -kb keychron/q15_max/ansi_encoder -km test_keymap
- QMK Toolbox öffnen
- Datei öffnen C:\Users\nooby\qmk_firmware\.build\keychron_q15_max_ansi_encoder_test_keymap.bin
- eventuell?? Keyboard booten durch abstecken - esc gedrückt halten - wieder anschliesen
- MCU war ATmega32U
*/

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    // BASE_LAYER,
    GAMING_LAYER,
    ADVANCED_LAYER,
    SPECIAL_CHAR_LAYER,
    FANCY_LAYER,
    FANCY_CHAR_LYR,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // [BASE_LAYER] = LAYOUT_ansi_66(
    //     KC_MUTE,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_BSPC,  KC_MUTE,
    //     KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,  KC_BSLS,
    //     KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,   KC_ENT,
    //     KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,   KC_UP,    KC_DEL,
    //     KC_LCTL,  KC_LGUI,  KC_LALT,  KC_LALT,  KC_SPC,                       KC_SPC,             KC_F4,    KC_1,     KC_LEFT,   KC_DOWN,  KC_RGHT),

    [GAMING_LAYER] = LAYOUT_ansi_66(
        KC_MUTE,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_F12,    KC_BSPC,  KC_MUTE,
        KC_ESC,   KC_U,     KC_O,     KC_P,     KC_R,     KC_T,     KC_TAB,   KC_Q,     KC_D,     KC_W,     KC_E,     KC_R,      KC_RBRC,  KC_BSLS,
        KC_TAB,   KC_K,     KC_L,     KC_I,     KC_F,     KC_G,     KC_H,     KC_Z,     KC_A,     KC_S,     KC_F,     KC_G,      KC_ENT,
        KC_LSFT,  KC_J,     KC_M,     KC_C,     KC_SLSH,  KC_B,     KC_N,     KC_X,     KC_COMM,  KC_LCTL,  KC_V,     KC_RSFT,   KC_UP,    KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_RALT,  KC_SPC,                       KC_MINS,            KC_SPC,   KC_LSFT,  KC_LEFT,   KC_DOWN,  KC_RGHT),

    [ADVANCED_LAYER] = LAYOUT_ansi_66(
DF(FANCY_LAYER),  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_BSPC,  KC_MUTE,
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,  KC_BSLS,
        KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,   KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,   KC_UP,    KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_RALT,  KC_SPC,                  MO(SPECIAL_CHAR_LAYER),  KC_F4,    KC_3,     KC_LEFT,   KC_DOWN,  KC_RGHT),


    [SPECIAL_CHAR_LAYER] = LAYOUT_ansi_66(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,
        KC_TILD,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,  KC_PSCR,
        KC_CAPS,  KC_RBRC,  KC_BSLS,  KC_GRV,   KC_NUBS,  _______,  _______,  KC_BSPC,  KC_DEL,   KC_EQL,   KC_MINS,  _______,  _______,
        _______,  KC_HOME,  KC_END,   KC_ENT,   KC_ESC,   BAT_LVL,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  _______,  KC_PGDN,  _______,
        _______,  _______,  _______,  _______,  _______,                      _______,            _______,  _______,  _______,  KC_PGUP,  _______),


    [FANCY_LAYER] = LAYOUT_ansi_66(
DF(ADVANCED_LAYER),  KC_Q,  KC_W,     KC_E,     KC_R,     KC_SLSH,  KC_MINS,  KC_U,     KC_I,     KC_O,     KC_P,    KC_MINS,   KC_BSPC,  DF(GAMING_LAYER),
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_COMM,  KC_DOT,   KC_J,     KC_K,     KC_L,     KC_Y,    KC_LBRC,   KC_RBRC,  KC_BSLS,
        KC_TAB,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_SLSH,  KC_MINS,  KC_M,     KC_N,     KC_T,     KC_G,    KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_SPC,   KC_LSFT,  KC_RALT,  KC_RALT,  KC_H,     KC_B,     KC_DOT,   KC_SLSH,  KC_RSFT,   KC_UP,	   KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_LGUI,  KC_LCTL,               MO(FANCY_CHAR_LYR),        KC_0,     KC_3,    KC_LEFT,   KC_DOWN,  KC_RGHT),


    [FANCY_CHAR_LYR] = LAYOUT_ansi_66(
        _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_MINS,   KC_BSPC,  KC_MUTE,
        KC_CAPS,  KC_RBRC,  KC_BSLS,  KC_GRV,   KC_NUBS,  KC_BSPC,  KC_DEL,   KC_SCLN,  KC_QUOT,  KC_EQL,   KC_MINS,  _______,  _______,  _______,
        _______,  KC_HOME,  KC_END,   KC_ENT,   KC_ESC,   _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_LBRC, _______,  KC_PGDN,
        KC_LSFT,  KC_Z,     KC_X,     _______,  _______,   _______,  _______,  _______,  _______,  KC_DOT,   KC_SLSH,  KC_RSFT,   KC_UP,	   KC_DEL,
        KC_LCTL,  KC_LGUI, KC_LCMMD, _______,  _______,                       _______,           KC_0, MO(FANCY_LAYER),KC_LEFT, KC_DOWN,  KC_RGHT),
};

// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][2][2] = {
    // [BASE_LAYER] =              {ENCODER_CCW_CW(DF(ADVANCED_LAYER), DF(GAMING_LAYER)),          ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [GAMING_LAYER]   =          {ENCODER_CCW_CW(DF(FANCY_LAYER), DF(ADVANCED_LAYER)),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [ADVANCED_LAYER]   =        {ENCODER_CCW_CW(DF(GAMING_LAYER), DF(FANCY_LAYER)),              ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [SPECIAL_CHAR_LAYER]   =    {ENCODER_CCW_CW(_______, _______),                              ENCODER_CCW_CW(_______, _______)},
    [FANCY_LAYER] =             {ENCODER_CCW_CW(DF(ADVANCED_LAYER), DF(GAMING_LAYER)),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [FANCY_CHAR_LYR] =          {ENCODER_CCW_CW(_______, _______),                              ENCODER_CCW_CW(_______, _______)},
};

#endif // ENCODER_MAP_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // switch (keycode){
    //     case DF(GAMING_LAYER):
    //         rgb_matrix_set_color_all(0x0, 0x0, 0x0F);
    //     case KC_ESC:

    //         RGB_MATRIX_USE_LIMITS(led_min, led_max);
    //         rgb_matrix_set_color_all(0x0, 0x0, 0x0F);
    //         return rgb_matrix_check_finished_leds(led_max);



    // }
    return true;
    // if (!process_record_keychron_common(keycode, record)) {
    //     return false;
    // }
    // return true;
}
