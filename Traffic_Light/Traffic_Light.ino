// Name: Semaforo
// Date: 25 de diciembre del 2022
// Author: Amaro, A.

// Description: In this short code I recreated a classic robotic's assignment. The construction of a Traffic Light using 3 LEDS and a ARD ONE. 

int ledV = 8; // En esta parte indicamos los pines de salida digital
int ledA = 9;
int ledR = 10;
//int ledp = 13;

void setup(){
  pinMode(ledV, OUTPUT); // En esta parte indicamos las salidas digitales de los LEDS
  pinMode(ledA, OUTPUT);
  pinMode(ledR, OUTPUT);
  //pinMode(ledp, OUTPUT);
}

void loop(){
  //digitalWrite(ledp, 0);

  digitalWrite(ledV, 1);
  delay(20000);
  digitalWrite(ledV, 0);

  digitalWrite(ledA,1);
  delay(3000);
  digitalWrite(ledA,0);

  digitalWrite(ledR, 1);
  delay(15000);
  digitalWrite(ledR,0);


}
