Building a Weather Module:

Parts:

* Arduino UNO or compatible
* Humidity/Temperature sensor (DHT11 or DHT 22)
* ESP8266-01S (black version)
* Arduino software
* ESP8266 ESP-01 Wi-Fi Adapter Module w/CH340G Driver (to program the ESP8266)


**Configuring Arduino IDE for ESP8266**

* Add support for ESP8266 wifi module (https://learn.sparkfun.com/tutorials/esp8266-thing-hookup-guide/installing-the-esp8266-arduino-addon)

* Select Tools > Board > Generic ESP8266 Module
* Select Tools > Flash size > 1M (512 SPIFFS)

**Configuring Arduino IDE for ESP8266**

* Adafruit Unified Sensor Lib: https://www.arduinolibraries.info/libraries/adafruit-unified-sensor
* DHT Sensor Library: https://www.arduinolibraries.info/libraries/dht-sensor-library

```
Including new libraries in Arduino Software:

1. Sketch > Include Library > Add .ZIP Library
2. <Select library>

3. Check Library was successfully uploaded: 
    Sketch > Include Library > (Shows in List)
```
