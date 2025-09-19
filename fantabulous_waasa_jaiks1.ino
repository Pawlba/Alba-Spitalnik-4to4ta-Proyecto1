#include <Servo.h>
	Servo servoUno;
	Servo servoDos;
	int grados = 0;
	bool botonUno;
	bool botonDos;
void setup()
{
  servoUno.attach(A0);
  servoDos.attach(A1);
  servoUno.write(0);
  servoDos.write(0);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
  botonUno = digitalRead(4);
  botonDos = digitalRead(5);
  Serial.print(botonUno);
  Serial.print(" ");
  Serial.println(botonDos);
  if(botonUno == LOW){
    avanzar();
  }
  if(botonDos == LOW){
    retroceder();
  }
  delay(300);
}

void avanzar()
{
  grados = grados + 10;
  servoUno.write(grados);
  servoDos.write(grados);
  delay(1000);
}
void retroceder()
{
  grados = grados - 10;
  if(grados < 0){
    grados = 0;
  }
  servoUno.write(grados);
  servoDos.write(grados);
  delay(1000);
}
  
  
