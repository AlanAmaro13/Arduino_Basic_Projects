// Name: Display de 7 segmentos de catodo comun
// Date: 29 de diciembre del 2022
// Author: Amaro, A.

// Durante esta practica se realiza un conteo de 0-9 en un display de 7 segmentos de catodo comun

const int A = 2; // En esta parte declaramos cada uno de los pines que vamos a usar asociando al alfabeto
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

int tiempo = 1000; // Declaramos una variable que controle la sucesion de numeros 

void setup(){
  pinMode(A, OUTPUT);   // Declaramos cada uno de los pines como salidas.
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop(){
  digitalWrite(A, 1); // Colocamos el numero 0
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 0);

  delay(tiempo);

  digitalWrite(A, 0); // Colocamos el numero 1
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 2
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 0);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 3
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 0); // Colocamos el numero 4
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 5
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 6
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 7
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 8
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Colocamos el numero 9
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Letra A
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 0); // Letra b
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo);

  digitalWrite(A, 1); // Letra C
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 0);

  delay(tiempo);
}


/* Forma general
  digitalWrite(A, );
  digitalWrite(B, );
  digitalWrite(C, );
  digitalWrite(D, );
  digitalWrite(E, );
  digitalWrite(F, );
  digitalWrite(G, );

  delay(tiempo);
*/