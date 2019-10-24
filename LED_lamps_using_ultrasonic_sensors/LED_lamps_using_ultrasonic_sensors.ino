#define TRIG 2
#define ECHO 3
#define RED 11
#define GREEN 10
#define YELLOW 9

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  float duration = pulseIn(ECHO, HIGH);
  float dis = duration / 29 / 2 * 10;
  Serial.print(dis);
  Serial.println("mm");

  analogWrite(YELLOW, LOW);
  analogWrite(GREEN, LOW);
  analogWrite(RED, LOW);
  
  if(dis < 100)
    analogWrite(YELLOW, HIGH);
  else if(dis < 200)
    analogWrite(GREEN, HIGH);
  else if(dis < 300)
    analogWrite(RED, HIGH);

  delay(300);
}

