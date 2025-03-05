#include "tm1668_key.h"

namespace esphome {
namespace tm1668 {

void TM1668Key::keys_update(uint8_t keys) {
  bool pressed = keys & (1 << key_code_);
  if (pressed != this->state)
    this->publish_state(pressed);
}

}  // namespace tm1668
}  // namespace esphome
