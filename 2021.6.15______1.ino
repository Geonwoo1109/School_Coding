void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); //HIGH or 1
  delay(1000);
  digitalWrite(13, LOW); // LOW or 0
  delay(1000);
  
}
