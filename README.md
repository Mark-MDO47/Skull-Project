# Skull-Project
Halloween skull with displayed eye and person sensor

Youtube: https://youtu.be/qxJXeUGvmBE

| skull first light | control box | control box open |
| --- | --- | --- |
| <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/skull_prjct_first_light.jpg" width="200" alt="Image of skull project first time HalloWing is inserted"> | <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/CB_Closed_3d_CableSide.jpg" width="200" alt="Image of skull project control box"> | <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/CB_Open_top.jpg" width="200" alt="Image of skull project control box open"> |
| **1-eye skull and control box** | **inside view of 1-eye skull** | **joke of the day** |
| <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/SkullAndControlBox.png" width="200" alt="Assembled Skull and Control Box"> | <img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/SkullInside.png" width="200" alt="Inside view of Skull"> | Your Ad Here (just kidding...) |

**Table Of Contents**
* [Top](#skull\-project "Top")
* [Idea](#idea "Idea")
  * [Skull](#skull "Skull")
  * [Eyeball - HalloWing M4 Express](#eyeball-\--hallowing-m4-express "Eyeball - HalloWing M4 Express")
  * [PIR Infrared Motion Person Sensor](#pir-infrared-motion-person-sensor "PIR Infrared Motion Person Sensor")
  * [Microwave Motion Person Sensor](#microwave-motion-person-sensor "Microwave Motion Person Sensor")
  * [Control Box](#control-box "Control Box")
* [Software](#software "Software")
  * [Software HalloWing M4](#software-hallowing-m4 "Software HalloWing M4")
  * [Software Arduino Nano PulseExtender](#software-arduino-nano-pulseextender "Software Arduino Nano PulseExtender")
* [Power](#power "Power")
  * [Surprise - Two-Eye Version Usually Powers Up Wrong](#surprise-\--two\-eye-version-usually-powers-up-wrong "Surprise - Two-Eye Version Usually Powers Up Wrong")
* [Circuit](#circuit "Circuit")
  * [Circuit for Skull and Control Box](#circuit-for-skull-and-control-box "Circuit for Skull and Control Box")
    * [Pin Definitions HalloWing M4 mdo_m4_eyes - Code That Was Used](#pin-definitions-hallowing-m4-mdo_m4_eyes-\--code-that-was-used "Pin Definitions HalloWing M4 mdo_m4_eyes - Code That Was Used")
    * [Confusion - M4 FeatherWing connector Ground pins](#confusion-\--m4-featherwing-connector-ground-pins "Confusion - M4 FeatherWing connector Ground pins")
  * [Circuit for Infrared Person Motion Sensor for One Eye Build](#circuit-for-infrared-person-motion-sensor-for-one-eye-build "Circuit for Infrared Person Motion Sensor for One Eye Build")
  * [Circuit for Optional 2nd Eye](#circuit-for-optional-2nd-eye "Circuit for Optional 2nd Eye")
  * [Circuit for Microwave Person Motion Sensor for Two Eye Build](#circuit-for-microwave-person-motion-sensor-for-two-eye-build "Circuit for Microwave Person Motion Sensor for Two Eye Build")
    * [Oscilloscope Trace of Pulse Extender](#oscilloscope-trace-of-pulse-extender "Oscilloscope Trace of Pulse Extender")
    * [Pin Definitions Arduino Nano Pulse Extender](#pin-definitions-arduino-nano-pulse-extender "Pin Definitions Arduino Nano Pulse Extender")
* [Parts List](#parts-list "Parts List")
  * [Parts List Skull and Control Box](#parts-list-skull-and-control-box "Parts List Skull and Control Box")
  * [Parts List PIR Sensor](#parts-list-pir-sensor "Parts List PIR Sensor")
  * [Parts List Optional 2nd Eye](#parts-list-optional-2nd-eye "Parts List Optional 2nd Eye")
  * [Parts List Microwave Motion Sensor](#parts-list-microwave-motion-sensor "Parts List Microwave Motion Sensor")
* [Build Notes](#build-notes "Build Notes")
  * [2-Eye Skull Internal Harness](#2\-eye-skull-internal-harness "2-Eye Skull Internal Harness")
* [Not Using for This project](#not-using-for-this-project "Not Using for This project")
  * [Eyeball - HalloWing M0 Express - M0 not used](#eyeball-\--hallowing-m0-express-\--m0-not-used "Eyeball - HalloWing M0 Express - M0 not used")
  * [Pin Definitions All_Seeing_Skull - M0 Code Not Used](#pin-definitions-all_seeing_skull-\--m0-code-not-used "Pin Definitions All_Seeing_Skull - M0 Code Not Used")
  * [RCWL-0516 Doppler Radar - RCWL-0516 Not Used](#rcwl\-0516-doppler-radar-\--rcwl\-0516-not-used "RCWL-0516 Doppler Radar - RCWL-0516 Not Used")

## Idea
[Top](#skull\-project "Top")<br>
Kudos to Adafruit for their continuing work on the "Uncanny Eyes" project and specifically their "All Seeing Skull" project:
- https://learn.adafruit.com/hallowing-all-seeing-skull
  - https://github.com/adafruit/Adafruit_Learning_System_Guides/tree/main/All_Seeing_Skull
- https://learn.adafruit.com/animated-electronic-eyes

I am making a build of the hallowing-all-seeing-skull using the HalloWing M4 Express.
- I was going to substitute the **RCWL-0516** Doppler Radar for the PIR Sensor but decided it wasn't a good choice for outdoor use.
  - See https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/RCWL-0516/README.md if you are interested in the reasoning.
- I went back to using the **PIR** infrared sensor, but this meant having only one HalloWing eyeball.
- Later I found another inexpensive **Microwave** motion detector for a two-eyeball version.

### Skull
[Top](#skull\-project "Top")<br>
As seen in the parts list, I chose a plastic skull for the project. The size is pretty good; a bit of a tight fit for the HalloWing, but it still looks quite good in practice.

### Eyeball - HalloWing M4 Express
[Top](#skull\-project "Top")<br>
The HalloWing M4 Express is amazing! It makes so many different eyeballs available and they are all beautiful!
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
- PDF for HalloWing M4 Board Diagram on GitHub

One way to synchronize two eyes
- https://learn.adafruit.com/synchronized-eyes-with-two-hallowings

As seen in the parts list, you can get some very nice fitted lenses to make the effect even better.

### PIR Infrared Motion Person Sensor
[Top](#skull\-project "Top")<br>
The PIR sensor is an infrared motion detector; it is used in the one-eye build since it needs a clear view and is used as the 2nd eye.
- https://www.adafruit.com/product/189

It turns out that the plastic cover on the PIR sensor is actually a fresnel lens for infrared and not just protection or decoration. This unit has a lens of a size that should fit well in the skull eye-socket.

It has a potentiometer adjustment for sensitivity so it can be tuned for distance and local weather conditions. There min/max indications are on the board. The potentiometer is on the rear of the sensor but unfortunately is in an awkward position to manipulate when the skull is assembled, so the sensor will probably need to be removed to adjust it.

### Microwave Motion Person Sensor
[Top](#skull\-project "Top")<br>
The microwave motion person sensor can detect motion through the plastic of the skull so can be mounted invisibly inside. It is used for the two-eye build. The documentation states that it is "Low output, unharmful to human"; I think they are talking about the RF output.
-  https://www.dfrobot.com/product-1403.html

This also has a potentiometer adjustment for sensitivity so it can be tuned for distance and local weather conditions. Counter-clockwise to increase sensitivity. Unfortunately the potentiometer is on the front of the sensor so the sensor will definitely need to be removed to adjust it.

When detecting motion, it generates data pulses that can be as short as 2 to 5 milliseconds according to my measurements. To prevent extra work in the busy HalloWing, I added an Arduino Nano to act as a pulse extender. The Nano also inverts the sense of the signal to match the PIR sensor. There is a resistor voltage divider to level shift the output to 3.5 Volts.
- TLDR - this is the first time I ever used interrupts in Arduino code.

### Control Box
[Top](#skull\-project "Top")<br>
I made a control box so the skull doesn't need to be manipulated to change the batteries. Also lowers the weight of the assembled skull.

The box is an appropriately orange cardboard box that some of my parts were delivered in.

It has an on/off DPDT knife switch I had laying around - most Frankenstein-ish one I had. I cannot find a place to buy a second one now so the parts list shows one that doesn't look quite so mad-scientisty. Even though I used a DPDT, I am only using one side of it today. The rest is for the Halloweeny look of it.

It also has a push button with LED to control whether the backlight for the LED should depend on the person sensor or just stay on all the time. If the push putton LED is lit, the backlight will stay on all the time.
- TLDR - The push buttons had a tendency to push through the hole in the cardboard. I couldn't locate a washer that worked for the 16mm version of the push button but the 12mm version fits well with a 7/16" flat washer. I learned a lot about washer sizes in this project.

## Software
[Top](#skull\-project "Top")<br>
### Software HalloWing M4
See these for the HalloWing code used in this project:
| Descrip | URL |
| --- | --- |
| How to load/initialize the M4 | https://github.com/Mark-MDO47/expts_HallowingM4 |
| Where I develop the M4 code for this and other projects, forked from AdaFruit.<br>Code for this project is in directory mdo_m4_skull_project; bulk of my mods in mdo_skull_project.cpp | https://github.com/Mark-MDO47/mdo_m4_eyes |
| Teensy and M0 code, forked from AdaFruit | https://github.com/Mark-MDO47/Uncanny_Eyes |
| How to expand with AI | https://github.com/Mark-MDO47/HalloweenEyes |

For this project I decided to just use the more capable HalloWing M4 version (see **mdo_m4_eyes** above), but kept some information here about the differences with the M0 in case I want to build one with the M0.

The software can use the either the PIR sensor or the Microwave sensor to turn the eye backlight on when it detects movement. There is a pushbutton that can toggle between forcing the backlight always-on or having the backlight depend on the PIR sensor. This button has an LED that is lit when the mode is forcing always-on.

If a certain pin on the HalloWing is grounded, it knows it is the second eye and that the first eye will tell it when to turn the backlight on and off. I have a spousal request to make the eyes NOT coordinate their movement so I will work on that.

To solve the issue of the [primary HalloWing not powering up correctly in the two-eye build](#surprise-\--two\-eye-version-usually-powers-up-wrong "primary HalloWing not powering up correctly in the two-eye build"), the secondary HalloWing will reset the primary HalloWing 7 seconds after startup. This also makes the two eyes appear as if they move independently.


### Software Arduino Nano PulseExtender
[Top](#skull\-project "Top")<br>
The code to use an Arduino Nano to extend the pulse of the Microwave Motion Sensor is here
- https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/PulseExtender/PulseExtender.ino

Here from today's version of the code:
```C
// This code is loosely based on the example found in
//     https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/volatile/
//
// I have been programming Arduinos since 2016 and this is the first time
//    I was tempted to use interrupts. This code could have been done with
//    a fast polling loop, but... what would be the fun in that?
//
// The delivery time on parts I needed to do a hardware pulse extension was too long.
// I had lots of Arduino Nano hanging around and they were 5V inputs/outputs which
//    matched the Microwave sensor https://www.dfrobot.com/product-1403.html
// All the scope traces from the sensor looked longer than 2 millisec pulses
//
// The purpose of this is to extend the pulse from the sensor until at least 2 seconds
//     without any input activity.
// This will allow the HalloWing to easily see the pulse. https://www.adafruit.com/product/4300
// The HalloWing has code with a separate time extension; it uses this extended pulse along with
//    its own time extension to turn the LED backlight of the Eye(s) on/off interactively.
// The goal is to have the Eye(s) turn on unexpectedly as children approach on Halloween and
//    then have timeouts that make it somewhat interactive with them as they are closer
//    and yet allow the eyes to be watched.
```

## Power
[Top](#skull\-project "Top")<br>
The PIR sensor uses 5V-to-12V power while the Microwave sensor specs 5V + 0.25V, so I will go with 7.4V-8.0V battery to a UBEC to 5V through the USB into the HalloWing; the M4 version (at least) will pass the 5V on through to either sensor.

The USB standard specifies a Vbus range of 4.75V to 5.25V.
- Measuring the output from plugged into PC I see 5.1V
- Measuring the output of my UBEC I see 5.6V.
- Measured at the end of the 12 foot cable USB interface with no load I see 5.3V.

The Voltage measured at the HalloWing Sensor connector is as follows
- No Load
  - USB PC: 4.6V
  - Control Box & UBEC 12 ft. to HalloWing USB: 4.7V.
- Load of Microwave Motion Sensor and Arduino Nano
  - Control Box & UBEC 12 ft. to HalloWing USB: 4.8V

The Adafruit documents say that when using the USB Micro-B connector to power the HalloWing, leave the ID and data pins floating.

The LED on the latching button switch works with 3.3V I/O output from the HalloWing even though the switch is rated at 24V - that simplifies things greatly!

### Surprise - Two-Eye Version Usually Powers Up Wrong
[Top](#skull\-project "Top")<br>
The full-up circuit with two eyes connected via the I2C interface with a four-wire cable, a pulse extender, and the Gravity Microwave Sensor usually powers up in a state where the primary eye never becomes visible. The secondary eye does power up normally. I think it is due to the power-draw through the primary HalloWing during power-up. To confirm this I did an experiment.
| # Power-Ons | # Success | Condition |
| --- | --- | --- |
| 6 | 1 | Full-up circuit |
| 6 | 4 | Just 2 HalloWing |

In the case where it powers-up with the primary eye not displaying, pressing the reset button on the primary HalloWing makes everything work correctly.

The reset works by grounding the pin. I came up with a circuit where the 5V Arduino uses the output-enable on my favorite SN74HCT125 quad-buffer to either ground the output (to the primary Hallowing reset) or put it in high-impedance state, but this would require a rework of the harness.

I realized that the secondary Hallowing is already a 3.5V device so it could perform this function. I can connect the output to the primary Hallowing using a standard Dupont connector cable with no harness re-work. Also this gives me an easy way to make the two eyes not follow each other exactly, a spousal request.

NOTE: with the two HalloWing connected via the I2C cable and power coming in through the primary eye, the secondary eye will be on whether the on/off switch is on or off. Makes sense if you look at the schematic.

## Circuit
[Top](#skull\-project "Top")<br>

### Circuit for Skull and Control Box
[Top](#skull\-project "Top")<br>
Note that there is an option to use the 4Pin JST cable between the I2C sockets on both HalloWing boards for the optional second eye. This method would remove the need for the power and ground connection to second eye USB shown in this schematic.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0.png" width="800" alt="schematic of skull project version 1.0">

#### Pin Definitions HalloWing M4 mdo_m4_eyes - Code That Was Used
[Top](#skull\-project "Top")<br>
The following are the pins that I added to the M4 code in https://github.com/Mark-MDO47/mdo_m4_eyes from directory **mdo_m4_skull_project**. mdo_m4_skull_project.ino is just a copy of M4_Eyes.ino renamed so I can use it from this directory.

| Pin Name | M0 | M4 | Definition | Comment |
| --- | --- | --- | --- | --- |
| MOTION_SENSOR_PIN | A11 | A8 | mdo_skull_project.cpp | sense when to turn on display backlight |
| DISPLAY_FORCE_ON_LED_PIN | 5 | 5 | mdo_skull_project.cpp | output to button LED to say backlight forced on<br> OR optional 2nd eye output to reset primary eye after power-on |
| DISPLAY_FORCE_ON_PIN | 6 | 6 | mdo_skull_project.cpp | input from button to enable/disable backlight forced on<br> OR optional 2nd eye input to turn 2nd eye display on |
| SCNDEYE_DSPLY_ON_PIN | 9 TBR | 9 | mdo_skull_project.cpp | output to optional 2nd eye to turn display on |
| SCNDEYE_1ST_EYE_PIN | 10 TBR | 10 | mdo_skull_project.cpp | input with internal pullup: HIGH if primary eye |

#### Confusion - M4 FeatherWing connector Ground pins
[Top](#skull\-project "Top")<br>
There is a discrepancy on GND pins between the M4 pinouts diagram and the M4 schematic
- https://github.com/adafruit/Adafruit-Hallowing-M4-PCB/blob/master/Adafruit%20HalloWing%20M4%20Pinout.pdf
- https://cdn-learn.adafruit.com/assets/assets/000/081/144/original/adafruit_products_Hallowing_M4_Schematic.png?1568924235

**good** The pinouts GND pin on the FeatherWing connector between AREF and A0 matches the GND pin on the sensor connector.<br>
**bad** The pinouts GND pin at the bottom of that connector below MISO/RX/TX is marked on the **schematic** as D4 and NC.
- I measured this pin at about 3.5V from ground with USB connected and displaying the eyeball with unchanged software.
- My theory is that it is **D4** but maybe connected instead of "no connect".

### Circuit for Infrared Person Motion Sensor for One Eye Build
[Top](#skull\-project "Top")<br>
The "PIR" sensor needs a clear view and looks a bit like a milky eye so it is used as the 2nd eye.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0_PersonSensors.png" width="300" alt="schematic of skull project version 1.0 infrared person sensor">

### Circuit for Optional 2nd Eye
[Top](#skull\-project "Top")<br>
Note that there is an option to use the 4Pin JST cable between the I2C sockets on both HalloWing boards for the optional second eye. This method would remove the need for the power and ground connection to second eye USB shown in this schematic.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0_2ndEye.png" width="400" alt="schematic of skull project version 1.0 optional 2nd eye">

### Circuit for Microwave Person Motion Sensor for Two Eye Build
[Top](#skull\-project "Top")<br>
The Microwave sensor can go through plastic so can be mounted invisibly inside, allowing use of both eyes.<br>
The Arduino Nano is used to extend the microwave sensor pulse from the millisecond range to the two second range. This makes it easy for the busy HalloWing in the primary eye to detect the pulse.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/schematic_Skull-Project_1.0_mwave_PersonSensor.png" width="300" alt="schematic of skull project version 1.0 microwave person sensor">

#### Oscilloscope Trace of Pulse Extender
[Top](#skull\-project "Top")<br>
Below is an oscilloscope trace of pulse extender operation; yellow is input, blue is output. The input pulse(s) are extended until there is two seconds of no input activity.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/ScopeTracePulseExtender.png" width="300" alt="Oscilloscope trace of pulse extender; yellow is input, blue is output.">

#### Pin Definitions Arduino Nano Pulse Extender
[Top](#skull\-project "Top")<br>
I gave up trying to make a circuit to edge-detect without a clock from parts on hand - too complicated! And the RS D-type flip-flops that would do the job had long delivery times. I finally just used one of my many old Arduino Nanos.

The following are the pin definitions for the pulse-extender Arduino Nano in the Microwave Person Sensor.

| Pin Name | NANO | Definition | Comment |
| --- | --- | --- | --- |
| INTERRUPT_PIN | 2 | interrupt pin for edge detection | must be pin 2 or 3 on Arduino Nano |
| EXTENDED_PULSE_PIN | 12 | output pin; pulse extended by two seconds | 5V, must shift to 3.5V |

## Parts List
[Top](#skull\-project "Top")<br>
There are several options for this build
- which person sensor to use
- one eye or two eyes
- how to connect power to second eye

The parts lists are divided up to reflect this.

### Parts List Skull and Control Box
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| plastic skull | MAGICLULU 1Pcs Table Top Skeleton Head Skull Head Model Simulation Skeleton Head Life Size Skeleton Skull for Halloween Décor | https://www.amazon.com/dp/B0C777NBDJ | $13 |
| HalloWing M4 | Adafruit HalloWing M4 Express - Goth Adafruit Black Edition | https://www.adafruit.com/product/4300 | $40 |
| Plastic lens | Convex Plastic Lens with Edge - 40mm Diameter | https://www.adafruit.com/product/3917 | $4 |
| lens holder | Clear Acrylic Lens Holder + Hardware Kit for HalloWing | https://www.adafruit.com/product/4013 | $3 |
| Batteries | 4 Pack 3.7 Volt Button Top Rechargeable Batteries and 18650 Battery Charger,Lithium Battery 4000mAh (Battery and Charger) | https://www.amazon.com/gp/product/B0CP6V26QX | $25 |
| Battery Holder | 5pcs 18650 Battery Holder 2 Slot 3.7V 18650 Battery Clip Holder Box Storage Case with Soldering Pin Copper Contacts | https://www.amazon.com/gp/product/B09LC13D9P | $2.60 |
| UBEC 5V 3A | 5V/6V Hobbywing 3A UBEC Max 5A |https://www.aliexpress.us/item/3256805502614547.html | $1.50 |
| USB MicroB Breakout | 4pcs USB MicroB Plug Breakout board 5pin Male Connector Adapter Module Compatible with Arduino for Electronics Projects | https://www.amazon.com/dp/B09W2QHL2P | $2.50 |
| 12mm button switches LED | 5Pcs 12mm Metal Raised Head Latching Push Button Switch Waterproof Anti-Vandal Silver Shell with 15cm Cable 12V-24V 1NO ON/Off for 1/2" Mounting Hole with Halo Ring Red LED | https://www.amazon.com/dp/B0BJCMDGK2 | $2.65 |
| 7/16 washer | 7/16" Flat Washer, 18-8 (304) Stainless Steel Washers Flat, 7/16 inch Stainless Flat Washers, 80 PCS | https://www.amazon.com/gp/product/B0CM3MCY27 | $0.11 |
| DPDT Knife Switch | QWORK Educational Double Pole Cutter Switch, Double Throw Electrical Switch, 4 Pack Premium Electrical Switches with Excellent Safety and Durability for Multiple Applications | https://www.amazon.com/gp/product/B0CH7X6CJG | $3.85 |
| 0.25W resistors | 200 and 10K Ohm through-hole resistors | https://www.digikey.com/en/products/detail/yageo/MFR-25FBF52-200R/12855<br>https://www.digikey.com/en/products/detail/yageo/MFR-25FBF52-10K/13219 | $0.10 |
| JST SM Plug 4 Pin | JST SM Plug 4 Pin Male to Female latching | https://www.amazon.com/gp/product/B083GR7FQF | $0.50 |
| 1/4" grommet | 190-piece rubber grommet kit | https://www.amazon.com/gp/product/B0C58WDLDZ | $0.05 |
| Velcro | VELCRO Brand Industrial Fasteners Extreme Outdoor Weather Conditions Professional Grade Heavy Duty Strength Holds up to 15 lbs on Rough Surfaces, 4in x 1in (5pk), Strips, Gray | https://www.amazon.com/VELCRO-Brand-Industrial-Conditions-Professional/dp/B002YH1CCC | $1.00 |

### Parts List PIR Sensor
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| PIR sensor | PIR (motion) sensor | https://www.adafruit.com/product/189 | $10 |
| JST PH 2mm 3-Pin to socket | STEMMA JST PH 2mm 3-Pin to Female Socket Cable - 200mm | https://www.adafruit.com/product/3894 | $1.25 |

### Parts List Optional 2nd Eye
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| HalloWing M4 | Adafruit HalloWing M4 Express - Goth Adafruit Black Edition | https://www.adafruit.com/product/4300 | $40 |
| Plastic lens skull | Convex Plastic Lens with Edge - 40mm Diameter | https://www.adafruit.com/product/3917 | $4 |
| lens holder skull | Clear Acrylic Lens Holder + Hardware Kit for HalloWing | https://www.adafruit.com/product/4013 | $3 |
| miscellaneous | more Velcro, more cable ties, some standard M-M Dupont connectors | misc. | N/A |
| 4Pin JST PH 2mm | STEMMA Cable - 4 Pin JST-PH 2mm Cable–Female/Female - 150mm/6" Long | https://www.adafruit.com/product/3568 | $0.75 |

### Parts List Microwave Motion Sensor
[Top](#skull\-project "Top")<br>
| Title | Descrip | URL | each |
| --- | --- | --- | --- |
| Microwave sensor | Gravity: Digital 10.525GHz Microwave Sensor (Motion Detection) SEN0192 | https://www.dfrobot.com/product-1403.html | $9 |
| JST PH 2mm 3-Pin to socket | STEMMA JST PH 2mm 3-Pin to Female Socket Cable - 200mm | https://www.adafruit.com/product/3894 | $1.25 |
| Arduino Nano | V3.0 ATmega328P 5V 16M CH340 Compatible to Arduino Nano V3 with 32Kbyte Flash (program storage), 2Kbyte SRAM, 1Kbyte EEPROM | https://www.aliexpress.com/item/32242048437.html | $1 |
| 0.25W resistors | 3K and 7K Ohm through-hole resistors | https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT3K00/1741418<br>https://www.digikey.com/en/products/detail/yageo/MFR-25FRF52-6K98/14970 | $0.10 |

## Build Notes
[Top](#skull\-project "Top")<br>
Here are some random notes about building the skull.

### 2-Eye Skull Internal Harness
[Top](#skull\-project "Top")<br>
Things start to get a little crowded with two HalloWing M4s, a Gravity Microwave sensor, and an Arduino Nano. Also the required connections branch out to multiple locations. 
- I drew out the circuit in a more physical way so I could keep track of what went where and about how much slack I would need
- After (finally) achieving a working first harness, I took some measurements so the second one would be easier.

Here is the block diagram in rough physical position for the two-eye Skull.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/Skull_2eye_internalWiring_blockDiagram.png" width="600" alt="Block Diagram of internal wiring for two-eye Skull">

Here are the build notes and hints for the internal wiring harness for the two-eye Skull.<br>
<img src="https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/images/Skull_2eye_internalWiring_harness.png" width="600" alt="Harness build hints of internal wiring for two-eye Skull">

## Not Using for This project
[Top](#skull\-project "Top")<br>

### Eyeball - HalloWing M0 Express - M0 not used
[Top](#skull\-project "Top")<br>
There is also an "M0" version with a lower resolution display, but still beautiful!
- https://learn.adafruit.com/adafruit-hallowing
- https://learn.adafruit.com/adafruit-hallowing/adapting-sketches-to-m0

For this project I decided to just use the more capable M4 version, but left some information about the differences with the M0 in case I want to build another.

### Pin Definitions All_Seeing_Skull - M0 Code Not Used
[Top](#skull\-project "Top")<br>
The pin numbers as defined in the AdaFruit All_Seeing_Skull project for the HalloWing M0.<br>
My comments are included regarding use with the HalloWing M4.

| Pin Name | M0 | M4 | Definition | Comment |
| --- | --- | --- | --- | --- |
| eyeInfo[e].select | 39 | 44 | config.h | select pin for eye display |
| eyeInfo[e].wink | -1 | -1 | config.h | not used with HalloWing |
| DISPLAY_BACKLIGHT | 7 | 47 | config.h | N/A |
| DISPLAY_RESET | 37 | 46 | config.h | N/A |
| MOTION_SENSOR_PIN | A11 | A8 | All_Seeing_Skull.ino | turn on display backlight |
| BLINK_PIN | 1 | N/A | config.h | do not want; use AUTOBLINK |

### RCWL-0516 Doppler Radar - RCWL-0516 Not Used
[Top](#skull\-project "Top")<br>
This doesn't seem to work well outside, so I won't be using it on this project. If more details are desired see the following
- https://github.com/Mark-MDO47/Skull-Project/blob/master/resources/RCWL-0516/README.md

