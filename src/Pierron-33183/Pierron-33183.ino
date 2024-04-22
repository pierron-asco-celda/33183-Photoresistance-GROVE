void setup() {
  pinMode(A0,INPUT);
  Serial.begin(115200);
}

void loop() {
  double Luminosite = analogRead(A0);
  Luminosite = 100 * (Luminosite / 1023);
  Serial.println("Luminosite : " + String(Luminosite, 0) + "%");
  delay(500);
}
