#define enA 5
#define enB 6
#define in1 2
#define in2 3
#define in3 4
#define in4 7

const int trigPin = 9; 
const int echoPin = 8;
float duration, distance;
void setup() 
{
 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Serial.begin(9600);
}
void loop() {
digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH); 
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);
 duration =pulseIn(echoPin,HIGH);
 distance = (duration*.0343)/2;
  Serial.print("Distance: "); 
 Serial.println(distance); 

 if(distance>20)
 {
   digitalWrite(enA, HIGH);
   digitalWrite(enB, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
 }
 else
 {
 digitalWrite(enA, LOW);
   digitalWrite(enB, LOW);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW); 
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  
 }
}
