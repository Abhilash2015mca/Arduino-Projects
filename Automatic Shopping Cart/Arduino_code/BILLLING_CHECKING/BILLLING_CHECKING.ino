#include <LiquidCrystal.h>
const int rs = 6, en = 7,d4 = 12, d5 = 11, d6 = 10, d7 = 9;
LiquidCrystal lcd(rs, en,d4, d5, d6, d7);
boolean stringComplete=false;
String ITEM1="PEN";
String ITEM2="MILK";
String ITEM3="BOX";
String ITEM4="PEPSCI";
String inputstring="";
 int count1;
 int count2;
 int count3;
 int count4;
 int unit_price1;
 int unit_price2;
 int unit_price3;
 int unit_price4;
 int item_totalprice1;
 int item_totalprice2;
 int item_totalprice3;
 int item_totalprice4;
int x1=0;
int x2=0;
int x3=0;
int x4=0;
int y1=0;
int y2=0;
int y3=0;
int y4=0;
int i1=0;
int n=0;
int tot=0;

const int pushButton1 = 2; 
const int pushButton2 = 4; 


void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
Serial.begin(9600);
inputstring.reserve(200);
 pinMode(pushButton1, INPUT);
 pinMode(pushButton2, INPUT);
lcd.print("  SMART CART  ");
lcd.setCursor(0, 1);
lcd.print(" INTIALISING....");
       
delay(3000);
lcd.clear();
lcd.print("  WELCOME ");
lcd.setCursor(0, 1);
lcd.print("HAPPY SHOPPING");
 delay(3000);
}

