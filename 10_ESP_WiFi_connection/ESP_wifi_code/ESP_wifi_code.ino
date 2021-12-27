#include<string.h>
#include "WiFi.h"
#define wifi_name "monk"
#define wifi_pass "mmmmonks"
String input;

void setup() {
Serial.begin(115200);
Serial.println("Pankaj_singh_shah\n190BTCCSE024");
}

void wifi_conn(){
  int trytime = millis();
  WiFi.mode(WIFI_STA);
  delay(1000);
  Serial.print("\nNumber of wifi network available: ");
  Serial.print(WiFi.scanNetworks());
  WiFi.begin(wifi_name , wifi_pass);
  Serial.print("\nConnecting to ");
  Serial.print(wifi_name);
  Serial.print(" ...");
  
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
    if(millis()- trytime > 50000){
      Serial.println("\nConnection timeout!!!! \n Failed to connect");
      break;
    }
  }
  delay(5000);
  if(WiFi.status()== WL_CONNECTED){
    Serial.print("\nConnected to \" "+WiFi.SSID()+" \" with IP address ");
    Serial.print(WiFi.localIP());  
  }
}

void wifi_disconn(){
    WiFi.disconnect(true);
    delay(1000);
    Serial.print("\nDisconnected....\nlocal IP ");
    Serial.print(WiFi.localIP());
    Serial.print("\nLocal mac address " +WiFi.macAddress());
}

void loop() {
  if(WiFi.status()== WL_CONNECTED) {
    Serial.print("\nDevice is connect to a wifi network \n");
    delay(1000);
    wifi_disconn();
  }
  else{
    wifi_conn();
    delay(1000);
  }
}
