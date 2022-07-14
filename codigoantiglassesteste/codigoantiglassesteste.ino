int pinoSensor = 7; //PINO DIGITAL UTILIZADO PELO SENSOR
int Buzzer = 5;

void setup() {
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pinoSensor) == LOW) { //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
    digitalWrite(Buzzer, HIGH);
    Serial.println("Objeto Detectado");
  } else { //SENÃO, FAZ
    digitalWrite(Buzzer, LOW);
    Serial.println("Objeto Ausente");
  }
}
