void setup() {
  pinMode(2,INPUT); //definimos el pin 2 como entrada
  Serial.begin(9600); //iniciamos la comunicación serial
}

void loop() {
  Serial.print("Estado ");
  Serial.print(digitalRead(2)); //imprimimos el puerto serie con salto de línea la lectura del botón
  Serial.print("\t");
  delay(1000); //esperamos un segundo
}
