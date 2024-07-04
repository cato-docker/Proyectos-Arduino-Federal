#include <Servo.h> //Incluimos la libreria servo

//Declaramos variables/constantes que podamos llegar a utilizar
int PIN = 3;
int ANGULO;
int TIEMPO = 2000; // Modifiqué el tiempo para hacerlo más rápido, puedes ajustarlo según lo que necesites

//Creamos el objeto llamado servo
Servo servo1;

void setup ()
{
  servo1.attach(PIN);
  Serial.begin(9600);
}

void loop ()
{
  ANGULO = 0;
  servo1.write(ANGULO);
  Serial.print("Ángulo es: ");
  Serial.println(ANGULO);
  delay(TIEMPO);

  //El servo se pone a 90°
  ANGULO = 90;
  servo1.write(ANGULO);
  Serial.print("Ángulo es: ");
  Serial.println(ANGULO);
  delay(TIEMPO);

  //El servo se pone a 90°
  ANGULO = 180;
  servo1.write(ANGULO);
  Serial.print("Ángulo es: ");
  Serial.println(ANGULO);
  delay(TIEMPO);
  
}
