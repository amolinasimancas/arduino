int pulsador=2; //declaramos pin 2 como pulsador
int led=12; //declaramos pin 12 como led
int seg=2000; //declaramos variable de tiempo
int wait=200; //declaramos variable de parpadeo

void setup() {
  pinMode(pulsador,INPUT); //declaramos pulsador com
  pinMode(led,OUTPUT); //declaramos led como salida
}

void loop() {
  if (digitalRead(pulsador)==1){ //si el pulsador se activa
    digitalWrite(led,HIGH); //se energiza la salida led
    delay (seg); //aguardamos 2 segundos
    digitalWrite(led,LOW); //apagamos el led
    delay (wait); //aguardamos medio segundo
    digitalWrite(led,HIGH); //encendemos el led
    delay(wait); //aguardamos medio segundo
    digitalWrite(led,LOW); //apagamos el led
    delay (wait); //aguardamos medio segundo
    digitalWrite(led,HIGH); //encendemos el led
    delay(wait); //aguardamos medio segundo
    digitalWrite(led,LOW); //apagamos el led
  }
}
