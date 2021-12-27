String a;
int led = 15;
void setup() {
Serial.begin(115200);
pinMode(led,OUTPUT);
Serial.print("\nPankaj_Singh_Shah\n190BTCCSE024");
}

void loop() {
  a = Serial.readString();
  if(a=="on" || a=="ON" || a=="On" )
  {
    Serial.print("\nLed is ON");
    digitalWrite(led,HIGH);
  }
  else if(a=="off" || a=="OFF" || a=="Off")
  {
    Serial.print("\nLed is OFF");
    digitalWrite(led,LOW);
  }
  delay(100);
}
