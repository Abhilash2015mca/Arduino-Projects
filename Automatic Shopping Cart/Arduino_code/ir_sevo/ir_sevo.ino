#include <Servo.h> 
// Declare the Servo pin 

int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
 pinMode(9, INPUT); 
 pinMode(10, INPUT);   
 pinMode(11, INPUT); 
 pinMode(12, INPUT);
 
}
void loop(){ 
   // Make servo go to 0 degrees 
     int x ;
     int A = digitalRead(9);
int B = digitalRead(10);
int C = digitalRead(11);
int D = digitalRead(12); 
  for(x=0;x<=180;x++)
  {
    Servo1.write(x); 
   delay(50); 
   if(A == 0 && B==0 && C==0 && D==1)
   {
     Serial.println(x);
     x = 181;
   }
   }
   // Make servo go to 90 degrees 
 
}
