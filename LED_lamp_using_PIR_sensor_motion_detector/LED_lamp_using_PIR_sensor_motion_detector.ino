#define Red 11
#define inputPin 4

int val = 0;

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(inputPin);

  if (val == HIGH) {
   digitalWrite(Red, HIGH);
   Serial.println("Detected");
   delay(500);
   digitalWrite(Red, LOW);
   delay(500);
  }

  else {
    digitalWrite(Red, LOW);
    Serial.println("Undetected");
    delay(500);
  }
}
