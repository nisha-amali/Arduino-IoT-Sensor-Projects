const int LED_PIN=2;
const int TOUCH_SENSOR_PIN=3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN,OUTPUT);
  pinMode(TOUCH_SENSOR_PIN,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN,LOW);
  int touchState=digitalRead(TOUCH_SENSOR_PIN);
  if(touchState==HIGH)
  {
    Serial.println("The sensor is being touched");
    digitalWrite(LED_PIN,HIGH);
  }
  else
  {
    if(touchState==LOW)
    {
      Serial.println("The sensor is untouched");
    }
  }
  delay(100);
}
