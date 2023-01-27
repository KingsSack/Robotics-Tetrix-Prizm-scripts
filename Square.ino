// 10/12 Go!

#include <PRIZM.h>

PRIZM prism;

void setup() 
{
  // put your setup code here, to run once:

  prism.PrizmBegin();

  prism.setMotorInvert(1,1);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  prism.setRedLED(HIGH);
  delay(1000);
  prism.setRedLED(LOW);
  delay(1000);

  prism.setMotorPowers(50,50);
  delay(3000);

  // Vehicle to move in square with 0 traction
  //prism.setMotorPowers(125,125);
  delay (1000);
  prism.setMotorPowers(50,-50);
  delay(600);
  //prism.setMotorPowers(125,125);
  
  prism.setMotorPowers(50,50);
  delay(3000);
  //prism.setMotorPowers(125,125);
  delay (1000);
  prism.setMotorPowers(50,-50);
  delay(600);
  //prism.setMotorPowers(125,125);
  prism.setMotorPowers(50,50);
  delay(3000);
  prism.setMotorPowers(125,125);
  delay (1000);
  prism.setMotorPowers(50,-50);
  delay(600);
  //prism.setMotorPowers(125,125);
  prism.setMotorPowers(50,50);
  delay(3000);
  //prism.setMotorPowers(125,125);
  delay (1000);
  prism.setMotorPowers(50,-50);
  delay(600);
  //prism.setMotorPowers(125,125);
  prism.setMotorPowers(50,50);
  delay(3000);
  //prism.setMotorPowers(125,125);
  delay (1000);
  prism.setMotorPowers(50,-50);
  delay(600);
  //prism.setMotorPowers(125,125);
  prism.PrizmEnd();

}
