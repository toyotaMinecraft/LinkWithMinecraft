#include "MCreatorLink.h"

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(20);
  MCreatorLink.setup(Serial);
  pinMode(10,OUTPUT);
  digitalWrite(10,LOW);
}

void loop() {
    MCreatorLink.loop();
}
