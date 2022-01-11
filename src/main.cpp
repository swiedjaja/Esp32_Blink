#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

int nCount =0;
void loop() {
  Serial.printf("Hello %d\n", nCount++);
#if defined(ESP8266)
  int nActive = LOW;
#elif defined(ESP32) 
  int nActive = HIGH;
#endif  
  // put your main code here, to run repeatedly:
    digitalWrite(LED_BUILTIN, nActive);
  // wait for a second
  delay(20);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, !nActive);
   // wait for a second
  delay(1000);
}