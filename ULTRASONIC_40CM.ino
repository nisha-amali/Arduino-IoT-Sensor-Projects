const int TRIG_PIN=9;
const int ECHO_PIN=10;
const int LED_PIN=3;
long duration;
int distance;
void setup()
{
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600); 
}
void loop()
{
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    if (distance <= 40)
    {
        digitalWrite(LED_PIN, HIGH); 
    }
    else
    {
        digitalWrite(LED_PIN, LOW);  
    }
    delay(500);
}