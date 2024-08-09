# RCWL-0516 Investigation

**Table Of Contents**
* [Top](#rcwl\-0516-investigation "Top")
* [Bottom Line - Not Using It](#bottom-line-\--not-using-it "Bottom Line - Not Using It")
* [Sources of Information](#sources-of-information "Sources of Information")

# Bottom Line - Not Using It
[Top](#rcwl\-0516-investigation "Top")<br>

This doesn't seem to work well outdoors. Some reports say it is due to wind, others say it needs lots of reflections to operate.

Since I want to use this outdoors, this does not make sense for this project. Maybe for an inside sensor.

| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| Doppler Radar RCWL | 10Pcs RCWL-0516 Microwave Induction Module Microwave Radar Sensor Intelligent Induction Switch Module Human Detection Sensor<br>**input**: 4V-28V @ 2.8mA~3mA<br>**output**: 3.2V-3.4V (Typ 3.3V) w/drive 100mA | https://www.amazon.com/gp/product/B0CB3ZPJJH | $0.80 |

## Sources of Information
[Top](#rcwl\-0516-investigation "Top")<br>

Things to remember:
- power consumption
- no metal in front or back within 1 cm
- maybe good to use bypass capacitors

This is my first attempt at using the RCWL-0516. Electrically it is incredibly easy - it accepts a wide range of power voltages and generates a simple long-lasting pulse if it sees motion.

According to reports, it radiates at a frequency of about 3.2 GHz, which is between two popular WiFi frequencies of 2.4 GHz and 5 GHz.

There is a great deal of information on this module from these sources:
- https://www.instructables.com/All-About-RCWL-0516-Microwave-Radar-Motion-Sensor/
- https://www.rogerclark.net/investigating-a-rcwl-9196-rcwl-0516-radar-motion-detector-modules/
- https://github.com/jdesbonnet/RCWL-0516
- https://www.dreamgreenhouse.com/reviews/sensors/RCWL0516.php
- https://www.snapeda.com/parts/rcwl-9196/RCWL/datasheet/

After some experiments and reading, I think I need to do more investigation before committing to this chip. See my progress here:
- https://github.com/Mark-MDO47/Skull-Project/blob/master/RCWL-0516/README.md

It checks for motion (generates a radar pulse) about once every two seconds. This can be adjusted (I did not choose to do this) to take longer between checks but no provision is made to make it check more often.

It looks like it will fit nicely in the ping-pong ball. It sticks out a little but that makes it easy to attach the wires.

| Source | Info |
| --- | --- |
| https://github.com/jdesbonnet/RCWL-0516/blob/master/README.md | --frequency-- found the signal at 3.181GHz |
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

The reason I won't be using it has to do with its behavior outside - it doesn't seem to operate as well when the signal can just dissipate into the distance.
