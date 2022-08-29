int ldr=34;//Set A0(Analog Input) for LDR.
int value=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value=analogRead(ldr);//Reads the Value of LDR(light).
  Serial.print("LDR value is :");//Prints the value of LDR to Serial Monitor.
  Serial.println(value);
  delay(1000);
  
}
