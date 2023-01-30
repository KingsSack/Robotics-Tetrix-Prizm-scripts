    
  #include <PRIZM.h>    // include the PRIZM library in the sketch
  PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions

void setup() {        

  prizm.PrizmBegin();              // Initialize the PRIZM controller
  Serial.begin(9600);              // initializes the serial print console
  prizm.setMotorInvert(2,1);       // Makes it so that motor 1 and 2 are oth in the same direction
}


void loop() {
  
  prizm.setMotorPower(1,95);      // spin Motor 1 CW at 95% power
  prizm.setMotorPower(2,100);     // spin Motor 2 CW at 100% power
  delay(1750);                    // wait while the motor runs for 1 seconds
  prizm.setMotorSpeed(1,0);       // stop motor (coast to stop)
  prizm.setMotorSpeed(2,0);       // stop motor (coast to stop)
  delay(2000);                    // After stopping, wait here for 2 seconds
  prizm.setMotorPower(1,-95);     // spin Motor 1 CW at -95% power
  prizm.setMotorPower(2,-100);    // spin Motor 2 CW at -100% power
  delay(1750);                    // wait while the motor runs for 1 seconds
  prizm.setMotorSpeed(1,0);       // stop motor (coast to stop)
  prizm.setMotorSpeed(2,0);       // stop motor (coast to stop)
  delay(2000);                    // After stopping, wait here for 2 seconds
}

// Well commented! -- MC
