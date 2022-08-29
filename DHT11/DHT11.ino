// Wiring sensor

// ESP32 -> DHT11
// 3V3 -> VCC
// GND -> GND
// RX2 -> SIG
// ... -> NC (tidak disambungkan)

#include "DHT.h"
#define DHT11PIN 16

DHT dht(DHT11PIN, DHT11);
void setup()
{
  
  Serial.begin(115200);
/* Start the DHT11 Sensor */
  dht.begin();
}

void loop()
{
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("ºC ");
  Serial.print("Humidity: ");
  Serial.println(humi);
  delay(1000);
}
