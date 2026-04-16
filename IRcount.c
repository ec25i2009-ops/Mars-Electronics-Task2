#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,  16, 2);
const int irpin=2;
int count=0;
void setup()
{
  pinMode(irpin,INPUT);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Object Counter:");
  lcd.setCursor(0,1);
  lcd.print("Count: 0");
  Serial.begin(9600);
}
void loop()
{
  int sensorstate=digitalRead(irpin);
  if(sensorstate == LOW)
  {
    count++;
    lcd.setCursor(0,1);
    lcd.print("Count:");
    lcd.setCursor(7,1);
    lcd.print(count);
    Serial.println("Count:");
    Serial.println(count);
    delay(300);
  }
}
