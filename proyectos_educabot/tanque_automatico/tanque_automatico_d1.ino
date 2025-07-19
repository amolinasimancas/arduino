void setup() {
  pinMode(12,OUTPUT); //definimos pin 12 como salida
}

void loop() {
  int nivel = analogRead(A0); //creamos la variable nivel
  if(nivel>200){ //corroboramos si el nivel es mayor a 200
    digitalWrite(12,HIGH); //encendemos el LED
    delay (1000); //aguardamos 1 segundo
    digitalWrite(12,LOW); //apagamos el LED
    delay(1000); //aguardamos 1 segundo
  }
  else{ //de lo contrario
    digitalWrite(12,LOW); //apagamos el LED
  }

}
