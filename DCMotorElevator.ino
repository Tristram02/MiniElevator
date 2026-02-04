const int pinPot = A0;
const int in1 = 9;
const int in2 = 10;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(pinPot);

  if (potValue > 532) {
    int speed = map(potValue, 533, 1023, 0, 100);
    analogWrite(in1, speed);
    analogWrite(in2, 0);
    delay(100);
  } 
  else if (potValue < 492) {
    int speed = map(potValue, 491, 0, 0, 100);
    analogWrite(in1, 0);
    analogWrite(in2, speed);
    delay(100);

  } 
  else {
    analogWrite(in1, 0);
    analogWrite(in2, 0);
  }
}