char input[12];
#include <LiquidCrystal.h>
const int rs = 6, en = 7,d4 = 12, d5 = 11, d6 = 10, d7 = 9;
LiquidCrystal lcd(rs, en,d4, d5, d6, d7);
int count = 0;
void setup()

{

Serial.begin(9600); // START SERIAL AT BAUD RATE OF 9600 BITS/SEC
lcd.begin(16, 2);

}
void loop()
{

if(Serial.available()) // CHECK FOR AVAILABILITY OF SERIAL DATA

{ 
  count = 0; // Reset the counter to zero


while(Serial.available() && count < 12)
{

input[count] = Serial.read(); // Read 1 Byte of data and store it in the input[] variable

count++; // increment counter delay(5); 
}

// PRINTING RFID TAG

for(int i=0;i<12;i++)
{

Serial.print(input[i]);
 lcd.print(input[i] );
Serial.println();
}

}
}
