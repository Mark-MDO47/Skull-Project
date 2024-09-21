// Skull Project - https://github.com/Mark-MDO47/Skull-Project
// Author:  https://github.com/Mark-MDO47
// Date:    2024-09-18
// License: MIT
//
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
//

#define EXTENDED_MILLISEC 2000 // milliseconds to extend pulse

#define INTERRUPT_PIN       2 // interrupt pin for edge detection; for Nano must be pin 2 or 3
#define EXTENDED_PULSE_PIN 12 // output pin; pulse extended by EXTENDED_MILLISEC

volatile byte input_changed = 0; // if more than one byte then must disable interrupts

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// interrupt_routine_set - when input changes, we set input_changed to 1
//    Setting input_changed back to zero is the responsibility of the non-interrupt code
//
//    This is an interrupt routine; see attachInterrupt() call below.
//    Note that interrupt programming can be tricky (although this one is simple). Be sure to read
//         https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/
//         https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/volatile/
//      before attempting to use Arduino interrupts.
//
//    There are restrictions on which pins can be interrupt pins; for the Arduino Nano only pins 2 or 3.
//
//    input_changed is a one byte volatile. If you need multiple bytes read:
//         https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/volatile/
//
void interrupt_routine_set() {
  input_changed = 1; // short and sweet
} // end interrupt_routine_set()

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// setup - called once at the beginning
//
// set the pin modes
// set initial state as if interrupt_routine_set() was called
//
void setup() {
  pinMode(EXTENDED_PULSE_PIN, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(INTERRUPT_PIN), interrupt_routine_set, CHANGE);

  // initial state as if interrupt_routine_set() was called
  // this will cause Eye(s) to be on for a while when powered on
  input_changed = 1; // loop() will handle the details of pulse extension
} // end setup()

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// loop - called repetitively
//
// if input_changed, 
//    set input_changed back to zero so we see the next change
//    save a timestamp in the future to set it LOW
//    set extended pulse pin HIGH
// if current time is beyond future timestamp from above
//    set extended pulse pin LOW
//
// NOTE: it will be more than 49 days before we overflow the millisec counts;
//   battery would be discharged long before that
// TODO - Will need to handle wraparound if powering with wall power.
//
void loop() {
  static uint32_t millisec_for_low = 0; // timestamp for setting extended pulse low

  if (input_changed == 1) {
    // interrupt_routine_set() has been called from interrupts (or just after setup())
    // prepare to capture next input change by clearing input_changed
    input_changed = 0;
    // set time for extended pulse to go LOW
    millisec_for_low = millis() + EXTENDED_MILLISEC;
    // make sure output is HIGH
    digitalWrite(EXTENDED_PULSE_PIN, HIGH);
  } // end if input changed

  // see if pulse extension is complete
  if ( millis() > millisec_for_low) {
    digitalWrite(EXTENDED_PULSE_PIN, LOW);
  }
} // end loop()
