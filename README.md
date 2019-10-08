# 33183-Photoresistance-GROVE
  Un pont diviseur avec une photorésistance comme module GROVE

![photoresistance 33183](/details/33183.jpg)
## Schéma
![schema](/details/schematic.PNG)
## Examples
### mblock
![mblock](/examples/mblock.PNG)
### Arduino / C++
```
#include <Arduino.h>
#include <SoftwareSerial.h>

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(115200);
}

void loop() {
  float Luminosite;
  Luminosite = analogRead(A0+0);
  Luminosite = 100 * (Luminosite / 1023);
  Serial.println("Luminosite : " + String(Luminosite) + "%");
  delay(1000);
}
```
## A propos

PIERRON ASCO-CELDA (https://www.pierron.fr/)
