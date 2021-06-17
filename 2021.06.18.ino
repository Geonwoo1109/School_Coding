void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  
  digitalWrite(11, 1); //B
  digitalWrite(12, 0); //Y
  digitalWrite(13, 0); //R

  delay(2000); //2s
  
  digitalWrite(11, 0); //B
  digitalWrite(12, 1); //Y
  digitalWrite(13, 0); //R

  delay(500); //0.5s
  
  digitalWrite(11, 0); //B
  digitalWrite(12, 0); //Y
  digitalWrite(13, 1); //R

  delay(2000); //2s
  
}
