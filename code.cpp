#include <LiquidCrystal.h> // Include the
LiquidCrystal lcd(7, 6, 2, 3, 4, 5);
int tPin = A3;
void setup()
{
lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("Temperature:");
lcd.setCursor(0,1);
lcd.print("012_HARSH");
Serial.begin(9600);
}
void loop()
{
int analogValue =analogRead(tPin);
float voltage = analogValue * (5.0 / 1024.0);
float temperatureC = (voltage - 0.5) * 100;
float temperatureF = (temperatureC * 9 / 5) +
32;
lcd.setCursor(12, 0);
lcd.print(temperatureC);
  Serial.println(temperatureC);
delay(1000);
}
