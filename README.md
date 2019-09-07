# IDD-Fa19-Lab1: Blink!

**A lab report by John Q. Student**

**Fork** this repository to get a template for Lab 1 for *Developing and Designing Interactive Devices* at Cornell Tech, Fall 2018. You should modify this `README.md` file to delete this paragraph and update below. As the lab asks:

> Include your responses to the bold questions on your own fork of the lab activities. Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as `README.md` pages on your GitHub, and post a link to that on your main class hub page.

We've copied the questions from the lab here. Answer them below!

## Part A. Set Up a Breadboard

[insert a photo of your breadboard setup here]


## Part B. Manually Blink a LED

**a. What color stripes are on a 100 Ohm resistor?**
     Brown-Black-Brown-Yellow
**b. What do you have to do to light your LED?**
     Connect 5V to one end of the switch, and connect the other end of the switch to the long LED pin. 
     Connect the short end of the LED to a 220 Ohm resistor to protect the LED. Connect the other end of the 
     resistor to ground. Press the switch to close the circuit and light the LED.

## Part C. Blink a LED using Arduino

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

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**


### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

[link to your video here; feel free to upload to youtube and just paste in a link here]


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**


## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**

**b. What is analogWrite()? How is that different than digitalWrite()?**


## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**
