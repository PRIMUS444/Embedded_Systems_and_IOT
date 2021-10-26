#include<LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,1,0);
int red =10,green=8, yellow=9;
void setup() {
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(yellow,OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("PANKAJ SINGH");
  lcd.setCursor(0,1);
  lcd.print("  190BTCCSE024");
  delay(100);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("RED GREEN YELLOW");
  lcd.setCursor(0,1);
  lcd.print("ON              ");
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  delay(100);
  lcd.setCursor(0,1);
  lcd.print("     ON");
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(100);
  lcd.setCursor(0,1);
  lcd.print("            ON");
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(100);
}
