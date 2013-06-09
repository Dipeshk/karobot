#define enableL 5
#define enableR 6

#define leftMotor1 4
#define leftMotor2 7

#define rightMotor1 12
#define rightMotor2 8

#define LM 1
#define RM 2
#define BM 3
#define sensor_op HIGH
#define sensor1 A3
#define sensor2 A1

void motorStop(int);
void motorForward((int);
void motorBackward((int);

void goForward();
void turnLeft();
void turnRight();
int isONline(int);
void robotBegin();
