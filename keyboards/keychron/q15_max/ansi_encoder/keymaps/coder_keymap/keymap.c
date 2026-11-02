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

 // currently limited in the amount of layers that can be compiled. Should more layers be needed
 // go to config.h and set #define LAYER_STATE_32BIT and #define DYNAMIC_KEYMAP_LAYER_COUNT 32
enum layers {
    BASIC_LAYER,
    ADVANCED_LAYER,
    AL_SYM,
    GAMING_LAYER,
    CORE_LAYER,
    SYM_LAYER,
    CONTROL_LAYER,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



    [BASIC_LAYER] = LAYOUT_ansi_66(
        KC_1,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_BSPC,  KC_MUTE,
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,  KC_BSLS,
        KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,   KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,   KC_UP,    KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_RALT,  KC_SPC,                  KC_SPC,                  KC_F4,    KC_3,     KC_LEFT,   KC_DOWN,  KC_RGHT),

    [ADVANCED_LAYER] = LAYOUT_ansi_66(
        KC_2,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_BSPC,  KC_MUTE,
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,  KC_BSLS,
        KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,   KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,   KC_UP,    KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_RALT,  KC_SPC,                  MO(AL_SYM),                  KC_F4,    KC_3,     KC_LEFT,   KC_DOWN,  KC_RGHT),

    [AL_SYM] = LAYOUT_ansi_66(
        KC_3,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,     KC_F10,     KC_F11,   KC_F12,  _______,
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0, _______, _______,  _______,
        _______,  KC_RBRC, KC_BSLS, KC_GRV,  KC_NUBS, _______, _______, KC_BSPC, KC_DEL, KC_EQL, KC_MINS, _______, _______,
        _______,  KC_HOME, KC_END,  KC_ENT,  KC_ESC, _______, _______,  KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,    _______,
        _______,  _______, _______, _______, _______,                  _______,                  _______,    _______,     _______,   _______,  _______),

    [GAMING_LAYER] = LAYOUT_ansi_66(
        KC_4,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_F12,    KC_BSPC,  KC_MUTE,
        KC_ESC,   KC_U,     KC_O,     KC_P,     KC_R,     KC_T,     KC_TAB,   KC_Q,     KC_D,     KC_W,     KC_E,     KC_R,      KC_RBRC,  KC_BSLS,
        KC_TAB,   KC_K,     KC_L,     KC_I,     KC_F,     KC_G,     KC_H,     KC_Z,     KC_A,     KC_S,     KC_F,     KC_G,      KC_ENT,
        KC_LSFT,  KC_J,     KC_M,     KC_COMM,  KC_SLSH,  KC_B,     KC_N,     KC_X,     KC_C,     KC_LCTL,  KC_V,     KC_RSFT,   KC_UP,    KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_LALT,  KC_RALT,  KC_SPC,                       KC_MINS,            KC_SPC,   KC_LSFT,  KC_LEFT,   KC_DOWN,  KC_RGHT),

    [CORE_LAYER] = LAYOUT_ansi_66(
        KC_5,     KC_Q,     KC_W,     KC_E,     KC_R,     XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_U,     KC_I,     KC_O,     KC_P,    KC_BSPC,  KC_MUTE,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_J,     KC_K,     KC_L,     KC_Y,    KC_MINS,   KC_BSLS,
        KC_TAB,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_LSFT,  XXXXXXX,  XXXXXXX,      KC_M,     KC_N,     KC_T,     KC_G,    KC_ENT,
        KC_LSFT,  KC_NO,    KC_LGUI,  KC_LSFT,  KC_SPC,   KC_LALT,  XXXXXXX,  XXXXXXX,      KC_H,     KC_B,     KC_COMM,  KC_DOT,  KC_UP,   KC_DEL,
        KC_LCTL,  KC_LGUI,  KC_NO,    KC_RALT,  KC_LCTL,                            MO(SYM_LAYER),     MO(CONTROL_LAYER), XXXXXXX,     KC_LEFT,    KC_DOWN,   KC_RIGHT  ),


