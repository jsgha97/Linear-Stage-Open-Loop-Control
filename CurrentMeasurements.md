# Current Calibration
Using the first Arduino program, the two figures below show two different current measurements in different settings over a dimensionless time. In the first set, only coil A
was energized while coil B was left idle. The first figure depicts coil A reaching a steady state value of 2.5A when energized while coil B produces minimal current as expected. 
The current does not immediately stabilize upon energizing the coil because of resistance and instrumental uncertainties. The same result was expected and produced when only coil B
was energized while coil A was idle. Several readings had to be repeated to eliminate the transient state and obtain solid value for the current flow.

![coil A current](https://user-images.githubusercontent.com/92079163/136639918-1fc2402b-c50a-4a07-b9aa-5fbcea1e6141.PNG)

The second figure dpecits the case where both coil A and B were energized simultaneously. Compared to the first figure, it can be seen that there are fluctuations in current readings
for both A and B at around 1.9A. The motor shield experiences a higher current load and longer transient state in order to support both the energized coils. This can also be expected
when the full linear stage is implemented: there would be an increase in current flow that needs to be accounted for in order to support the increasing incremental load on the 
stage during performance.

![coil a and b current](https://user-images.githubusercontent.com/92079163/136639988-8d7f5e6c-1a09-40a3-958b-3281dd9a3083.PNG)
