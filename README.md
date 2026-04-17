Approach:

I started by understanding how an Infrared (IR) sensor works.
I learnt that it detects objects based on reflected IR light 
and gives a digital output (HIGH or LOW) depending on whether an object is present.
After understanding this, I focused on how to read the sensor values using `digitalRead()`
in Arduino.Next, I implemented a simple counting logic. Whenever the sensor output becomes
LOW (indicating object detection), I incremented a counter variable. I also added a small
delay to avoid multiple counts for a single object due to noise or continuous detection.
Then, I integrated an I2C LCD to display the count in real time. I initialized the LCD,
set up the display format, and updated the count dynamically whenever a new object was detected.
Additionally, I used the Serial Monitor for debugging and verification of the count values.
Through this process, I was able to combine sensor input, logical processing, and output display
to build a complete object counting system.
