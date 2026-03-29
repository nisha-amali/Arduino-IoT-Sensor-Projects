const int sensor=A0;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(sensor);
  float mv=(val/1023.0)*5000;
  float cel=mv/10;
  Serial.print("TEMPERATURE= ");
  Serial.print(cel);
  Serial.print("+C");
  Serial.println();
  delay(1000);
}
