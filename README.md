
# Smart Home Control Using Eye Blink System

## Overview
This project presents an assistive smart home automation system that enables users to control home appliances using eye blink detection. The system provides a hands-free control mechanism, making it suitable for physically challenged individuals and as a practical embedded systems learning project.

An IR eye blink sensor is interfaced with an Arduino UNO to detect eye blinks, which are then processed to control appliances such as an LED and a DC motor fan.

---

## Problem Statement
Traditional home automation systems require physical interaction or mobile applications, which may not be accessible to all users. This project explores the use of sensor-based human–machine interaction to design a simple, low-cost, and accessible control system using eye blinks as the input method.

---

## System Architecture
The system consists of three main units:
- **Input Unit:** IR Eye Blink Sensor  
- **Processing Unit:** Arduino UNO  
- **Output Unit:** LED and DC Motor Fan  

The sensor detects eye blinks and sends a digital signal to the microcontroller. The Arduino processes this signal using debounce logic and toggles the connected appliances accordingly.

---

## Hardware Components
- Arduino UNO  
- IR Eye Blink Sensor (IR LED + Photodiode based)  
- LED with 220Ω resistor  
- DC Motor Fan (3V–5V)  
- Jumper wires  
- USB power supply  

---

## Software & Tools
- Arduino IDE  
- Embedded C/C++  
- Digital input/output handling  
- Debouncing logic for reliable blink detection  

---

## Working Principle
1. The IR eye blink sensor continuously monitors eye movement.
2. When a blink is detected, the sensor output changes state.
3. The Arduino reads the sensor signal through a digital input pin.
4. Debounce logic filters out noise and false triggers.
5. A valid blink toggles the appliance state (ON/OFF).
6. LED and DC motor respond in real time.

---

## Features
- Hands-free appliance control  
- Real-time response  
- Simple and low-cost design  
- Reliable operation using debounce logic  
- Suitable for assistive technology applications  

---

## Applications
- Smart home automation  
- Assistive technology for physically challenged users  
- Embedded systems and Arduino learning projects  
- Human–machine interaction prototypes  

---

## Project Structure
```

smart-home-eye-blink-control/
│
├── README.md
├── src/
│   └── eye_blink_control.ino
├── circuit/
│   └── eye_blink_wiring.png
├── demo/
│   └── demo_video.md
└── docs/
└── project_overview.pdf (optional)

```

---

## Demo Video
▶️ Google Drive Demo Video:  
https://drive.google.com/file/d/1jY229wMUbRFR3acYHKq9rBnA1eAwwHH8/view?usp=drive_link

The demo video demonstrates:
- Eye blink detection using IR sensor  
- Arduino processing and serial output  
- LED and DC motor fan switching  
- Real-time system response  

---

## Future Enhancements
- Blink pattern recognition (single blink / double blink control)
- Relay module integration for high-power appliances
- Wireless control using Bluetooth or Wi-Fi
- Integration with mobile or voice-based interfaces

---

## Author
**Ashwin Sharma**  
B.Tech – Electronics & Communication Engineering  
Avanthi Institute of Engineering and Technology
```

---

