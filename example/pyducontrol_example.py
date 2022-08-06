# needs pyducontrol_example.ino installed on arduino

import pyducontrol

pyducontrol.defArduino('COM6', 9600, .1) # please set communication port!

while True:
    message = input()
    pyducontrol.writeArduino(message)

# If message sent on console is "ledon", pin 13 on the board becomes HIGH state. If message sent is "ledoff",
# pin 13 on the board becomes LOW state.

# end of example
