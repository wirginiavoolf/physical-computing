//source: https://ictronic.wordpress.com/2016/07/02/interfacing-16x2-lcd-with-arduino-without-potentiometer/
//next draft: lines "advance" in poem based on your position to the sensor

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(0, 1, 8, 9, 10, 11); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

const int sensorPin = A0;

void setup()

{

// set up the LCD’s number of columns and rows:
//  Serial.begin(9600);
lcd.begin(16, 2);

}

 

void loop()

{

// set the cursor to column 0, line 1
  int sensorVal = analogRead(sensorPin);
//  Serial.print("Sensor Value: ");
//  Serial.print(sensorVal);
//  Serial.println();

  //if(sensorVal <= 30) {

lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("name");//print name
lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1
 // } else {

lcd.print("2"); //print name
delay(750);//delay of 0.75sec

lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1
 // }


}
