# Auto Safety Stop System (Otomatik Güvenlik Durdurma Sistemi)

## Overview

This Arduino project implements an automatic safety stopping system that uses ultrasonic sensors to detect obstacles and stops movement when objects are detected within a certain range. The system includes a buzzer alert feature and can control motor speed using a potentiometer.

## Features

- **Obstacle Detection**: Uses ultrasonic sensor to measure distance to objects
- **Automatic Stopping**: Stops motors when obstacles are detected within 15cm
- **Audio Alert**: Activates buzzer when obstacles are detected
- **Speed Control**: Adjusts motor speed using a potentiometer input
- **Simple Integration**: Easy to implement with Arduino-compatible boards

## Hardware Requirements

- Arduino board (Uno, Nano, or similar)
- HC-SR04 ultrasonic sensor
- Buzzer module
- Potentiometer
- Motor driver (for pins IN1, IN2)
- Jumper wires
- Power supply appropriate for your motors

## Connections

- **Ultrasonic Sensor**:
  - Trigger Pin → Arduino Pin 7
  - Echo Pin → Arduino Pin 8
- **Motor Driver**:
  - IN1 → Arduino Pin 3
  - IN2 → Arduino Pin 5
- **Potentiometer** → Arduino Analog Pin A0
- **Buzzer** → Arduino Pin 2

## Installation

1. Connect all components as described in the connections section
2. Clone this repository:
3. Open the `otoguvenlikdurdurma.ino` file in the Arduino IDE
4. Upload the code to your Arduino board

## How It Works

The system continuously measures the distance to any object in front of the ultrasonic sensor. When an object is detected within 15cm, the system:
1. Stops the motors by setting both motor driver inputs to LOW
2. Activates the buzzer to provide an audible warning

When no obstacle is detected, the system:
1. Runs the motors according to the potentiometer setting
2. Keeps the buzzer silent

## Customization

You can modify the safety distance by changing the value in the condition.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.
