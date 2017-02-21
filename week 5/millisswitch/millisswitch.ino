#define led 11



int interval = 1000;

long prevMillis = 0;

boolean ledOnOff = false;

//preMillis will "save" when our interval is exceeded 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
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
