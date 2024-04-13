#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  int nota = map(analogRead(A0),0,1023,260,1200);
  lcd.setCursor(2,0);
  lcd.print(analogRead(A0));
  lcd.setCursor(2,1);
  lcd.print(nota);
  tone(9, nota, 100);
  delay(500);
  lcd.clear();
  noTone(9);
}
