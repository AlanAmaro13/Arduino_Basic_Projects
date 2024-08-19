// Name: Deteccion de cambio de estado
// Date: 19 de diciembre del 2022
// Author: Amaro, A.

// Description: This code does a state detection when a botton is pushed. 

const int boton = 2 ; // Asignamos un nombre al pin que recibira los datos. 
int valor = 0 ; // Creamos una variable.

void setup(){
  Serial.begin(9600); // Inicializacion del monitor de serie
  pinMode(boton, INPUT); // Inicializamos el boton para recibir datos
}

void loop(){
  valor = digitalRead(boton); // Lectura del pin Boton y lo guarda en la variable

// Mandamos el mensaje al monitor de serie

if (valor == HIGH){
  Serial.println("Encendido"); //Mandamos un mensaje en pantalla del Monitor
} else {
  Serial.println("Apagado"); // Mandamos un mensaje en pantalla del Monitor

}

delay(200) ; // Tiempo de espera entre el recibimiento de datos

}
