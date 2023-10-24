#include <SD.h>
#include <SPI.h>

//Global Variables
int potPin = A4;
int buttonPin = 8;
int slidePin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(slidePin, INPUT);
  pinMode(0, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  double V = readPot(potPin);
  int State = readButton(buttonPin);

  if(V > 2.5) {
    digitalWrite(0, HIGH);
  }
  else {
    digitalWrite(0, LOW);
  }

  if(State == 1) {
    digitalWrite(4, HIGH);
  }
  else {
    digitalWrite(4, LOW);
  }

  delay(1);
}

double readPot(int pin) {
  int Dval = analogRead(pin); //reads the digital value of voltage
  double Aval = (Dval * 5)/1023; //converts to analog value of voltage
  delay(1000);

  return Aval;
}

int readButton(int pin) {
  int state = digitalRead(pin);

  return state;
}