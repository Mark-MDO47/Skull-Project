# RCWL-0516 Investigation

Things to remember:
- power consumption
- no metal in front or back within 1 cm
- maybe good to use bypass capacitors

## Sources of Information
| Source | Info |
| --- | --- |
| https://github.com/jdesbonnet/RCWL-0516/issues/68 | --measured-- 70-80mA at 5V |
| https://github.com/jdesbonnet/RCWL-0516/issues/59 | --used-- ceramic 1uF, but more is better. If you have problems and the space put both an electrolytic (10uF?) and ceramic. |
| https://github.com/jdesbonnet/RCWL-0516/issues/63 | --used-- 10uf electrolytic followed by a ferrite bead and then a 100pf ceramic capacitor on the 5v feed to create a low pass filter over a wide bandwidth. |

Also this investigation documented an unusual behavior here:
- https://github.com/jdesbonnet/RCWL-0516/issues/63
- In other words: although there's constant movement i can see a decline in the maximum pulsewidth on the output which finally falls slightly below the calculated value of Tx which is around 2.4 seconds (see this picture within this repository for calulation and definitions). After that the sensor becomes "blind" for a slightly variable amount of time (somewhere between 30s and one minute) and returns back with reduced or full sensitivity* (did not find a clear timing pattern here). At the same time the pulsewidths on the output are declining, I can observe a slight decline in Tiwhich should be around 2.4 s as well.
*I do not observe a reduced sensitivity in terms of range, but in therms of the maximum duration of the activitiy "pulse" on the output. The maximum "initial" pulsewidth I get is around 6-8 seconds with continuous movements.
To me this looks like there's some issue with at least one capacitance not (un-)charging sufficiently within the timeframe it is supposed to. Measurements of the SMD parts do not indicate a fault to me - at least their values align with the datasheet's values besides R1 which is 1kOhms on my board. So I guess it must be some issue within the IC.

The way I read Issue 63 and its timeline figure indicates that for continuous motion, the device signals motion several times in the first 15 or so seconds then doesn't indicate again for somewhere around 70 or 80 seconds.

This wouldn't be a deal breaker for this project but is not desirable. I will need to test my modules.

