#include <Servo.h>            
 
Servo servo_test;        
                
int angle = 0;    
 
void setup() 
{ 
  servo_test.attach(3);     
} 
  
void loop() 
{ 
  for(angle = 0; angle < 180; angle += 1)     
  {                                  
    servo_test.write(angle);                
    delay(50);                       
  } 
 
  delay(10);
  
  for(angle = 180; angle>=1; angle-=5)     
  {                                
    servo_test.write(angle);             
    delay(50);                       
  } 

    delay(10);
}
