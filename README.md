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

