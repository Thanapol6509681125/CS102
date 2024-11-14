#include<stdio.h>
#include<math.h>
//Thanapol Moolchalee
//6509681125

int main()
{
    int a,b,c,ab,c2;
    printf("Enter side of a ");
    scanf("%d",&a);
    printf("\nEnter side of b ");
    scanf("%d",&b);
    printf("\nEnter side of c ");
    scanf("%d",&c);
    ab=pow(a,2)+pow(b,2);
    c2=pow(c,2);
    if(ab==c2)
    {
        printf("\nIt is right triangle");
    }
    else
    {
        printf("\nErrors");
    }

    return 0;
}
