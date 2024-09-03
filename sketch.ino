//This code is designed to measure the distance to an object using an 
//ultrasonic sensor, specifically the HC-SR04 sensor, connected to an Arduino.
const int trigPin = 9;  // Pin connected to the Trigger pin of HC-SR04
const int echoPin = 10; // Pin connected to the Echo pin of HC-SR04

void setup() {
  pinMode(trigPin, OUTPUT);  // Set the Trigger pin as OUTPUT
  pinMode(echoPin, INPUT);   // Set the Echo pin as INPUT
  Serial.begin(9600);        // Start serial communication at 9600 baud rate
}

void loop() {
  // Clear the Trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send a 10 microsecond pulse to start the measurement
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of the echo pulse
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in centimeters
  float distance = duration * 0.0344 / 2;
  
  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Wait for a short period before taking the next measurement
  delay(500);
}
