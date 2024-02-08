#include "SevSeg.h"
SevSeg sevseg; //Initiate a seven segment controller object

byte numDigits = 4;  
byte digitPins[] = {2, 3, 4, 5};
byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
bool resistorsOnSegments = 0; 
// variable above indicates that 4 resistors were placed on the digit pins.
// set variable to 1 if you want to use 8 resistors on the segment pins.
int button4 = A2;
int button3 = A3;
int button2 = A4;
int button1 = A5;

void setup() {
    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
    pinMode(button3, INPUT_PULLUP);
    pinMode(button4, INPUT_PULLUP);
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop() {
    if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH) {
        sevseg.setNumber(0);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH) {
        sevseg.setNumber(2);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == LOW && digitalRead(button2) == LOW && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH) {
        sevseg.setNumber(3);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == LOW && digitalRead(button4) == HIGH) {
        sevseg.setNumber(4);
        sevseg.refreshDisplay();
    }
    
    else if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH && digitalRead(button3) == LOW && digitalRead(button4) == HIGH) {
        sevseg.setNumber(5);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW && digitalRead(button3) == LOW && digitalRead(button4) == HIGH) {
        sevseg.setNumber(6);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == LOW && digitalRead(button2) == LOW && digitalRead(button3) == LOW && digitalRead(button4) == HIGH) {
        sevseg.setNumber(7);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == LOW) {
        sevseg.setNumber(8);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == LOW) {
        sevseg.setNumber(9);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW && digitalRead(button3) == HIGH && digitalRead(button4) == LOW) {
        sevseg.setNumber(10);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == LOW && digitalRead(button2) == LOW && digitalRead(button3) == HIGH && digitalRead(button4) == LOW) {
        sevseg.setNumber(11);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == LOW && digitalRead(button4) == LOW) {
        sevseg.setNumber(12);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH && digitalRead(button3) == LOW && digitalRead(button4) == LOW) {
        sevseg.setNumber(13);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW && digitalRead(button3) == LOW && digitalRead(button4) == LOW) {
        sevseg.setNumber(14);
        sevseg.refreshDisplay();
    }
    else if (digitalRead(button1) == LOW && digitalRead(button2) == LOW && digitalRead(button3) == LOW && digitalRead(button4) == LOW) {
        sevseg.setNumber(15);
        sevseg.refreshDisplay();
    }
}