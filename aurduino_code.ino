#include <Wire.h>
#include <BH1750.h>
BH1750 lightMeter;
void setup()
{
  Serial.begin(9600);
  lightMeter.begin();
  pinMode(9, OUTPUT);
}
void loop() 
{
  uint16_t lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(500);
  if(lux<80)
  {
   digitalWrite(9, HIGH); 
  }
  else
  {
    digitalWrite(9, LOW);
  }
}
