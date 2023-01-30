/*  setup reference script
 *  Continue to repeat until RED reset button is pressed.
*/
  #include <PRIZM.h>                // include the PRIZM library in the sketch
  PRIZM prizm;                      // instantiate a PRIZM object “prizm” so we can use its functions

void setup() 
{        
  prizm.PrizmBegin();              // Initialize the PRIZM controller
  Serial.begin(9600);              // initializes the serial print console
  prizm.setMotorInvert(2,1);       // Makes it so that motor 1 and 2 are both in the same direction
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
