/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include "Abstraction.h"
#include "AQUATECControl.h"
#include <Arduino.h>
#include "Relay.h"

// Sensor Pins:
#define PHSENSOR_PIN A1
#define TDSSENSOR_PIN A2
#define TEMPERATURESENSOR_PIN A0

// Actuator Pins:
#define SOURCE_RELAY_PIN 10
#define LCD_TRANSMIT_PIN A3
#define LCD_RECEIVE_PIN A4
#define DRAIN_RELAY_PIN A6
#define DISPENSER_RELAY_PIN A7

// initialize Components
AQUATECControl aquatecControl;

Relay sourceRelay(SOURCE_RELAY_PIN);

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(250);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  // wait for a second
  delay(250);
}
