# IDD-Fa19-Lab1: Blink!

**By Tomi Kalejaiye (ok93)**

## Part A. Set Up a Breadboard

![Breadboard Setup](https://imgur.com/1KFqRzd.jpg)


## Part B. Manually Blink a LED

**a. What color stripes are on a 100 Ohm resistor?**
     Brown-Black-Brown-Yellow
     
**b. What do you have to do to light your LED?**
     Connect 5V to one end of the switch, and connect the other end of the switch to the long LED pin. 
     Connect the short end of the LED to a 220 Ohm resistor to protect the LED. Connect the other end of the 
     resistor to ground. Press the switch to close the circuit and light the LED.

## Part C. Blink a LED using Arduino
[![Arduino Blinking On Board LED](http://img.youtube.com/vi/j2mCdmYxqCk/0.jpg)](http://www.youtube.com/watch?v=j2mCdmYxqCk)


### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**
     The function digitalWrite(pin, value) is used to send a digital signal of HIGH or LOW to 
     a specified pin. There is a constant called LED_BUILTIN which is the pin for the onboard LED. Therefore we
     need to write digitalWrite(LED_BUILTIN, HIGH) and digitalWrite(LED_BUILTIN, LOW) to blink the LED. However,
     there is not a sufficient delay between these signals to see the LED blink. Therefore, we also need to add a delay.
     the code for this is delay(time) where time is the duration of the delay.
     
**b. What line(s) of code do you need to change to change the rate of blinking?**
     We can change the rate of blinking by changing the time for the delay() function.
     
**c. What circuit element would you want to add to protect the board and external LED?**
     We would add a resistor, to decrease the voltage drop so the external LED doesn't get too much current.
     
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**
     I can no longer perceive the LED blinking at a 15 ms delay. To verify that it is still blinking, you would use an oscilloscope to read the voltages across the LED.  I've created what is essentially a simplified oscilloscope on Arduino to do this. You need to use Serial.begin(speed) in your setup. Speed here specifies the data transfer rate, which will need to be high to capture the changing voltages. analogRead() is used to read an analog input, but its values are not in volts, they are simply numbers from 0 to 1024. We need to multiply the returned number by 5 and divide by 1024. Since sending data via the serial connection is relatively slow compared to reading the voltages and storing them in memory, in my sketch I put 100 voltage values in an array, and then send them over the serial port. Finally, looking at the "Serial Monitor" on Arduino while the sketch is running, we can see if the voltages across the LED are actually changing.

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**
I altered the code to modify the LED blinking pattern. It now does a long blink and a short blink. The modified code can be found [here](https://github.com/TomiKalejaiye/IDD-Fa18-Lab1/blob/master/blink_test.ino).


### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

[![Blinking LED](http://img.youtube.com/vi/_GrkOeRKUgA/0.jpg)](http://www.youtube.com/watch?v=_GrkOeRKUgA)


## Part D. Manually fade an LED
[![Manually Fading LED](http://img.youtube.com/vi/ntJFSfLj9LU/0.jpg)](https://www.youtube.com/watch?v=ntJFSfLj9LU)

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**
     The LED glows the entire range of the potentiometer but does not noticebaly change brightness throughout the entire            range. This is because the LED brightness does not vary linearly with the circuit resistance. Furthermore, even at            maximum resistance (with the pot set to 10K) there is a 0.4 mA current passing through the LED which is still enough to        light it.

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**
     Remove the potentiometer and recreate the circuit used for a blinking LED. In the code, we have to use the analogWrite()
     function rather than the digitalWrite() function. We then have to gradually increase the duty cycle value for                  analogWrite().

**b. What is analogWrite()? How is that different than digitalWrite()?**
     analogWrite() rapidly outputs high and low digital signals at duty cycles between 0 and 255 to mimic and analog voltage        output. This is known as a pulse modulated width or PWM. digitalWrite() simply outputs a high or low signal.

## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside.
   ![Simplified Schematic](https://imgur.com/ua4JmAi.png)
   This is a significantly simplified schematic of what is going on inside the remote control. In reality the microcomputer  has 16 total pins and appears to use a 7x8 grid circuit to accomodate input from 48 buttons. In the schematic a 2x2 grid is used for simplicity.

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**
     My electronic device is an LG TV remote control. There is a 4-bit microcomputer. I think the microcomputer is being used      to send a signal to the IR LED based on which buttons are pressed on the remote.

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**
     There are buttons in the remote which are wired to the microcontroller. The buttons simply make contact with the wires       underneath when you press them, thus completing a circuit, sending a signal to the microcomputer.

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**
     The device is powered by two 1.5V AAA batteries. 

**d. Is information stored in your device? Where? How?**
     There are 16 bytes of memory on the microcomputer. 

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

   Looking at my schematic, I decided to implant my LED at the power source, to use the two 1.5V batteries to light it. I put my LED on a breadboard and used two wires to manually connect each end to the remote control circuit board right where the VCC and GND signals respecively are.

### 3. Build your light!

[![FrankenLight!](http://img.youtube.com/vi/cQ9g7yAQ0LE/0.jpg)](https://www.youtube.com/watch?v=cQ9g7yAQ0LE)
