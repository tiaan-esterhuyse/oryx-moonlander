#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(6, KC_F13)
#define DUAL_FUNC_1 LT(14, KC_F10)
#define DUAL_FUNC_2 LT(15, KC_F9)
#define DUAL_FUNC_3 LT(8, KC_F)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           DUAL_FUNC_0,                                    DUAL_FUNC_2,    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MT(MOD_LSFT, KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           DUAL_FUNC_1,                                                                    DUAL_FUNC_3,    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    MT(MOD_LSFT, KC_ESCAPE),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       MT(MOD_LSFT, KC_ESCAPE),
    KC_LEFT_CTRL,   KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_GUI,    MT(MOD_LALT, KC_APPLICATION),LT(1, KC_SPACE),                                                                                                LT(2, KC_ENTER),MT(MOD_LALT, KC_APPLICATION),KC_LEFT_GUI,    KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_CTRL,   
    KC_BSPC,        KC_LEFT_ALT,    KC_LEFT_CTRL,                   KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_DELETE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),     KC_F12,                                         KC_TRANSPARENT, LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_6),     LGUI(KC_9),     LGUI(KC_0),     KC_NO,          
    KC_TRANSPARENT, LCTL(KC_Q),     KC_F7,          KC_F8,          KC_F9,          LCTL(KC_T),     KC_F11,                                         KC_TRANSPARENT, KC_SLASH,       KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_ASTERISK, KC_NO,          
    KC_TRANSPARENT, LCTL(KC_A),     KC_F4,          KC_F5,          KC_F6,          LCTL(KC_G),     KC_F10,                                                                         KC_TRANSPARENT, KC_MINUS,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_NO,          
    KC_TRANSPARENT, LCTL(KC_Z),     KC_F1,          KC_F2,          KC_F3,          LCTL(KC_B),                                     LSFT(KC_R),     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LALT(KC_ENTER), KC_KP_COMMA,    KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_PSCR,        KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, LCTL(KC_Q),     KC_NO,          KC_NO,          KC_NO,          LCTL(KC_T),     KC_NO,                                          KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN4,     KC_NO,          
    KC_TRANSPARENT, LCTL(KC_A),     KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   LCTL(KC_G),     KC_NO,                                                                          KC_MS_WH_DOWN,  KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_BTN5,     KC_NO,          
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_B),                                     KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SPI,        RGB_VAI,                                        AS_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(LCTL(LSFT(KC_F24))),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SPD,        RGB_VAD,                                        KC_MS_JIGGLER_TOGGLE,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(LCTL(LSFT(KC_F23))),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_MODE_FORWARD,RGB_TOG,                                                                        TG(5),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SLD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_CIRC,        KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_PERC,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_NO,                                                                          KC_NO,          KC_DLR,         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LSFT(KC_R),     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_COMMA,    KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,                                                                                                       KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





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
    [0] = { {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {130,255,255}, {130,255,255}, {130,255,255} },

    [1] = { {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {197,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {197,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {197,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {197,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {197,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {197,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {197,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {130,255,255}, {197,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {197,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {130,255,255}, {197,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {130,255,255}, {130,255,255}, {130,255,255} },

    [2] = { {0,0,0}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {0,0,0}, {130,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {0,0,0}, {130,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {0,0,0}, {130,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {0,255,255}, {130,255,255}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {130,255,255}, {0,0,0}, {21,255,255}, {23,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255} },

    [3] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {91,255,255}, {91,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {152,255,255}, {152,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {21,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255} },

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
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LCBR);
        } else {
          unregister_code16(KC_LCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LBRC);
        } else {
          unregister_code16(KC_LBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LABK);
        } else {
          unregister_code16(KC_LABK);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RCBR);
        } else {
          unregister_code16(KC_RCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RPRN);
        } else {
          unregister_code16(KC_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RABK);
        } else {
          unregister_code16(KC_RABK);
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

