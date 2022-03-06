void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sizeof(double): ");
  Serial.println(sizeof(double));
  Serial.print("Sizeof(int): ");
  Serial.println(sizeof(int));

  int startTime = millis();
  int primes = 0;
  for (unsigned int i = 2; i < 65535; i++) {
    if (isPrime(i)) {
      primes++;
    }
  }
  Serial.print("Primes: ");
  Serial.println(primes);
  int endTime = millis() - startTime;
  Serial.print("Time: ");
  Serial.println(endTime);
  Serial.println("");
  delay(1000);
}

bool isPrime(unsigned int n)
{
  if (n == 2 || n == 3) {
    return true;
  }
  if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
    return false;
  }

  for (unsigned int i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }

  return true;
}
