void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sizeof(double): ");
  Serial.println(sizeof(double));
  Serial.print("Sizeof(int): ");
  Serial.println(sizeof(int));

  int startTime = millis();
  double x = 1.0;
  double pi = 1.0;
  for (unsigned int i = 2; i < 65535; i++) {
    x *= -1.0;
    pi += x / (2.0 * i - 1.0);
  }

  pi = pi * 4.0;
  Serial.print("PI: ");
  Serial.println(pi, 10);
  int endTime = millis() - startTime;
  Serial.print("Time: ");
  Serial.println(endTime);
  Serial.println("");
  delay(1000);
}
