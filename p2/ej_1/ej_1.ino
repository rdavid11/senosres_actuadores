const int redPin = 9;
const int greenPin = 11;
const int bluePin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {

  set_led(0,0,0);
  delay(1000);

  set_led(1,0,0);
  delay(1000);

  set_led(0,1,0);
  delay(1000);

  set_led(0,0,1);
  delay(1000);

  set_led(0,1,1);
  delay(1000);
}

void set_led(int r, int g, int b){

  if (r){
    digitalWrite(redPin, LOW);
  } else {
    digitalWrite(redPin, HIGH);
  }

  if (g){
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(greenPin, HIGH);
  }

  if (b){
    digitalWrite(bluePin, LOW);
  } else {
    digitalWrite(bluePin, HIGH);
  }
  
}
