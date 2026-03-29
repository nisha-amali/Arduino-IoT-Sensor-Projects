#include "DHT.h"
#define DHTPIN 10
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float humi=dht.readHumidity();
  float tempC=dht.readTemperature();
  float tempF=dht.readTemperature(true);
  if(isnan(humi) || isnan(tempC) || isnan(tempF))
  {
    Serial.println("Failed to read from DHT sensor!");
  }
  else
  {
    Serial.print("Humidity: ");
    Serial.print(tempC);
    Serial.print("°C ");
    Serial.print(tempF);
    Serial.println("°F");
  }
}
