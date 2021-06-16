# 33183 Photoresistance GROVE

PHOTORÉSISTANCE-GROVE [33183](https://www.pierron.fr/photoresistance-grove.html)

Ce module au format Grove est constitué d'un pont diviseur de 100 kΩ associé à une photorésistance dont la résistivité varie avec la lumière reçue. 
- À la lumière du jour : R = 6 kΩ
- Dans l’obscurité : R = 1 MΩ

![L-33183](/img/L-33183.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [NORPS-12](https://github.com/pierron-asco-celda/33183-Photoresistance-GROVE/blob/master/src/Pierron-33183-Datasheet.pdf)

# Schémas :

![SCH-33183](/img/SCH-33183.png)
![BRD-33183](/img/BRD-33183.png)

# Exemples :

### mBlock :
![P1-33183](/img/P1-33183.png)

### Arduino / C++ :
```cpp
/*
    ** Mesure Luminosité module Grove **
       PIN A0 Module shield GROVE
       Baud rate 115200 -> Moniteur série*
*/

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
<div style="text-align: justify">*Le débit en bauds est un taux de transfert de données en unités de bits par seconde (bps). Si le débit en bauds est de 9600, cela signifie que la possibilité d’envoyer des données est de 9600 bits en une seconde. 1 caractère est identique à 1 octet.</div>
<br>

PIERRON ASCO-CELDA (https://www.pierron.fr/).
