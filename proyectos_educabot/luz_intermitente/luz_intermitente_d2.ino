int led=12; //declaramos pin 12 como led

void setup() {
  pinMode(led,OUTPUT); //declaramos led como salida
}

void loop() {
  digitalWrite(led,HIGH); //encendemos el led
  delay(3000); //aguardamos
  digitalWrite(led,LOW); //encendemos el led
  delay(2000); //aguardamos
  digitalWrite(led,HIGH); //encendemos el led
  delay(2000); //aguardamos
  digitalWrite(led,LOW); //encendemos el led
  delay(1000); //aguardamos
  digitalWrite(led,HIGH); //encendemos el led
  delay(1000); //aguardamos
  digitalWrite(led,LOW); //encendemos el led
  delay(500); //aguardamos
}
