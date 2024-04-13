int pulsador=2; //declaramos pin 2 como pulsador
int led=12; //declaramos pin 12 como led
int temp=2000; //declaramos la variable de tiempo de espera del led

void setup() {
  pinMode(pulsador,INPUT); //declaramos pulsador com
  pinMode(led,OUTPUT); //declaramos led como salida
}

void loop() {
  if (digitalRead(pulsador)==1){ //si el pulsador se activa
    digitalWrite(led,HIGH); //se energiza la salida led
    delay(temp); //aguardamos 2 segundos
    digitalWrite(led,LOW); //apagamos el led
  }
}
