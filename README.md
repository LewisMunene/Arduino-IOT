# Arduino-IOT
# Arduino IoT Projects

## Overview
This repository contains Arduino code for various IoT projects developed during the Multimedia Applications course. These projects demonstrate the implementation of different sensors and actuators to create interactive IoT devices using both physical Arduino hardware and Tinkercad for simulation.

## Projects

### 1. RGB LED Light Sensor
**File:** `led_rgb.ino`

This project uses a photoresistor to detect ambient light levels and controls an RGB LED to display different colors based on the light intensity:

- **Low light:** LED displays blue
- **Medium light:** LED displays green
- **Bright light:** LED displays red

#### Components Used:
- RGB LED (connected to pins 9, 10, 11)
- Photoresistor (connected to analog pin A0)
- Arduino Uno

#### Features:
- Real-time light intensity monitoring
- Color-coded visual feedback
- Serial output for debugging

#### Circuit Diagram:
[Place circuit diagram image here if available]

---

### 2. Particle Concentration Monitor
**File:** `particle_concentration.ino`

This project measures particle concentration levels and provides different alerts based on the readings:

- **Low concentration (<40%):** All indicators on, no alarm
- **Medium concentration (40-70%):** Warning indicators and intermittent alarm
- **High concentration (>70%):** Danger indicator and continuous alarm with serial warning

#### Components Used:
- Particle sensor (connected to analog pin A0)
- LED indicators (connected to pins 2, 3, 4)
- Buzzer (connected to pin 12)
- Arduino Uno

#### Features:
- Converts analog readings to concentration percentage
- Multi-level alert system
- Visual and auditory feedback

#### Circuit Diagram:
[Place circuit diagram image here if available]

---

### 3. Random Blink Pattern Generator
**File:** `analog_input_output.ino`

A simple project that creates unpredictable blinking patterns using randomized delay times.

#### Components Used:
- LED (connected to pin 3)
- Arduino Uno

#### Features:
- Random delay times between 100ms and 1000ms
- Unpredictable visual patterns

#### Circuit Diagram:
[Place circuit diagram image here if available]

---

## Setup Instructions

### Physical Setup (Arduino)
1. Connect the components according to the pin configurations specified in each file
2. Upload the corresponding sketch to your Arduino board using the Arduino IDE
3. Power the Arduino and observe the behavior

### Virtual Setup (Tinkercad)
1. Create a new circuit in Tinkercad
2. Add the components specified for each project
3. Connect the components according to the pin configurations
4. Copy and paste the code into the code editor
5. Start the simulation to observe the behavior

## Learning Outcomes
These projects demonstrate several important IoT concepts:
- Analog and digital sensor integration
- Environmental monitoring
- Visual and auditory feedback mechanisms
- Serial communication for debugging
- Conditional programming based on sensor inputs

## Future Improvements
- Add Bluetooth/WiFi connectivity to send data to a mobile app
- Implement data logging capabilities
- Add more sophisticated visual interfaces
- Combine multiple sensors for more complex environmental monitoring

## Course Information
- **Course:** Multimedia Applications
- **Focus:** IoT device design
- **Tools Used:** Arduino IDE, Tinkercad

## License
[Include your preferred license here]

---

Feel free to contribute to this repository by submitting pull requests or reporting issues.
