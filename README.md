# Skull-Project
Halloween skull with displayed eye and person sensor

Youtube: https://youtu.be/qxJXeUGvmBE

| skull first light | control box | control box open |
| --- | --- | --- |
| <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/skull_prjct_first_light.jpg" width="200" alt="Image of skull project first time Hallowing is inserted"> | <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/CB_Closed_3d_CableSide.jpg" width="200" alt="Image of skull project control box"> | <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/CB_Open_top.jpg" width="200" alt="Image of skull project control box open"> |
| **1-eye skull and control box** | **inside view of 1-eye skull** | **joke of the day** |
| <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/SkullAndControlBox.png" width="200" alt="Assembled Skull and Control Box"> | <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/SkullInside.png" width="200" alt="Inside view of Skull"> | Your Ad Here (just kidding...) |

**Table Of Contents**
* [Top](#skull\-project "Top")
* [Idea](#idea "Idea")
  * [Skull](#skull "Skull")
  * [Eyeball - Hallowing M4 Express](#eyeball-\--hallowing-m4-express "Eyeball - Hallowing M4 Express")
  * [Eyeball - Hallowing M0 Express](#eyeball-\--hallowing-m0-express "Eyeball - Hallowing M0 Express")
  * [PIR sensor](#pir-sensor "PIR sensor")
* [Software](#software "Software")
* [Power](#power "Power")
* [Circuit](#circuit "Circuit")
  * [Circuit for Skull and Control Box](#circuit-for-skull-and-control-box "Circuit for Skull and Control Box")
  * [Circuit for Optional 2nd Eye](#circuit-for-optional-2nd-eye "Circuit for Optional 2nd Eye")
  * [Circuit for Person Motion Sensors](#circuit-for-person-motion-sensors "Circuit for Person Motion Sensors")
  * [Pin Definitions Hallowing M4 mdo_m4_eyes - Code That Was Used](#pin-definitions-hallowing-m4-mdo_m4_eyes-\--code-that-was-used "Pin Definitions Hallowing M4 mdo_m4_eyes - Code That Was Used")
  * [M4 FeatherWing connector Ground pins](#m4-featherwing-connector-ground-pins "M4 FeatherWing connector Ground pins")
  * [Pin Definitions Arduino Nano Pulse Extender](#pin-definitions-arduino-nano-pulse-extender "Pin Definitions Arduino Nano Pulse Extender")
  * [Pin Definitions All_Seeing_Skull - Code Not Used](#pin-definitions-all_seeing_skull-\--code-not-used "Pin Definitions All_Seeing_Skull - Code Not Used")
* [Parts List Skull and Control Box](#parts-list-skull-and-control-box "Parts List Skull and Control Box")
* [Parts List PIR Sensor](#parts-list-pir-sensor "Parts List PIR Sensor")
* [Parts List Microwave Motion Sensor](#parts-list-microwave-motion-sensor "Parts List Microwave Motion Sensor")
* [Parts List Optional 2nd Eye](#parts-list-optional-2nd-eye "Parts List Optional 2nd Eye")
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
  - https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/Adafruit-HallowingM4_in_KiCad.pdf - my schematic translated thru KiCad 7.0
- https://circuitpython.org/board/hallowing_m4_express/ - for circuitPython info

Yet More Documentation
- http://ww1.microchip.com/downloads/en/DeviceDoc/60001507E.pdf - Datasheet for ATSAMD51G18
- https://github.com/adafruit/Adafruit_MSA301/blob/master/MSA301-V1.0-ENG.PDF - Datasheet for MSA301 accelerometer
- https://cdn-shop.adafruit.com/product-files/3787/3787_tft_QT154H2201__________20190228182902.pdf Datasheet for ST7789 LCD Display
- https://github.com/adafruit/Adafruit-Hallowing-M4-PCB - EagleCAD files on GitHub
- https://github.com/adafruit/Fritzing-Library/blob/master/parts/Adafruit%20Hallowing%20M4.fzpz 3D models on GitHub
- https://github.com/adafruit/Adafruit-Hallowing-M4-PCB/blob/master/Adafruit%20HalloWing%20M4%20Pinout.pdf - Fritzing object in the Adafruit Fritzing Library
- PDF for Hallowing M4 Board Diagram on GitHub

One way to synchronize two eyes
- https://learn.adafruit.com/synchronized-eyes-with-two-hallowings

As seen in the parts list, you can get some very nice fitted lenses to make the effect even better.

### Eyeball - Hallowing M0 Express
[Top](#skull\-project "Top")<br>
There is also an "M0" version with a lower resolution display, but still beautiful!
- https://learn.adafruit.com/adafruit-hallowing
- https://learn.adafruit.com/adafruit-hallowing/adapting-sketches-to-m0

For this project I decided to just use the more capable M4 version, but left some information about the differences with the M0 in case I want to build another.

### PIR sensor
[Top](#skull\-project "Top")<br>
Using the PIR sensor instead of the RCWL-0516 doppler radar sensor.

It turns out that the plastic cover on the PIR sensor is actually a fresnel lens for infrared and not just protection or decoration. This unit has a lens of a size that should fit well in the skull eye-socket.

It has a potentiometer adjustment for sensitivity so it can be tuned for distance and local weather conditions.

## Software
[Top](#skull\-project "Top")<br>
See these for the code used in this project:
| Descrip | URL |
| --- | --- |
| How to load/initialize the M4 | https://github.com/Mark-MDO47/expts_HallowingM4 |
| Where I develop the M4 code for this and other projects, forked from AdaFruit | https://github.com/Mark-MDO47/mdo_m4_eyes |
| Teensy and M0 code, forked from AdaFruit | https://github.com/Mark-MDO47/Uncanny_Eyes |
| How to expand with AI | https://github.com/Mark-MDO47/HalloweenEyes |

For this project I decided to just use the more capable Hallowing M4 version (see **mdo_m4_eyes** above), but kept some information here about the differences with the M0 in case I want to build one with the M0.

The software can use the PIR sensor to turn the eye backlight on when it detects movement. There is a pushbutton that can toggle between having the backlight always-on or having the backlight depend on the PIR sensor. This button has an LED that is lit when the mode is always-on.

## Power
[Top](#skull\-project "Top")<br>
The PIR sensor uses 5V-to-12V power so I will go with 7.4V-8.0V Battery to a UBEC to 5V through the USB into the Hallowing; the M4 version (at least) will pass the 5V on through to the PIR.

The USB standard specifies a Vbus range of 4.75V to 5.25V.
- Measuring the output from plugged into PC I see 5.1V
- Measuring the output of my UBEC I see 5.6V.
- Measured at the end of the 12 foot cable USB interface with no load I see 5.3V.
With USB connected to a PC the measured voltage output from the sensor connector is 4.7V.<br>
With USB disconnected running from a fully powered LIPO battery the measured voltage output from the sensor connector is 4.1V and dropping.

The Adafruit documents say that when using the USB Micro-B connector to power the Hallowing, leave the ID and data pins floating.

The LED on the latching button switch works with 3.3V I/O output even though the switch is rated at 24V - that simplifies things greatly!

The PIR sensor will run succesfully with the HalloWing M4 powered by USB and the LIPO battery mostly charged.

## Circuit
[Top](#skull\-project "Top")<br>

### Circuit for Skull and Control Box
[Top](#skull\-project "Top")<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0.png" width="600" alt="schematic of skull project version 1.0">

### Circuit for Optional 2nd Eye
[Top](#skull\-project "Top")<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0_2ndEye.png" width="300" alt="schematic of skull project version 1.0 optional 2nd eye">

### Circuit for Person Motion Sensors
[Top](#skull\-project "Top")<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0_PersonSensors.png" width="300" alt="schematic of skull project version 1.0 person sensors">

### Pin Definitions Hallowing M4 mdo_m4_eyes - Code That Was Used
[Top](#skull\-project "Top")<br>
The following are the pins that I added to the M4 code in https://github.com/Mark-MDO47/mdo_m4_eyes from directory **mdo_m4_skull_project**. mdo_m4_skull_project.ino is just a copy of M4_Eyes.ino renamed so I can use it from this directory.

| Pin Name | M0 | M4 | Definition | Comment |
| --- | --- | --- | --- | --- |
| MOTION_SENSOR_PIN | A11 | A8 | mdo_skull_project.cpp | sense when to turn on display backlight |
| DISPLAY_FORCE_ON_LED | 5 | 5 | mdo_skull_project.cpp | output to button LED to say backlight forced on |
| DISPLAY_FORCE_ON | 6 | 6 | mdo_skull_project.cpp | input from button to enable/disable backlight forced on<br> OR optional 2nd eye turn display on |
| SCNDEYE_DSPLY_ON | 9 TBR | 9 | mdo_skull_project.cpp | output to optional 2nd eye to turn display on |
| SCNDEYE_1ST_EYE | 10 TBR | 10 | mdo_skull_project.cpp | input with internal pullup: HIGH if primary eye |

### M4 FeatherWing connector Ground pins
[Top](#skull\-project "Top")<br>
There is a discrepancy on GND pins between the M4 pinouts diagram and the M4 schematic
- https://github.com/adafruit/Adafruit-Hallowing-M4-PCB/blob/master/Adafruit%20HalloWing%20M4%20Pinout.pdf
- https://cdn-learn.adafruit.com/assets/assets/000/081/144/original/adafruit_products_Hallowing_M4_Schematic.png?1568924235

**good** The pinouts GND pin on the FeatherWing connector between AREF and A0 matches the GND pin on the sensor connector.<br>
**bad** The pinouts GND pin at the bottom of that connector below MISO/RX/TX is marked on the **schematic** as D4 and NC.
- I measured this pin at about 3.5V from ground with USB connected and displaying the eyeball with unchanged software.
- My theory is that it is **D4** but maybe connected instead of "no connect".

### Pin Definitions Arduino Nano Pulse Extender
[Top](#skull\-project "Top")<br>
I gave up trying to make a circuit to edge-detect without a clock - too complicated! I just used one of my many old Arduino Nanos.

The following are the pin definitions for the pulse-extender Arduino Nano in the Microwave Person Sensor.

| Pin Name | NANO | Definition | Comment |
| --- | --- | --- | --- |
| INTERRUPT_PIN | 2 | interrupt pin for edge detection | must be pin 2 or 3 |
| EXTENDED_PULSE_PIN | 12 | output pin; pulse extended by two seconds | 5V, must shift to 3.5V |

### Pin Definitions All_Seeing_Skull - Code Not Used
[Top](#skull\-project "Top")<br>
The pin numbers as defined in the AdaFruit All_Seeing_Skull project for the Hallowing M0.<br>
My comments are included regarding use with the Hallowing M4.

| Pin Name | M0 | M4 | Definition | Comment |
| --- | --- | --- | --- | --- |
| eyeInfo[e].select | 39 | 44 | config.h | select pin for eye display |
| eyeInfo[e].wink | -1 | -1 | config.h | not used with HalloWing |
| DISPLAY_BACKLIGHT | 7 | 47 | config.h | N/A |
| DISPLAY_RESET | 37 | 46 | config.h | N/A |
| MOTION_SENSOR_PIN | A11 | A8 | All_Seeing_Skull.ino | turn on display backlight |
| BLINK_PIN | 1 | N/A | config.h | do not want; use AUTOBLINK |

## Parts List Skull and Control Box
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| plastic skull | MAGICLULU 1Pcs Table Top Skeleton Head Skull Head Model Simulation Skeleton Head Life Size Skeleton Skull for Halloween Décor | https://www.amazon.com/dp/B0C777NBDJ | $13 |
| Hallowing M4 | Adafruit HalloWing M4 Express - Goth Adafruit Black Edition | https://www.adafruit.com/product/4300 | $40 |
| Plastic lens | Convex Plastic Lens with Edge - 40mm Diameter | https://www.adafruit.com/product/3917 | $4 |
| lens holder | Clear Acrylic Lens Holder + Hardware Kit for HalloWing | https://www.adafruit.com/product/4013 | $3 |
| Batteries | 4 Pack 3.7 Volt Button Top Rechargeable Batteries and 18650 Battery Charger,Lithium Battery 4000mAh (Battery and Charger) | https://www.amazon.com/gp/product/B0CP6V26QX | $25 |
| Battery Holder | 5pcs 18650 Battery Holder 2 Slot 3.7V 18650 Battery Clip Holder Box Storage Case with Soldering Pin Copper Contacts | https://www.amazon.com/gp/product/B09LC13D9P | $2.60 |
| UBEC 5V 3A | 5V/6V Hobbywing 3A UBEC Max 5A |https://www.aliexpress.us/item/3256805502614547.html | $1.50 |
| M USB MicroB Breakout | 4pcs USB MicroB Plug Breakout board 5pin Male Connector Adapter Module Compatible with Arduino for Electronics Projects | https://www.amazon.com/dp/B09W2QHL2P | $2.50 |
| 12mm button switches LED | 5Pcs 12mm Metal Raised Head Latching Push Button Switch Waterproof Anti-Vandal Silver Shell with 15cm Cable 12V-24V 1NO ON/Off for 1/2" Mounting Hole with Halo Ring Red LED | https://www.amazon.com/dp/B0BJCMDGK2 | $2.65 |
| 7/16 washer | 7/16" Flat Washer, 18-8 (304) Stainless Steel Washers Flat, 7/16 inch Stainless Flat Washers, 80 PCS | https://www.amazon.com/gp/product/B0CM3MCY27 | $0.11 |
| DPDT Knife Switch | QWORK Educational Double Pole Cutter Switch, Double Throw Electrical Switch, 4 Pack Premium Electrical Switches with Excellent Safety and Durability for Multiple Applications | https://www.amazon.com/gp/product/B0CH7X6CJG | $3.85 |
| 0.25W resistors | 200 and 10K Ohm through-hole resistors | https://www.digikey.com/en/products/detail/yageo/MFR-25FBF52-200R/12855<br>https://www.digikey.com/en/products/detail/yageo/MFR-25FBF52-10K/13219 | $0.10 |
| JST SM Plug 4 Pin | JST SM Plug 4 Pin Male to Female latching | https://www.amazon.com/gp/product/B083GR7FQF | $0.50 |
| 1/4" grommet | 190-piece rubber grommet kit | https://www.amazon.com/gp/product/B0C58WDLDZ | $0.05 |
| Velcro | VELCRO Brand Industrial Fasteners Extreme Outdoor Weather Conditions Professional Grade Heavy Duty Strength Holds up to 15 lbs on Rough Surfaces, 4in x 1in (5pk), Strips, Gray | https://www.amazon.com/VELCRO-Brand-Industrial-Conditions-Professional/dp/B002YH1CCC | $1.00 |

## Parts List PIR Sensor
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| PIR sensor | PIR (motion) sensor | https://www.adafruit.com/product/189 | $10 |
| JST PH 2mm 3-Pin to socket | STEMMA JST PH 2mm 3-Pin to Female Socket Cable - 200mm | https://www.adafruit.com/product/3894 | $1.25 |

## Parts List Microwave Motion Sensor
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| Microwave sensor | Gravity: Digital 10.525GHz Microwave Sensor (Motion Detection) SEN0192 | https://www.dfrobot.com/product-1403.html | $9 |
| JST PH 2mm 3-Pin to male | STEMMA JST PH 2mm 3-Pin to Male Header Cable - 200mm | https://www.adafruit.com/product/3895 | $1.25 |
| Arduino Nano | V3.0 ATmega328P 5V 16M CH340 Compatible to Arduino Nano V3 with 32Kbyte Flash (program storage), 2Kbyte SRAM, 1Kbyte EEPROM | https://www.aliexpress.com/item/32242048437.html | $1 |

## Parts List Optional 2nd Eye
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| Hallowing M4 | Adafruit HalloWing M4 Express - Goth Adafruit Black Edition | https://www.adafruit.com/product/4300 | $40 |
| Plastic lens skull | Convex Plastic Lens with Edge - 40mm Diameter | https://www.adafruit.com/product/3917 | $4 |
| lens holder skull | Clear Acrylic Lens Holder + Hardware Kit for HalloWing | https://www.adafruit.com/product/4013 | $3 |
| miscellaneous | more Velcro, more cable ties, some standard M-M Dupont connectors | misc. | N/A |
| *** | *** | *** | *** |
| **One** | **Or** | **The** | **Other** |
| *** | *** | *** | *** |
| 4Pin JST PH 2mm | STEMMA Cable - 4 Pin JST-PH 2mm Cable–Female/Female - 150mm/6" Long | https://www.adafruit.com/product/3568 | $0.75 |
| M USB MicroB Breakout | 4pcs USB MicroB Plug Breakout board 5pin Male Connector Adapter Module Compatible with Arduino for Electronics Projects | https://www.amazon.com/dp/B09W2QHL2P | $2.50 |

## Not Using for This project
[Top](#skull\-project "Top")<br>

### Not Using Doppler Radar - RCWL-0516
[Top](#skull\-project "Top")<br>
This doesn't seem to work well outside, so I won't be using it on this project. If more details are desired see the following
- https://github.com/Mark-MDO47/Skull-Project/blob/master/RCWL-0516/README.md

