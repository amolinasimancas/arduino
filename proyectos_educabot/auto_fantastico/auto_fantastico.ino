void prender_las_luces(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(500);
}

void apagar_las_luces(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(500);
}

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  prender_las_luces();
  apagar_las_luces();
}
