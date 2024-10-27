#include <Servo.h>
Servo brazo1;
Servo brazo2;
Servo base;
Servo pinza;

void setup()
{
  brazo1.attach(3);
  brazo2.attach(5);
  base.attach(9);
  pinza.attach(10);
}

void loop()
{
  int valor1 = analogRead(A0);
  int valor2 = analogRead(A1);
  int valor3 = analogRead(A2);
  int valor4 = analogRead(A3);
  int pos1 = map(valor1, 0, 1023, 0, 180);
  int pos2 = map(valor2, 0, 1023, 180, 0);
  int pos3 = map(valor3, 0, 1023, 0, 180);
  int pos4 = map(valor4, 0, 1023, 0, 180);
  brazo1.write(pos1);
  brazo2.write(pos2);
  base.write(pos3);
  pinza.write(pos4);
  delay(10);
}
