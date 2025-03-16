#include <Adafruit_Sensor.h>
#include <Adafruit_BME680.h>  // Include the BME680 library
#include "TFTDisplay.h"  // Include the TFT display class

Adafruit_BME680 bme;  // Create the BME680 object
TFTDisplay display;  // Create a TFTDisplay object

void setup() {
    Serial.begin(115200);

    display.begin();  // Initialize TFT display
    display.showStatusMessage("Initializing...");

    // Initialize BME680 sensor
    if (!bme.begin()) {
        display.showStatusMessage("BME680 Offline");
        Serial.println("BME680 sensor not detected");
        while (1);  // Hang if the sensor is not found
    } else {
        display.showStatusMessage("BME680 Online");
        Serial.println("BME680 sensor online");
    }

    // Configure sensor settings
    bme.setTemperatureOversampling(BME680_OS_8X);
    bme.setHumidityOversampling(BME680_OS_2X);
    bme.setPressureOversampling(BME680_OS_4X);
    bme.setIIRFilterSize(BME680_FILTER_SIZE_3);

    display.showStatusMessage("Setup Complete!");
    delay(2000);
}

void loop() {
    // Read BME680 sensor values
    if (bme.performReading()) {
        float temperature = bme.temperature;  // in Celsius
        float humidity = bme.humidity;        // in %
        float pressure = bme.pressure / 100.0; // in hPa
        float gas = bme.gas_resistance / 1000.0; // in kOhms (eCO2/VOCs)

        // Display sensor values on the TFT display
        display.showAllData(temperature, humidity, pressure, gas);

        // Log values to the serial monitor
        Serial.printf("Temp: %.2f°C, Humidity: %.2f%%, Pressure: %.2f hPa, Gas: %.2f kOhms\n", 
                      temperature, humidity, pressure, gas);
    } else {
        Serial.println("Failed to read from BME680 sensor.");
    }

    delay(1000);  // Delay between readings (adjust as needed)
}
