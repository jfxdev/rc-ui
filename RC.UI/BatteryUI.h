#ifndef Battery_h
#define Battery_h
#include "Arduino.h"

struct Battery
{
  byte glyph[8];
};

extern struct Battery battery;

class BatteryUI
{
  public:
    BatteryUI();
    void init();
    Battery get();
    void draw();
  private:

};
#endif
