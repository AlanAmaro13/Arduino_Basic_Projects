// Name: Encendido de un led con salida digital
// Date: 19 de diciembre del 2022
// Author: Amaro A.

// Description: In this short code we learn how to declare pin as Outputs and write digital signals on them (HIGH, LOW)

void setup(){
  // Aqui colocamos el codigo que se ejecutara solo una vez
  pinMode(13, OUTPUT); // Colocamos la salida al pin 13 o LED integrado en el arduino
  pinMode(8, OUTPUT); // Colocamos la salida al pin 8

}

void loop(){
  // Aqui colocamos el codigo que se ejecutara de manera repetida
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH); //En esta parte colocamos la accion de voltaje a tal salida de 5 V
  
  delay(2000); // Colocamos una demora de 5000 milisegundos o 5 segundo
  
  digitalWrite(13, LOW);
  digitalWrite(8, LOW); // Colocamos que la accion de voltaje en tal salida sea nulo
  
  delay(1000); // Colocamos una demora de 1 segundo

}
