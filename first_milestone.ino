#include <Average.h>
#include <Servo.h>

int led = 13; // led that's on the arduino

int detector = A2; // ir detector connected to analog pin 2
int recRead;

Servo first; //defines 1st servo

void setup() {
  
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(detector, INPUT);

  Serial.begin(9600);
  first.attach(9); //defines servo signal pins
  
}

void loop() {

  recRead = analogRead(detector);
  Serial.println(recRead);
  if(recRead == 1023)
  {
    digitalWrite(led, 0);
    first.write(0);
    delay(500);
   }
   else
   {
     digitalWrite(led, 1);
     first.write(180);
     delay(500);
   }
   
}

