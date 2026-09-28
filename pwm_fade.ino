#define POT_PIN 34
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int potValue = analogRead(POT_PIN);

  int brightness = map(potValue, 0, 4095, 0, 255);

  analogWrite(LED_PIN, brightness);

  delay(10);
}