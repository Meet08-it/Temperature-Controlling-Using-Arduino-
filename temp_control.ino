#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// LCD setup
LiquidCrystal_I2C lcd(0x27, 16, 2);

// DS18B20 setup
#define ONE_WIRE_BUS 2   // Data pin connected to D2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// Buzzer
int buzzer = 6;

void setup() {
  lcd.init();
  lcd.backlight();

  sensors.begin();
  pinMode(buzzer, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("Temp Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  sensors.requestTemperatures();  
  float temperature = sensors.getTempCByIndex(0);

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print((char)223);
  lcd.print("C   ");

  // Buzzer condition
  if (temperature < 34.5 || temperature > 37.5) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}