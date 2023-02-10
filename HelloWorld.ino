// 10/12 Go!

#include <PRIZM.h>

PRIZM prism;

void setup() 
{
  // put your setup code here, to run once
  prism.PrizmBegin();

  prism.setMotorInvert(1,1);
}

void loop() 
{
  // put your main code here, to run repeatedly
  prism.setRedLED(HIGH);
  delay(1000);
  prism.setRedLED(LOW);
  delay(1000);

  /* Drive
  prism.setMotorPowers(50,50);
  delay(3000);
  */
}
  
