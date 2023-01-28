#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1);
#define motor1_in_1 6
#define motor1_in_2 9

#define motor2_in_1 10
#define motor2_in_2 11

String voice;

#define trigPin  7      // trig pin of HC-SR04
# define echoPin 8     // Echo pin of HC-SR04

long duration, distance;
long time1,time2;

void setup() 
{
  Serial.begin(9600);
  delay(random(500,2000));   // delay for random time
  pinMode(motor1_in_1 , OUTPUT);
   pinMode(motor1_in_2 , OUTPUT);
   pinMode(motor2_in_1 , OUTPUT);
   pinMode(motor2_in_2 , OUTPUT);
  
  pinMode(trigPin, OUTPUT);         // set trig pin as output
  pinMode(echoPin, INPUT);          //set echo pin as input to capture reflected waves
  time1=millis();
}
void loop(){
  
  if (time1-millis()>=1000)
  {
    voicep();
    time1=millis();
  }
  if (time2-millis()>=1500)
  {
    ultrasonic();
    time2=millis();
  }
}
