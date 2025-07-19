void setup() {
  pinMode(2,INPUT); //definimos pin 2 como entrada
  pinMode(3,OUTPUT); //definimos pin 3 como salida
}

void loop() {
  if(digitalRead(2)==1){ //verificamos si el botón está presionado
    for(int contador=0; contador<5; contador++){ //iniciamos un bucle de 5 repeticiones
      tone(9,495,500); //reproducimos la nota Mi por medio segundo
      digitalWrite(3,HIGH);
      delay(500); //esperamos medio segundo
      tone(9,441,500); //reproducimos la nota Re por medio segundo
      digitalWrite(3,LOW);
      delay(500); //esperamos medio segundo
    }
  }
}
