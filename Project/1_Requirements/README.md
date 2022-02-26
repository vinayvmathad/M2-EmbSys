# Heater System

## Table of contents
1. About Heater System
    1. Description
    2. Identify features
    3. 5W's &1H
    4. SWOT analysis 
2. Requirements
    1. High level requirements
    2. Low level requirements
3. Block diagram & exlanation
    1. Block Diagram
    2. Sensor
    3. Actuators
    4. Micro controller 
    5. Sub-system
4. Architecture
    1. Behavioural Diagram
    2. Structural Diagram
5. Test plan and output
----
# About heater system
1. Description
- This project is an Room heater system .This system helps to keep the temperature in the room warm in colder places where the temperature is below 0 degree celsius the room has to be kept warm always.The system consist of motion sensor and temperature sensor.
2. Identify features
-  Switch button shall be provided to power on or of the system
- Motion sensor shall be provided to detect people in the room .
- Temperature shall be increased or decreased  accoriding to nummber of people iin the room.
3. 5W's & 1H
- ![5w1h (1)](https://user-images.githubusercontent.com/98830897/155830353-2cea97d2-12e6-4a33-9ad9-e989a421ee2e.png)
4. SWOT Analysis
- ![Heater_](https://user-images.githubusercontent.com/98830897/155831153-1b518036-076d-4430-844d-055be4738bd3.png)
---
# Requirements

## High level requirements
|ID|Description |
|---|----------|
|HLR1|Detect the Temperature of the room using temperature sensors|
|HLR2|Detect if people are present in the room|
|HLR3|Make decisions whether to turn ON/OFF the heater|

## Low level requirements
|HLID|LLID|Description|
|----|----|------------|
|HLR1|LLR1|Switches to turn ON/OFF the systemn|
|HLR2|LLR1|Power Supply to the Microcontroller, Sensors and Actuators|