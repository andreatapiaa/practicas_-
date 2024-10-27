// CODIGO 1: EJEMPLO BLINK
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
// CODIGO 2: SALIDA DIGITAL HIGH
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
}
// CODIGO 3: SALIDA DIGITAL LOW
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, LOW);
}
// CODIGO 4: SALIDA DIGITAL DELAY
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
// CODIGO 5: SALIDA DIGITAL LED
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
// CODIGO 6: SALIDA DIGITAL PROTOBOARD
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
// CODIGO 7: SALIDA DIGITAL 2 LEDS 1
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
// CODIGO 8: SALIDA DIGITAL 2 LEDS 2
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
// CODIGO 9: SALIDA DIGITAL DISPLAY 7 SEGMENTOS
//
void setup()
{
  pinMode(13, OUTPUT);  //Segmento e
  pinMode(12, OUTPUT);  //Segmento d
  pinMode(10, OUTPUT);  //Segmento c
  pinMode(9, OUTPUT); //Segmento punto
  pinMode(7, OUTPUT); //Segmento b
  pinMode(6, OUTPUT); //Segmento a
  pinMode(5, OUTPUT); //Segmento f
  pinMode(4, OUTPUT); //Segmento g
}

void loop()
{
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);
}
// CODIGO 10: SALIDA DIGITAL DISPLAY 7 SEGMENTOS CONTADOR
//
void setup()
{
  pinMode(13, OUTPUT);  //Segmento e
  pinMode(12, OUTPUT);  //Segmento d
  pinMode(10, OUTPUT);  //Segmento c
  pinMode(9, OUTPUT); //Segmento punto
  pinMode(7, OUTPUT); //Segmento b
  pinMode(6, OUTPUT); //Segmento a
  pinMode(5, OUTPUT); //Segmento f
  pinMode(4, OUTPUT); //Segmento g
}

void loop()
{
  // Mostramos el numero 0
  digitalWrite(6, HIGH);    //Encendido
  digitalWrite(7, HIGH);    //Encendido
  digitalWrite(10, HIGH); //Encendido
  digitalWrite(12, HIGH); //Encendido
  digitalWrite(13, HIGH); //Encendido
  digitalWrite(5, HIGH);    //Encendido
  digitalWrite(4, LOW); //Apagado
  digitalWrite(9, LOW); //Apagado
  delay(1000);
  
  // Mostramos el numero 1
  digitalWrite(6, LOW); //Apagado
  digitalWrite(7, HIGH);  //Encendido
  digitalWrite(10, HIGH); //Encendido
  digitalWrite(12, LOW);  //Apagado
  digitalWrite(13, LOW);  //Apagado
  digitalWrite(5, LOW); //Apagado
  digitalWrite(4, LOW); //Apagado
  digitalWrite(9, LOW); //Apagado
  delay(1000);
  
  // Mostramos el numero 2
  digitalWrite(6, HIGH);  //Apagado
  digitalWrite(7, HIGH);    //Encendido
  digitalWrite(10, LOW);  //Encendido
  digitalWrite(12, HIGH); //Apagado
  digitalWrite(13, HIGH); //Apagado
  digitalWrite(5, LOW); //Apagado
  digitalWrite(4, HIGH);  //Apagado
  digitalWrite(9, LOW); //Apagado
  delay(1000);
}
