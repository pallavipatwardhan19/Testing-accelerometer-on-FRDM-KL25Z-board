/* -- Freescale FRDM board comes with an onboard accelerometer. For testing of accelerometer following code is used -- */ 
#include "mbed.h"
#include "MMA8451Q.h"
Serial pc(USBTX,USBRX);
MMA8451Q acc(PTE25,PTE24,ADDRESS);
float x,y,z;
int main()
{
    while(1)
    {
      x=acc.getAccX();		//For accelerometer values of x-axis
      y=acc.getAccY();		//For accelerometer values of y-axis
      z=acc.getAccZ();		//For accelerometer values of z-axis
      pc.printf("x=%f \t y=%f \t z=%f\t\n\r",x,y,z);
      wait(0.8);
    }
    return 0;
}
