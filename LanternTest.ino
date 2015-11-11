#include <SoftwareSerial.h>

void setup() {
  //setup logging
  Serial.begin(115200);
  Serial.println("Setup");
  
}

void loop() {
  Serial.println("Loop");
  delay(1000);

}
