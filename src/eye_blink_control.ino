// Smart Home Control Using Eye Blink System
// Author: Ashwin Sharma
// Description: Controls LED and DC motor using eye blink detection

// Pin Definitions
const int blinkSensorPin = 2;   // IR eye blink sensor output
const int ledPin = 8;           // LED (simulated bulb)
const int fanPin = 9;           // DC motor (simulated fan)

// Variables
int lastBlinkState = HIGH;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 300; // debounce time in ms
bool appliancesOn = false;

void setup() {
  pinMode(blinkSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  digitalWrite(ledPin, LOW);
  digitalWrite(fanPin, LOW);

  Serial.begin(9600);
  Serial.println("Eye Blink Smart Home Control Started");
}

void loop() {
  int currentBlinkState = digitalRead(blinkSensorPin);

  // Detect change in blink signal
  if (currentBlinkState != lastBlinkState) {
    lastDebounceTime = millis();
    lastBlinkState = currentBlinkState;
  }

  // Confirm blink after debounce delay
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (currentBlinkState == LOW) {
      toggleAppliances();

      // Wait until blink ends
      while (digitalRead(blinkSensorPin) == LOW);
      delay(200); // Prevent multiple triggers
    }
  }
}

void toggleAppliances() {
  appliancesOn = !appliancesOn;
  digitalWrite(ledPin, appliancesOn ? HIGH : LOW);
  digitalWrite(fanPin, appliancesOn ? HIGH : LOW);

  Serial.println(appliancesOn ? "Appliances ON" : "Appliances OFF");
}
