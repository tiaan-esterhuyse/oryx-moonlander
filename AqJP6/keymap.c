#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



#define DUAL_FUNC_0 LT(2, KC_F13)
#define DUAL_FUNC_1 LT(13, KC_F23)
#define DUAL_FUNC_2 LT(9, KC_F6)
#define DUAL_FUNC_3 LT(12, KC_B)
#define DUAL_FUNC_4 LT(2, KC_F5)
#define DUAL_FUNC_5 LT(1, KC_F8)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LPRN,                                                                        KC_RPRN,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LEFT_SHIFT,  
    KC_LEFT_CTRL,   ST_MACRO_0,     ST_MACRO_1,     KC_LEFT_GUI,    MT(MOD_LALT, KC_APPLICATION),LT(1, KC_SPACE),                                                                                                LT(2, KC_ENTER),DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    CW_TOGG,        
    LCTL(KC_BSPC),  KC_LEFT_ALT,    KC_LEFT_CTRL,                   KC_LEFT_CTRL,   KC_LEFT_ALT,    LCTL(KC_DELETE)
  ),
  [1] = LAYOUT_moonlander(
    LALT(KC_GRAVE), KC_F1,          KC_F2,          KC_F3,          DUAL_FUNC_4,    DUAL_FUNC_5,    KC_F12,                                         KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TRANSPARENT, KC_EQUAL,       KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_F11,                                         CW_TOGG,        KC_ASTR,        KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_NO,          
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_EXLM,        KC_F10,                                                                         KC_PSCR,        KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_NO,          
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_AMPR,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_ENTER,       KC_NO,          
    KC_TRANSPARENT, KC_COMMA,       KC_DOT,         KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_0,           KC_DOT,         KC_EQUAL,       TT(4),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_CIRC,        KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_PERC,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_DLR,         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LSFT(KC_R),     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_COMMA,    KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_7,                                           KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,          
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_SPACE,                                                                                                       KC_ENTER,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       TO(0),          
    KC_SPACE,       KC_BSPC,        KC_SPACE,                       KC_SPACE,       KC_DELETE,      KC_ENTER
  ),
  [4] = LAYOUT_moonlander(
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SPI,        RGB_VAI,                                        TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(3),          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SPD,        RGB_VAD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          AS_TOGG,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_MODE_FORWARD,RGB_TOG,                                                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SLD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LBRC:
            return TAPPING_TERM -50;
        case KC_G:
            return TAPPING_TERM -50;
        case KC_RBRC:
            return TAPPING_TERM -50;
        case KC_RPRN:
            return TAPPING_TERM -50;
        case KC_H:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {130,255,255}, {0,245,245}, {74,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [1] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {130,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {131,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {152,255,255}, {152,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {21,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255} },

    [3] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {21,255,255}, {131,255,255}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,245,245}, {74,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {21,255,255}, {130,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,245,245}, {131,255,255}, {131,255,255} },

    [4] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {91,255,255}, {91,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9))SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(50)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LEFT);
        } else {
          unregister_code16(KC_LEFT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOWN);
        } else {
          unregister_code16(KC_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PGDN);
        } else {
          unregister_code16(KC_PGDN);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UP);
        } else {
          unregister_code16(KC_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PAGE_UP);
        } else {
          unregister_code16(KC_PAGE_UP);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RIGHT);
        } else {
          unregister_code16(KC_RIGHT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_F4));
        } else {
          unregister_code16(LCTL(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_F5));
        } else {
          unregister_code16(LCTL(KC_F5));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

