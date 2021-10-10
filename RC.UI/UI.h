#ifndef UI_h
#define UI_h
#include <LiquidCrystal_I2C.h>
#include "Arduino.h"
#include "BatteryUI.h"

class UI
{
  public:
    UI(uint8_t lcd_address, uint8_t lcd_columns, uint8_t lcd_rows);
    void init();
    void print(char phrase[]);
  private:
    LiquidCrystal_I2C _lcd;
    BatteryUI         _batteryUI;
    Battery           _battery;
};



#endif
