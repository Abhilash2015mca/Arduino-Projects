#include <LiquidCrystal.h>
const int rs = 6, en = 7,d4 = 12, d5 = 11, d6 = 10, d7 = 9;
LiquidCrystal lcd(rs, en,d4, d5, d6, d7);
boolean stringComplete=false;
String inputstring="";
int n=0;
int tot=0;
int cost;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
Serial.begin(9600);
inputstring.reserve(200);

}

void loop() {
  // put your main code here, to run repeatedly:
if(stringComplete)
{
 Serial.println(inputstring);
  stringComplete= false;
  inputstring ="";
  

}
}
void serialEvent()
{
  while(Serial.available())
  {
    n++;
    char inChar =(char) Serial.read();
    inputstring +=inChar;
    
    if(n>=12)
    {
      n=0;
      stringComplete=true;
    }
  }
}
