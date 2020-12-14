//direction 1 lights
int redLight_1 = 10;
int orangeLight_1 = 9;
int greenLight_1 = 8;

//direction 2 lights
int redLight_2 = 4;
int orangeLight_2 = 3;
int greenLight_2 = 2;

void setup() {
  // put your setup code here, to run once:

pinMode(redLight_1, OUTPUT);
pinMode(orangeLight_1, OUTPUT);
pinMode(greenLight_1, OUTPUT);
pinMode(redLight_2, OUTPUT);
pinMode(orangeLight_2, OUTPUT);
pinMode(greenLight_2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly

//in direction 1,
//red light on, no go
//other lights off
digitalWrite(redLight_1, HIGH);
digitalWrite(orangeLight_1, LOW);
digitalWrite(greenLight_1, LOW);

//in direction 2,
//green light on, everyone goes
//other lights off
digitalWrite(redLight_2, LOW);
digitalWrite(orangeLight_2, LOW);
digitalWrite(greenLight_2, HIGH);

//5 sec later
delay(5000);

//in direction 1
//while red light on
//other lights off
digitalWrite(redLight_1, HIGH);
digitalWrite(orangeLight_1, LOW);
digitalWrite(greenLight_1, LOW);

//in direction 2
//green light off, orange light on for preparing red light
//other lights off
digitalWrite(redLight_2, LOW);
digitalWrite(orangeLight_2, HIGH);
digitalWrite(greenLight_2, LOW);///

//orange light in direction 2 start to blink
delay(500);
digitalWrite(orangeLight_2, LOW);
delay(500);
digitalWrite(orangeLight_2, HIGH);
delay(500);
digitalWrite(orangeLight_2, LOW);
delay(500);
digitalWrite(orangeLight_2, HIGH);
delay(500);
digitalWrite(orangeLight_2, LOW);
delay(500);

//in direction 1,
//green light on, everyone goes
//other lights off
digitalWrite(redLight_1,LOW);
digitalWrite(orangeLight_1,LOW);
digitalWrite(greenLight_1,HIGH);

//in direction 2,
//red light on, no one goes
//other lights off
digitalWrite(redLight_2,HIGH);
digitalWrite(orangeLight_2,LOW);
digitalWrite(greenLight_2,LOW);

delay(5000);

//in direction 1,
//green light on, everyone goes
//other lights off
digitalWrite(redLight_1,LOW);
digitalWrite(greenLight_1,LOW);
digitalWrite(redLight_2,HIGH);

//in direction 2
//green light off, orange light on for preparing red light
//other lights off
digitalWrite(orangeLight_2,LOW);
digitalWrite(greenLight_2,LOW);
digitalWrite(orangeLight_1,HIGH);

//the blinking orange lights
delay(500);
digitalWrite(orangeLight_1,LOW);
delay(500);
digitalWrite(orangeLight_1,HIGH);
delay(500);
digitalWrite(orangeLight_1,LOW);
delay(500);
digitalWrite(orangeLight_1,HIGH);
delay(500);
digitalWrite(orangeLight_1,LOW);
delay(500);

}
