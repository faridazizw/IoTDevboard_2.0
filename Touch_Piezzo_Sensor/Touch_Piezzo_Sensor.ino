#define TOUCH_SENSOR_PIN  33 

void setup() {
  Serial.begin(9600);               // initialize serial
  pinMode(TOUCH_SENSOR_PIN, INPUT); // set ESP32 pin to input mode
}

void loop() {
  int touchState = digitalRead(TOUCH_SENSOR_PIN); // read new state

  if (touchState == HIGH) {
    Serial.println("The sensor is being touched");
  } else if (touchState == LOW) {
    Serial.println("The sensor is untouched");
  }
}
