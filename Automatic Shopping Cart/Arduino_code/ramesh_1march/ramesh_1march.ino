#include <Servo.h>  //servo library
Servo servo1;      // create servo object to control servo
int servoPin = 3; 
//Ultrasonic sensor variables
int Echo = A4;  
int Trig = A5; 

//motor controller pins
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 10
#define carSpeed 250
#define carSpeed2 250
int x;
int y;
int a=200;
int angle=0; 
 void setup() { 

  Serial.begin(9600);     
  pinMode(Echo, INPUT);    
  pinMode(Trig, OUTPUT);  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  servo1.attach(servoPin);
  analogWrite(ENA, carSpeed);
  analogWrite(ENB, carSpeed);
}

void forward(){ 
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
 
}

void back() {
 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
 
}
void left() {
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
}
  
void right() {
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
}
void stop() {
  //digitalWrite(ENA, LOW);
  //digitalWrite(ENB, LOW);
  // make motor pins zero
   digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}


void loop() { 
   servo1.write(0);
   for(x=0;x<=180;x++)
  {
     servo1.write(x); 
    delay(10);
  
  digitalWrite(Trig, LOW);   
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(20);
  digitalWrite(Trig, LOW);   
  float Fdistance = pulseIn(Echo, HIGH);  
  y = Fdistance / 58;       
   if(y<a)
    {
      a=y;
      angle=x;
      }
  }
  
  Serial.println(a);
  Serial.println(angle);
  if((a<20)&&(angle>60) && (angle<=120))
  {
    Serial.println("b");
    stop();
     delay(1000);
    }
 
   else if((angle>30) && (angle<=60))
   {
    right();
     delay(250);
      Serial.println("r");
   }
   
   else if((angle>60) && (angle<=120))
   {
    Serial.println("f");
    forward();
    servo1.write(90); 
    delay(10);
  while(1)
  {
  digitalWrite(Trig, LOW);   
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(20);
  digitalWrite(Trig, LOW);   
  float Fdistance = pulseIn(Echo, HIGH);  
  y = Fdistance / 58; 
     if(y<=20)
     {
      stop();
      break;
     }
  }
    //}
    //delay(2000);
   }
  else  if ((angle>120) && (angle<=150))
   {
    Serial.println("L");
   left();
     delay(250);

    }
 
    delay(100);
    stop();
    a=200;
    angle=0;
}
