#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_MPRV,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_VOLU,
        KC_MNXT,    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_VOLD,
        KC_MPLY,    KC_A,   ALT_T(KC_S), CTL_T(KC_D), GUI_T(KC_F),  KC_G,                               KC_H,   GUI_T(KC_J), CTL_T(KC_K), ALT_T(KC_L),  KC_SCLN,    KC_MUTE,
        XXXXXXX,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MUTE,    XXXXXXX,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    MO(3),
                                XXXXXXX,    XXXXXXX,    KC_BSPC,    KC_LSFT,LT(1, KC_TAB),LT(2,KC_ENT), KC_SPC,     KC_ESC,     XXXXXXX,    XXXXXXX
    ),

	[1] = LAYOUT(
        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
        _______,    KC_GRV,     KC_QUES,    KC_ASTR,    KC_PERC,    KC_DQT,                             KC_QUOT,    KC_AMPR,    KC_LBRC,    KC_RBRC,    KC_EXLM,    _______,
        _______,    KC_CIRC,    KC_EQL,     KC_UNDS,    KC_DLR,     KC_HASH,                            KC_TILD,    KC_COLN,    KC_LPRN,    KC_RPRN,    KC_SCLN,    _______,
        _______,    KC_LT,      KC_PLUS,    KC_MINS,    KC_GT,      KC_AT,      _______,    _______,    KC_BSLS,    KC_PIPE,    KC_LCBR,    KC_RCBR,    _______,    _______,
                                _______,    _______,    _______,    _______,    _______,    KC_ENT,     _______,    KC_ESC,     _______,    _______
    ),

	[2] = LAYOUT(
        _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    KC_PGUP,    KC_GRV,                             _______,    KC_PGDN,    _______,    _______,    _______,    _______,
        _______,    KC_LSFT,    KC_LALT,    KC_LCTL,    KC_LGUI,    KC_HOME,                            KC_END,     KC_DOWN,    KC_UP,      KC_LEFT,    KC_RGHT,    _______,
        _______,    _______,    _______,    _______,    _______,    KC_QUOT,    _______,    _______,    _______,    KC_RBRC,    _______,    _______,    KC_LBRC,    _______,
                                _______,    _______,    KC_DEL,     _______,    KC_TAB,     _______,    _______,    _______,    _______,    _______
    ),

	[3] = LAYOUT(
        _______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               _______,    _______,    _______,    _______,    _______,    _______,
        _______,    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,                               _______,    _______,    _______,    _______,    _______,    _______,
        _______,    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,                               _______,    _______,    _______,    _______,    _______,    _______,
        MO(0),      KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                                KC_V,       KC_N,       KC_M,       KC_Y,       KC_SPC,     _______,    _______,    _______,    _______,    _______
    )
};
