// Name: El auto increible
// Date: 21 de diciembre del 2022
// Author: Amaro, A.

/* Description:
 * This code presents a beginner's exercise for the Arduino Uno. It involves turning five LEDs on and off sequentially.
 */


//En esta parte declaramos cada uno de los puertos usados para los LEDS
const int Led1 = 2;
const int Led2 = 3;
const int Led3 = 4;
const int Led4 = 5;
const int Led5 = 6;
const int LED_A = 13;

const int tiempo = 150; //Le asignamos un nombre al delay

void setup(){
  pinMode(Led1, OUTPUT); //En esta parte colocamos que cada LED sea salida digital.
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(LED_A, OUTPUT);
}

void loop(){

  digitalWrite(Led1, HIGH); // En esta parte colocamos el encedido de cada LED
  delay(tiempo); // Colocamos una pausa
  digitalWrite(Led1, LOW); // Apagamos el LED
  delay(tiempo); //Damos otra pausa

  // En esta parte repetimos mismo procedimiento.

  digitalWrite(Led2, HIGH);
  delay(tiempo);
  digitalWrite(Led2, LOW);
  delay(tiempo);

  digitalWrite(Led3, HIGH);
  delay(tiempo);
  digitalWrite(Led3, LOW);
  delay(tiempo);

  digitalWrite(Led4, HIGH);
  delay(tiempo);
  digitalWrite(Led4, LOW);
  delay(tiempo);

  digitalWrite(Led5, HIGH);
  delay(tiempo);
  digitalWrite(Led5, LOW);
  delay(tiempo);

  // En esta parte realizamos el sentido contrario de encedidos

  digitalWrite(Led5, HIGH);
  delay(tiempo);
  digitalWrite(Led5, LOW);
  delay(tiempo);

  digitalWrite(Led4, HIGH);
  delay(tiempo);
  digitalWrite(Led4, LOW);
  delay(tiempo);

  digitalWrite(Led3, HIGH);
  delay(tiempo);
  digitalWrite(Led3, LOW);
  delay(tiempo);

  digitalWrite(Led2, HIGH);
  delay(tiempo);
  digitalWrite(Led2, LOW);
  delay(tiempo);

  digitalWrite(Led1, HIGH);
  delay(tiempo);
  digitalWrite(Led1, LOW);
  delay(tiempo);

}
