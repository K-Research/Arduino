int R = 7;
int G = 5;
int B = 3;

int S1 = 12;
int S2 = 10;
int S3 = 8;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(R, OUTPUT);

  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(S1) == LOW)
    digitalWrite(R, HIGH);
  else
    digitalWrite(R, LOW);

  if(digitalRead(S2) == LOW)
    digitalWrite(G, HIGH);
  else
    digitalWrite(G, LOW);

  if(digitalRead(S3) == LOW)
    digitalWrite(B, HIGH);
  else
    digitalWrite(B, LOW);    
}
