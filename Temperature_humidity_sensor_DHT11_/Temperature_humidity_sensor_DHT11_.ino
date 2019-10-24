#include <dht.h>
dht DHT11;

#define dPIN 5
void setup() {
  Serial.begin(115200);
  Serial.println("DHT11 Test Program");
  Serial.println();
  Serial.println("Type,\tHumidity (%),\tTemperature (C)");
}

void loop() {
  Serial.print("DHT11, \t");
  int chk = DHT11.read11(dPIN);

  Serial.print(DHT11.humidity, 1);
  Serial.print(",     \t");
  Serial.println(DHT11.temperature, 1);
  delay(2000);
}
