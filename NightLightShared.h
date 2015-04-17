#ifndef _NL_SHARED_
#define _NL_SHARED_

const uint8_t TYPE_SETTINGS = 0;
const uint8_t TYPE_TRIGGER = 1;
const uint8_t TYPE_LIGHT_STATE = 2;

struct Settings_t {
  uint8_t type;
  uint16_t r;
  uint16_t g;
  uint16_t b;
  uint16_t fadeInTenthSecs;
  uint16_t fadeOutTenthSecs;
  uint16_t lightTenthSecs;
};

struct Trigger_t {
  uint8_t type;
};

struct LightState_t {
  uint8_t type;
  bool on;
};

#endif
