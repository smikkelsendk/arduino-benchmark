void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sizeof(double): ");
  Serial.println(sizeof(double));
  Serial.print("Sizeof(int): ");
  Serial.println(sizeof(int));

  int startTime = millis();
  double area = 0;
  double lastValue = 0; //sqrt(0)
  double step = 1.0 / 65535.0;
  double x;
  double value;
  for (unsigned int i = 65535 - 1 ; i >= 0; i--) {
    x = i / 65535.0;
    value = sqrt(1.0 - x * x);
    area += (0.5 * (lastValue + value)) * step;
    lastValue = value;
    if(i==0) { break; }
  }

  area = 4.0 * area;
  Serial.print("Area: ");
  Serial.println(area, 10);
  int endTime = millis() - startTime;
  Serial.print("Time: ");
  Serial.println(endTime);
  Serial.println("");
  delay(1000);
}
