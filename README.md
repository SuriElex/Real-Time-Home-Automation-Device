# Real-Time Home Automation Device

## Overview

This project is a WiFi-based Home Automation System developed using ESP32 and a Relay Module.

The ESP32 creates its own WiFi Access Point named **Suri_Home** and hosts a web server. Users can connect to the WiFi network and control electrical appliances through a mobile browser without requiring an internet connection.

## Features

* ESP32 WiFi Access Point Mode
* Web-Based Appliance Control
* Mobile Friendly Interface
* No Internet Required
* Relay-Based Switching
* Low Cost and Easy to Implement

## Components Used

* ESP32 DevKit
* 4 Channel Relay Module
* 5V Power Supply
* LED Bulb
* Jumper Wires

## Connections

* ESP32 GPIO23 → Relay IN1
* ESP32 GND → Relay GND
* 5V Supply → ESP32 VIN
* 5V Supply → Relay VCC

## Usage

1. Power ON the ESP32.
2. Connect mobile to:

   * WiFi Name: Suri_Home
   * Password: 12345678
3. Open browser and enter:

   * 192.168.4.1
4. Use ON/OFF buttons to control the appliance.

## Future Improvements

* Blynk Integration
* Alexa Integration
* Multi-Appliance Control
* Mobile Application

## Author

K. Surendar
ECE Student | IoT Enthusiast
