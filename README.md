# Bluetooth-Based Home Automation and Gas Leakage Detection System

A Bluetooth-enabled smart home automation and gas leakage detection system developed using NodeMCU ESP8266, HC-05 Bluetooth Module, and MQ2 Gas Sensor.

## Overview

This project presents a **Bluetooth-Based Home Automation and Gas Leakage Detection System** developed using **NodeMCU ESP8266**, **HC-05 Bluetooth Module**, and **MQ2 Gas Sensor**. The system allows users to wirelessly control appliances through a smartphone and provides real-time gas leakage monitoring for enhanced safety.

The project combines automation and safety features into a single embedded system, making it suitable for smart home applications.

---

## Objectives

- Control appliances wirelessly using Bluetooth communication.
- Establish communication between a smartphone and NodeMCU through the HC-05 module.
- Detect gas leakage using the MQ2 gas sensor.
- Generate alerts through LEDs and a buzzer when gas levels exceed the threshold value.
- Develop a simple, low-cost, and efficient smart home solution.

---

## Components Used

### Hardware
- NodeMCU ESP8266
- HC-05 Bluetooth Module
- MQ2 Gas Sensor
- Buzzer
- LEDs
- Breadboard
- Jumper Wires
- USB Cable

### Software
- Arduino IDE
- Embedded C
- Bluetooth Terminal Application

---

## System Architecture

![System Architecture](Images/blockdiagram.png)

### Architecture Description

1. The smartphone sends commands through a Bluetooth terminal application.
2. HC-05 receives the Bluetooth commands and forwards them to NodeMCU.
3. NodeMCU processes the received commands and controls the LED.
4. MQ2 continuously monitors gas concentration.
5. When gas levels exceed the threshold value, the buzzer is activated to alert the user.

---

## Project Setup

![Project Setup](Images/setup.jpeg)

---

## Working Principle

### Home Automation

- User sends commands from a smartphone.
- HC-05 receives the commands via Bluetooth.
- NodeMCU processes the commands.
- LED is switched ON/OFF based on user input.

### Gas Leakage Detection

- MQ2 sensor continuously monitors gas levels.
- NodeMCU reads sensor values.
- If gas concentration exceeds the predefined threshold:
  - Alert LED turns ON.
  - Buzzer is activated.
- The user is notified about the gas leakage condition.

---

## Project Demonstration

A demonstration video of the project is available in the repository.

[Watch Demo Video](Videos/demo.mp4)

The project demonstration video shows:

- Bluetooth communication between smartphone and NodeMCU.
- Wireless LED control through the mobile application.
- Real-time gas leakage monitoring.
- Alert generation using buzzer and LEDs.

---

## Results

- Successful Bluetooth communication established using HC-05.
- Wireless appliance control achieved through smartphone commands.
- Real-time gas leakage detection implemented using MQ2 sensor.
- Alert system successfully activated during gas leakage conditions.
- Reliable performance achieved after debugging communication and sensor calibration issues.

---

## Challenges Faced

- HC-05 communication issues.
- TX/RX connection debugging.
- Baud rate mismatch problems.
- MQ2 sensor threshold calibration.
- Hardware troubleshooting and testing.

These challenges were resolved through systematic testing and debugging.

---

## Future Enhancements

- Control real household appliances using relay modules.
- Develop a dedicated Android application.
- Add Wi-Fi and IoT cloud integration.
- Enable remote monitoring through the internet.
- Integrate SMS and mobile notifications.
- Add multiple environmental sensors for advanced smart home functionality.

---

## Technologies Used

- Embedded Systems
- Internet of Things (IoT)
- NodeMCU ESP8266
- HC-05 Bluetooth Module
- MQ2 Gas Sensor
- Arduino IDE
- Embedded C
- Bluetooth Communication

---

## My Contribution

- Hardware assembly and circuit connections.
- NodeMCU programming using Arduino IDE.
- HC-05 Bluetooth module interfacing.
- MQ2 gas sensor integration.
- System testing and debugging.
- Validation of project functionality.

---

## Learning Outcomes

Through this project, I gained hands-on experience in:

- Embedded Systems Development
- IoT Fundamentals
- Sensor Interfacing
- Bluetooth Communication
- Hardware Debugging
- Microcontroller Programming
- Problem Solving and Troubleshooting

---

## Author

**Kavya**

B.Tech Student | Embedded Systems & IoT Enthusiast

---
