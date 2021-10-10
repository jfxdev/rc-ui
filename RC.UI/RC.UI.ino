// INSTANCIANDO OBJETOS

#include "UI.h"

UI ui(0x27, 16, 4);

void setup() {
  ui.init();
}

void loop() {

  ui.print("- Ola, Mundo! 2 -");
  
  //lcd.setCursor(0, 1); // POSICIONA O CURSOR NA PRIMEIRA COLUNA DA LINHA 2
  //lcd.print("Fim do Setup ()");
  //lcd.setCursor(0, 2); // POSICIONA O CURSOR NA PRIMEIRA COLUNA DA LINHA 2
  //lcd.print("- Ola, Mundo! -");
  //lcd.setCursor(0, 3); // POSICIONA O CURSOR NA PRIMEIRA COLUNA DA LINHA 2
  //lcd.print("- Ola, Mundo! -");
  delay(100);
}
