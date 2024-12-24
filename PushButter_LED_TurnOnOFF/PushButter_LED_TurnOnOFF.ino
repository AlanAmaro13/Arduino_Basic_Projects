/* Name: Encedido de un LED con un Pulsador
 * By: Amaro, A.
 * Date: 23/12/2024
 * 
 * Description: 
 * In this short code I turn off and on a LED using the digital reading over a pin assigned as Input. 
 * This code introduced the concept of Pull-Up and Pull-Down resistors. 
 * 
 */

// Encender un LED con un boton pulsador

const int LED_P = 13; //Asignamos los pines del LED
const int LED = 8;
const int boton = 7; // Asignamos los pines del boton
int valor;

void setup(){
  pinMode(LED_P, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(boton, INPUT);

}

void loop(){
  valor = digitalRead(boton);

  if(valor == HIGH){

    digitalWrite(LED, HIGH);
    digitalWrite(LED_P, LOW);

    //delay(5000);

  } else{
    digitalWrite(LED, LOW);
    digitalWrite(LED_P, HIGH);
  }

}
