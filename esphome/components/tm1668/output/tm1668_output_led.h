#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/binary_output.h"
#include "../tm1668.h"

namespace esphome {
namespace tm1668 {

class TM1668OutputLed : public output::BinaryOutput, public Component {
 public:
  void dump_config() override;

  void set_tm1668(TM1668Component *tm1668) { tm1668_ = tm1668; }
  void set_lednum(int led) { led_ = led; }

 protected:
  void write_state(bool state) override;

  TM1668Component *tm1668_;
  int led_;
};

}  // namespace tm1668
}  // namespace esphome
