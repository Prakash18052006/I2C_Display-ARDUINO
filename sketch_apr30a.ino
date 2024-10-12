#include<Wire.h>
#include<LiquidCrystal_I2C.h >

LiquidCrystal_I2C lcd(0x3F, 16 , 2);
 void setup(){
  lcd.init();
  Serial.begin(9600);
  lcd.backlight();

 }
 void loop(){
  lcd.setCursor(0, 0);
  lcd.print("Kya kar raha hai");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Free hai kya ");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("phone tho utha le ");
  delay(2000);
  lcd.clear();
 }