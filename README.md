# rgb-led
A demonstration of shifting colors in an RGB LED using the Arduino
UNO and C++ code.

## Video Demonstration (YouTube)

[![Watch on YouTube](https://i9.ytimg.com/vi/h9UGBXqKjc0/mqdefault.jpg?sqp=CLDDxMAG-oaymwEmCMACELQB8quKqQMa8AEB-AH-CYAC0AWKAgwIABABGCggOSh_MA8=&rs=AOn4CLDmLrN8GqSaUzAeizhneaGCUrsWeA)](https://youtu.be/h9UGBXqKjc0)

PWM controls the the brightness of each of the LEDs.
Roughly, every 1/500th of a second, the PWM output will produce a pulse. The length of the pulse is controlled
by the `analogWrite` function. 

`analogWrite(0)` produces no pulse and `analogWrite(255)` produces a pulse that lasts all the way until the next pulse is due.