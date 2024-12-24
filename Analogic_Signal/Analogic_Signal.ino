// Name: Entrada Analogica
// Date: 27 de diciembre del 2022
// Author: Amaro, A.

// En esta practica se desarrollan los conceptos de las entradas analogicas.

int valor = 0; // Declaramos una variable que almacene la lectura

void setup(){
  Serial.begin(9600);

}

void loop(){

  valor = analogRead(A0); // Colocamos que la señal de entrada de A0 se almacene en valor

  Serial.print("El valor de la señal analogica es: ");
  Serial.println(valor); // The values goes over 2**10, 0 to 1023
  delay(1000);

}
