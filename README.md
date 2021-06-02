# 33183-PHOTORÉSISTANCE-GROVE

PHOTORÉSISTANCE-GROVE [33183](https://www.pierron.fr/photoresistance-grove.html)

Une photorésistance avec un pont diviseur sous le format grove.
- À la lumière du jour : R = 6 kΩ
- Dans l’obscurité : R = 1 MΩ

![L-33183](/img/L-33183.jpg)

# Schémas :

![SCH-33183](/img/SCH-33183.PNG)
![BRD-33183](/img/BRD-33183.PNG)

# Exemples :

### mBlock :
![P1-33183](/img/P1-33183.PNG)

### Arduino / C++ :
```cpp
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
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr/)
