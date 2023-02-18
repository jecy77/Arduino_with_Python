#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20,16,2); // lcd(접근주소, lcd 열의 수, lcd 행의 수)
void setup()
{
   lcd.init();
   lcd.backlight();
   lcd.setCursor(0,0); //0행 0열에 커서 set
   lcd.print("Hello,world!"); // LCD 모니터에 출력
   lcd.setCursor(3,1); //0행 1열에 커서 set
   lcd.print("SWeat!"); // LCD 모니터에 출력
}
void loop()
{
}