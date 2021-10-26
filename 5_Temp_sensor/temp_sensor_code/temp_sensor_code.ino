#include<LiquidCrystal.h>
int tsen=A0,red=12,green=13;
float temp;
LiquidCrystal lcd(5,4,3,2,1,0);
  void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
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
  temp=analogRead(tsen);
  temp=(temp*4.88)/10;
  if(temp>=40)
  {
    lcd.setCursor(0,0);
    lcd.print("CRITICAL TEMP ");
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }
  else
  {
    lcd.setCursor(0,0);
    lcd.print("OPTIMUM TEMP  ");
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
  }
}
