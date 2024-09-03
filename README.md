# Arduino-Ultrasonic-Distance-Measurement
Measure distance using an ultrasonic sensor and display it on the Serial Monitor.
Ultrasonic Distance Measurement with Arduino
This project demonstrates how to use an HC-SR04 ultrasonic sensor with an Arduino to measure the distance to an object. The distance is calculated based on the time it takes for an ultrasonic pulse to travel to the object and back to the sensor.

Components Used

Arduino (any compatible board)
HC-SR04 Ultrasonic Sensor
Jumper Wires
Breadboard (optional)
Circuit Diagram

Trig Pin of HC-SR04 → Arduino Pin 9
Echo Pin of HC-SR04 → Arduino Pin 10
VCC of HC-SR04 → 5V on Arduino
GND of HC-SR04 → GND on Arduino
Code Overview
The Arduino code initializes the pins connected to the ultrasonic sensor and starts serial communication. The loop() function continuously triggers the sensor, reads the duration of the echo pulse, and calculates the distance based on the speed of sound in air.
Serial Output:
The calculated distance is printed to the Serial Monitor

