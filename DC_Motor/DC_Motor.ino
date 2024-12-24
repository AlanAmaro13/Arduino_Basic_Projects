// Name: Motor de corriente directa 
// Date: 28 de diciembre del 2022
// Author: Amaro, A.

// In this code we incorporate analogic inputs and ouputs. Using a potenciometer we vary the speed of a motor. 
// We used: ARD ONE, DC Motor, 10K Potenciometer, Transistor MPS2222A

const int pot_ent = A0; //  Colocamos la entrada analogica del potenciometro
const int motor_salida = 3; // Colocamos la salida analogica del Arduino
int velocidad; // Almacenamos la velocidad
int valor_pot; // Registramos el valor del potenciometro

void setup(){
  pinMode(pot_ent, INPUT); // Colocamos la entrada analogica 
  pinMode(motor_salida, OUTPUT); // Colocamos la salida analogica 
}

void loop(){
  valor_pot = analogRead(pot_ent); // Obtenemos la lectura del potenciometro

  velocidad = map(valor_pot, 0, 1023, 0, 255); // Obtenemos la conversion entre la entrada analogica y la salida analogica

  analogWrite(motor_salida, velocidad); // Le damos la velocidad al motor.

}
