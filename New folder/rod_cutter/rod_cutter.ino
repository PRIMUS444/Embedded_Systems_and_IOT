
int spin=0,trig=2,ecco=3,alarm=5;
float dis;
void setup() {
pinMode(spin,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(ecco,INPUT);
pinMode(alarm,OUTPUT);
pinMode(13,OUTPUT);
Serial.print(9600);
}

void loop() {

digitalWrite(trig,HIGH);
delay(10);
digitalWrite(trig,LOW);
dis=pulseIn(ecco,HIGH);
dis=(dis/2)*0.0343;
Serial.print(dis);
if(dis==25)
{
  tone(alarm,666,10);
  digitalWrite(13,HIGH);
  digitalWrite(spin,HIGH);
  delay(100);
  digitalWrite(spin,LOW);
}
else
{
  noTone(alarm);
  digitalWrite(13,LOW);
}

}
