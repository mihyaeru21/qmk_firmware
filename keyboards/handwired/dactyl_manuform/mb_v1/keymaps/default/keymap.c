#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define T_LOWER TG(_LOWER)

#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2
#define KC_MB3 KC_MS_BTN3
#define KC_MB4 KC_MS_BTN4
#define KC_MB5 KC_MS_BTN5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
         KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, KC_BSLS,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,  KC_DEL,
                          KC_HOME,  KC_END,                                        KC_BSPC,  KC_ESC,
                                             KC_ENT, KC_LCTL,              KC_SPC,
                                              LOWER, KC_LALT,               RAISE,
                                            _______, KC_LGUI,    T_LOWER, _______
    ),

    [_LOWER] = LAYOUT(
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, KC_PSCR,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______,  KC_MB1,  KC_MB3,  KC_MB2, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, QK_USER, _______, _______, _______, _______,
                          _______, _______,                                         KC_MB4,  KC_MB5,
                                            _______, _______,             _______,
                                            _______, _______,             _______,
                                            _______, _______,    _______, _______
    ),

    [_RAISE] = LAYOUT(
        _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11, KC_F12,
        _______, _______, _______,   KC_UP, KC_PGUP, _______,    _______, _______, _______, _______, _______, _______, _______,
        _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,    _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_PGDN, _______,    _______, _______, _______, _______, _______, _______, _______,
                          _______, _______,                                        _______, _______,
                                            _______, _______,             _______,
                                            _______, _______,             _______,
                                            _______, _______,    _______, _______
    ),
};
