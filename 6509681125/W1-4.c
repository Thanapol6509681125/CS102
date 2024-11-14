#include<stdio.h>
#include<math.h>
//Thanapol Moolchalee
//6509681125

int main()
{
    float t,speed,dspeed,s,ds,dt,ddspeed;
    t=0.56;
    s=42;
    ds=2;
    dt=0.06;
    speed=((s/t)*18)/5;
    ddspeed=(pow((ds/s),2)+pow((dt/t),2))*(pow(270,2));
    dspeed=sqrt(ddspeed);
    printf("Speed of Ferrari FF = %.3f km/hr",speed);
    printf("\nDeviation of Speed = %.3f km/hr",dspeed);

    return 0;
}
