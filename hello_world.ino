//Cameron Griffith
//Braden Change
int i;

void setup() {
  // put your setup code here, to run once:
  Serial.print("Hello World");
  i = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (i < 10) {
    Serial.print(i);
  }
  i += 1;
}
