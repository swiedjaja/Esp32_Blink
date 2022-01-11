#include <Arduino.h>
#if defined(ESP8266)
  #define ON 0
#elif defined(ESP32) 
  #define ON 1
#endif  

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

int nCount =0;
void loop() {
  Serial.printf("Hello %d\n", nCount++);
  // put your main code here, to run repeatedly:
    digitalWrite(LED_BUILTIN, ON);
  // wait for a second
  delay(20);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, 1-ON);
   // wait for a second
  delay(1000);
}