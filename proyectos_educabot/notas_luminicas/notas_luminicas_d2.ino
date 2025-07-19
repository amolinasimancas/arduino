#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  int nota = map(analogRead(A0),0,1023,100,800);
  lcd.setCursor(2,0);
  lcd.print(analogRead(A0));
  lcd.setCursor(2,1);
  lcd.print(nota);
  if (analogRead(A0)>=500){
    tone(9, nota, 100);
    delay(500);
    noTone(9);
    lcd.clear();
  }
  else{
    delay(500);
    noTone(9);
    lcd.clear();
  }
}
