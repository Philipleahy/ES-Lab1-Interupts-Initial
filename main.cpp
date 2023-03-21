#include "mbed.h"

Serial pc(USBTX, USBRX);
InterruptIn Down(p12);
InterruptIn Left(p13);
InterruptIn Center(p14);
InterruptIn Up(p15);
InterruptIn Right(p16);

void down()
{
    printf("Joystick Down \r\n");
}
void left()
{
    printf("Joystick Left \r\n");
}
void centre()
{
    printf("Joystick Center \r\n");
}
void up()
{
    printf("Joystick Up \r\n");
}
void right()
{
    printf("Joystick Right \r\n");
}
int main() 
{
    Down.rise(&down);
    Left.rise(&left);
    Center.rise(&centre);
    Up.rise(&up);
    Right.rise(&right);
    while (1) {
    }
 
}
