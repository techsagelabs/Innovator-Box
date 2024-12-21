#define LED 16   // or #define LED P16 on some boards

void setup() {
  pinMode(LED, OUTPUT);    // LED pin as output
}

void loop() {
  digitalWrite(LED, HIGH); // turn the LED off
  delay(1000);             // wait for 1 second
  digitalWrite(LED, LOW);  // turn the LED on
  delay(1000);             // wait for 1 second
}
