#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
 
  
}
void loop(){ 
   // Make servo go to 0 degrees 
     int x ;
  for(x=0;x<=180;x++)
  {
    Servo1.write(x); 
   delay(50); 
   }
   // Make servo go to 90 degrees 
 
}
