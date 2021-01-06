//HRTE PROJECTS XD

#include <AFMotor.h>

AF_DCMotor motor2(2);

void setup() {



}
void loop() {
  int potValue = analogRead(A0);
 
  int i  = map(potValue,0,1023,0,200);  //or int i  = map(potValue,0,1023,0,255);

  motor.setSpeed(i);

  motor.run(FORWARD);
  
 

}
