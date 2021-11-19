#include <Servo.h>
Servo pataBionica;

int trig = 2;
int echo = 3;
int tiempo;
int distancia;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pataBionica.attach(4);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.2;
  Serial.println(distancia);
  delay(500);

  if(distancia <= 50){
    pataBionica.write(180);
  }
  if(distancia > 50){
    pataBionica.write(0);
  }

}
