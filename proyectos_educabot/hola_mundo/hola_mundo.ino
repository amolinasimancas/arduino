int led=13; //declaramos variable led con el valor 13 del pin a usar
int temp=1000; //declaramos la variable de tiempo de espera del led

void setup() {
  pinMode(led,OUTPUT); //declaramos el pin correspondiente a la variable led como salida
  digitalWrite(led,HIGH); //encendemos el led
  delay(temp); //aguardamos
  digitalWrite(led,LOW); //apagamos el led
}

void loop() {
}
