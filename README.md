# week3

This next assignment is in three parts.  The parts will be:
1) Keypad
2) LCD display
3) User Interface for the irrigation system.

## Part 1
To accomplish part 1 you must prepare a demonstration and a report.  The demonstration will show that you can read keypresses from the keypad.  The report will demonstrate that you know how it works.  There are many tutorials on the internet teaching the keypad.  Perhaps this one will help https://arduinogetstarted.com/tutorials/arduino-keypad.

There are a number of libraries that you can use to see the keypad working.  However, I want to see code written by you that has the following features:
1) A function that returns a bool, true if a key is pressed and false if a key is not pressed.
2) A function that will wait for a key to be pressed and return the "letter" of the key pressed.
3) A demonstration program that displays key presses on the serial port.

A sample program has been started in the week3 repo.  It may be simplest to start with that program.

## Part 2
The LCD is a basic I2C LCD with 16 character width and 2 line height.  This is suitable for many types of displays.
I expect that you will use a library to control this LCD.  I was able to control Deborah's LCD with this library https://www.mathertel.de/Arduino/LiquidCrystal_PCF8574.aspx.  This library is not installed by default so you will need to add it to the libraries by using the manage libraries menu.

Please write a program that demonstrates the following features:
1) displaying text on both lines
2) Drawing text at any spot you specify.  example. column 3, row 1
3) Draw a custom letter (createChar)
4) Display the moisture sensor data as a number and the following graphs.
  * Bar Gauge (A horizontal thermometer bar showing the last data point)
  * Time Series Bar (A row of vertical bars, X being time, and Y being a vertical bar for each data point
5) Irrigation Status Screen
  * Do something cool that shows the status of a the irrigation system.  Use fake data for now.

The graphing of the moisture data.  This will require moving the cursor around and drawing custom characters.You only get a few custom characters so you will need to make a plan on how to best use these.

## Part 3
The last part will be to use part 1 and part 2 to create a menu suitable for controlling the irrigation system.  A few points to consider.
1) The irrigation system uses 8 pins to control the pumps and sensors.  This display & keypad will may require an additional 10 pins.
2) the LCD needs to be attached to the SDA/SCL pins specifically.
It is not required to modify the irrigation program to have this keypad & display, but it may be helpful.
Make sure you do some user interface trials to ensure that the system is easy to understand.
