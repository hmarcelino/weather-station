#include "DHT.h"

#define DHTPIN 2    
#define DHTTYPE DHT22 

DHT dht(DHTPIN, DHTTYPE);

const READ_DELAY = 60 * 60 

void setup() {
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(READ_DELAY);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) ) {
    // todo: send an alarm message
    return;
  }

  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  // todo: send values to server
}
