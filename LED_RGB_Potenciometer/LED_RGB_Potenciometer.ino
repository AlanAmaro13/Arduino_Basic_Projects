// Name: Variar intensidad de luz con entradas analogicas
// Date: 27 de diciembre del 2022
// Author: Amaro, A.

// En esta practica se realiza la variacion de la luz de un LED RGB mediante potenciometros, es decir, entradas analogicas.

//  Colocamos los pines de LED y potenciometros junto con las intensidades obtenidas
const int ledr = 3;  // Estas son las salidas PWM donde variamos la intensidad del LED.
const int ledg = 9;
const int ledb = 6; 

const int p1 = A0; // Estas son las entradas analogicas de los potenciometros
const int p2= A1;
const int p3 = A2;

int intensidad1 ; //  Aqui almacenamos la intensidad.
int intensidad2 ;
int intensidad3 ;


void setup(){

  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT); // Colocamos los LED como salidas 
  pinMode(ledb, OUTPUT);
  pinMode(p1, INPUT);
  pinMode(p2, INPUT); //  Colocamos los potenciometros como entradas
  pinMode(p3, INPUT);

}


void loop(){
  intensidad1 = analogRead(p1)/4 ; // Dado que el potenciometro entra con 1024 y la senal PWM cuenta con 256 dividimos entre 4
  intensidad2 = analogRead(p2)/4 ;
  intensidad3 = analogRead(p3)/4 ;

  analogWrite(ledr, intensidad1); //  Mandamos la intensidad a su respectivo LED.
  analogWrite(ledg, intensidad2);
  analogWrite(ledb, intensidad3);
}