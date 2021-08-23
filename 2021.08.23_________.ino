#include <Servo.h>

Servo s1;

void setup() {
  s1.attach(9);
  Serial.begin(9600); //통신속도 설정
}

void loop() {
  
  int vr1, vr;
  
  vr1 = analogRead(A0);
  vr = map(vr1, 0, 1023, 0, 180); //vr1값이 0~1023인데 0~180으로 바꿈

  s1.write(vr);
  
  Serial.print(vr1);
  Serial.print(" ----> ");
  Serial.println(vr);
  
  //delay(100);
}
