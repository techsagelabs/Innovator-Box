Step-by-Step Instructions:
1. Connect the LEDs to the Breadboard:
Place the 3 LEDs on the breadboard. Make sure each LED has a longer leg (anode) and a shorter leg (cathode). The longer leg (anode) is the positive leg and should be connected to the ESP32 pin.
2. Wire the Red LED:
Insert the Red LED on the breadboard. The anode (longer leg) connects to pin 16 on the ESP32.
The cathode (shorter leg) connects to the ground rail on the breadboard.
3. Wire the Yellow LED:
Insert the Yellow LED on the breadboard. The anode (longer leg) connects to pin 17 on the ESP32.
The cathode (shorter leg) connects to the ground rail on the breadboard.
4. Wire the Green LED:
Insert the Green LED on the breadboard. The anode (longer leg) connects to pin 18 on the ESP32.
The cathode (shorter leg) connects to the ground rail on the breadboard.
5. Add Resistors (Optional):
To protect the LEDs, place a 220Ω or 330Ω resistor in series with the anode of each LED (between the LED anode and the ESP32 pin). This step is optional but recommended to limit the current to safe levels.
6. Connect the ESP32 to the Breadboard:
Use 3 jumper wires to connect the pins on the ESP32 to the breadboard:
Pin 16 → Red LED anode
Pin 17 → Yellow LED anode
Pin 18 → Green LED anode
Connect the GND (Ground) pin of the ESP32 to the ground rail of the breadboard.
7. Power the Circuit:
Connect the ESP32 NodeMCU to your computer using the USB cable to power the board and upload the code.
8. Upload the Code:
Open the Arduino IDE (or another compatible IDE for the ESP32).
Paste the provided traffic light control code into the IDE.
Select the correct board (ESP32) and port in the IDE.
Click Upload to upload the code to the ESP32 board.
9. Observe the Traffic Light Simulation:
Once the code is uploaded successfully, the LEDs will start following the traffic light sequence:
Red LED will turn on for 5 seconds.
Yellow LED will turn on for 2 seconds.
Green LED will turn on for 5 seconds.
The sequence will repeat.
