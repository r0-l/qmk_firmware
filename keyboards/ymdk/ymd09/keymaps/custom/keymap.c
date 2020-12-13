#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*

----------------------
|      |      | VOL  |
|      |      |  UP  |
|------|------|------|
|      |      | VOL  |
|      |      | DOWN |
|------|------|------|
| PREV | PLAY | NEXT |
| TRACK| PAUSE| TRACK|
----------------------
*/

  [0] = LAYOUT(
    KC_KP_7,             KC_KP_8,             KC_AUDIO_VOL_UP,
    KC_KP_4,             LT(1, KC_KP_5),      KC_AUDIO_VOL_DOWN,
    KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK
    ),

  [1] = LAYOUT(RGB_RMOD, RGB_VAI, RGB_MOD,
               RGB_HUI, KC_TRNS, RGB_SAI,
               RGB_HUD, RGB_VAD, RGB_SAD),

};
