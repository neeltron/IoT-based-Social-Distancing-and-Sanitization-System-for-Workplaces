
# IoT based Social Distancing and Sanitization System for Workplaces (Open Innovation Track)
This is the implementation of an IoT based setup that has the ability to allow entrance into an office or a building after certain time intervals and sanitize the area automatically.

Prototype Demo Video: https://www.youtube.com/watch?v=lhbK4ud8BBQ

The Prototype consists of:
<ul>
  <li>Arduino Nano - Conveys the data to the sensors and activates them accordingly.</li>
  <li>ESP8266 Module - It's a microcontroller, based on an open source firmware. In this project, it receives data from the app through Wi-Fi.</li>
  <li>L293D Motor Driver</li>
  <li>5V DC Pump - It's used to control to sanitizing mechanism.</li>
  <li>Servo Motor - Used to power the project.</li>
  <li>18650 Lithium Ion Batteries</li>
  <li>HC-SR04 Ultrasonic Distance Sensor - It's used to detect the distance to the people entering the work area, and control the sanitization mechanism accordingly.</li>
</ul>
<hr>

# Installation
Installing Arduino IDE:
<ol>
  <li>Download and install java from their website: https://www.java.com/en/download/ </li>
  <li>Download the latest version of Arduino IDE for your Operating System from their website: https://www.arduino.cc/en/Main/Software </li>
  <li>Open the location where the zip file for Arduino was downloaded, and unzip this folder to your desired location</li>
  <li>Start the Arduino IDE from the unzipped folder</li>
</ol>
<br>
Setup for NodeMCU:
<ol>
  <li>Go to File>>Preferences and paste this url in additional Board Manager URLs: http://arduino.esp8266.com/stable/package_esp8266com_index.json</li>
  <li>Got to Tools>>Boards>>Board Manager</li>
  <li>Type "ESP8266" in the search box</li>
  <li>Select ESP8266 Community and click on install button</li>
  <li>Go to Tools>>Boards>>select NodeMCU</li>
  <li>Select proper Com port</li>
</ol>

Clone this repository, choose the proper boards, check with the COM Ports and feel free to upload the code.

# Connectivity

## NodeMCU - Arduino Nano
D5 - GPIO 5<br>
D6 - GPIO 6
## Arduino Nano - L293D
GPIO 7 - IN1<br>
GPIO 8 - MTR1<br>
+3.3V - +5V<br>
GND - GND
## Arduino Nano - Servo
5V - VCC<br>
GND - GND<br>
Digital - GPIO 3
## Arduino Nano - HC-SR04
GPIO 11 - Trig<br>
GPIO 12 - Echo<br>
VCC - +5V<br>
GND - GND
