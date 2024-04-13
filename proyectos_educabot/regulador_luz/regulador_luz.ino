void setup() {
  pinMode(11,OUTPUT); //definimos pin 11 como salida
}

void loop() {
  analogWrite(11,map(analogRead(A0),0,1023,0,255)); //prendemos el led con la intensidad obtenida de mapear el sensor de luz
}
