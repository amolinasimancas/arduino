int led=12; //declaramos pin 12 como led
int temp=500; //declaramos tiempo de encendido del led

void setup() {
  pinMode(led,OUTPUT); //declaramos led como salida
  digitalWrite(led,HIGH); //encendemos el led
  delay(temp); //aguardamos medio segundos
  digitalWrite(led,LOW); //encendemos el led
}

void loop() {
}
