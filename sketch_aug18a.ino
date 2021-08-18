#include <Servo.h>
Servo s1;

void setup() {
  // put your setup code here, to run once:
  s1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
/*
  s1.write(0);
  delay(500);

  s1.write(90);
  delay(500);

  s1.write(125);
  delay(500);

  s1.write(160);
  delay(500);
*/
  /*
  int sen;
  sen = analogRead(A1);
  s1.write( map(sen, 0, 1023, 0, 180) );
  */

  for (int i=0; i<180; i = i + 10) {
    s1.write(i);
    delay(300);
  }
}
