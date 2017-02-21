#define led 11

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potRead = analogRead(A0);
  //putRead = potRead/4;
  Serial.println(potRead);
  //analogWrite(led, potRead);

  //debugs to create a more consistent range:
  if(potRead < 5) {
    potRead = 0;
  }

  if (potRead > 80) {
    potRead = 80;
  }
  
  int mapping = map(potRead, 0, 40, 0, 255);

  //analogWrite(led, mapping);

}
