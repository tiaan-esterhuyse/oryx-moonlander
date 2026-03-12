#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,

  CC_PWD1,
  CC_PWD2,
  CC_PWD3,
  CC_PWD4,
  CC_PWD5,
  CC_PWD6,
  CC_PWD7,
  CC_PWD8,
  CC_PWD9
};

enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(2, KC_F7)
#define DUAL_FUNC_1 LT(4, KC_U)
#define DUAL_FUNC_2 LT(10, KC_0)
#define DUAL_FUNC_3 LT(11, KC_F10)


// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
  //&ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, S(KC_DEL)),
  &ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_LBRC),
  &ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_RBRC),
  &ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LABK),
  &ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_RABK),

  // &ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_LCBR),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_RABK),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_RABK),

  // &ko_make_basic(MOD_MASK_SHIFT, KC_COM, KC_SCLN),
  // &ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN),

  // &ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_COLN), 
};
const uint16_t key_overrides_count = 4; // 18

#define H(kc)  HYPR(kc)
#define M(kc)  MEH(kc)
#define L1(kc) LT(1, kc)
#define L2(kc) LT(2, kc)
#define L3(kc) LT(3, kc)

#define CH(kc) MT(MOD_LCTL, kc)
#define AH(kc) MT(MOD_LALT, kc)
#define SH(kc) MT(MOD_LSFT, kc)
#define GH(kc) MT(MOD_LGUI, kc)
#define HH(kc) MT(MOD_HPR,  kc)
#define MH(kc) MT(MOD_MEH,  kc)

// Left-hand home row mods
#define HRM_A LGUI_T(KC_A)
#define HRM_S LALT_T(KC_S)
#define HRM_D LSFT_T(KC_D)
#define HRM_F LCTL_T(KC_F)

// Right-hand home row mods
#define HRM_J RCTL_T(KC_J)
#define HRM_K RSFT_T(KC_K)
#define HRM_L LALT_T(KC_L)
#define HRM_SCLN RGUI_T(KC_SCLN)

#define KC_WHLU KC_MS_WH_UP
#define KC_WHLD KC_MS_WH_DOWN

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           ST_MACRO_0,                                     KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LPRN,                                                                        KC_RPRN,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LEFT_SHIFT,  
    KC_LEFT_CTRL,   CW_TOGG,        KC_LEFT_GUI,    MT(MOD_LALT, KC_APPLICATION),MT(MOD_LALT, KC_APPLICATION),LT(1, KC_SPACE),                                                                                                LT(2, KC_ENTER),DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    CW_TOGG,        
    TD(DANCE_0),    KC_LEFT_ALT,    LM(3,MOD_LSFT),                 LM(4,MOD_LSFT), KC_LEFT_ALT,    KC_DELETE
  ),
  [1] = LAYOUT_moonlander(
    LALT(KC_GRAVE), KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F12,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                                         KC_F11,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_F10,                                                                         KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LALT(KC_ENTER), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TT(6),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    LALT(KC_GRAVE), KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F12,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                                         KC_F11,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,                                                                         KC_F10,         KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_SPACE),                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    LALT(KC_GRAVE), KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F12,                                         KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TRANSPARENT, KC_EQUAL,       KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_F11,                                         CW_TOGG,        KC_ASTR,        KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_NO,          
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_EXLM,        KC_F10,                                                                         KC_PSCR,        KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_NO,          
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_AMPR,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_ENTER,       KC_NO,          
    KC_TRANSPARENT, KC_COMMA,       KC_DOT,         KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_0,           KC_DOT,         KC_EQUAL,       TT(6),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_CIRC,        KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_PERC,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_DLR,         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LSFT(KC_R),     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_COMMA,    KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_7,                                           KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,          
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_SPACE,                                                                                                       KC_ENTER,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       TO(0),          
    KC_SPACE,       KC_BSPC,        KC_SPACE,                       KC_SPACE,       KC_DELETE,      KC_ENTER
  ),
  [6] = LAYOUT_moonlander(
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SPI,        RGB_VAI,                                        TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(5),          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SPD,        RGB_VAD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          AS_TOGG,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_MODE_FORWARD,RGB_TOG,                                                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SLD,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};


const key_override_t* key_overrides_get_simple(uint16_t keycode) {
  for (uint16_t i = key_overrides_count; i-- > 0;) {
    const key_override_t *entry = key_overrides[i];

    // TODO: Add more checks to ensure it's a simple override

    if (entry->trigger == keycode) {
      return entry;
    }
  }

  return NULL;
}

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
  const key_override_t *entry = key_overrides_get_simple(keycode);
  if (entry == NULL) {
    if (shifted) { add_weak_mods(MOD_BIT(KC_LSFT)); }
    register_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
  } else {
    register_code16((!shifted) ? entry->trigger : entry->replacement);
  }
}

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
  const key_override_t *entry = key_overrides_get_simple(keycode);
  if (entry == NULL) {
    unregister_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
  } else {
    unregister_code16((!shifted) ? entry->trigger : entry->replacement);
  }
}

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
  const key_override_t *entry = key_overrides_get_simple(keycode);
  if (entry != NULL) {
    return true;
  }

  switch(keycode) {
    case AUTO_SHIFT_ALPHA:
    case AUTO_SHIFT_NUMERIC:
    case AUTO_SHIFT_SYMBOLS:
    case KC_DEL:
    case KC_ENT:
    case KC_TAB:
    case KC_F1 ... KC_F12:
    case G(KC_1):
    case G(KC_2):
    case G(KC_3):
    case G(KC_4):
    case G(KC_5):
    case G(KC_6):
    case G(KC_7):
    case G(KC_8):
    case G(KC_9):
    case G(KC_0):
      return true;
    default:
      return false;
  }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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
    [0] = { {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,245,245}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {130,255,255}, {0,245,245}, {74,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,255,255}, {131,255,255}, {21,255,255}, {131,255,255} },

    [1] = { {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {130,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {131,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {152,255,255}, {152,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {21,255,255}, {91,255,255}, {91,255,255}, {91,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255} },

    [5] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {74,255,255}, {74,255,255}, {21,255,255}, {131,255,255}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,245,245}, {74,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {130,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {74,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,245,245}, {131,255,255}, {131,255,255} },

    [6] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,255,255}, {91,255,255}, {21,255,255}, {21,255,255}, {91,255,255}, {91,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
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


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
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
