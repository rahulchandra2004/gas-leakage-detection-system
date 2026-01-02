# Autonomous Gas Leakage Detection System

# Project Overview
Developed and implemented an **autonomous Gas Leakage Detection System** designed to enhance home safety by providing real-time detection and automatic mitigation of potentially hazardous gas leaks (e.g., LPG).  

This project combines **embedded systems, sensor technology, and IoT communication** to prevent accidents and notify users promptly.

---

# Key Features & Achievements
- **Autonomous Safety Mechanism**: Integrated a servo motor mechanism with the gas regulator, automatically triggered upon leak detection to shut off the gas supply.
- **Real-Time Communication**: Utilized GSM/GPRS module (SIM800A) to send immediate alerts:
  -  **Automated Voice Call**: Incoming call to a pre-configured mobile number with audible warning.
  -  **SMS/Text Message**: Detailed warning message sent to the registered number.
- **Sensor Integration**: Calibrated and integrated MQ-5 gas sensor with Arduino Uno R3 for accurate detection of combustible gases above a safety threshold.
- **Proof of Concept (POC)**: Demonstrated end-to-end functionality including regulator shutdown and simultaneous call/message alerts upon simulating a gas leak.

---

# Technologies Used
- **Microcontroller**: Arduino Uno R3  
- **Sensing**: MQ-5 Gas Sensor  
- **Actuation**: Servo Motor  
- **Communication**: SIM800A Quad Band GSM/GPRS Module (RS232 Interface + SMA Antenna)  
- **Power**: Li-ion Battery  
- **Software/Language**: C++ (Arduino IDE)  

---

# Demonstration
A proof-of-concept video demonstrates:
- Immediate regulator shutdown  
- Simultaneous voice call and SMS alerts upon gas leak detection  

# Files Included
- `GasLeakageDetection.ino`: Arduino source code
- `circuit-diagram.jpg`: Schematic of the hardware setup
- `demo-video-link.txt`: Link to real-world demonstration video

---

# Demo Video
Watch the full system in action:  
**[ Gas Leakage Detection Demo](https://drive.google.com/file/d/1p8ogX7y4Rs-bBJ7xuFoVHNsbFUuddBs5/view?usp=sharing)** 

---

# Future Improvements
- Integration with **IoT cloud platforms** (e.g., AWS IoT, Blynk) for remote monitoring.  
- Mobile app notifications alongside GSM alerts.  
- Adding **multi-sensor support** for detecting multiple gases.  
- Compact PCB design for production-ready deployment.
- 
---

# Acknowledgements
- Hardware: Arduino Uno R3, MQ-5 Sensor, SIM800A GSM Module  
- Inspiration: Home safety automation and IoT innovation
