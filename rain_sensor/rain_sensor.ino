#define sensor_hujan 34

void setup() {
 Serial.begin(9600);
 pinMode (sensor_hujan, INPUT);
}

void loop() {
  int kondisi_sensor = digitalRead(sensor_hujan);
  Serial.print("Raindrop Sensor\n");      
  Serial.print("Digital Value: ");                
  Serial.println(kondisi_sensor);
 
//  if (kondisi_sensor == 0){ //Saat hujan terdeteksi maka nilai digital = 0                 
//  digitalWrite(LEDh, LOW);
//  digitalWrite(LEDm,HIGH);
//  Serial.print("Rain\n");
//  }
//  else{
//  digitalWrite(LEDh,HIGH); //Saat hujan tidak terdeteksi maka nilai digital = 1
//  digitalWrite(LEDm,LOW);
//  Serial.print("Dry\n");
//  }
 delay(1000);

}
