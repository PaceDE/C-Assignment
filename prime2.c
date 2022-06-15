#include<stdio.h>
void main()
{
    int a,b, i, condition;
    condition=0;
    printf("Write any number : ");
    scanf("%d", &a);
    b=a/2;
    for(i=2;i<=b;i++)
    {
        if(a%i==0)
        {
            printf("The given number is composite");
            condition=1;
            break;
        }
    }
    if(condition==0)
    {
        printf("The given number is prime");
    }


}




