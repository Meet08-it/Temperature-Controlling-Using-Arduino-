# 🌡️ Arduino Temperature Monitor with LCD & Buzzer (DS18B20)

## 📌 Project Overview

This project is a temperature monitoring system built using Arduino. It displays real-time temperature on a 16x2 I2C LCD and triggers a buzzer alert when the temperature goes below or above a defined safe range.

---

## 🚀 Features

* 📟 Real-time temperature display on LCD
* 🔔 Buzzer alert for abnormal temperature
* 🌡️ High accuracy using DS18B20 digital sensor
* ⚡ Simple and efficient Arduino code

---

## 🧰 Components Used

* Arduino Nano / Uno
* 16x2 LCD Display with I2C module
* DS18B20 Temperature Sensor
* Buzzer
* 4.7kΩ Resistor (Pull-up for DS18B20)
* Jumper Wires

---

## 🔌 Circuit Connections

### DS18B20 Sensor

* VCC → 5V
* GND → GND
* DATA → D2
* 4.7kΩ resistor between DATA and VCC

### LCD (I2C)

* VCC → 5V
* GND → GND
* SDA → A4
* SCL → A5

### Buzzer

* Positive → D6
* Negative → GND

---

## ⚙️ Working Principle

The DS18B20 sensor measures temperature digitally and sends data to the Arduino. The temperature is displayed on the LCD.

* If temperature < **34.5°C** → Buzzer turns ON
* If temperature > **37.5°C** → Buzzer turns ON
* Otherwise → Buzzer remains OFF

---

## 📟 Sample Output

```
Temp: 36.5°C
```

---

## 📦 Required Libraries

Install the following libraries in Arduino IDE:

* OneWire
* DallasTemperature
* LiquidCrystal_I2C

---

## ▶️ How to Run

1. Connect all components as per the circuit diagram
2. Install required libraries
3. Upload the code to Arduino
4. Power the circuit
5. Monitor temperature on LCD

---

## ⚠️ Important Notes

* Use a **4.7kΩ pull-up resistor** for DS18B20
* Check I2C address (0x27 or 0x3F) if LCD doesn't work
* Ensure proper wiring for accurate readings

---

## 🔮 Future Improvements

* Add IoT support (send data to mobile/cloud)
* Add temperature graph visualization
* Add multiple sensor support

---

## 👨‍💻 Author

Meet Patel

---

## ⭐ If you like this project

Give it a star ⭐ on GitHub!
