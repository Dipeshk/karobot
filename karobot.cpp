#include<karobot.h>
#include<Arduino.h>

//**********************
//**********************
//motor stop function
//**********************
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
//***********************
void motorBackward(char M[])
{
  if(strcmp(M,"leftMotor")==0)
  {
    digitalWrite(leftMotor1,LOW);
    digitalWrite(leftMotor2,HIGH);
  }
  if(strcmp(M,"rightMotor")==0)
  {
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
//***********************
void motorForward(char M[])
{
  if(strcmp(M,"leftMotor")==0)
  { 
    digitalWrite(leftMotor1,HIGH);
    digitalWrite(leftMotor2,LOW);
  }
  if(strcmp(M,"rightMotor")==0)
  {
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


//**************************
//**************************
//robot go forward function
//**************************
//**************************
void goForward()
{
  digitalWrite(leftMotor2,LOW);
  digitalWrite(leftMotor1,HIGH);
  digitalWrite(rightMotor1,HIGH);
  digitalWrite(rightMotor2,LOW);
}

//**************************
//**************************
//robot turnleft function
//**************************
//**************************
void leftTurn()
{
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
void rightTurn()
{
  digitalWrite(leftMotor1,HIGH);
  digitalWrite(leftMotor2,LOW);
  digitalWrite(rightMotor1,LOW);
  digitalWrite(rightMotor2,LOW);
}

//***************************
//***************************
//is on line or not function
//***************************
//***************************

int isONline(int sensor_id)
{
  return((digitalRead(sensor_id))==sensor_op);
}

//*****************************
//*****************************
//initialize 

void roboBegin()
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



laptop for each team
one teachers from each school
selected students should come at place n time we ask
call 24 students at karkhana with teacher comming thrusday


monday samman ma students ko name haru chaiyo
sunday new summit ma Qs.
