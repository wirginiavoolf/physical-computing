const int sensorPin = A0;
const float baselineDist = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  

}

void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  Serial.println();

  if (sensorVal >= 13) {
  Serial.print("missing");
  Serial.println();
    
  } else {
  Serial.print("gone");
  Serial.println();
  }
  
  Serial.println();
  delay(2500);

}
