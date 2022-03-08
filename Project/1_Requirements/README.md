# V.A.I(Vehicle Ahead Indicator)

## Table of contents
1. About V.A.I
    1. Description
    2. Identify features
    3. 5W's &1H
    4. SWOT analysis 
2. Requirements
    1. High level requirements
    2. Low level requirements
3. Block diagram & explanation
    1. Block Diagram
    2. Sensor
    3. Micro controller 
    4. Sub-system
4. Architecture
    1. Behavioural Diagram
    2. Structural Diagram
5. Test plan and output
    1. High level and low level test plans.
----
# About Vehicle Ahead Indicator
1. Description
- This project is about detection of the car, in how much distance is the another car present in front of us and alertinng the driver by displaying in lcd display and signaling by different lights.Hear we use ultrasoniic sensor,leds,lcd display message.
2. Identify features
-  To detect the distance between ultrasonic sensor and the object placed infront of it and display the information on Lcd
-  To turn On the leds when the distance between the ultrasonic sensor and the object is too less
3. 5W's & 1H
- ![5w1h (1)](https://user-images.githubusercontent.com/98830897/156866872-4124e9ae-0e3c-4c38-a19e-3abf2587cb41.png)

4. SWOT Analysis
- ![object detection](https://user-images.githubusercontent.com/98830897/156866909-5f3c4b15-1669-4faa-abba-980ede282c85.png)
---
# Requirements

## High level requirements
|ID|Description |
|---|----------|
|HLR1|To detect distance |
|HLR2|To turn on the leds |
|HLR3|To display on LCD|

## Low level requirements
|HLID|LLID|Description|
|----|----|------------|
|HLR1|LLR1|Switches to turn ON/OFF the systemn|
|HLR2|LLR1|Power Supply to the Microcontroller, Sensors and Actuators|