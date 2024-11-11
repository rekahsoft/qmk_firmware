#include QMK_KEYBOARD_H

#define _MOUSE 0
#define _UTILITY 1
#define _MEDIA 2

enum custom_keycodes {
  MOUSE = SAFE_RANGE,
  UTILITY,
  MEDIA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MOUSE] = LAYOUT( /* Base */
          KC_BTN1, KC_BTN3, KC_BTN2,
          LT(UTILITY, KC_BTN4), LT(MEDIA, KC_BTN5)
    ),
    [_UTILITY] = LAYOUT(
          DRAG_SCROLL, _______, DPI_CONFIG,
          _______, _______
    ),
    [_MEDIA] = LAYOUT(
          KC_MPLY, KC_MPRV, KC_MNXT,
          _______, _______
    ),
};
