#include <Wire.h> //iniciamos librería wire
#include <LiquidCrystal_I2C.h> //iniciamos librería Liquid Crystal
LiquidCrystal_I2C lcd(0x27,16,2); //definimos i2c del LCD

void setup() {
  lcd.init(); //inicializamos el lcd
  lcd.backlight(); //prendemos la luz del lcd
  }

void loop() {
  lcd.setCursor(2,0); //posicionamos donde comenzaremos a escribir
  lcd.print ("PROXIMO TREN"); //escribimos en el lcd
  delay(2000); //esperamos dos segundos
  lcd.clear(); //borramos el texto del lcd
  lcd.setCursor(2,0); //posicionamos donde comenzaremos a escribir
  lcd.print ("2 MINUTOS"); //escribimos en el lcd
  delay(2000); //esperamos dos segundos
  lcd.clear(); //borramos el texto del lcd
}
