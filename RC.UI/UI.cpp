#include "UI.h"
#include <LiquidCrystal_I2C.h>

UI::UI(uint8_t lcd_address, uint8_t lcd_columns, uint8_t lcd_rows): _lcd(lcd_address, lcd_columns, lcd_rows),  _battery() {}

byte carGlyph[8] = {
 0b01110,
  0b10101,
  0b01110,
  0b01110,
  0b01110,
  0b00100,
  0b01110,
  0b10001
};

void UI::init(){
  _lcd.init();
  _lcd.backlight();
  _lcd.clear();
  _lcd.setCursor(0, 0);

  _batteryUI.init();
  _battery = _batteryUI.get();
  _lcd.createChar(0, _battery.glyph);
  _lcd.createChar(1, carGlyph);
}

void UI::print(char phrase[]){
  _lcd.setCursor(0, 0);
  _lcd.write((byte)1);
  _lcd.setCursor(0, 1);
  _lcd.print(phrase);
  _lcd.setCursor(0, 3);
  _batteryUI.draw();
  _lcd.write((byte)0);
  _lcd.setCursor(1, 3);
  _lcd.print("100%");
}
