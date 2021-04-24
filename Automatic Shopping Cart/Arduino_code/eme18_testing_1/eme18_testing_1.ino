#include <LiquidCrystal.h>
const int rs = 6, en = 7,d4 = 12, d5 = 11, d6 = 10, d7 = 9;
LiquidCrystal lcd(rs, en,d4, d5, d6, d7);
boolean stringComplete=false;
String inputstring="";
String item1="27001707487F";
String item2="270016726D2E";
String item3="27001707B88F";
String item4="270016859226";
int n=0;
int tot=0;
int cost;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
Serial.begin(9600);
inputstring.reserve(200);

}


void loop()
{
  if(stringComplete)
      {
        
       if(inputstring.equals("27001707487F"))
      {
        lcd.print("colgate:17");
      
        tot=tot+17;
                lcd.setCursor(0, 1);
        lcd.print("total:");
        lcd.print(tot);
         delay(2000);
            lcd.clear();
        
        }

                          
        if(inputstring.equals("270016726D2E"))
      {
        lcd.print("AABATTERYRS:12");
      
        tot=tot+12;
                lcd.setCursor(0, 1);
        lcd.print("total:");
        lcd.print(tot);
         delay(2000);
            lcd.clear();
        
        }
      if(inputstring.equals("27001707B88F"))
      {
        lcd.print(" BOX RS:100");
        
        tot=tot+100;
               lcd.setCursor(0, 1);
        lcd.print("total:");  
          lcd.print(tot);  
 delay(2000);
            lcd.clear();
         
        }
     if(inputstring.equals("270016859226"))
      {
        lcd.print("PEPSCI RS:35");
     
        tot=tot+35;
                lcd.setCursor(0, 1);
        lcd.print("total:");
        lcd.print(tot);
         delay(2000);
            lcd.clear();
         
        }
            lcd.print("total:");
        lcd.print(tot);  
  
          delay(2000);
            lcd.clear();
       
      }
      stringComplete=true;
       inputstring="";
      
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
