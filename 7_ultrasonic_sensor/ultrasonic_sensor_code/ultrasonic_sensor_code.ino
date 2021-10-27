#include<LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,1,0);
int ledg=8,ledr=11,tr=9,ecco=10,idis;
float dis;
void setup() {
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(tr,OUTPUT);
  pinMode(ecco,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("PANKAJ SINGH");
  lcd.setCursor(3,1);
  lcd.print("190BTCCSE024");
  delay(100);
  lcd.clear();
}

void loop() {
  digitalWrite(tr,HIGH);
  delay(10);
  digitalWrite(tr,LOW);
  dis=pulseIn(ecco,HIGH,10000);
  lcd.setCursor(1,1);
  lcd.print(dis);
  dis=dis*0.343;
  idis=dis;
  if(idis==0)
  {
    digitalWrite(ledg,LOW);
    digitalWrite(ledr,HIGH);
  }
  else
  {
    digitalWrite(ledr,LOW);
    digitalWrite(ledg,HIGH);
  }
  lcd.setCursor(0,0);
  lcd.print("distance =");
  lcd.print(dis);
 }
