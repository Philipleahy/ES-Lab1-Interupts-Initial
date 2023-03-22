#include "mbed.h"

//Embedded Systems Lab 1

Serial pc(USBTX, USBRX);
InterruptIn Down(p12);//Move Joystick Down
InterruptIn Left(p13);//Move Joystick Left
InterruptIn Center(p14);//Press Joystick Center Button
InterruptIn Up(p15);//Move Joystick Up
InterruptIn Right(p16);//Move Joystick Right
float delay(0.25);//Variable in ms. Started at 0.1 and found correct result at 0.25

void down()
{
    printf("Joystick Down \r\n");
    wait(delay);
}
void left()
{
    printf("Joystick Left \r\n");
    wait(delay);
}
void centre()
{
    printf("Joystick Center \r\n");
    wait(delay);
}
void up()
{
    printf("Joystick Up \r\n");
    wait(delay);
}
void right()
{
    printf("Joystick Right \r\n");
    wait(delay);
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
