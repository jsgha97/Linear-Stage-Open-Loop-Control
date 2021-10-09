# Full Stepping Sequence
The Arduino code for the full stepping portion consisted of two "for loops" with both containing four steps of energizing the coil and manipulating the electric polarity into the
correct direction of rotation. The program executed so that the stepper motor turns one full cycle clockwise and reverses to counterclockwise. In a full step setting, both cycles
included 200 full steps. Three different data of a bidrectional motion cycle were obtained for the stepper motor at three different speed settings: 2500, 3500, and 4500 in terms 
of "delayMicroseconds". 

The Arduino serial monitor displayed data of time elapsed and the corresponding number of steps. The data was acquired into excel to calculate the RPM and angular displacement
of the rotor. The speed of the motor was calculated by taking the number of steps and dividing by time elapsed to yield value in steps/min. The speeds for the three different
tests were found to be 118RPM, 84RPM, and 65RPM. The figure below shows the angular displacement over time plot for the three different speed settings of the stepper motor. This
figure also represents the motor executing a bidrectional cycle. As expected, the rotor completes a full cycle faster in higher speed sequencing. The input of the speed setting 
to achieve the proper homing sequence then can be determined using this relationship.

![full step sequence](https://user-images.githubusercontent.com/92079163/136640285-02d8f5c9-efe2-4ca0-ae90-52a0f5d73c68.PNG)




# Half Stepping Sequence
The second portion of the Arduino code consists of the half stepping concepts. The program also consisted of two "for loops" with both containing eight steps of energizing the 
coil and manipulating the electric polarity into the correct direction of rotation. Inf a half step setting, both cycles include 400 half steps. Three different data of a 
bidirectional motion cycle were obtained for the stepper motor at three different speed settings similar to the full stepping sequence: 54RPM, 42RPM, and 32RPM. It can be 
observed that the speed in RPM is significantly different compared to that of the full stepping sequence. This is because the half-stepping motor takes twice the amount of steps
in order to complete its cycle; however, this should allow a more precise control of the stepper motor.

![half step sequence](https://user-images.githubusercontent.com/92079163/136640422-7926b1f8-870b-4642-8037-e1468fad3981.PNG)




# Multicycling
The number of cylces or revolution the stepper motor turns in either full or half step setting can be modified with a "counter" variable in the loop statement. For a counter 
variable of 50 for example, the rotor would make one full revolution of 360°. The figure below shows the result of changing the counter variable from 50 to 100. Doing so programmed
the stepper motor to execute a bidirectional cycle of two full rotations clockwise and two full rotations counterclockwise. The figure also shows the difference between full step
and half step sequencing. The half step sequence experimentally required more time to complete its motion cycle beceause it required twice as many steps. However, the advantage
of half-stepping is greater precision and less vibration at low-speed operation as demonstrated.

![multiple cycle comparison](https://user-images.githubusercontent.com/92079163/136640492-1a9ec87e-8bbb-4545-a25b-3045ae1f2d2a.PNG)
