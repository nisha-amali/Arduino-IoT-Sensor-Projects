float floatMap(float x,float in_min,float in_max,float out_min,float out_max)
{
  return (x-in_min)*(out_max-out_min)/(in_max-in_min)+out_min;
}
void setup() {
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogvalue=analogRead(A0);
  float voltage=floatMap(analogvalue,0,1023,0,5);
  Serial.print("Analog:");
  Serial.print(analogvalue);
  Serial.print("Voltage:");
  Serial.println(voltage);
  delay(1000);
}
