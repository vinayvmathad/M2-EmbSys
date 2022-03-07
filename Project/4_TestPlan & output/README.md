##  High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Integrate Ultrasonic sensor with Microcontroller |  None | Succesfully  Integrated |Succesfully Integrated|Requirement based |

##  Low level test plan

| **Test ID** | **Description**       | **Exp I/P** | **Exp O/P** | **Actual Output** | Working OR Not |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Use Potentiometer to give input to the ultrasonic sensor |  -  | -|-|Working|
|  L_02       | Detect Distance of any Veichle placed infront of ultrasonic sensor |  For simulation : Expected input for ultrasonic sensor is given with help of potentiometer  | Distance of object from ultrasonic sensor in "M"|Distance of object from ultrasonic sensor in "M"|Working |
|  L_03       |If there is no car in front of the ultrasonic senor|Input from potentiometer to depict a car in front|Display on lcd & blink a light|Display on lcd & blink a light|Working|
|  L_04       |If there is car in front of the ultrasonic senor|Input from potentiometer to depict a car in front|Display on lcd & blink a light|Display on lcd & blink a light|Working|
|  L_05       |If there is car in front of the ultrasonic senor|Input from potentiometer to depict a car in front|Display on lcd & blink a light|Display on lcd & blink a light|Working|