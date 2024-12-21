Step-by-Step Instructions:
1.  Prepare the Breadboard and NodeMCU:

    Place the breadboard on your work surface.
    Put the NodeMCU on the edge of the breadboard so it can be easily connected to jumper wires.
    Insert the LED into the Breadboard:

2.  The LED has two legs: one longer leg (anode) and one shorter leg (cathode).
    Insert the longer leg (anode) into a row on the breadboard.
    Insert the shorter leg (cathode) into the (-) negative rail of the breadboard. NOTE that the negative rail is divided into two halves, i.e. upper half and lower half are disconnected.

3.  Connect the NodeMCU to the Breadboard:
    Use a jumper wire to connect the GND pin (ground) on the NodeMCU to the negative (-) rail on second half of the board and connect the shorter leg in the same half of the (-) rail.
    Take another jumper wire and connect the GPIO16 (refer the Pinout or circuit diagram given) on the NodeMCU to the row where the longer leg (anode) of the LED is inserted.
    
4.  Upload the Code:
    Open Arduino IDE on your computer.
    Write the code given or copy-paste it into the Arduino IDE.

5.  Select NodeMCU as the board in the Tools > Board menu in the Arduino IDE.

    Select the correct port under Tools > Port.
    Chose NODEMCU-32S (or a different board if you're using a different Board)

6.  Click the Upload button to upload the code to the NodeMCU. (Connecting the first time, you might need to press RST button of the board)

7.  Power the NodeMCU:
    Connect the NodeMCU to your computer using the USB cable. It will power up and start running the code.
8.  Observe the LED Behavior:

    The LED should blink on and off every second, turning on for 1 second, then turning off for 1 second, as programmed in the code.
