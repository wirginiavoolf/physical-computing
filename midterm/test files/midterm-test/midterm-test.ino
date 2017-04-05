#include <LiquidCrystal.h>

const int sensorPin = A0;
const float baselineDist = 1;

LiquidCrystal lcd(0, 1, 8, 9, 10, 11); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);

}

void loop() {
  int sensorVal = analogRead(sensorPin);
//  Serial.print("Sensor Value: ");
//  Serial.print(sensorVal);
//  Serial.println();

lcd.print(sensorVal);//print name
lcd.scrollDisplayLeft();

lcd.setCursor(0, 0);

  if (sensorVal >= 13) {
Serial.print("missing");
Serial.print(sensorVal);
Serial.println();

//lcd.print(sensorVal);//print name

//lcd.setCursor(0, 1); // set the cursor to column 0, line 2
//
//lcd.print("2"); //print name

//lcd.scrollDisplayLeft();
//
//lcd.setCursor(0, 0);

    
} else {
Serial.print("gone");
Serial.println();

//lcd.print(sensorVal);//print name
//
//lcd.setCursor(0, 1); // set the cursor to column 0, line 2

//lcd.print("4");
//
//lcd.scrollDisplayLeft();
//
//lcd.setCursor(0, 0);//print name
lcd.scrollDisplayLeft();
  }

}
