#include "tm1668_switch_led.h"
#include "esphome/core/log.h"

namespace esphome {
namespace tm1668 {

static const char *const TAG = "tm1668.led";

void TM1668SwitchLed::write_state(bool state) {
  tm1668_->set_led(led_, state);
  publish_state(state);
}

void TM1668SwitchLed::dump_config() {
  LOG_SWITCH("", "TM1668 LED", this);
  ESP_LOGCONFIG(TAG, "  LED: %d", led_);
}

}  // namespace tm1668
}  // namespace esphome
