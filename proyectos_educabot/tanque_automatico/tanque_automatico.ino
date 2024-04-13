void setup() {
  pinMode(12,OUTPUT); //definimos pin 12 como salida
}

void loop() {
  int nivel = analogRead(A0); //creamos la variable nivel
  if(nivel<=500){ //corroboramos si el nivel es mayor a 500
    digitalWrite(12,HIGH); //encendemos el LED
  }
  else{ //de lo contrario
    digitalWrite(12,LOW); //apagamos el LED
  }

}
