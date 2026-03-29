int LED_PIN=6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogvalue=analogRead(A0);
  int brightness=map(analogvalue,0,1023,0,255);
  analogWrite(LED_PIN,brightness);
  Serial.print("Analog: ");
  Serial.print(analogvalue);
  Serial.print(" , Brightness: ");
  Serial.println(brightness);
  delay(100);
}
