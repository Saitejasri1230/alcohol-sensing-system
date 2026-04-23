# alcohol-sensing-system
Alcohol Sensing & Engine Locking System (IoT Safety Project)
Overview

The Alcohol Sensing & Engine Locking System is an IoT-based safety solution designed to prevent drunk driving by detecting alcohol levels of a driver and automatically disabling the vehicle ignition system when unsafe levels are detected.

This project improves road safety by ensuring that a vehicle cannot be started if alcohol consumption is detected.

Key Features
Real-time alcohol detection using MQ-3 sensor
Automatic engine ignition control (lock/unlock)
High detection accuracy (90%+)
Immediate safety response system

How It Works
The MQ-3 sensor detects alcohol concentration in the driver’s breath
Arduino processes the sensor data in real-time
If alcohol level exceeds the defined threshold:
Ignition system is disabled using a relay module
Vehicle engine is prevented from starting
If below threshold:
Engine remains enabled

Tech Stack
Microcontroller: Arduino / ESP32
Sensors: MQ-3 Alcohol Sensor
Camera Module: ESP32-CAM (for monitoring/optional logging)
Programming: Embedded C, Python (optional data processing)

Hardware Components
MQ-3 Alcohol Sensor
Arduino Board
Relay Module (for ignition control)
ESP32-CAM
Power Supply Unit

Future Enhancements
Mobile application for real-time alerts and monitoring
GPS tracking for vehicle location in safety events
Cloud integration for data logging and analytics
SMS/Notification alerts to emergency contacts

Project Impact
This system can significantly reduce road accidents caused by drunk driving by enforcing automatic vehicle immobilization when alcohol is detected.

This system can significantly reduce road accidents caused by drunk driving by enforcing automatic vehicle immobilization when alcohol is detected.
