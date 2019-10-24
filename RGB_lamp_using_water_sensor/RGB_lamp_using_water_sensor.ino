int Water_Sensor = A0;
int Sensor_val = 0;

int R = 4;
int G = 3;
int B = 2;

void setup() {
  Serial.begin(9600);
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  Sensor_val = analogRead(Water_Sensor);

  if(Sensor_val<=100){
    digitalWrite(B, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(R, LOW);
  }
  else if(Sensor_val<=300){
    digitalWrite(B, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(R, LOW);
  }
 else{
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(R, HIGH);
 }
 Serial.println(Sensor_val);
}
