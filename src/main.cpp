#include <Arduino.h>

// Define pins to be used for each color.
#define BLUE 3
#define GREEN 5
#define RED 6

// Function defining the loop that will provide the fading between colors.
void fader(int start, int end, const int startPin, const int endPin, int delayTime) {
    for (int i = 0; i < 255; i++) {
        start -= 1;
        end += 1;

        analogWrite(startPin, start);
        analogWrite(endPin, end);

        delay(delayTime);
    }
}

void setup() {
    // Define the three pins used as outputs.
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(RED, OUTPUT);

    digitalWrite(BLUE, LOW);   // 0 V;
    digitalWrite(GREEN, LOW);  // 0 V;
    digitalWrite(RED, HIGH);   // 5 V;
}

int redValue;
int greenValue;
int blueValue;

void loop() {
    #define delayTime 20  // Fading time between colors.

    redValue = 255;
    blueValue = 0;
    greenValue = 0;

    analogWrite(RED, redValue);

    fader(redValue, greenValue, RED, GREEN, delayTime);

    redValue = 0;
    blueValue = 0;
    greenValue = 255;

    fader(greenValue, blueValue, GREEN, BLUE, delayTime);

    redValue = 0;
    blueValue = 255;
    greenValue = 0;

    fader(blueValue, redValue, BLUE, RED, delayTime);

    redValue = 255;
    blueValue = 0;
    greenValue = 0;
}