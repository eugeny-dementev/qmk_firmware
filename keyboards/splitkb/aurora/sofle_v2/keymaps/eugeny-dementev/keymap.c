#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_MPRV,    KC_1,   KC_2,       KC_3,       KC_4,       KC_5,                                       KC_6,           KC_7,       KC_8,       KC_9,       KC_0,   KC_VOLU,
        KC_MNXT,    KC_Q,   KC_W,       KC_E,       KC_R,       KC_T,                                       KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,   KC_VOLD,
        KC_MPLY,    KC_A,   ALT_T(KC_S),CTL_T(KC_D),GUI_T(KC_F),KC_G,                                       KC_H,           GUI_T(KC_J),CTL_T(KC_K),ALT_T(KC_L),KC_SCLN,KC_MUTE,
        XXXXXXX,    KC_Z,   KC_X,       KC_C,       KC_V,       KC_B,           KC_MUTE,        XXXXXXX,    KC_N,           KC_M,       KC_COMM,    KC_DOT, KC_SLSH,    MO(3),
                            KC_GRV,     KC_BSLS,    KC_BSPC,    LT(2, KC_TAB),  KC_LSHT,         KC_SPC,    LT(1,KC_ENTR),  KC_ESC,     KC_LBRC,    KC_RBRC
    ),
	[1] = LAYOUT(
        _______,    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                              KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, _______,
        _______,    KC_LEFT,KC_PERC,KC_ASTR,KC_DQT, KC_UP,                              KC_DOWN,KC_AMPR,KC_QUOT,KC_QUES,KC_RGHT,_______,
        _______,    KC_CIRC,KC_EQL, KC_UNDS,KC_DLR, KC_HASH,                            KC_TILD,KC_COLN,KC_LPRN,KC_RPRN,KC_SCLN,_______,
        _______,    KC_LT,  KC_PLUS,KC_MINS,KC_GT,  KC_AT,  KC_MUTE,        XXXXXXX,    KC_EXLM,KC_PIPE,KC_LCBR,KC_RCBR,_______,_______,
                            _______,_______,KC_BSPC,KC_TAB, KC_LSHT,         KC_SPC,    KC_ENTR,KC_ESC, _______,_______
    ),
	[2] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX, KC_PGUP, C(KC_LEFT), KC_UP, C(KC_RGHT), C(KC_BSPC), KC_BSPC, _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_BSPC, _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______, _______, XXXXXXX, KC_HOME, XXXXXXX, KC_END, XXXXXXX, _______, _______, _______, _______, MO(3), _______, _______, _______, _______, _______, _______),
	[3] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




