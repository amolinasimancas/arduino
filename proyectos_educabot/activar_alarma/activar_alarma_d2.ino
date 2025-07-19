#include<Wire.h> //iniciar librería wire
#include<LiquidCrystal_I2C.h> //iniciar librería Liquid Crystal
LiquidCrystal_I2C lcd(0x27,16,2); //definir dirección 12c del LCD 

void setup() {
  pinMode(2,INPUT); //definimos pin 2 como entrada
  pinMode(3,OUTPUT); //definimos pin 3 como salida
  lcd.init(); //iniciar LCD
  lcd.backlight(); //prender luz del LCD
}

void loop() {
  if(digitalRead(2)==1){ //verificamos si el botón está presionado
    lcd.setCursor(2,0); //posicionar para escribir
    lcd.print("S.O.S"); //escribimos SOS
    for(int contador=0; contador<4; contador++){ //iniciamos un bucle de 5 repeticiones
      tone(9,495,500); //reproducimos la nota Mi por medio segundo
      digitalWrite(3,HIGH);
      delay(500); //esperamos medio segundo
      tone(9,441,500); //reproducimos la nota Re por medio segundo
      digitalWrite(3,LOW);
      delay(500); //esperamos medio segundo
    }
    lcd.clear(); //borramos la pantalla LCD
  }
}
