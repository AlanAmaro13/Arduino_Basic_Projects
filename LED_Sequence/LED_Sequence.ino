// Name: Secuencia de luces LED con pulsador
// Date: 23 de diciembre del 2022
// Author: Amaro, A.

/*
Durante este codigo se realiza una secuencia de luces con pulsador, al presionarlo cambia de secuencia. Las secuencias disponibles son derecha-izquierda, derecha, izquierda y la inicial 
corresponde a un encendido y apagado.
*/

const int pulsador = 2; //Colocamos el pulsador en el boton 2

const int cantidad_secuencia = 6; // En esta parte indiciamos la cantidad de secuencia disponibles 

int secuencia = 0; // Inicializamos la secuencia en 0

int estado = 0 ; // Inicializamos el estado en 0

int led1 = 8; //Colocamos los respectivos pines a cada LED.
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

int tiempo = 50 ; // Colocamos una variable de moderacion de tiempo.

void setup(){
  pinMode(led1, OUTPUT); //En esta parte colocamnos los LED como salida digital.
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

  pinMode(pulsador, INPUT); // En esta parte colocamos el boton como entrada digital.

}

void loop(){

  //digitalWrite(LED_BUILTIN, LOW);
  
  estado = digitalRead(pulsador); // Colocamos que estado almacene la lectura del pulsador.

  if(estado == 1){  //En caso de que el estado sea 1, se aumenta la secuencia
    secuencia = secuencia + 1;
  }

  if(secuencia >= (cantidad_secuencia + 1)){ //En caso de que la secuencia pase de 4 se reinicia la secuencia en 1
    secuencia = 0;
  }

  if(secuencia == 0){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);

    delay(1000);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    delay(1000);
  }

  if(secuencia == 1){ 
    digitalWrite(led1, HIGH); //  En esta parte colocamos la primer secuencia de derecha - izquierda.
    delay(tiempo);
    digitalWrite(led1, LOW);
    delay(tiempo);

    digitalWrite(led2, HIGH);
    delay(tiempo);
    digitalWrite(led2, LOW);
    delay(tiempo);

    digitalWrite(led3, HIGH);
    delay(tiempo);
    digitalWrite(led3, LOW);
    delay(tiempo);

    digitalWrite(led4, HIGH);
    delay(tiempo);
    digitalWrite(led4, LOW);
    delay(tiempo);

    digitalWrite(led5, HIGH);
    delay(tiempo);
    digitalWrite(led5, LOW);
    delay(tiempo);  

    digitalWrite(led4, HIGH);
    delay(tiempo);
    digitalWrite(led4, LOW);
    delay(tiempo);

    digitalWrite(led3, HIGH);
    delay(tiempo);
    digitalWrite(led3, LOW);
    delay(tiempo);

    digitalWrite(led2, HIGH);
    delay(tiempo);
    digitalWrite(led2, LOW);
    delay(tiempo);

  }

  if(secuencia == 2){
    digitalWrite(led1, HIGH);
    delay(tiempo + 100);
    digitalWrite(led1, LOW);
    delay(tiempo + 100);

    digitalWrite(led2, HIGH);
    delay(tiempo + 100);
    digitalWrite(led2, LOW);
    delay(tiempo + 100);

    digitalWrite(led3, HIGH);
    delay(tiempo + 100);
    digitalWrite(led3, LOW);
    delay(tiempo + 100);

    digitalWrite(led4, HIGH);
    delay(tiempo + 100);
    digitalWrite(led4, LOW);
    delay(tiempo + 100);

    digitalWrite(led5, HIGH);
    delay(tiempo + 100);
    digitalWrite(led5, LOW);
    delay(tiempo + 100);
  }

  if(secuencia == 3){
    digitalWrite(led5, HIGH);
    delay(tiempo + 100);
    digitalWrite(led5, LOW);
    delay(tiempo + 100);

    digitalWrite(led4, HIGH);
    delay(tiempo + 100);
    digitalWrite(led4, LOW);
    delay(tiempo + 100);

    digitalWrite(led3, HIGH);
    delay(tiempo + 100);
    digitalWrite(led3, LOW);
    delay(tiempo + 100);

    digitalWrite(led2, HIGH);
    delay(tiempo + 100);
    digitalWrite(led2, LOW);
    delay(tiempo + 100);

    digitalWrite(led1, HIGH);
    delay(tiempo + 100);
    digitalWrite(led1, LOW);
    delay(tiempo + 100);
  }

  if(secuencia == 4){
    digitalWrite(led1, HIGH);
    delay(tiempo);
    digitalWrite(led1, LOW);
    delay(tiempo);

    digitalWrite(led3, HIGH);
    delay(tiempo);
    digitalWrite(led3, LOW);
    delay(tiempo);

    digitalWrite(led5, HIGH);
    delay(tiempo);
    digitalWrite(led5, LOW);
    delay(tiempo);

    digitalWrite(led2, HIGH);
    delay(tiempo);
    digitalWrite(led2, LOW);
    delay(tiempo);

    digitalWrite(led4, HIGH);
    delay(tiempo);
    digitalWrite(led4, LOW);
    delay(tiempo);    
  }

  if(secuencia == 5){
    digitalWrite(led5, HIGH);
    delay(tiempo);
    digitalWrite(led5, LOW);
    delay(tiempo);

    digitalWrite(led3, HIGH);
    delay(tiempo);
    digitalWrite(led3, LOW);
    delay(tiempo);

    digitalWrite(led1, HIGH);
    delay(tiempo);
    digitalWrite(led1, LOW);
    delay(tiempo);   

    digitalWrite(led4, HIGH);
    delay(tiempo);
    digitalWrite(led4, LOW);
    delay(tiempo);

    digitalWrite(led2, HIGH);
    delay(tiempo);
    digitalWrite(led2, LOW);
    delay(tiempo);
  }

  if(secuencia == 6){
    digitalWrite(led1, HIGH);
    delay(tiempo);
    digitalWrite(led1, LOW);
    delay(tiempo);

    digitalWrite(led5, HIGH);
    delay(tiempo);
    digitalWrite(led5, LOW);
    delay(tiempo);

    digitalWrite(led2, HIGH);
    delay(tiempo);
    digitalWrite(led2, LOW);
    delay(tiempo);

    digitalWrite(led4, HIGH);
    delay(tiempo);
    digitalWrite(led4, LOW);
    delay(tiempo);

    digitalWrite(led3, HIGH);
    delay(tiempo);
    digitalWrite(led3, LOW);
    delay(tiempo);
  }
}