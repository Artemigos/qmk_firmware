/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2022 Łukasz Klimek <@artemigos>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// home row mods

#define GUI_A    LGUI_T(KC_A)
#define ALT_S    LALT_T(KC_S)
#define CTL_D    LCTL_T(KC_D)
#define SFT_F    LSFT_T(KC_F)

#define SFT_J    RSFT_T(KC_J)
#define CTL_K    RCTL_T(KC_K)
#define ALT_L    RALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// thumb cluster

#define L1_ESC  LT(1, KC_ESC)
#define L2_TAB  LT(2, KC_TAB)
#define L3_SPC  LT(3, KC_SPC)

#define L4_ENT  LT(4, KC_ENT)
#define L5_BSPC LT(5, KC_BSPC)
#define L6_DEL  LT(6, KC_DEL)

// short names

#define KC_KANA KC_INTERNATIONAL_2

// layers

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // base
    [0] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,   GUI_A,   ALT_S,   CTL_D,   SFT_F,    KC_G,                         KC_H,   SFT_J,   CTL_K,   ALT_L,GUI_SCLN, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             L1_ESC,  L2_TAB,  L3_SPC,     L4_ENT, L5_BSPC,  L6_DEL
                                        //`--------------------------'  `--------------------------'
    ),

    // mouse
    [1] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_TRNS, XXXXXXX, XXXXXXX,    KC_BTN1, KC_BTN3, KC_BTN2
                                        //`--------------------------'  `--------------------------'
    ),

    // navigation
    [2] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            XXXXXXX, KC_TRNS, XXXXXXX,     KC_ENT, KC_BSPC,  KC_DEL
                                        //`--------------------------'  `--------------------------'
    ),

    // media
    [3] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_BRIU, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, KC_BRID, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            XXXXXXX, XXXXXXX, KC_TRNS,    KC_MPLY, KC_MNXT, KC_MSEL
                                        //`--------------------------'  `--------------------------'
    ),

    // numpad
    [4] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_PAST, KC_KP_4, KC_KP_5, KC_KP_6, KC_PMNS,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_PSLS, KC_KP_1, KC_KP_2, KC_KP_3, KC_PPLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_KP_0, KC_PDOT, KC_PENT,    KC_TRNS, XXXXXXX, XXXXXXX
                                        //`--------------------------'  `--------------------------'
    ),

    // symbols
    [5] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_MINS,                       KC_EQL, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,  KC_GRV, XXXXXXX,   KC_LT, KC_LBRC, KC_LCBR,                      KC_RCBR, KC_RBRC,   KC_GT, KC_QUOT, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_TRNS, XXXXXXX
                                        //`--------------------------'  `--------------------------'
    ),

    // function
    [6] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                       KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_CAPS,  KC_NUM, KC_PSCR,     KC_INS, KC_KANA, KC_TRNS
                                        //`--------------------------'  `--------------------------'
    ),
};

#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }
    return rotation;
}

#define L_BASE 0
#define L_MOUSE 2
#define L_NAV 4
#define L_MEDIA 8
#define L_NUM 16
#define L_SYM 32
#define L_FUNC 64

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case L_MOUSE:
            oled_write_ln_P(PSTR("Mouse"), false);
            break;
        case L_NAV:
            oled_write_ln_P(PSTR("Navigation"), false);
            break;
        case L_MEDIA:
            oled_write_ln_P(PSTR("RGB + Media"), false);
            break;
        case L_FUNC:
            oled_write_ln_P(PSTR("Function"), false);
            break;
        case L_SYM:
            oled_write_ln_P(PSTR("Symbols"), false);
            break;
        case L_NUM:
            oled_write_ln_P(PSTR("Numeric"), false);
            break;
    }
}

bool oled_task_user(void) {
    // TODO: maybe show layout aid?
    if (is_keyboard_master()) {
        oled_render_layer_state();
    } else {
    }
    return false;
}
#endif // OLED_ENABLE
