/*Program to demonstrate the working of a HC-SR04 Ultrasonic Distance
Sensor with an Arduino.

Authors:

Suryoday Basak
Sukrit Venkatagiri
Sampath Shanmugam


*/
int trigger=13;//Connect the 13th Pin of the Arduino to the trigger pin of HC-SR04.
int echo=12;//Connect the 12th Pin of the Arduino to the triggerecho
void setup() 
{
  Serial.begin (9600);

  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  long duration;

  digitalWrite(trigger, LOW);
  delayMicroseconds(2);

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigger, LOW);
  
  duration = pulseIn(echo, HIGH);
  
  Serial.println(duration);
  
  delay(10);
}
