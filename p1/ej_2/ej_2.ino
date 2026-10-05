const int ledPin = 9;
const int ledPin_2 = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++){
    analogWrite(ledPin, i);
    analogWrite(ledPin_2, 255 - i);
    delay(25);
  }

  for (int i = 255; i >= 0; i--){
    analogWrite(ledPin, i);
    analogWrite(ledPin_2, 255 - i);
    delay(25);
  }
}
