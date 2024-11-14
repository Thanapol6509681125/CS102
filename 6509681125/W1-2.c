#include<stdio.h>
//Thanapol Moolchalee
//6509681125

int main()
{
    float rc,hc,vl,width,length;
    const float PI=3.141;
    printf("Radius of Cylinder : ");
    scanf("%f",&rc);
    printf("High of Cylinder : ");
    scanf("%f",&hc);
    vl=(PI*(rc*rc))*hc;
    length=5;
    width=vl/(length*hc);
    printf("Volume is %.2f",vl);
    printf("\nCube side = %.2f %.2f %.2f",width,length,hc);

    return 0;
}
