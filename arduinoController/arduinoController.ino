/****************************************
Gabriel Janzen - July 2019

The goal of this project is to bring a traffic light
back to life. Using an Arduino Nano and 3 relays,
each light will be wired to a relay and loop through
the pattern.

*****************************************/

// global variables used for timing
int greenTime = 4000;
int yellowTime = 2000;
int redTime = 4000;
int betweenTime = 1000;

// pin numbers used for each of the relays
int green = 2;
int yellow = 3;
int red = 4;

void setup() {
  // put your setup code here, to run once:
  
  // set the three pins for output.
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // green light
  digitalWrite(green, HIGH);
  delay(greenTime);
  digitalWrite(green, LOW);
  delay(betweenTime);

  // yellow light
  digitalWrite(yellow, HIGH);
  delay(yellowTime);
  digitalWrite(yellow, LOW);
  delay(betweenTime);

  // red light
  digitalWrite(red, HIGH);
  delay(redTime);
  digitalWrite(red, LOW);
  delay(betweenTime);

}
