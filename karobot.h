#define enableL 5
#define enableR 6

#define leftMotor1 4
#define leftMotor2 7

#define rightMotor1 12
#define rightMotor2 8

#define sensor_op HIGH
#define sensor1 A0
#define sensor2 A1

void motorStop(char*);
void motorForward(char*);
void motorBackward(char*);

void goforward();
void leftturn();
void rightturn();
int isONline(int);
void robot_begin();