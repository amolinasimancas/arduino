void setup() {
  pinMode(3,INPUT); //definimos el pin 3 como entrada
  pinMode(4,INPUT); //definimos el pin 4 como entrada
  pinMode(12,OUTPUT); //definimos el pin 12 como salida
  pinMode(11,OUTPUT); //definimos el pin 11 como salida
}

void loop() {
  if ((digitalRead(3)==1)&&(digitalRead(4)==1)){ //verificamos si ambos botones están presionados
    digitalWrite(12,HIGH); //prendemos el led
    delay(1000); //esperamos 1 segundo
    digitalWrite(12,LOW); //prendemos el led
    delay(1000); //esperamos 1 segundo
    digitalWrite(12,HIGH); //prendemos el led
    delay(1000); //esperamos 1 segundo
    digitalWrite(12,LOW); //prendemos el led
    delay(1000); //esperamos 1 segundo
    digitalWrite(12,HIGH); //prendemos el led
    delay(1000); //esperamos 1 segundo
        digitalWrite(11,HIGH); //prendemos el led
    delay(3000); //esperamos 3 segundos
    digitalWrite(12,LOW); //apagamos el led
    digitalWrite(11,LOW); //apagamos el led
  }
}
