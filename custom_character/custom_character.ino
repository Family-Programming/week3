#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 
byte customChar[8] = {//put anything in here but just 0s, and 1s.
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

byte customChar1[8] = {// need to make this note
  0b00111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b
}
void setup() 
{
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, customChar); 
  lcd.setCursor(1, 0); 
  lcd.write((byte)0);
  lcd.setCursor(2,0); 
  lcd.write((byte)0);


}

void loop() {
  // put your main code here, to run repeatedly:

}
