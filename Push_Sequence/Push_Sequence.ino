// Name: Secuencia Push
// Date: 29 de diciembre del 2022
// Author: Amaro, A.

// In this code we write the numbers among 0-9 on a 7-Display, changing the number when a button is pushed.

const int A = 2; // En esta parte declaramos cada uno de los pines que vamos a usar asociando al alfabeto
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

const int pulsador = 9;
int valor;
int numero = 0;

void setup(){

  Serial.begin(9600);

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(pulsador, INPUT);

}

void loop(){

  valor = digitalRead(pulsador);

  if (valor == 1){
    delay(500);
    numero = numero + 1;
    Serial.println("Tenemos lectura");

  }else if (numero >= 10){
    
    numero = 0;
  } else {

    Serial.println("No tenemos lectura");

  }
  
  if (numero == 0){

  digitalWrite(A, 1); // Colocamos el numero 0
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 0);

  } else if (numero == 1){

  digitalWrite(A, 0); // Colocamos el numero 1
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0); 

  } else if (numero == 2){

  digitalWrite(A, 1); // Colocamos el numero 2
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 0);
  digitalWrite(G, 1);

  } else if (numero == 3){

  digitalWrite(A, 1); // Colocamos el numero 3
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);

  } else if (numero == 4){

  digitalWrite(A, 0); // Colocamos el numero 4
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  } else if (numero == 5){

  digitalWrite(A, 1); // Colocamos el numero 5
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  } else if (numero == 6){

  digitalWrite(A, 1); // Colocamos el numero 6
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  } else if (numero == 7){

  digitalWrite(A, 1); // Colocamos el numero 7
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);

  } else if (numero == 8){

  digitalWrite(A, 1); // Colocamos el numero 8
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  } else if (numero == 9){

  digitalWrite(A, 1); // Colocamos el numero 9
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  }
}
