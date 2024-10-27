// CODIGO 1: ENTRADA DIGITAL BOTON
//
void setup()
{
  pinMode(13, OUTPUT);  //LED
  pinMode(8, INPUT);  //BOTON
}

void loop()
{
  digitalWrite(13, digitalRead(8)); //Escribimpos en el LED el valor del BOTON
}
// CODIGO 3: ENTRADA DIGITAL CONDICIONALES BOTON
//
void setup()
{
  pinMode(13, OUTPUT);  //LED
  pinMode(8, INPUT);  //BOTON
}

void loop()
{
  if (digitalRead(8) == HIGH)   //Pregunta si el boton1 esta activado
  {
    digitalWrite(13, HIGH);     //SI: encendemos el led1
  }
  else if(digitalRead(8) == LOW)  //Pregunta si el boton1 esta desactivado
  {
    digitalWrite(13, LOW);      //SI: apagamos el led1
  }
}
// CODIGO 2: ENTRADA DIGITAL 2 BOTONES
//
void setup()
{
  pinMode(13, OUTPUT);  //LED1
  pinMode(8, INPUT);  //BOTON1
  pinMode(11, OUTPUT);  //LED2
  pinMode(2, INPUT);  //BOTON2
}

void loop()
{
  digitalWrite(13, digitalRead(8)); //Escribimpos en el LED1 el valor del BOTON1
  digitalWrite(11, digitalRead(2)); //Escribimpos en el LED2 el valor del BOTON2
}
// CODIGO 4:ENTRADA DIGITAL CONDICIONALES 2 BOTONES
//
void setup()
{
  pinMode(13, OUTPUT);  //LED1
  pinMode(8, INPUT);  //BOTON1
  pinMode(11, OUTPUT);  //LED2
  pinMode(2, INPUT);  //BOTON2
}

void loop()
{
  if (digitalRead(8) == HIGH)   //Pregunta si el boton1 esta activado
  {
    digitalWrite(13, HIGH);     //SI: encendemos el led1
  }
  else if(digitalRead(8) == LOW)  //Pregunta si el boton1 esta desactivado
  {
    digitalWrite(13, LOW);      //SI: apagamos el led1
  }
  
  if (digitalRead(2) == HIGH)   //Pregunta si el boton2 esta activado
  {
    digitalWrite(11, HIGH);     //SI: encendemos el led2
  }
  else if(digitalRead(2) == LOW)  //Pregunta si el boton2 esta desactivado
  {
    digitalWrite(11, LOW);      //SI: apagamos el led2
  }
}
// CODIGO 5: CONTADOR LEDS
// 

int cuenta = 0;    //Variable que guarda el numero de veces que se ha contado

void setup()
{
  //Inicializamos puertos
  pinMode(13, OUTPUT);  //LED1
  pinMode(12, OUTPUT);  //LED2
  pinMode(11, OUTPUT);  //LED3
  pinMode(10, OUTPUT);  //LED4
  pinMode(2, INPUT);  //BOTON
}

void loop()
{
  if (digitalRead(2) == HIGH)   //Pregunta si el boton esta activado
  {
    cuenta++;
    delay(500);
  }
  if(cuenta >= 5)
  {
    cuenta = 0;
  }
  
  if(cuenta == 0)
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  } 
  else if(cuenta == 1)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  } 
  else if(cuenta == 2)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  else if(cuenta == 3)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  }
  else if(cuenta == 4)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  }
}
// CODIGO 6: CONDICIONALES OR
//
void setup()
{
  //Inicializamos puertos
  pinMode(13, OUTPUT);  //LED1
  pinMode(8, INPUT);  //BOTON1
  pinMode(2, INPUT);  //BOTON2
}

void loop()
{
  if (digitalRead(8) == HIGH || digitalRead(2) == HIGH)   //Pregunta si se cumple la condición
  {
    digitalWrite(13, HIGH);     //SI: encendemos el led1
  }
  else  //En caso contrario
  {
    digitalWrite(13, LOW);      //NO: apagamos el led1
  }

}
// CODIGO 7: CONDICIONALES AND
//
void setup()
{
  //Inicializamos puertos
  pinMode(13, OUTPUT);  //LED1
  pinMode(8, INPUT);  //BOTON1
  pinMode(2, INPUT);  //BOTON2
}

void loop()
{
  if (digitalRead(8) == HIGH && digitalRead(2) == HIGH)   //Pregunta si se cumple la condición
  {
    digitalWrite(13, HIGH);     //SI: encendemos el led1
  }
  else  //En caso contrario
  {
    digitalWrite(13, LOW);      //NO: apagamos el led1
  }

}
