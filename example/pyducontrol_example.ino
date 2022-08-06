//example file for pyducontrol
String msg;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); // this is the line you *need* to start the serial communication
  delay(10);
}

void loop() {
  if (Serial.available()>0) {
    msg = Serial.readStringUntil('\n'); // read the incoming message until specified character and store it in variable msg
  if (msg == "ledon") {                 // use the message to change state of pin 13 accordingly
    digitalWrite (13, HIGH);
  } else if (msg == "ledoff") {
    digitalWrite (13, LOW);
  }
}
}
