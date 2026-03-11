#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum lily58_layers { _LAYER0, _LAYER1, _LAYER2, _LAYER3, _LAYER4 };

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Layer 0: Base Layer
  [_LAYER0] = LAYOUT(
    QK_GESC,        KC_1,    KC_2,    KC_3,    KC_4,               KC_5,                     KC_6,    KC_7,               KC_8,    KC_9,    KC_0,                  KC_MINS,
    MT(MOD_LALT, KC_TAB), KC_Q, KC_W, KC_E,    KC_R,               KC_T,                     KC_Y,    KC_U,               KC_I,    KC_O,    KC_P,                  MT(MOD_RGUI, KC_MINS),
    LT(_LAYER2, KC_ESC),  KC_A, KC_S, KC_D,    MT(MOD_LSFT, KC_F), KC_G,                     KC_H,    MT(MOD_RSFT, KC_J), KC_K,    KC_L,    MT(MOD_RCTL, JP_SCLN), LT(_LAYER2, JP_COLN),
    MT(MOD_LCTL, JP_HENK),LT(_LAYER3, KC_Z), KC_X, KC_C,    KC_V,               KC_B,   JP_LBRC, JP_RBRC, KC_N,    KC_M,               KC_COMM, KC_DOT,  KC_SLSH,               KC_INT1,
                                 LT(_LAYER3, MOD_LALT), KC_LSFT, KC_LGUI, KC_SPC,       LT(_LAYER1, KC_ENT), KC_BSPC, KC_DEL, MT(MOD_RALT, KC_APP)
  ),

  // Layer 1: Symbols
  [_LAYER1] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   C(JP_PLUS), C(JP_MINS), _______, _______, _______, KC_PSCR,
    _______, JP_EXLM, JP_DQUO, JP_HASH, JP_DLR,  JP_PERC,                   JP_AMPR, JP_QUOT, JP_LPRN, JP_RPRN, JP_CIRC, JP_TILD,
    JP_EISU, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    JP_MHEN, JP_AT,   JP_GRV,  JP_EQL,  JP_YEN,  JP_UNDS, _______, _______, JP_PLUS, JP_MINS, JP_ASTR, JP_QUES, JP_SLSH, JP_PIPE,
                               _______, _______, _______, _______, _______, _______, _______, TO(_LAYER0)
  ),

  // Layer 2: Navigation & Function
  [_LAYER2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, JP_ZKHK,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______, KC_PGDN, KC_PGUP, KC_HOME, KC_END,  KC_MUTE,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, TO(_LAYER3), TO(_LAYER4), _______, _______, _______, KC_VOLD, KC_VOLU, JP_TILD, S(JP_AT),JP_AT,   JP_LBRC, JP_RBRC, _______,
                               _______, _______, _______, _______, _______, _______, _______, TO(_LAYER0)
  ),

  // Layer 3: Mouse & Shortcuts
  [_LAYER3] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   JP_COLN, JP_EQL,  JP_UNDS, JP_QUES, JP_UNDS, JP_PERC,
    KC_ESC,  TO(_LAYER0), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Z),   MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, LCTL(LSFT(KC_S)), _______,
    _______, _______, MS_BTN3, MS_BTN2, MS_BTN1, KC_APP,                    MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, LCTL(KC_S), _______,
    TO(_LAYER0), TO(_LAYER4), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y), TG(_LAYER3), KC_P0, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, _______,
                               TO(_LAYER0), _______, _______, _______, _______, _______, _______, TO(_LAYER0)
  ),

  // Layer 4: Alternative Base
  [_LAYER4] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TO(_LAYER0),
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN, JP_COLN,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    TG(_LAYER0), TG(_LAYER0), KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, JP_UNDS,
                               KC_LALT, JP_AT,   KC_SPC,  KC_MINS, KC_ENT,  KC_BSPC, KC_DEL,  MT(MOD_RGUI, KC_APP)
  )
};
/* clang-format on */

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif
