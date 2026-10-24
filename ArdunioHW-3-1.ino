const int RLedPin = 9;
const int GLedPin = 10;
const int BLedPin = 11;

int R = 255;
int G = 0;
int B = 0;

void setup() {
  pinMode(RLedPin, OUTPUT);
  pinMode(GLedPin, OUTPUT);
  pinMode(BLedPin, OUTPUT);
}

void loop() {
  
  for (int i = 0; i <= 255; i++) {
    R = 255 - i;
    G = i;
    B = 0;
    showColor(R, G, B);
    delay(5);
  }

  for (int i = 0; i <= 255; i++) {
    R = 0;
    G = 255 - i;
    B = i;
    showColor(R, G, B);
    delay(5);
  }

  for (int i = 0; i <= 255; i++) {
    R = i;
    G = 0;
    B = 255 - i;
    showColor(R, G, B);
    delay(5);
  }
}

void showColor(int r, int g, int b) {
  analogWrite(RLedPin, r);
  analogWrite(GLedPin, g);
  analogWrite(BLedPin, b);
}