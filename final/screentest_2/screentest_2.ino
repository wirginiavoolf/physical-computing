#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(2, 3, 4, 5, 11, 12); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN


void setup() {
  // put your setup code here, to run once:

lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:

lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("what i know");

}
