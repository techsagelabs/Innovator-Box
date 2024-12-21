// Define LED pins
const int redPin = 16;    // Red LED
const int yellowPin = 17; // Yellow LED
const int greenPin = 18;  // Green LED

void setup() {
 // Initialize all LED pins as outputs
 pinMode(redPin, OUTPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
}

void loop() {
 // Red light (Stop)
 digitalWrite(redPin, HIGH);
 digitalWrite(yellowPin, LOW);
 digitalWrite(greenPin, LOW);
 delay(5000);  // Red light for 5 seconds

 // Yellow light (Prepare to go)
 digitalWrite(redPin, LOW);
 digitalWrite(yellowPin, HIGH);
 delay(2000);  // Yellow light for 2 seconds

 // Green light (go)
 digitalWrite(yellowPin, LOW);
 digitalWrite(greenPin, HIGH);
 delay(5000);  // Green light for 5 seconds
}

