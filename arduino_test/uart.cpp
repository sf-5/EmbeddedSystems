#include <Arduino.h>

void setup() {
  pinMode(1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  String receivedMessage;

  while (Serial.available() > 0) {
    delay(1);
    char c = Serial.read();
    receivedMessage = c;
    Serial.println(receivedMessage);
  }
}