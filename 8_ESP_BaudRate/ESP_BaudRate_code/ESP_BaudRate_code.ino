
void setup(){
  pinMode(2,OUTPUT);
  Serial.begin(115200);
  Serial.print("Pankaj_Singh_Shah\n190BTCCSE024\n");
}
void loop(){
  digitalWrite(2,HIGH);
  delay(1000);
  Serial.println(Serial.baudRate());
  digitalWrite(2,LOW);
  delay(1000);
}
