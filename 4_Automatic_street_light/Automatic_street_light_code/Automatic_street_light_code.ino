#include<LiquidCrystal.h>
int led=0,ldr=A0,senvalue=0;
LiquidCrystal lcd(13,12,8,9,10,11);
void setup() {
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
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
  senvalue=analogRead(ldr);
  lcd.clear();
  if(senvalue>100)
  {
    digitalWrite(led,HIGH);
    lcd.setCursor(5,1);
    lcd.print("LED ON    ");
  }
  else
  {
   digitalWrite(led,LOW);
    lcd.setCursor(5,1);
    lcd.print("LED Off   ");
  }
  delay(10);
}
