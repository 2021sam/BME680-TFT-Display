# You've Got Mail

## Overview

"You've Got Mail" is a smart mail notification system using an ESP32 microcontroller and a VL53L1X distance sensor. This project alerts you via email when mail is delivered to your mailbox. It continuously monitors the distance from inside of the mailbox to the mailbox door, and if a significant change is detected, it sends an email notification.

## Features

- Monitors distance to the mailbox door.
- Sends email alerts upon detecting mail.
- Configurable distance thresholds.
- Wi-Fi connectivity for real-time notifications.

## Setup Instructions

### Hardware Requirements

- ESP32 development board
- VL53L1X distance sensor
- Jumper wires
- Breadboard (optional)

### Software Requirements

- Arduino IDE
- Required libraries:
  - SparkFun VL53L1X library
  - ESP Mail Client library
  - WiFi library (included with ESP32 core)

### Configuration

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/yourusername/YouveGotMail.git
   cd YouveGotMail

  Key points about the LilyGO T-Display S3 pinout:
    SDA pin: GPIO 17
    SCL pin: GPIO 18






# 2024 Update
# You've Got Mail - ESP32 IoT Project

## Overview
This repository contains an IoT project designed for an ESP32 microcontroller to detect mail deliveries using a distance sensor. It features a TFT display, Wi-Fi connectivity, web server functionality, and email notifications.

### **Current Version**
- Uses **Adafruit VL53L0X** ToF distance sensor (previously used SparkFun version).
- **Light sensor support** (previously included but no longer in use).
- **Preserves SparkFun VL53L1X support** for future analysis.
- Runs exclusively in **PlatformIO**.
- Uses **custom Wi-Fi manager** for handling connections.
- Displays sensor data on a **TFT screen**.
- Supports **button handling** for user interaction.
- Implements a **web server** for remote monitoring.
- Logs important events for debugging.

---

## Repository Structure
```
You'veGotMail/
│── .pio/                # PlatformIO build directory (ignored in Git)
│── .vscode/             # VS Code settings
│── include/             # Header files
│── lib/                 # Custom libraries (not pushed to GitHub)
│── src/                 # Source code
│── test/                # Unit tests & sensor validation scripts
│── examples/            # Various test scripts (different PlatformIO settings)
│── docs/                # Documentation (if needed)
│── platformio.ini       # PlatformIO configuration
│── README.md            # Project documentation (this file)
│── .gitignore           # Git ignore settings
```

---

## Dependencies
Managed using `platformio.ini`:
```ini
lib_deps =
    adafruit/Adafruit VL53L0X @ ^1.0.4
    bodge/ArduinoJson @ ^6.20.0
    WiFiManager @ ^2.0.0-beta
    # Add other dependencies here
```

---

## Using Different ToF Sensor Versions
### **1. Current Version: Adafruit VL53L0X**
- This version is currently active.
- It has different initialization requirements compared to the SparkFun VL53L1X.

### **2. Previous Version: SparkFun VL53L1X**
- Preserved for future analysis.
- Not currently in use but can be reactivated by modifying `DistanceSensor.h` and `DistanceSensor.cpp`.

---

## How to Run
### **Using VS Code + PlatformIO**
1. Open VS Code.
2. Use `File > Open Folder` and select this repository.
3. PlatformIO will detect the project automatically.
4. Click the **PlatformIO Build/Upload** button or run:
   ```sh
   pio run --target upload
   ```

---

## Future Plans
- Improve sensor error handling.
- Optimize web server performance.
- Expand logging features.
- Reintegrate SparkFun VL53L1X as an option.
- Potentially remove light sensor code completely.

---

## Notes
- The `lib/` folder is **not pushed to GitHub** since PlatformIO fetches dependencies automatically.
- Test scripts are stored under `examples/` for easy access.
- If switching back to SparkFun VL53L1X, update the sensor initialization accordingly.

---

## License
This project is open-source under the MIT License.


# Lilygo T-Display S3 Pinout
![LilyGO T-Display S3 Pinout](/docs/Lilygo-T-display.webp)
