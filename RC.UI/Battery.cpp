#include "BatteryUI.h"

byte baseGlyph[8] = {
  0b00000,
  0b00000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000,
  0b00000
};

BatteryUI::BatteryUI(){}

struct Battery battery;

void BatteryUI::draw(){}

void BatteryUI::init(){
  memcpy(battery.glyph, baseGlyph, sizeof(baseGlyph));
}

Battery BatteryUI::get(){
  return battery;
}