    [SYM_LAYER] = LAYOUT_ansi_66(
        KC_6,    KC_1,     KC_2,     KC_3,     KC_4,           _______,  _______,     _______, KC_7,        KC_8,        KC_9,        KC_0,    _______,       _______,
        _______, KC_RBRC,     KC_BSLS,     KC_COMM,   KC_DOT,  _______,  _______,   _______, KC_5,     KC_6,     _______,     _______,       _______,  _______,
        _______, KC_GRV,     KC_NUBS,     KC_EQL,     KC_SLSH, _______,  _______,  _______, KC_SCLN,   KC_QUOT,        KC_LBRC,       KC_MINS,    _______,
        _______,  _______,     _______,     _______,   _______,  _______,  _______,  _______,     _______,     _______,   _______,  _______,   _______,	   _______,
        _______,  _______,  _______,  _______,  _______,               XXXXXXX,        _______,     _______,    _______,   _______,  _______),

    // [SYM_LAYER] = LAYOUT_ansi_66(
        // KC_6,    KC_1,     KC_2,     KC_3,     KC_4,           _______,  _______,     _______, KC_7,        KC_8,        KC_9,        KC_0,    _______,       _______,
        // _______, KC_RBRC,     KC_BSLS,     KC_COMM,   KC_DOT,  _______,  _______,   _______, KC_SCLN,     KC_QUOT,     KC_LBRC,     KC_MINS,       _______,  _______,
        // _______, KC_GRV,     KC_NUBS,     KC_EQL,     KC_SLSH, _______,  _______,  _______, KC_5,        KC_6,        KC_NO,       KC_NO,    _______,
        // _______,  _______,     _______,     _______,   _______,  _______,  _______,  _______,     _______,     _______,   _______,  _______,   _______,	   _______,
        // _______,  _______,  _______,  _______,  _______,               XXXXXXX,        _______,     _______,    _______,   _______,  _______),


    [CONTROL_LAYER] = LAYOUT_ansi_66(
        KC_7,      KC_F1,       KC_F2,     KC_F3,     KC_F4,     KC_F5,       KC_F6,  KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,     KC_F12,  _______,
        _______,   KC_HOME,     KC_END,     KC_ENT,     KC_ESC,     _______,  _______,  _______,     KC_BSPC,     KC_DEL,     KC_TAB,     KC_NO,    _______,  _______,
        _______,   KC_PGDN,     KC_PGUP,     KC_NO,     KC_NO,     _______,  _______,  _______,     KC_LEFT,     KC_DOWN,     KC_UP,     KC_RIGHT,    _______,
        _______,  _______,     _______,     _______,   _______,  _______,  _______,  _______,     _______,     _______,   _______,  _______,   _______,	   _______,
        _______,  _______,  _______,  _______,  _______,               XXXXXXX,        _______,     _______,    _______,   _______,  _______),
};



// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][2][2] = {
    // [BASE_LAYER] =              {ENCODER_CCW_CW(DF(ADVANCED_LAYER), DF(GAMING_LAYER)),          ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [BASIC_LAYER]   =          {ENCODER_CCW_CW(DF(CORE_LAYER), DF(ADVANCED_LAYER)),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [ADVANCED_LAYER]   =          {ENCODER_CCW_CW(DF(BASIC_LAYER), DF(GAMING_LAYER)),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [AL_SYM]   =          {ENCODER_CCW_CW(_______, _______),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [GAMING_LAYER]   =          {ENCODER_CCW_CW(DF(ADVANCED_LAYER), DF(CORE_LAYER)),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [CORE_LAYER]   =    {ENCODER_CCW_CW(DF(GAMING_LAYER), DF(BASIC_LAYER)),                              ENCODER_CCW_CW(_______, _______)},
    [SYM_LAYER] =             {ENCODER_CCW_CW(_______, _______),            ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [CONTROL_LAYER] =          {ENCODER_CCW_CW(_______, _______),                              ENCODER_CCW_CW(_______, _______)},
};

#endif // ENCODER_MAP_ENABLE

// Set a solid layer color. Hue/Sat are 0-255, brightness follows your
// current RGB brightness setting so the brightness keys keep working.
static void set_layer_color(uint8_t hue, uint8_t sat) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(hue, sat, rgb_matrix_get_val());
}


layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)){
        case BASIC_LAYER:
            set_layer_color(25, 110);    // warm white
            break;
        case ADVANCED_LAYER:
            set_layer_color(190, 255);   // violet
            break;

        case GAMING_LAYER:
            set_layer_color(0, 255);     // red
            break;

        case CORE_LAYER:
            set_layer_color(120, 255);   // teal
            break;
        default:
            set_layer_color(0, 0);
            break;
    }
    return state;
}
