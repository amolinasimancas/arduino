# include <Servo.h> //iniciar librería servo
Servo Vumetro; //declaramos nombre del servo

void setup() {
  pinMode(12,OUTPUT); //definimos pin 12 como salida
  pinMode(11,OUTPUT); //definimos pin 11 como salida
  pinMode(10,OUTPUT); //definimos pin 10 como salida
  pinMode(9,OUTPUT); //definimos pin 9 como salida
  Vumetro.attach(3); //definimos pin 3 para servo
}

void loop() {
  int Volumen = map(analogRead(A0),0,1023,0,4); //creamos la variable Volumen
  int Aguja = map(analogRead(A0),0,1023,0,150); //creamos la variable Volumen
  if (Volumen==0){ //verificamos si el valor del volumen es 0
    digitalWrite(12,LOW); //apagamos el LED
    digitalWrite(11,LOW); //apagamos el LED
    digitalWrite(10,LOW); //apagamos el LED
    digitalWrite(9,LOW); //apagamos el LED
    Vumetro.write(Aguja); //posicionamos servo
  }
  else if (Volumen==1){ //verificamos si el valor del volumen es 1
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,LOW); //apagamos el LED
    digitalWrite(10,LOW); //apagamos el LED
    digitalWrite(9,LOW); //apagamos el LED
    Vumetro.write(Aguja); //posicionamos servo
  }
  else if (Volumen==2){ //verificamos si el valor del volumen es 1
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,HIGH); //encendemos el LED
    digitalWrite(10,LOW); //apagamos el LED
    digitalWrite(9,LOW); //apagamos el LED
    Vumetro.write(Aguja); //posicionamos servo
  }
  else if (Volumen==3){ //verificamos si el valor del volumen es 1
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,HIGH); //encendemos el LED
    digitalWrite(10,HIGH); //encendemos el LED
    digitalWrite(9,LOW); //apagamos el LED
    Vumetro.write(Aguja); //posicionamos servo
  }
  else{ //de lo contrario
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,HIGH); //encendemos el LED
    digitalWrite(10,HIGH); //encendemos el LED
    digitalWrite(9,HIGH); //encendemos el LED
    Vumetro.write(Aguja); //posicionamos servo
  }
}