void loop()
{
  if(stringComplete)
      {
        
      if(inputstring.equals("27001707487F"))
         {
          lcd.print("PEN Rs:17");
          lcd.setCursor(0, 1);
          if(x1>0)
            {
             lcd.print("ADD / REMOVE");
            }
         else
            { 
            lcd.print("PRESS TO ADD");
            }
        delay(5000);
        int buttonState1 = digitalRead(pushButton1);
        int buttonState2 = digitalRead(pushButton2);  
        if (buttonState1 == HIGH)
                     {
                     lcd.clear();
                     if(x1>0)
                     {
                      x1--;
                      tot=tot-17;
                     }
                     lcd.print("REMOVED PEN ");
                      lcd.setCursor(0, 1);
                      lcd.print("TOTAL:Rs");
                       lcd.print(tot);
                         delay(3000);
                      lcd.clear();
                       buttonState1 == LOW;
                      } 
  if(buttonState2 == HIGH)
  {
    x1++;
    y1=17;
unit_price1=y1;
count1=x1;
item_totalprice1=y1*x1;

    lcd.clear();
       tot=tot+17;
        lcd.print("ADDED PEN Rs:17");
          lcd.setCursor(0, 1);         
        lcd.print("TOTAL:Rs");
        lcd.print(tot);
         delay(3500);
            lcd.clear();
             buttonState2 == LOW;            
        }
      
        
        }

                          
        if(inputstring.equals("270016726D2E"))
      {
        lcd.print("MILK RS:12");
      
        lcd.setCursor(0, 1);
        if(x2>0)
        {
        lcd.print("ADD / REMOVE");
        }
        else
        { 
        lcd.print("PRESS TO ADD");
        }
        delay(5000);
        int buttonState1 = digitalRead(pushButton1);
         int buttonState2 = digitalRead(pushButton2);  
        if (buttonState1 == HIGH)
        {
           if(x2>0)
           {
            x2--;
            tot=tot-12;
            }
           lcd.clear();
          lcd.print("REMOVED MILK ");
          lcd.setCursor(0, 1);
          lcd.print("TOTAL:Rs");
          lcd.print(tot);
          delay(3000);
            lcd.clear();
            buttonState1 == LOW;
         } 
 if(buttonState2 == HIGH)
 {
  x2++;
    y2=12;
unit_price2=y2;
count2=x2;
item_totalprice2=y2*x2;
    lcd.clear();
       tot=tot+12;
        lcd.print("ADDED MILK");
          lcd.setCursor(0, 1);         
        lcd.print("TOTAL:Rs");
        lcd.print(tot);
         delay(3500);
            lcd.clear();
             buttonState2 == LOW;

        }

        
        }
      if(inputstring.equals("27001707B88F"))
      {
        lcd.print(" BOX RS:100");
       
          lcd.setCursor(0, 1);
     if(x3>0)
        {
        lcd.print("ADD / REMOVE");
        }
        else
        { 
        lcd.print("PRESS TO ADD");
        }
        delay(5000);
        int buttonState1 = digitalRead(pushButton1);
         int buttonState2 = digitalRead(pushButton2);  
        if (buttonState1 == HIGH)
        {

           if(x3>0)
           {
            x3--;
            tot=tot-100;
            }
           lcd.clear();
          lcd.print("REMOVED BOX ");
          lcd.setCursor(0, 1);
          lcd.print("TOTAL:Rs");
          lcd.print(tot);
          delay(3000);
            lcd.clear();
            buttonState1 == LOW;
         } 
          if(buttonState2 == HIGH)
   {
     x3++;
    y3=100;
unit_price3=y3;
count3=x3;
item_totalprice3=y3*x3;
    lcd.clear();
       tot=tot+100;
        lcd.print("ADDED BOX");
          lcd.setCursor(0, 1);         
        lcd.print("TOTAL:Rs");
        lcd.print(tot);
         delay(3500);
            lcd.clear();
             buttonState2 == LOW;

        }

       
        }
     if(inputstring.equals("270016859226"))
      {
        lcd.print("PEPSCI RS:35");
      lcd.setCursor(0, 1);
     if(x4>0)
        {
        lcd.print("ADD / REMOVE");
        }
        else
        { 
        lcd.print("PRESS TO ADD");
        }
        delay(5000);
        int buttonState1 = digitalRead(pushButton1);
         int buttonState2 = digitalRead(pushButton2);  
        if (buttonState1 == HIGH)
        {
           if(x4>0)
           {
            x4--;
             tot=tot-35;
            }
           lcd.clear();
          lcd.print("REMOVED PEPSCI");
          lcd.setCursor(0, 1);
          lcd.print("TOTAL:Rs");
          lcd.print(tot);
          delay(3000);
            lcd.clear();
            buttonState1 == LOW;
         } 
  if(buttonState2 == HIGH)
  {
     x4++;
    y4=35;
unit_price4=y4;
count4=x4;
item_totalprice4=y4*x4;
    lcd.clear();
       tot=tot+17;
        lcd.print("ADDED PEPSCI");
          lcd.setCursor(0, 1);         
        lcd.print("TOTAL:Rs");
        lcd.print(tot);
         delay(3500);
            lcd.clear();
             buttonState2 == LOW;

        }

 
     
        }
            lcd.print("TOTAL:Rs");
        lcd.print(tot);  
    lcd.setCursor(0, 1);         
        lcd.print("SCAN NEXT ITEM  ");
          delay(2000);
            lcd.clear();
       
      }
      int buttonState1 = digitalRead(pushButton1);
      int buttonState2 = digitalRead(pushButton2);
      if(buttonState2 == HIGH&& buttonState1 == HIGH)
       {
        printing();
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


    void printing()
    {
      lcd.print("FINISHED SHOPPING");
       
   lcd.setCursor(0, 1);         
        lcd.print("   YES/NO    ");
          delay(5000);
            lcd.clear();
             int buttonState1 = digitalRead(pushButton1);
         int buttonState2 = digitalRead(pushButton2); 
             if (buttonState1 == HIGH){}
              if (buttonState2 == HIGH)
              {
                 if(x1>0)
                 {
                     i1++;
            Serial.println(i1);
             Serial.println(ITEM1);
             Serial.print("Quantity=");
              Serial.println(count1);
               Serial.print("Unit Price=Rs");
                Serial.println(unit_price1);
               Serial.print("Item Total Price=Rs");
                Serial.println(item_totalprice1);

                 }
                  if(x2>0)
                 {
                     i1++;
            Serial.println(i1);
             Serial.println(ITEM2);
             Serial.print("Quantity=");
              Serial.println(count2);
               Serial.print("Unit Price=Rs");
                Serial.println(unit_price2);
               Serial.print("Item Total Price=Rs");
                Serial.println(item_totalprice2);
                
                 }
                  if(x3>0)
                 {
                     i1++;
            Serial.println(i1);
             Serial.println(ITEM3);
             Serial.print("Quantity=");
              Serial.println(count3);
               Serial.print("Unit Price=Rs");
                Serial.println(unit_price3);
               Serial.print("Item Total Price=Rs");
                Serial.println(item_totalprice3);
                 
                 }
                  if(x4>0)
                 {
                     i1++;
            Serial.println(i1);
             Serial.println(ITEM4);
             Serial.print("Quantity=");
              Serial.println(count4);
               Serial.print("Unit Price=Rs");
                Serial.println(unit_price4);
               Serial.print("Item Total Price=Rs");
                Serial.println(item_totalprice4);
                
                 }
                 Serial.print("GRAND TOTAL=Rs");
                 Serial.println(tot);

                 
                }
      
      }
