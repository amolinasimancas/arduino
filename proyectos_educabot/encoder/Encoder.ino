// Entradas del encoder rotativo

#define CLK 2

#define DT 3

#define SW 4



int counter = 0;

int currentStateCLK;

int lastStateCLK;

String currentDir =“”;

unsigned long lastButtonPress = 0;



void setup() {

//configurar pines de encoder como entradas

pinMode(CLK,INPUT);

pinMode(DT,INPUT);

pinMode(SW, INPUT_PULLUP);



// Configurar Monitor Serial

Serial.begin(9600);



// leer el estado inicial de CLK

lastStateCLK = digitalRead(CLK);

}



void loop() {

// Leer el siguiente estado de CLK

currentStateCLK = digitalRead(CLK);



// Si el último y el actual estado de CLK son diferentes son diferentes, entonces ocurrió un pulso

// Reaccionar a solo 1 cambio de estado para evitar conteo doble.

if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){



// Si el estado de DT es diferente que el estado de CLK entonces

// el encoder esta rotando en sentido contrario a las agujas del reloj, por lo que se decrementa

if (digitalRead(DT) != currentStateCLK) {

counter –;

currentDir =“CCW”;

} else {

// El encodes esta rotando en sentido a las agujas del reloj, por lo que incrementa.

counter ++;

currentDir =“CW”;

}



Serial.print(“Direction: “);

Serial.print(currentDir);

Serial.print(” | Counter: “);

Serial.println(counter);

}



// Recuerda el ultimo estado de CLK

lastStateCLK = currentStateCLK;



// Lee el estado del boton

int btnState = digitalRead(SW);



// Si detectamos una señal baja (LOW), el boton fue presionado

if (btnState == LOW) {

//Si pasaron 50ms desde el ultimo pulso bajo, significa

//que el boton ha sido presionado, liberado y presionado nuevamente

if (millis() – lastButtonPress > 50) {

Serial.println(“Button pressed!”);

}



// Recordar el último evento de presion de boton.

lastButtonPress = millis();

}

// Poner un pequeño delay para ayudar a eliminar lecturas erroneas.

delay(1);

}
