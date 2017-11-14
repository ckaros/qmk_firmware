#include "dactyl.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = KEYMAP(
        KC_EQL,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,\
        KC_DELT,        KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,\
        KC_BSPC,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,\
        KC_LSFT,        CTL_T(KC_Z),  KC_X,   KC_C,   KC_V,   KC_B,\
        _______,        KC_QUOT,      KC_LSFT,KC_LEFT,KC_RGHT,\
                                                              KC_APP,  KC_LGUI,\
                                                              KC_H,    KC_HOME,\
                                                      KC_SPC, KC_BSPC, KC_END,\
           
		   KC_6,   KC_7,  KC_8,   KC_9,   KC_0,      KC_MINS,\
           KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,      KC_BSLS,\
           KC_H,   KC_J,  KC_K,   KC_L,   KC_O,      KC_QUOT,\
           KC_N,   KC_M,  KC_COMM,KC_DOT, KC_SLSH,   KC_RSFT,\
                   KC_UP, KC_DOWN,KC_LBRC,KC_RBRC,   KC_K,\
        KC_LALT,KC_ESC,\
        KC_PGUP,KC_H,\
        KC_PGDN,KC_TAB, KC_ENT\
    )
	
	
	

};