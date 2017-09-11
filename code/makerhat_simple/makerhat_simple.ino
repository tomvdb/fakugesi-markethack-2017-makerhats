#include <Servo.h>

Servo servoLeft;
Servo servoRight;

int amount = 10;
int top = 160;

void setup() {                
  servoLeft.attach(9);
  servoRight.attach(10);

  servoLeft.write(0);
  servoRight.write(top);
}

void loop() {

  for ( int d = 0; d  < 3; d++ )
  {
    for ( int c = 90; c < 160; c++ )
    {
      servoLeft.write(c);
      servoRight.write(180 - c);
      delay(10);
    }
  
    delay(50);
  
    for ( int c = 160; c > 90; c-- )
    {
      servoLeft.write(c);
      servoRight.write(180-c);
      delay(10);
    }
  }
  
  delay(5000);
 
}
