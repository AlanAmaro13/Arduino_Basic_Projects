// Name: LED RGB
// Date: 26 de diciembre del 2022
// Author: Amaro, A.

// Durante esta practica se desarrollan los conceptos basicos del led RGB de anodo comun

int r = 8; // Colocamos los pines de salida para los leds.
int g = 9;
int b = 10;

void setup(){
  pinMode(r, OUTPUT); // Colocamos a los leds como salidas digitales.
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop(){

  //  Color rojo
  digitalWrite(r, 0); // Dado que es un led de anodo comun, el led enciende cuando se le coloca en valor 0
  digitalWrite(g, 1);
  digitalWrite(b, 1);
  delay(1000);

  //  Color verde
  digitalWrite(r, 1);
  digitalWrite(g, 0);
  digitalWrite(b, 1);
  delay(1000);\

  //  Color azul
  digitalWrite(r, 1);
  digitalWrite(g, 1);
  digitalWrite(b, 0);
  delay(1000);

  //  Color blanco
  digitalWrite(r, 0);
  digitalWrite(g, 0);
  digitalWrite(b, 0);
  delay(1000);

  //  Color nulo
  digitalWrite(r, 1);
  digitalWrite(g, 1);
  digitalWrite(b, 1);
  delay(1000);

}