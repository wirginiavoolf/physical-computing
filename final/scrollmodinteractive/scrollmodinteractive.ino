/*

  put poem in an array: increase millis 
  
  LiquidCrystal Library - Autoscroll

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch demonstrates the use of the autoscroll()
 and noAutoscroll() functions to make new text scroll or not.

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified with maxsonar sensor
 3 May 2017
 by Stephanie Sutton

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalAutoscroll

 */

// include the library code:
#include <LiquidCrystal.h>


const int anPin = 1;

//variables needed to store values

long anVolt, inches, cm;

int sum = 0; //Create sum variable so it can be averaged

int avgrange = 60; //Quantity of values to average (sample size)


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {

  
  int sensorVal = analogRead(anPin);
//  Serial.print("Sensor Value: ");
//  Serial.print(sensorVal);
//  Serial.println();

for (int i = 0; i < avgrange ; i++)

  {
    anVolt = analogRead(anPin) / 2;

    sum += anVolt;

    delay(10);
  }

  inches = sum / avgrange;

  cm = inches * 2.54;

  Serial.print(inches);

  Serial.print("in, ");

  Serial.print(cm);

  Serial.print("cm");

  Serial.println();

    //reset sample total

  //sum = 0;

//poem loop
  {
  if(inches >= 100){
  lcd.setCursor(8,1);
  lcd.print("to begin, hold me");

  lcd.setCursor(0, 0);


  lcd.print("FACTS ABOUT DISTANCE");

  lcd.scrollDisplayLeft(); 
  delay(750);
  }
  else if (inches <= 100){
  delay(1500);
//FIRST LINE
  // set the cursor to (0,0):
  lcd.setCursor(0, 0);
  // print from 0 to 9:
 {
    
    lcd.print("what i know");
    delay(1500);
  }
//SECOND LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
{
    lcd.print("is yesterday");
    delay(1500);
}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//THIRD LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("in stuttgart");
    delay(1500);
}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}

//FOURTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("i saw clouds");
    delay(1500);
}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//FIFTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("you were one");
    delay(1500);

}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//SIXTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("night's distance");
    delay(1500);

}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//SEVENTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("my calendar");
    delay(1500);

}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//EIGHTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("each dark hour");
    delay(1500);

}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//NINTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("widens an age");
    delay(1500);

}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(150);  
}
//TENTH LINE
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  
{
    lcd.print("since you");
    delay(1500);

}
//CLEAR
  lcd.noAutoscroll();
  // clear screen for the next loop:
  lcd.clear();
{
  delay(3000);  
}
  return;
  }
}}


