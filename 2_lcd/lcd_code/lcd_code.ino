#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,8,9,10,11);
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  delay(10);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("hellow");
  delay(50);
    lcd.setCursor(4,1);
  lcd.print("How are you");
  delay(50);
}
