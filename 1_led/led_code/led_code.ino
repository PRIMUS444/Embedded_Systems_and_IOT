int l1=2;
int sec=1000;
void setup() {
pinMode(l1,OUTPUT);

}

void loop() {
 digitalWrite(l1,HIGH);
 delay(sec);
 digitalWrite(l1,LOW);
 delay(sec);
/* digitalWrite(l1,HIGH);
 delay(sec);
 digitalWrite(l2,HIGH);
 delay(sec);
 digitalWrite(l2,LOW);
 delay(sec);
 digitalWrite(l3,HIGH);
 delay(sec);
 digitalWrite(l3,LOW);*/
}
