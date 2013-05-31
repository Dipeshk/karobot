#include<karobot.h>
#include<Arduino.h>//**********************
//**********************
//motor stop function
//**********************
void motorStop(char M[])
{
  if(strcmp(M,"leftMotor")==0)
  {
    digitalWrite(leftMotor1,LOW);
    digitalWrite(leftMotor2,LOW);
  }
  if(strcmp(M,"rightMotor")==0)
  {
    digitalWrite(rightMotor1,LOW);
    digitalWrite(rightMotor2,LOW);
  }
  if(strcmp(M,"bothMotors")==0)
  {
    digitalWrite(rightMotor1,LOW);
    digitalWrite(rightMotor2,LOW);
    digitalWrite(leftMotor1,LOW);
    digitalWrite(leftMotor2,LOW); 
  }
}


//***********************
//***********************
//motor backward function
//***********************
void motorBackward(char M[])
{
  if(strcmp(M,"leftMotor")==0)
  {
//    digitalWrite(rightMotor1,LOW);
//    digitalWrite(rightMotor2,LOW);
    digitalWrite(leftMotor1,LOW);
    digitalWrite(leftMotor2,HIGH);
  }
  if(strcmp(M,"rightMotor")==0)
  {
//    digitalWrite(leftMotor1,LOW);
//    digitalWrite(leftMotor2,LOW);
    digitalWrite(rightMotor1,LOW);
    digitalWrite(rightMotor2,HIGH);    
  }
  if(strcmp(M,"bothMotors")==0)
  {
    digitalWrite(leftMotor1,LOW);
    digitalWrite(leftMotor2,HIGH);
    digitalWrite(rightMotor1,LOW);
    digitalWrite(rightMotor2,HIGH);    
  }
}


//**********************
//**********************
//motor forward function
//**********************
void motorForward(char M[])
{
  if(strcmp(M,"leftMotor")==0)
  {
//    digitalWrite(rightMotor1,LOW);
//    digitalWrite(rightMotor2,LOW);  
    digitalWrite(leftMotor1,HIGH);
    digitalWrite(leftMotor2,LOW);
  }
  if(strcmp(M,"rightMotor")==0)
  {
//    digitalWrite(leftMotor1,LOW);
//    digitalWrite(leftMotor2,LOW);
    digitalWrite(rightMotor1,HIGH);
    digitalWrite(rightMotor2,LOW);    
  }
  if(strcmp(M,"bothMotors")==0)
  {
    digitalWrite(leftMotor1,HIGH);
    digitalWrite(leftMotor2,LOW);
    digitalWrite(rightMotor1,HIGH);
    digitalWrite(rightMotor2,LOW);    
  }
}


//******************************************************
//mandira part
//**************************
//**************************
//robot go forward function
//**************************
//**************************
void goforward()
{
  motorForward("leftMotor");
  motorForward("rightMotor");
  //digitalWrite(leftMotor2,LOW);
  //digitalWrite(leftMotor1,HIGH);
  //digitalWrite(rightMotor1,HIGH);
  //digitalWrite(rightMotor2,LOW);
}

//**************************
//**************************
//robot turnleft function
//**************************
//**************************
void leftturn()
{
  //motorStop("leftMotor");
  //motorForward("rightMotor);
  digitalWrite(leftMotor1,LOW);
  digitalWrite(leftMotor2,LOW);
  digitalWrite(rightMotor1,HIGH);
  digitalWrite(rightMotor2,LOW);
}

//**************************
//**************************
//robot turnright function
//**************************
//**************************
void rightturn()
{
  digitalWrite(leftMotor1,HIGH);
  digitalWrite(leftMotor2,LOW);
  digitalWrite(rightMotor1,LOW);
  digitalWrite(rightMotor2,LOW);
}

//if(isONline(sensor1) && isONline(sensor2)
//***************************
//***************************
//is on line or not function
//***************************
//***************************

int isONline(int sensor_id)
{
  return((digitalRead(sensor_id))==sensor_op);
}

void robot_begin()
{
  pinMode(leftMotor1,OUTPUT);
  pinMode(leftMotor2,OUTPUT);
  
  pinMode(rightMotor1,OUTPUT);
  pinMode(rightMotor2,OUTPUT);
  
  pinMode(enableL,OUTPUT);
  pinMode(enableR,OUTPUT);
  
  digitalWrite(enableL,HIGH);
  digitalWrite(enableR,HIGH);

}
