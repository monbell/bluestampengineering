#include <Servo.h>

Servo nine;
Servo ten;

int led = 13;
int emitters = 3;

int detector = 11;

void setup() {
  nine.attach(9);
  ten.attach(10);
  
  pinMode(led, OUTPUT);
  pinMode(emitters, OUTPUT);
  
  pinMode(detector, INPUT); 
  
  Serial.begin(9600);
}

void loop() {
   delay(20);
   tone(emitters, 10000);
   delay(2);
   noTone(emitters);
    
   Serial.println(digitalRead(detector2));

   if((digitalRead(detector) == 0))
   {
    digitalWrite(led, 1);
    nine.write(random(160, 120));
    ten.write(random(20, 70));
   }
   else {
    digitalWrite(led, 0);
    nine.write(90);
    delay(200);
    ten.write(90);
    delay(100);
    nine.write(random(20, 70));
    delay(200);
    ten.write(random(160, 120));
    delay(100);
   }

}

