const int redPin = 9;
const int greenPin = 11;
const int bluePin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {

  // Apagado
  set_rgb(0,0,0);
  delay(1000);

  // Naranja
  set_rgb(205,165,0);
  delay(1000);

  // Magenta
  set_rgb(255,0,255);
  delay(1000);

  // Rosa
  set_rgb(255,182,203);
  delay(1000);

  // Amarillo
  set_rgb(255,255,0);
  delay(1000);

  // Cian
  set_rgb(0,255,255);
  delay(1000);

  // blanco
  set_rgb(255,255,255);
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

void set_rgb(int r, int g, int b){
  r = 255 - r;
  g = 255 - g;
  b = 255 - b;
  
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
