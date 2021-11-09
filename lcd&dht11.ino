#include <LiquidCrystal.h>
#include <DHT.h>
LiquidCrystal lcd(2,3,4,5,6,7);
DHT dht(8,DHT11);
void setup() {
lcd.begin(16,2);
Serial.begin(9600);
dht.begin();

}

void loop() {
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("temp");
  lcd.print(t);
  lcd.print(" *C");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(h);
  lcd.print("humity");
  lcd.print(" %");
  delay(1000);
  lcd.clear();
  
}
