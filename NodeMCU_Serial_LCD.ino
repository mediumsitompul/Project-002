#include <LiquidCrystal.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  //Wire.begin (SDA, SCL);
  Wire.begin (D2, D1);
  lcd.begin();    
}



void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Hallo... ");
  Serial.println("Hallo juga... ");
  delay(3000);
  
  Serial.println("Apa Kabar?");
  Serial.println("Kabar Baik...");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Welcome...");
  lcd.setCursor(0,1);
  lcd.print("LCD is working");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("By");
  lcd.setCursor(0,1);
  lcd.print("Medium Sitompul");
  delay(2000);
  
}
