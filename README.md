# Linear-Stage-Open-Loop-Control
The purpose of this project was to build an automated system capable of moving carriage to predefined locations along a linear path. The project involved applying the principle operations of a stepper motor and programmatically controlling the linear position and speed of an object with absolute precision.

Homing processes use open-loop control.  In this system, we are not continuously measuring the position, but the position is determined based on the number of steps that are sent to the motor that is moving the system. The diagram below shows a simple flow chart of the homing process.

![homing stage diagram](https://user-images.githubusercontent.com/92079163/136638777-4b46a66a-4aed-48f5-aa82-92fd665c0467.PNG)

We start with the program from the Arduino in which we input the number of steps (in full step or half step sequencing) and then compile onto the stepper motor. The lead screw is the central mechanism that provides linear motion to the nut and carriage by turning the number of revolutions based on the number of steps encoded. A formula can be defined as x = nL/S where:

n is the number of steps 

L is the lead of the screw (how much the nut displaces per 1 revolution of the screw; L is determined to be 8mm/revolution) 

S is the steps/revolution (in the case of a full step sequence, there are 200 steps per revolution

x is the linear distance produced as a result.

While L and S are characteristics of the system, x and n can be determined interchangeably. For example, if the carriage is required to move 10 mm, we can solve for the number of steps by rearranging the equation and derive n as 250. Meaning, in order to move the carriage 10 mm in full sequencing, we need to give the stepper motor an input of 250 steps. To fully understand and apply these concepts, the project involved testing the stepper motor using full step and half step sequencing.

In a full step sequence setting, the motor can be imagined as a circle with four equal points around the circle as phases (coil A and coil B). Full step sequence divides the circles into 4 equal parts by constantly energizing two of the phases using pulse and direction (current and electric polarity) command from the Arduino program. The stepper motor used in this project had 200 steps to result in 1 full revolution of motor rotation.

![full stepper](https://user-images.githubusercontent.com/92079163/136638923-dafe7218-5de4-4b10-8ee6-684709043341.PNG) 

Half step sequence involves alternating between energizing a single-coil and both coils to provide the motor with higher resolution. Since the stepper motor has 200 steps, this type of sequencing would have 400 steps instead. The advantage of half-stepping is for controlling the motor with greater precision and less vibration than full-stepping. However, this process is more complicated because it incorporates more steps and varying torque with different number of coils being energized.

![half stepper](https://user-images.githubusercontent.com/92079163/136638927-e39607b1-7b7b-47ec-bf8e-a4702f6e7cd9.PNG)

The final assembly of the homing stage with the stepper motor and respective electronic components are shown below. A button switch was integrated into the linear stage to execute the following homing sequence: 
1. The user manually presses the switch to begin homing. The carriage moves toward the switch at the speed of 84.RPM (delayMicroseconds of 3500 in full step sequencing).
2. Once the switch detects contact with the carriage, the carriage will retract 5mm from the switch at 50% reduced speed.
3. The carriage moves again toward the switch at the speed of 32. RPM (delayMicroseconds of 4500 in half step sequencing). This is to ensure that the carriage moves and detects the switch with higher precision based on the concepts of half stepping.
4. Once the switch detects contact with the carriage again, the carriage moves 30mm away from the switch at 32. RPM using half stepping.
5. The motor shuts off and finalizes the homing process.



<img src= "https://user-images.githubusercontent.com/92079163/136639075-97681a76-9cc7-4d0e-b407-e6152d7cf134.jpeg" width="700" height="550">



