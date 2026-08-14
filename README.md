Smart Automation System Using Arduino and LDR

Internship Task 3 – Embedded Systems & IoT

Project Overview

This project is an upgraded version of the Smart Lighting System developed in Task 2. The system uses an LDR sensor with an Arduino UNO to automatically control an LED according to the surrounding light intensity.

The project also includes Serial Monitor feedback, which displays the sensor reading and the current status of the LED in real time.

Objective

The main objective of this project is to implement basic automation using sensor input and decision-making logic.

The system demonstrates:

- Sensor-based decision making
- IF/ELSE automation logic
- Automatic LED control
- Real-time sensor monitoring through Serial Monitor
- Basic IoT-style system behavior

Components Used

- Arduino UNO
- LDR Sensor
- 10kΩ Resistor
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard
- USB connection

Software Used

- Tinkercad Circuits
- Arduino IDE
- Embedded C/C++

Working Principle

The LDR sensor detects the surrounding light intensity and provides an analog value to the Arduino through analog pin A0.

The Arduino continuously reads the LDR value and compares it with a predefined threshold value.

If the light value is greater than 500, the system considers the environment dark and automatically turns the LED ON.

If the light value is 500 or below, the system considers the environment bright and turns the LED OFF.

The sensor value and system status are also displayed on the Serial Monitor for real-time monitoring.

Automation Logic

LDR Sensor
    ↓
Arduino reads sensor value
    ↓
Is Light Value > 500?
    ↓
 ┌───────────────┐
 │      YES      │
 └───────┬───────┘
         ↓
   DARK CONDITION
         ↓
      LED ON

If NO:
         ↓
   BRIGHT CONDITION
         ↓
      LED OFF

Source Code

const int ldrPin = A0;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue > 500) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Status: DARK - LED ON");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Status: BRIGHT - LED OFF");
  }

  Serial.println("--------------------");
  delay(1000);
}

Monitoring Output

Example Serial Monitor output:

Light Value: 969
Status: DARK - LED ON
--------------------

Light Value: 49
Status: BRIGHT - LED OFF
--------------------

The actual sensor values may vary during simulation depending on the LDR light intensity.

Applications

This type of automated lighting system can be used in:

- Smart homes
- Automatic street lighting
- Office lighting systems
- Parking areas
- Gardens and outdoor lighting
- Energy-saving lighting systems

Advantages

- Automatic operation
- Simple and low-cost design
- Reduces unnecessary power consumption
- Real-time sensor monitoring
- Easy to expand with additional sensors or IoT features

Conclusion

The Task 3 project successfully upgrades the previous sensor prototype into a basic Smart Automation System. The Arduino makes an automatic decision based on the LDR sensor reading and controls the LED without manual intervention.

The Serial Monitor provides real-time feedback about the sensor value and system status, demonstrating the basic working concept of smart embedded and IoT-style systems.