# Skull-Project
Halloween skull with displayed eye and person sensor

<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/skull_prjct_first_light.jpg" width="200" alt="Image of skull project first time Hallowing is inserted">

**Table Of Contents**
* [Top](#skull\-project "Top")
* [Idea](#idea "Idea")
  * [Skull](#skull "Skull")
  * [Eyeball - Hallowing M4 Express](#eyeball-\--hallowing-m4-express "Eyeball - Hallowing M4 Express")
  * [Eyeball - Hallowing M0 Express](#eyeball-\--hallowing-m0-express "Eyeball - Hallowing M0 Express")
  * [PIR sensor](#pir-sensor "PIR sensor")
* [Power](#power "Power")
* [Circuit](#circuit "Circuit")
* [Parts List](#parts-list "Parts List")
* [Not Using for This project](#not-using-for-this-project "Not Using for This project")
  * [Not Using Doppler Radar - RCWL-0516](#not-using-doppler-radar-\--rcwl\-0516 "Not Using Doppler Radar - RCWL-0516")

## Idea
[Top](#skull\-project "Top")<br>
Kudos to Adafruit for their continuing work on the "Uncanny Eyes" project and specifically their "All Seeing Skull" project:
- https://learn.adafruit.com/hallowing-all-seeing-skull
  - https://github.com/adafruit/Adafruit_Learning_System_Guides/tree/main/All_Seeing_Skull
- https://learn.adafruit.com/animated-electronic-eyes

I am making a build of the hallowing-all-seeing-skull using the Hallowing M4 Express.
- I was going to substitute the **RCWL-0516** Doppler Radar for the PIR Sensor but decided it wasn't a good choice for outdoor use.
- see https://github.com/Mark-MDO47/Skull-Project/blob/master/RCWL-0516/README.md if you are interested in the reasoning.

### Skull
[Top](#skull\-project "Top")<br>
As seen in the parts list, I chose a plastic skull for the project. The size is pretty good; a bit of a tight fit for the HalloWing, but it still looks quite good in practice.

### Eyeball - Hallowing M4 Express
[Top](#skull\-project "Top")<br>
The Hallowing M4 Express is amazing! It makes so many different eyeballs available and they are all beautiful!
- https://learn.adafruit.com/adafruit-hallowing-m4 - for details on this
- https://learn.adafruit.com/adafruit-hallowing-m4/pinouts - pinout
  - https://github.com/adafruit/Adafruit-Hallowing-M4-PCB/blob/master/Adafruit%20HalloWing%20M4%20Pinout.pdf - pinout
- https://learn.adafruit.com/assets/81144 - schematic
- https://circuitpython.org/board/hallowing_m4_express/ - for circuitPython info

Yet More Documentation
- http://ww1.microchip.com/downloads/en/DeviceDoc/60001507E.pdf - Datasheet for ATSAMD51G18
- https://github.com/adafruit/Adafruit_MSA301/blob/master/MSA301-V1.0-ENG.PDF - Datasheet for MSA301 accelerometer
- https://cdn-shop.adafruit.com/product-files/3787/3787_tft_QT154H2201__________20190228182902.pdf Datasheet for ST7789 LCD Display
- https://github.com/adafruit/Adafruit-Hallowing-M4-PCB - EagleCAD files on GitHub
- https://github.com/adafruit/Fritzing-Library/blob/master/parts/Adafruit%20Hallowing%20M4.fzpz 3D models on GitHub
- https://github.com/adafruit/Adafruit-Hallowing-M4-PCB/blob/master/Adafruit%20HalloWing%20M4%20Pinout.pdf - Fritzing object in the Adafruit Fritzing Library
- PDF for Hallowing M4 Board Diagram on GitHub

As seen in the parts list, you can get some very nice fitted lenses to make the effect even better.

If using the USB Micro-B connector to power the Hallowing, leave the ID and data pins floating.

### Eyeball - Hallowing M0 Express
[Top](#skull\-project "Top")<br>
There is also an "M0" version with a lower resolution display, but still beautiful!
- https://learn.adafruit.com/adafruit-hallowing
- https://learn.adafruit.com/adafruit-hallowing/adapting-sketches-to-m0

### PIR sensor
[Top](#skull\-project "Top")<br>
Will be using a PIR sensor instead of the radar sensor. Probably the one shown in the parts list.

It turns out that the plastic cover is actually a fresnel lens for infrared and not just protection or decoration. This unit has a lens of a size that should fit well in the skull eye-socket.

Also I think the version I ordered has a potentiometer adjustment for sensitivity which might come in handy.

## Power
[Top](#skull\-project "Top")<br>
The PIR sensor uses 5V-to-12V power so I will go with 7.4V-8.0V Battery to a UBEC to 5V through the USB into the Hallowing; the M4 version (at least) will pass the 5V on through to the PIR.

The USB standard specifies a Vbus range of 4.75V to 5.25V. Measuring the output of my UBEC I see 5.6V.
With USB connected to a PC the measured voltage output from the sensor connector is 4.7V.
With USB disonnected running from a fully powered LIPO battery the measured voltage output from the sensor connector is 4.1V and dropping.

The GND pin on the FeatherWing connector between AREF and A0 matches the GND pin on the sensor connector.
The "GND" pin at the bottom of that connector below MISO/RX/TX is at a different potential about 3.5V from ground with USB connected ???.

The LED on the latching button switch works with 3.3V I/O output even though the switch is rated at 12V - that simplifies things greatly!

The PIR sensor will run succesfully with the HalloWing M4 powered by USB and the LIPO battery mostly charged.

## Circuit
[Top](#skull\-project "Top")<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0.png" width="600" alt="schematic of skull project version 1.0">

The pin numbers as defined in the AdaFruit All_Seeing_Skull project for the Hallowing M0.
My comments are included regarding use with the Hallowing M4.

| Pin Name | M0 | M4 | Definition | Comment |
| --- | --- | --- | --- | --- |
| eyeInfo[e].select | 39 | 44 | config.h | select pin for eye display |
| eyeInfo[e].wink | -1 | -1 | config.h | not used with HalloWing |
| DISPLAY_BACKLIGHT | 7 | 47 | config.h | N/A |
| DISPLAY_RESET | 37 | 46 | config.h | N/A |
| MOTION_SENSOR_PIN | A11 | A8 | All_Seeing_Skull.ino | N/A |
| BLINK_PIN | 1 | N/A | config.h | do not want; use AUTOBLINK |
| DISPLAY_FORCE_ON | 6 | 6 | TBD | additional capability to add |
| DISPLAY_FORCE_ON_LED | 5 | 5 | TBD | additional capability to add |

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
| Micro-B Male | 20PCS Micro USB Male Port Connector 5 Pin USB Connectors Straight Jack Solder Micro-USB Repair Replacement Adapter | https://www.amazon.com/dp/B08SL1QHL3 | $0.40 |
| PIR sensor | PIR (motion) sensor | https://www.adafruit.com/product/189 | $10 |
| latching push button | DaierTek Latching Push Button Switch with blue LED | https://www.amazon.com/dp/B097N7RBFP | $3 |
| 0.25W resistors | 330 and 10K Ohm through-hole resistors | https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-330R/1636<br>https://www.digikey.com/en/products/detail/yageo/MFR-25FBF52-10K/13219 | $0.20 |


## Not Using for This project

### Not Using Doppler Radar - RCWL-0516
[Top](#skull\-project "Top")<br>
This doesn't seem to work well outside, so I won't be using it on this project. If more details are desired see the following
- https://github.com/Mark-MDO47/Skull-Project/blob/master/RCWL-0516/README.md

