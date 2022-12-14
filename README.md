# Pyducontrol
A python package used to send commands from python to an arduino board.

## What is it?
Pyducontrol is a communication form which sends messages over serial to an arduino board. The messages can be easily read by the arduino either as a string or an integer.
## Included commands and their syntaxes
- **defArduino(**_port, baudrate, timeout_**)**:
  - This line must be included first in your project, outside of any loops. It defines the arduino and calls for serial communication in python.
  - Arguments:
    - port: This is the name of the port the arduino can be reached on e.g.: 'COM3'. '' symbols must be used. You can get the port name from the arduino IDE.
    - baudrate: Baud rate of the communication. Integer. E.g.: 9600
    - timeout: Defines the timeout value of the serial communication. Float. E.g.: .1
- **writeArduino(**_msg_**)**:
  - Sends the *msg* message over the serial to the board encoded as utf-8. Message is automatically ended with a line break (\n) character.
- **ewriteArduino(**_msg_**)**:
  - Sends the *msg* message over the serial to the board encoded as utf-8.
## How to use?
Import the package to your python project. Include the **defArduino** line at the start of your code.
You will need some code on your arduino setting up the serial communication. Other than that, the messages sent with **ewriteArduino** can be simply read as a string or integer by the arduino board. Make sure that the baud rates match.
## Pre built messaging system
If you want an easier approach, use the **writeArduino** function. It will close your message with a line break, which the arduino can be configured to detect. See example or template for details.
## Dependencies
- pyserial
