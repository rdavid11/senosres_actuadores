const int redPin = 9;
const int greenPin = 11;
const int bluePin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  String cmd;
  int r, g, b;
  if (Serial.available() != 0) {
    cmd = Serial.readStringUntil('\n');
    Serial.println(cmd);
    cmd.trim();

    int r = cmd[0] - '0';
    int g = cmd[1] - '0';
    int b = cmd[2] - '0';

    
    
    set_led(r, g, b);
  }
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
