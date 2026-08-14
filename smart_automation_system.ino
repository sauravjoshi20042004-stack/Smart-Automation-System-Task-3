const int ldrPin = A0;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue > 500) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Status: DARK - LED ON");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Status: BRIGHT - LED OFF");
  }

  Serial.println("--------------------");

  delay(1000);
}