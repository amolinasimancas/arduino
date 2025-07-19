#include <Wire.h> //incluimos librería wire
#include <LiquidCrystal_I2C.h> //incluimos librería LCD
LiquidCrystal_I2C lcd(0x27,16,2); //definimos dirección i2c del LCD

void setup() {
  lcd.init(); //iniciamos el LCD
  lcd.backlight(); //encendemos el LCD
}

void loop() {
  if (analogRead(A0)>=500){ //verificamos si la intensidad de luz es mayor o igual a 500
    lcd.setCursor(0,0); //ubicamos el cursor donde vamos a escribir
    lcd.print("DIA"); //escribimos "DIA"
    lcd.setCursor(0,1); //ubicamos el cursor donde vamos a escribir
    lcd.print(analogRead(A0)); //escribimos el valor que arroja el sensor
    delay(1000); //aguardamos 1 segundo
    lcd.clear(); //borramos el LCD
  }
else{ //de lo contrario
  lcd.setCursor(0,0); //ubicamos el cursor donde vamos a escribir
  lcd.print("NOCHE"); //escribimos "NOCHE"
  lcd.setCursor(0,1); //ubicamos el cursor donde vamos a escribir
  lcd.print(analogRead(A0)); //escribimos el valor que arroja el sensor
  delay(1000); //aguardamos 1 segundo
  lcd.clear(); //borramos el LCD
}
}
