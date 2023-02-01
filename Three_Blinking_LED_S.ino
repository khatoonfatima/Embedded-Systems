/*
  Sketch 1.2.1
  Control LED by Control Board

  modified 2016/5/13
  by http://www.freenove.com
*/

int led1Pin=4;
int led2Pin=5;
int led3Pin=6;

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1Pin, HIGH);   // turn on  the LED1
  digitalWrite(led2Pin, LOW); // turn off the LED2
  digitalWrite(led3Pin, HIGH);
  delay(1000);              // wait for a second
  digitalWrite(led1Pin, LOW);  //turn OFF the LED by makin the voltage LOW
  digitalWrite(led2Pin, HIGH);   // turn the LED ON by making the voltage HIGH
  digitalWrite(led3Pin, LOW); 
  delay(1000);              // wait for a second
}
