void setup() {
  pinMode(12,OUTPUT); //definimos pin 12 como salida
  pinMode(11,OUTPUT); //definimos pin 11 como salida
}

void loop() {
  int nivel = analogRead(A0); //creamos la variable nivel
  if(nivel<500){ //corroboramos si el nivel es menor a 500
    digitalWrite(11,HIGH); //encendemos el LED
  }
  else{ //de lo contrario
    digitalWrite (11,LOW); //apagamos el LED
  }
  if(nivel<800){ //corroboramos si el nivel es menor a 800
    digitalWrite(12,HIGH); //encendemos el LED
  }
  else{ //de lo contrario
    digitalWrite(12,LOW); //apagamos el LED
  }

}
