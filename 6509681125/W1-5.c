#include<stdio.h>
//Thanapol Moolchalee
//6509681125

int main()
{
        int num1,num2,result;
        char op;
        printf("Enter number 1 ");
        scanf("%d",&num1);
        printf("Enter number 2 ");
        scanf("%d",&num2);
        printf("Enter operation ");
        scanf(" %c",&op);
        if(op=='+')
        {
            result=num1+num2;
            printf("%d",result);
        }
        else if(op=='-')
        {
            result=num1-num2;
            printf("%d",result);
        }
        else if(op=='*')
        {
            result=num1*num2;
            printf("%d",result);
        }
        else if(op=='/')
        {
            if(num2!=0)
            {
                result=num1/num2;
                printf("%d",result);
            }
            else
            {
                printf("Can't Calculate");
            }
        }

    return 0;
}
