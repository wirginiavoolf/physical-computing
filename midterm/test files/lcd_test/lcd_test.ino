//source: https://ictronic.wordpress.com/2016/07/02/interfacing-16x2-lcd-with-arduino-without-potentiometer/

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(0, 1, 8, 9, 10, 11); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

const int sensorPin = A0;

void setup()

{

// set up the LCD’s number of columns and rows:

lcd.begin(16, 2);

}

 

void loop()

{

// set the cursor to column 0, line 1
  int sensorVal = analogRead(sensorPin);

  if(sensorVal >= 13) {
lcd.print("   make wishes");//print name
  } else {
lcd.setCursor(0, 1); // set the cursor to column 0, line 2

lcd.print("and spit"); //print name
  }
delay(750);//delay of 0.75sec

lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1

}
