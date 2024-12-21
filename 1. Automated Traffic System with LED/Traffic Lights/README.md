Step 1: Set Up the Breadboard
      The breadboard is like a puzzle where you connect all your pieces. Put the Red LED, Yellow LED, and Green LED on the breadboard. The longer leg of each LED is the positive side (anode), and the shorter leg is the negative side (cathode).
  Red LED: The longer leg goes on the positive side (anode), and the shorter leg goes on the negative side (cathode).
  Yellow LED: Same as the red LED.
  Green LED: Same as the red LED.
  
Step 2: Connect the Red LED
      Take a jumper wire and connect the longer leg (anode) of the Red LED to pin 16 on the ESP32 board.
      Connect the shorter leg (cathode) of the Red LED to the ground rail (GND) on the breadboard.
      
Step 3: Connect the Yellow LED
      Take another jumper wire and connect the longer leg (anode) of the Yellow LED to pin 17 on the ESP32.
      Connect the shorter leg (cathode) of the Yellow LED to the ground rail (GND) on the breadboard.
      
Step 4: Connect the Green LED
      Take another jumper wire and connect the longer leg (anode) of the Green LED to pin 18 on the ESP32.
      Connect the shorter leg (cathode) of the Green LED to the ground rail (GND) on the breadboard.
      
Step 5: Add Resistors (Optional)
      You can add a resistor (220Ω or 330Ω) to each longer leg (anode) of the LEDs to make sure the LEDs don’t burn out.
      Put the resistor between the LED anode (long leg) and the ESP32 pin (16, 17, or 18).
      
Step 6: Power the ESP32
      Plug the USB cable into your computer and the ESP32 board.
      This will power the ESP32 and allow you to upload the program to it.
      
Step 7: Upload the Code
      Open the Arduino IDE or any software for programming your ESP32.
      Copy and paste the code that controls the traffic light (like the one you already have).
      In the IDE, select the ESP32 board and the correct port.
      Click on the Upload button. This will send the code to the ESP32.
      
Step 8: Watch the Traffic Light Work
      Once the code is uploaded, you should see the Red LED light up for 5 seconds, then the Yellow LED for 2 seconds, and then the Green LED for 5 seconds.
      The traffic light will keep repeating this cycle over and over!
