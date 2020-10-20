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

Please write a program that produces the following user interface.
1) Inform the user of what is happening
 * Current sensor values
 * pump running (how long until pump is done running?)
2) Have a key that enters a configuration system
3) Allow user configuration
 * User can select 1 of 4 pump channels
 * User can select the threshold of dryness to run the pump
 * User can select how long to run a pump when that level of dryness is reached.
4) Save the user configuration
5) Settings summary showing the current settings
 * If all settings cannot be shown on one screen then use a button to step through each pump setting.
6) System Pause
 * If you want to move pipes and things, you will want to be able to pause the system.
 
Before you write this program please draw a flow chart showing how the interface will work.  Look up User Flow Diagram example to see lots of ideas.

What is due:
Friday I expect to see a user flow diagram with the following features:
 * I would like to see example "screens" so I know what will be displayed in each "mode".
   - You can use your displays to produce the screens and just take pictures for the document.
 * A program running that demonstrates at least the user status screen with the 4 sensors and 4 pump states.

Tell me on friday what the next screen will be.
