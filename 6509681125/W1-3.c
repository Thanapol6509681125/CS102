#include<stdio.h>
//Thanapol Moolchalee
//6509681125

int main()
{
    int rt,lb,dt,t;
    printf("Enter length of the backyard ");
    scanf("%d",&lb);
    printf("Enter radius of tree ");
    scanf("%d",&rt);
    printf("Enter distant between tree ");
    scanf("%d",&dt);
    t=lb/((rt*2)+1);
    printf("Total tree %d",t);

    return 0;
}
