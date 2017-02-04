//VIDEO: https://goo.gl/photos/Jc7ifzqK4Z7scvCV9

void setup(){
//put your setup code here to run once
  pinMode(13,OUTPUT);
  //number indicates the pin
}

void loop(){
//runs infinitely
  digitalWrite(13,HIGH);
  //high means turn on
  delay(250);
  //inside delay, add time in miliseconds
  //delays STOP microcontroller, so eventually we will not use them
  digitalWrite(13,LOW);
  delay(1000);

}

//select Arduino/Genuino Uno
//select Port (Port 3?)
//click check mark to compile program
//click right arrow to upload program
//while uploading, TX & RX lights will go "crazy"

