// lowest and highest sensor readings:
const int sensorMin = 0;     // sensor minimum
const int sensorMax = 1024;  // sensor maximum

void setup() {
  // initialize serial communication @ 9600 baud:
  Serial.begin(115200);  
}
void loop() {
  // read the sensor on analog A0:
  int sensorReading = analogRead(34);
  // map the sensor range (four options):
  // ex: 'long int map(long int, long int, long int, long int, long int)'
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);

  Serial.print("range : ");
  Serial.println(range);
  
  // range value:
//  switch (range) {
//  case 0:    // A fire closer than 1.5 feet away.
//    Serial.println("** Close Fire **");
//    break;
//  case 1:    // A fire between 1-3 feet away.
//    Serial.println("** Distant Fire **");
//    break;
//  case 2:    // No fire detected.
//    Serial.println("No Fire");
//    break;
//  }
  delay(1);  // delay between reads
}
