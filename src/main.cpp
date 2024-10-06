#include <Arduino.h>

const int LDR_PIN = 15;
void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  int ldr_value = analogRead(LDR_PIN);
  Serial.print(">LDR Value: ");
  Serial.println(ldr_value);
  delay(1000);
}
