#include <Arduino.h>
#include "SevSeg.h"
#include <chrono>
#include <thread>

SevSeg sevseg;
unsigned int microseconds;

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {2, 6, 7, 13};
  byte segmentPins[] = {3, 5, 11, 9, 8, 12, 4, 10};
  bool resistorsOnSegments = 0;
  unsigned int microseconds = 0;

  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop() {
  sevseg.setNumber(microseconds, 3);
  sevseg.refreshDisplay();

  microseconds += 1000;
  sleep(1000);
}