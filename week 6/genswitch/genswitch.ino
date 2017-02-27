//look up basicCounterwMillis

#define switchPin 2
#define led 11

int switchRead = 0;

int counter = 0;

boolean pressing = false;

int interval = 1000;

long prevMillis = 0;

boolean ledOnOff = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(led,HIGH);
  switchRead = digitalRead(switchPin);
  //Serial.println(switchRead);

  if(switchRead == 1){
    //counter = counter + 1;
    pressing = true;
    Serial.println("User is pressing the button");
  } 

  if(switchRead == 0 && pressing == true){
    counter = counter + 1;
    pressing = false;
  }
  Serial.println(counter);


  if(counter == 1){
    digitalWrite(led, HIGH);
  }else if(counter == 2){
// mode 2
//    digitalWrite(led, HIGH);
//    delay(500);
//    digitalWrite(led, LOW);
//    delay(500);
//  }else{
//    digitalWrite(led, LOW);
  long currentMillis = millis();
  if (currentMillis - prevMillis > interval){
  prevMillis = currentMillis;
  Serial.println(currentMillis);
  //Set our action:
  if(ledOnOff == false){
    ledOnOff = true;
  }else{
    ledOnOff == false;
  }
 }
 
  if(ledOnOff == false){
    //digitalWrite(led, LOW);
    ledOnOff = true;
     }

  if(ledOnOff == true){
    digitalWrite(led,HIGH);
 
    }
  }
  }
