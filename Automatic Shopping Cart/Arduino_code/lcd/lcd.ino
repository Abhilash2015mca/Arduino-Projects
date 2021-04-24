#include <LiquidCrystal.h> 
int Contrast=50;
 LiquidCrystal lcd(6,7,12,11,10,9);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  } 
     void loop()
 { 
     lcd.setCursor(0, 0);
     lcd.print("the");

    lcd.setCursor(0, 1);
     lcd.print("ttt");
 }
