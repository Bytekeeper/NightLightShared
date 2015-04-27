#ifndef _NL_SHARED_
#define _NL_SHARED_

#include <sensors.h>

const uint8_t TYPE_SETTINGS = 200;

struct Settings_t {
  uint8_t type;
  uint16_t r;
  uint16_t g;
  uint16_t b;
  uint16_t fadeInTenthSecs;
  uint16_t fadeOutTenthSecs;
  uint16_t lightTenthSecs;
} PACKED;

#endif
