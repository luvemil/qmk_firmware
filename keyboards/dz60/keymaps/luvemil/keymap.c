#include "dz60.h"

#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define MODS_MYRALT_MASK  (MOD_BIT(KC_RCTRL))
#define XXXXXXX KC_NO

//Tap Dance Declarations
enum {
  TD_RCTRL_RALT = 0,
  TD_RCTRL_LGUI
};

// My Keycodes
enum my_keycodes {
  _BASE = 0,
  _FUN,
  _SETUP,
  _MACRO,
  _NUMPAD,
  _GAMING,
  UNIWIN = SAFE_RANGE,
  UNILIN,
  UNIMAC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
  KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
  LT(_FUN,KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
  TD(TD_RCTRL_LGUI), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
  KC_LSPO, KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, MO(_FUN),
  KC_LCTL, KC_LGUI, KC_LALT, KC_NO, LT(_SETUP,KC_SPC), KC_NO, TD(TD_RCTRL_RALT), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT),

[_FUN] = LAYOUT(
  KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_DEL,
  _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, RESET, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, BL_DEC, BL_TOGG, BL_INC, BL_STEP, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

[_SETUP] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
  _______, _______,  UNIWIN, _______, TG(_MACRO), _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, TG(_GAMING), _______, _______, _______,  UNILIN, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, TG(_NUMPAD), UNIMAC, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

[_MACRO] = LAYOUT(
  TG(_MACRO), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(_MACRO),
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(_MACRO),
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

[_NUMPAD] = LAYOUT(
  TG(_NUMPAD), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_7, KC_8, KC_9, XXXXXXX, KC_PMNS, KC_PPLS, XXXXXXX, KC_ESC,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_4, KC_5, KC_6, XXXXXXX, KC_PAST, KC_PSLS, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_1, KC_2, KC_3, XXXXXXX, XXXXXXX, KC_ENT,
  KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_0, KC_COMM, KC_DOT, XXXXXXX, KC_BSPC, KC_DEL,
  KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX, TD(TD_RCTRL_RALT), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT),

[_GAMING] = LAYOUT(
  KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
  KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
  KC_LSFT, KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TG(_GAMING),
  KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_NO, TD(TD_RCTRL_RALT), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT),

};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  set_unicode_input_mode(UC_LNX);
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint8_t shift_mask;
  static uint8_t my_ralt_mask;
  if (record->event.pressed) {
    my_ralt_mask = get_mods()&MODS_MYRALT_MASK;
    shift_mask = get_mods()&MODS_SHIFT_MASK;
    switch (keycode) {
      case KC_E:
        if (my_ralt_mask) { // e€
          process_unicode((0x20AC|QK_UNICODE),record);
        } else {
          return true;
        }
        return false;
        break;
      case KC_LBRC: // [{èé
        if (my_ralt_mask) {
          if (shift_mask) { // é
            process_unicode((0x00E9|QK_UNICODE),record);
          } else { // è
            process_unicode((0x00E8|QK_UNICODE),record);
          }
        } else {
          return true;
        }
        return false;
        break;
      case KC_SCLN: // ;:ò
        if (my_ralt_mask) {
          process_unicode((0x00F2|QK_UNICODE),record);
        } else {
          return true;
        }
        return false;
        break;
      case KC_BSLS: // \|ù
        if (my_ralt_mask) {
          process_unicode((0x00F9|QK_UNICODE),record);
        } else {
          return true;
        }
        return false;
        break;
      case KC_QUOT: // '"à
        if (my_ralt_mask) {
          process_unicode((0x00E0|QK_UNICODE),record);
        } else {
          return true;
        }
        return false;
        break;
      case KC_EQL: // =+ì
        if (my_ralt_mask) {
          process_unicode((0x00EC|QK_UNICODE),record);
        } else {
          return true;
        }
        return false;
        break;
      case UNIWIN:
        set_unicode_input_mode(UC_WINC);
        return false;
        break;
      case UNILIN:
        set_unicode_input_mode(UC_LNX);
        return false;
        break;
      case UNIMAC:
        set_unicode_input_mode(UC_OSX);
        return false;
        break;
      default:
        return true;
    }
  }
  return true;
}
//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Ctrl, twice for Alt
  [TD_RCTRL_RALT]  = ACTION_TAP_DANCE_DOUBLE(KC_RCTRL, KC_RALT),
  [TD_RCTRL_LGUI]  = ACTION_TAP_DANCE_DOUBLE(KC_RCTRL, KC_LGUI)
// Other declarations would go here, separated by commas, if you have them
};
