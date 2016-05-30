#include <SPI.h>
#include "nRF24L01.h"
#include <RF24.h>
#include "printf.h"

// SETTINGS
#define CE_PIN 9
#define CSN_PIN 10

RF24 radio(CE_PIN, CSN_PIN);

void setup()
{
  Serial.begin(115200);
  printf_begin();
  // Serial.println("TEST");
  radio.begin();
  radio.printDetails();
}

void loop()
{
}
