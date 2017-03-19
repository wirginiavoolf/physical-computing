#include <LiquidCrystal.h>

const int sensorPin = A0;
const float baselineDist = 1;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  //  Serial.begin(9600);
  lcd.begin(16, 2);

  

}

void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  Serial.println();

  if (sensorVal >= 13) {
//  Serial.print("missing");
//  Serial.println();
  lcd.setCursor(0,0);  //column,row
  lcd.print("Make wishes on fallen eyelashes and spit at the sight of black cats");
  lcd.scrollDisplayLeft(); //pin 12
    
  } else {
//  Serial.print("gone");
//  Serial.println();
  lcd.print("Make wishes     and spit");
  lcd.scrollDisplayLeft();
  }
  
//  Serial.println();
//  delay(2500);

}
