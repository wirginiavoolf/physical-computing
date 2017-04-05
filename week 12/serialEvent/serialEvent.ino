/*
  Serial Event example
 When new serial data arrives, this sketch adds it to a String.
 When a newline is received, the loop prints the string and
 clears it.
 A good test for this is to try it with a GPS receiver
 that sends out NMEA 0183 sentences.
 Created 9 May 2011
 by Tom Igoe
 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/SerialEvent
 */

String inputString = "";         // a string to hold incoming data - "empty string option"
boolean stringComplete = false;  // whether the string is complete - "our string is done, so process the info"

#define ledPinA 13
#define ledPinB 12

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200); //tells Arduino to save 200 bytes of information ~ important to manage memory to prevent "memory overruns," i.e. gibberish 
  pinMode(ledPinA, OUTPUT);
}

void loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
    //Serial.println(inputString);
    ledState(inputString);
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
}

/*
  SerialEvent occurs whenever a new data comes in the
 hardware serial RX.  This routine is run between each
 time loop() runs, so using delay inside loop can delay
 response.  Multiple bytes of data may be available.
 */
void serialEvent() {
  while (Serial.available()) { //a while loop is a loop that runs while a condition is true 
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    //inputString += inChar;


    if (inChar != '\n') {
      inputString += inChar;
    }

    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') { 
// "\n" == enter, or end of line character ~ goes back to the typewriter carriage ~ carriage return puts the carriage in position 0, and rotates the drum to move the character up -- also dates back to morse code
      stringComplete = true;
    }
  }
}

void ledState(String inputData) {
  //Serial.print(inputData);
  if (inputData.equals("high")) {
    digitalWrite(ledPinA, HIGH);
  }

  if (inputData.equals("low")) {
    digitalWrite(ledPinB, LOW);
  }

}

//IMPORTANT: In SerialPort, change drop down to "New Line" 

