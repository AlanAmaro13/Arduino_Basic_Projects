// Name: Cuenta regresiva
// Date: 29 de diciembre del 2022
// Author: Amaro, A.

// This code does a countdown using Arduino One and a 7 segment display. 
// 7 resistors of 220 Ohms, 7 Segments Display with common cathod is required.

const int A = 2; // En esta parte declaramos los pines de salida para los segmentos.
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

int tiempo = 1000;

void setup(){

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

}

void loop(){

  // Colocamos los numeros del 9 al 0 con un delay de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 9
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 8
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 7
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 6
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 5
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 0); // Colocamos el numero 4
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 3
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo
  
  digitalWrite(A, 1); // Colocamos el numero 2
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 0);
  digitalWrite(G, 1);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 0); // Colocamos el numero 1
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);

  delay(tiempo); // Colocamos la espera de 1 segundo

  digitalWrite(A, 1); // Colocamos el numero 0
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 0);

  delay(1000);

}
