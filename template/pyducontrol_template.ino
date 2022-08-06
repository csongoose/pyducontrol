//template for the pre-built messaging system


String msg; //define the message as a string

void setup() {
  Serial.begin(9600); // this is the line you *need* to start the serial communication
  delay(10);
}

void loop() {
  if (Serial.available()>0) {
    msg = Serial.readStringUntil('\n'); // read the incoming message until specified character and store it in variable msg
  //the latest message sent by writeArduino is stored in the msg variable. You can put your if statements or sorting functions here.
}
}
