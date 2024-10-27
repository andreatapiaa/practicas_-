#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);
char Dato='x';

void setup()
{
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  if(mySerial.available()>=1){
    Dato=mySerial.read();
        Serial.println(Dato);
        if(Dato=='1'){
          digitalWrite(13,HIGH);
        }
        else 
        {
          digitalWrite(13,LOW);
        }
  }
}
