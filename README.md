# Skull-Project
Halloween skull with displayed eye and person sensor

<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/skull_prjct_first_light.jpg" width="200" alt="Image of skull project first time Hallowing is inserted">

<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/skull_prjct_RCWL-0516_and_radome.jpg" width="200" alt="Image of skull project RCWL-0516 and it's ping-pong radome">

<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/skull_prjct_RCWL-0516_test_trace_5secperdiv.jpg" width="200" alt="Image of skull project RCWL-0516 test at 5 seconds per division">

**Table Of Contents**
* [Top](#skull\-project "Top")
* [Idea](#idea "Idea")
  * [Skull](#skull "Skull")
  * [Eyeball - Hallowing M4 Express](#eyeball-\--hallowing-m4-express "Eyeball - Hallowing M4 Express")
  * [Doppler Radar - RCWL-0516](#doppler-radar-\--rcwl\-0516 "Doppler Radar - RCWL-0516")
* [Parts List](#parts-list "Parts List")

## Idea
[Top](#skull\-project "Top")<br>
Kudos to Adafruit for their continuing work on the "Uncanny Eyes" project and specifically their "All Seeing Skull" project:
- https://learn.adafruit.com/hallowing-all-seeing-skull
- https://learn.adafruit.com/animated-electronic-eyes

I am making a build of the hallowing-all-seeing-skull using the Hallowing M4 Express but substituting the **RCWL-0516** Doppler Radar for the PIR Sensor.
- To provide the "milky eye" effect for the RCWL-0516, I will make a "radome" out of a ping-pong ball.

### Skull
[Top](#skull\-project "Top")<br>
As seen in the parts list, I chose a plastic skull for the project. The size is pretty good; a bit of a tight fit for the HalloWing, but it still looks quite good in practice.

### Eyeball - Hallowing M4 Express
[Top](#skull\-project "Top")<br>
The Hallowing M4 Express is amazing! It makes so many different eyeballs available and they are all beautiful!
- https://learn.adafruit.com/adafruit-hallowing-m4 - for details on this

As seen in the parts list, you can get some very nice fitted lenses to make the effect even better.

If using the USB Micro-B connector to power the Hallowing, leave the ID and data pins floating.

### Doppler Radar - RCWL-0516
[Top](#skull\-project "Top")<br>
This is my first attempt at using the RCWL-0516. Electrically it is incredibly easy - it accepts a wide range of power voltages and generates a simple long-lasting pulse if it sees motion.

According to reports, it radiates at a frequency of about 3.2 GHz, which is between two popular WiFi frequencies of 2.4 GHz and 5 GHz.

There is a great deal of information on this module from these sources:
- https://www.instructables.com/All-About-RCWL-0516-Microwave-Radar-Motion-Sensor/
- https://www.rogerclark.net/investigating-a-rcwl-9196-rcwl-0516-radar-motion-detector-modules/
- https://github.com/jdesbonnet/RCWL-0516

After some experiments and reading, I think I need to do more investigation before committing to this chip. See my progress here:
- https://github.com/Mark-MDO47/Skull-Project/blob/master/RCWL-0516/README.md

It checks for motion (generates a radar pulse) about once every two seconds. This can be adjusted (I did not choose to do this) to take longer between checks but no provision is made to make it check more often.

It looks like it will fit nicely in the ping-pong ball. It sticks out a little but that makes it easy to attach the wires.

## Parts List
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| plastic skull | MAGICLULU 1Pcs Table Top Skeleton Head Skull Head Model Simulation Skeleton Head Life Size Skeleton Skull for Halloween Décor | https://www.amazon.com/dp/B0C777NBDJ | $13 |
| Hallowing M4 | Adafruit HalloWing M4 Express - Goth Adafruit Black Edition | https://www.adafruit.com/product/4300 | $40 |
| Plastic lens | Convex Plastic Lens with Edge - 40mm Diameter | https://www.adafruit.com/product/3917 | $4 |
| lens holder | Clear Acrylic Lens Holder + Hardware Kit for HalloWing | https://www.adafruit.com/product/4013 | $3 |
| small LI battery | Lithium Ion Polymer Battery Ideal For Feathers - 3.7V 400mAh | https://www.adafruit.com/product/3898 | $7 |
| Batteries | 4 Pack 3.7 Volt Button Top Rechargeable Batteries and 18650 Battery Charger,Lithium Battery 4000mAh (Battery and Charger) | https://www.amazon.com/gp/product/B0CP6V26QX | $25 |
| Battery Holder | 5pcs 18650 Battery Holder 2 Slot 3.7V 18650 Battery Clip Holder Box Storage Case with Soldering Pin Copper Contacts | https://www.amazon.com/gp/product/B09LC13D9P | $2.60 |
| Doppler Radar RCWL | 10Pcs RCWL-0516 Microwave Induction Module Microwave Radar Sensor Intelligent Induction Switch Module Human Detection Sensor<br>**input**: 4V-28V @ 2.8mA~3mA<br>**output**: 3.2V-3.4V (Typ 3.3V) w/drive 100mA | https://www.amazon.com/gp/product/B0CB3ZPJJH | $0.80 |
| Micro-B Male | 20PCS Micro USB Male Port Connector 5 Pin USB Connectors Straight Jack Solder Micro-USB Repair Replacement Adapter | https://www.amazon.com/dp/B08SL1QHL3 | $0.40 |

