#include <Servo.h> //iniciamos la libreria del servo
Servo servo_3; //declaramos nombre del servo
int pulsador=2; //declaramos pin 2 como pulsador
int temp=5000; //declaramos tiempo de espera
int angle1=180; //declaramos ángulo extremo superior
int angle2=90; //declaramos ángulo extremo inferior
int red=6; //declaramos pin 6 como led rojo

void setup() {
  pinMode(pulsador,INPUT); //definimos pulsador como entrada
  servo_3.attach(3); //definimos pin 3 como servo
  pinMode(red,OUTPUT);
}

void loop() {
  if(digitalRead(pulsador)==1){ //verificamos si el botón esta presionado
    servo_3.write(angle1); //posicionamos el servo en el ángulo final
    digitalWrite(red,LOW); //apagamos el led rojo
    delay(temp); //aguardamos
  }
  else{ //caso contrario
    servo_3.write(angle2); //posicionamos el servo en el ángulo inicial
    digitalWrite(red,HIGH); //encendemos el led rojo
  }
}
