# PUSH-BUTTON-COUNTER

COMPANY : CODTECH IT SOLUTIONS PVT.LTD
NAME : GURANA REVATHI
INTERN ID : CT06DL1398
DOMAIN : EMBEDDED SYSTEMS
DURATION : 6 WEEKS
MENTOR : NEELA SANTOSH 

DESCRIPTION : PUCH BUTTON COUNTER

Introduction:
An Arduino push button counter is a circuit and code that utilizes a push button to increment a counter value,
often displayed on a serial monitor or an LCD screen. When the button is pressed, the counter increases by one, 
typically on the rising edge of the button press (transition from LOW to HIGH). 

1.Circuit:
A push button is connected to a digital pin on the Arduino board. 
A resistor (often 10kΩ) is used to pull the pin either HIGH or LOW when the button is not pressed (depending on the wiring configuration,
either INPUT_PULLUP or a separate resistor). 
An LED and a resistor can be added to provide visual feedback when the button is pressed. 

2. Code:
The Arduino code reads the state of the digital pin connected to the button. 
State Change Detection (Edge Detection): The code detects the transition from LOW to HIGH (rising edge) when the button is pressed. 
A counter variable is incremented each time the rising edge is detected. 
The counter value is then displayed, either on the serial monitor using Serial.println() or on an LCD screen. 
Debouncing is often implemented to prevent multiple counts from a single button press due to mechanical switch bounce.

4. Practical Uses:
Counting events, such as items passing on a conveyor belt or user inputs. 
Controlling other components based on the number of button presses, like adjusting LED brightness or motor speed. 
Creating simple interactive projects like a click counter or a game input. 
This video demonstrates how to build an Arduino push button counter and explains the code:
