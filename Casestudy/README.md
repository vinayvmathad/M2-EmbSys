# M2-EmbSys

## Case Study : Heater System

![Heater](https://user-images.githubusercontent.com/98830897/154789221-5f5329e8-bb29-4a41-bda7-bf873bcf5aa2.PNG)

## Power Supply
- External source of power supply that powers all devices, buttons and microcontroller.

## Buttons
- Act as a circuit breaker to either power the system or isolate the system.

## LED’s
- Act as a mean to communication with the user.

## Microcontroller
- Performs all operations required by our system. Takes input as Temperature of the room and further processes this data to decide whether heater needs to be turned on/off.

## Motion Sensors
- To determine any human presence in the room.

## Temperature Sensors
- To determine the temperature of the room. 

## Actuators
- Externally connected devices that perform operation as per the decision which the microcontroller takes. (In my case, Turn ON/Off the heater)

## Clock 
- For smooth working of the micro controller.

-------
# V - Model

## Concept of operations:
- Heater.

## Requirments:
- System: micro controller.
- Sub system: motion sensor,sensor.

### Low level requirments:
- Switches to turn ON/OFF the system.
- Power Supply to the Microcontroller, Sensors and Actuators.

### High Level Requirements
- To detect the Temperature of the room using temperature sensors.
- To detect if people are present in the room .
- To make decisions whether to turn ON/OFF the heater.

## Test case:
- when current is passed the system is working or not.(Y/N)
- when current is passed led should turn on.(Y/N)
- Micro controller is reciving signal. (Y/N)
- Motion sensor working .(Y/N)
	
