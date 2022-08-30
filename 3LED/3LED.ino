// The pin the LED is connected to
#define LED1 18
#define LED2 19
#define LED3 21


void setup() {
  // Declare the LED as an output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
}
