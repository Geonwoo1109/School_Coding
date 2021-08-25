#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(13, OUTPUT);
}

void loop() {
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  //온습도 측정값
  if (isnan(t) || isnan(h)) {
    Serial.print("Failed to read from DHT");
  } else {
    Serial.print("Temp = ");
    Serial.print(t);
    Serial.print(" *C  |  Humidity = ");
    Serial.print(h);
    Serial.println("%");
  }

  //온도 판단
  if (t > 26.0) digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);

  delay(500);
}
