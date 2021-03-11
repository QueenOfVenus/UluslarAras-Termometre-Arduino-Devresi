#include <dht.h>

dht DHT;

#define nemPIN 9
void setup() {
  Serial.begin(9600);
}

void loop() {
  int okunanDeger = DHT.read11(nemPIN);   
  int kelvinFark = 273;       // °C + 273 = °K

  Serial.print("Temperature : ");
  Serial.print(DHT.temperature);
  Serial.println(" °C ");    

  Serial.print("Temperature : ");
  Serial.print(((18* DHT.temperature)/10)+32);      // ((18*°C)/10)+32 = °F
  Serial.println(" °F ");

  Serial.print("Temperature : ");
  Serial.print(DHT.temperature + kelvinFark);
  Serial.println(" °K ");
  
  Serial.print("Humidity: ");
  Serial.println(DHT.humidity);

  Serial.println("... ");
  delay(3000);

  
}
