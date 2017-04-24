#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

const int sensorPin = A1;

void setup()

{

// set up the LCD’s number of columns and rows:
Serial.begin(9600);
lcd.begin(0, 0);

}

 

void loop()

{

// set the cursor to column 0, line 1
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  Serial.println();

if(sensorVal <= 300) {

lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("what i know");//print name
//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1
} else if (sensorVal <= 250) {

lcd.print("is yesterday"); //print name
delay(750);//delay of 0.75sec

//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1
 } else if (sensorVal <= 225) {
  lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("in stuttgart");//print name
//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1
 } else if (sensorVal <= 200) {


lcd.print("there were clouds"); //print name
delay(750);//delay of 0.75sec

//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1  
 } else if (sensorVal <= 175) { 
 lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("you were one");//print name
//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1

} else if (sensorVal <= 150) {
lcd.print("night's distance"); //print name
delay(750);//delay of 0.75sec

//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1  
} else if (sensorVal <= 125) {
 lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("my calendar");//print name
//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1
  
} else if (sensorVal <= 100) {
 lcd.print("each dark hour"); //print name
delay(750);//delay of 0.75sec

//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1  
} else if (sensorVal <= 75) {
 lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("widens an age");//print name
//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1  
} else if (sensorVal <= 50){
  lcd.print("since you"); //print name
delay(750);//delay of 0.75sec

//lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1  
}
}


