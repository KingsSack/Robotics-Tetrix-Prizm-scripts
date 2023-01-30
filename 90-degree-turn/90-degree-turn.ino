/*  Spin DC motors in oposite directions to turn 90 degrees for 1 second.
 *  After stopping, wait for 2 seconds, spin in opposite direction.
 *  Continue to repeat until RED reset button is pressed.
*/

  #include <PRIZM.h>    // include the PRIZM library in the sketch
  PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions
  int x = 25;           // initialize variable at 25

void setup() {        

  prizm.PrizmBegin();   // Initialize the PRIZM controller
  Serial.begin(9600);   // initializes the serial print console

}

void loop() {     // repeat in a loop

  prizm.setMotorPower(1,x);     // spin Motor 1 CW at 25% power
  prizm.setMotorPower(2,x);     // spin Motor 2 CW at 25% power
  delay(1000);                  // wait while the motor runs for 1 seconds
  prizm.setMotorPower(1,0);     // stop motor (coast to stop)
  prizm.setMotorPower(2,0);     // stop motor (coast to stop)
  delay(2000);                  // After stopping, wait here for 2 seconds
  prizm.setMotorPower(1,-x);    // spin Motor 1 CCW at 25% power
  prizm.setMotorPower(2,-x);    // spin Motor 2 CCW at 25% power
  delay(1000);                  // wait while the motor runs for 1 seconds
  prizm.setMotorPower(1,0);     // stop motor (coast to stop)
  prizm.setMotorPower(2,0);     // stop motor (coast to stop)
  delay(2000);                  // After stopping, wait here for 2 seconds, then repeat
  Serial.println(x);            // Serial print the number x was at
  //x=x+1;
 
  
}
