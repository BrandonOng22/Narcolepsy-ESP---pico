
#include "Arduino.h"
#include "bluetooth.h"

void setup() {

  Serial.begin(115200);

  Serial.println("test");

  setupBluetooth();

}



void loop() {

  delay(2000);

}