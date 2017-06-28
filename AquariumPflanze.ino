#include <SimpleTimer.h>

// the timer object
SimpleTimer timer;

// a function to be executed periodically
void repeatMe() {
//Pumpe an 
digitalWrite(0,HIGH);
//warte 30sec
delay(30000);
//Pumpe aus
digitalWrite(0,LOW);
}

void setup() {
  // Pin0 als Ausgang
  pinMode(0, OUTPUT);
  //Pumpe aus
  digitalWrite(0,LOW);
  //alle 30 min Timer Interrupt ausfuehren:
  timer.setInterval(1000, repeatMe);
}

void loop() {
    timer.run();
}
