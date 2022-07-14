const int pinoBuzzer = 2; //PINO DIGITAL UTILIZADO PELO BUZZER
const int pinoSensor = A0; //PINO DIGITAL UTILIZADO PELO SENSOR
const int pinoVermelho = 9; //PINO DIGITAL UTILIZADO PELO SENSOR
const int pinoVerde = 8; //PINO DIGITAL UTILIZADO PELO SENSOR
const int pinoAzul = 7; //PINO DIGITAL UTILIZADO PELO SENSOR
const int leituraSensor = 300;
void setup(){
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoBuzzer, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoVermelho, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoVerde, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoAzul, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoBuzzer, LOW); //LED INICIA DESLIGADO
  Serial.begin(9600);
}

void loop(){
 int valorAnalogico = analogRead(pinoSensor);
  Serial.println(valorAnalogico);
  if(valorAnalogico > leituraSensor){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
      digitalWrite(pinoVermelho, HIGH); //ACENDE O LED
      digitalWrite(pinoBuzzer, HIGH);
      digitalWrite(pinoVerde, LOW);
      digitalWrite(pinoAzul, LOW);
  }else{ //SENÃO, FAZ
      digitalWrite(pinoVermelho, LOW); //ACENDE O LED
      digitalWrite(pinoBuzzer, LOW);
      digitalWrite(pinoVerde, HIGH);
      digitalWrite(pinoAzul, LOW);
  }
}
