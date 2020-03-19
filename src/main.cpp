#include <Arduino.h>

#include "Arduino.h"

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(5, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);
  // wait for a second
  delay(2000);
  // turn the LED off by making the voltage LOW
  digitalWrite(5, LOW);
  // wait for a second
  delay(5000);
  Serial.println("pio whatevs again");
}
