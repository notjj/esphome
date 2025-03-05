#include "tm1668_output_led.h"
#include "esphome/core/log.h"

namespace esphome {
namespace tm1668 {

static const char *const TAG = "tm1668.led";

void TM1668OutputLed::write_state(bool state) { tm1668_->set_led(led_, state); }

void TM1668OutputLed::dump_config() {
  LOG_BINARY_OUTPUT(this);
  ESP_LOGCONFIG(TAG, "  LED: %d", led_);
}

}  // namespace tm1668
}  // namespace esphome
