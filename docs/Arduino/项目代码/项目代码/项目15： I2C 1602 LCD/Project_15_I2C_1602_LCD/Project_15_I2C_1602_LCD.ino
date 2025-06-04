//*********************************************************************************
/*
Keyes 2021入门学习套件
Project 15
I2C 1602 LCD
http//www.keyestudio.com
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 
void setup()
{
lcd.init(); // initialize the lcd
lcd.init();
lcd.backlight();
}
void loop()
{
lcd.setCursor(3,0);
lcd.print("Hello, world!");
lcd.setCursor(2,1);
lcd.print("keyestudio!");
}
//*********************************************************************************
