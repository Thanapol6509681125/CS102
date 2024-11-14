#include<stdio.h>
//Thanapol Moolchalee
//6509681125

int main()
{
    int nB, pm, d1, d2;
    float aDB,inter;
    printf("Enter netBalance : ");
    scanf("%d",&nB);
    printf("Enter payment : ");
    scanf("%d",&pm);
    printf("Enter d1 : ");
    scanf("%d",&d1);
    printf("Enter d2 : ");
    scanf("%d",&d2);
    aDB=(nB*d1-pm*d2)/d1;
    inter=aDB*0.0152;
    printf("Interst is %.2f",inter);

    return 0;
}
