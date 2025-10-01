# 🏠 Smart Home Automation System (ATmega32)

An Embedded Systems project using **ATmega32** to simulate a simple Smart Home.  
The project is designed with a **Layered Architecture (MCAL, HAL, APP)** and runs on a **16MHz external crystal**, simulated in **Proteus**.

---

## 📂 Project Architecture

Mini-Project-3/
├── MCAL/ # Microcontroller Abstraction Layer (ADC, GPIO, PWM)
├── HAL/ # Hardware Abstraction Layer (LCD, LED, Motor, Buzzer, Flame, LDR, LM35)
├── APP/ # Application Layer (main.c)
├── LIB/ # Common libraries (std_types.h, common_macros.h)
└── README.md

---

## ⚡ Features

### Sensors & Inputs
- **LDR Sensor (PA0)** → Controls LED intensity based on ambient light.  
- **LM35 Temperature Sensor (PA1)** → Measures temperature and controls the fan speed.  
- **Flame Sensor (PD2)** → Detects fire presence.  

### Actuators & Outputs
- **LEDs (PB5, PB6, PB7)** → Indicate light intensity levels.  
- **DC Motor + H-Bridge (PB0, PB1, PB3)** → Works as a fan with variable PWM duty cycle.  
- **Buzzer + Red LED (PD3)** → Alarm when fire is detected.  
- **LCD 16x2 (PORTC + PD0, PD1)** → Displays system status (Temp, LDR %, Fan).  

---

## 🧮 System Logic

### LDR → LED Control
- **< 15%** → 3 LEDs ON  
- **16–50%** → 2 LEDs ON  
- **51–70%** → 1 LED ON  
- **> 70%** → All LEDs OFF  

### LM35 → Fan Speed (PWM on PB3)
- **< 25°C** → Fan OFF  
- **25–30°C** → 25% duty cycle  
- **30–35°C** → 50% duty cycle  
- **35–40°C** → 75% duty cycle  
- **≥ 40°C** → 100% duty cycle  

### Flame Sensor → Alarm
- **No Fire** → System operates normally.  
- **Fire Detected** → Buzzer ON + LCD shows `Critical alert!`.  

---

## 🛠 Tools & Requirements
- **MCU**: ATmega32  
- **Clock**: External 16MHz Crystal  
- **Compiler**: avr-gcc (AVR-GNU Toolchain)  
- **IDE**: Eclipse / Atmel Studio  
- **Simulation**: Proteus  

---

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Zeyad-Tantawy1/Smart-Home-Automation.git

---

## 👨‍💻 Authors

Zeyad Tantawy – Embedded Systems Engineer
