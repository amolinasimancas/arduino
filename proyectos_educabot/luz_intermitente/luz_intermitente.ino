void setup() {
  pinMode(4, OUTPUT); //definimos el pin 4 como salida
}

void loop() {
  digitalWrite(4, HIGH); //prendemos el led
  delay(500); //esperamos medio segundo
  digitalWrite(4, LOW); //apagamos el led
  delay(500); //esperamos medio segundo
}
