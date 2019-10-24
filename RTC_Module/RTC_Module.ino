#include <DS1302.h>

#define SCK_PIN 4
#define IO_PIN 3
#define RST_PIN 2

DS1302 rtc(RST_PIN, IO_PIN, SCK_PIN);

void setup() {
  rtc.halt(false);
  rtc.writeProtect(false);

  Serial.begin(9600);

  rtc.setDOW(THURSDAY);
  rtc.setTime(21, 02, 00);
  rtc.setDate(11, 9, 2017);
 
 }

void loop() {
  Serial.print("It is ");
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  Serial.print(rtc.getDateStr());
  Serial.print(" ");
  Serial.print("and the time is : ");
  Serial.println(rtc.getTimeStr());

  delay(1000);

}
