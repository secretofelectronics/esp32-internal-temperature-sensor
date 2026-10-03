void setup() {
  Serial.begin(115200);
}

void loop() {
  float temperature = temperatureRead();

  Serial.print("ESP32 Internal Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}