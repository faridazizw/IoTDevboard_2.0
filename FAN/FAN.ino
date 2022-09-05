

// constants won't change
const int FAN_PIN = 27;  // the Arduino pin, which connects to the IN pin of relay

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin A5 as an output.
  pinMode(FAN_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(FAN_PIN, HIGH); // turn on fan 5 seconds
  delay(5000);
  digitalWrite(FAN_PIN, LOW);  // turn off fan 5 seconds
  delay(5000);
}
