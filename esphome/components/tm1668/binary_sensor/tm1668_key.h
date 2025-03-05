#pragma once

#include "esphome/components/binary_sensor/binary_sensor.h"
#include "../tm1668.h"

namespace esphome {
namespace tm1668 {

class TM1668Key : public binary_sensor::BinarySensor, public KeyListener {
 public:
  void set_keycode(uint8_t key_code) { key_code_ = key_code; };
  void keys_update(uint8_t keys) override;

 protected:
  uint8_t key_code_{0};
};

}  // namespace tm1668
}  // namespace esphome
