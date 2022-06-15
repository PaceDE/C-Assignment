#include<stdio.h>
void main()
{
    int a, b,sum, i, num;
    a=0, b=1;
    printf("Enter the no of terms : ");
    scanf("%d", &num);
    printf("The fibonnaci series up to %d terms \n %d \n %d", num, a, b);
    for(i=3;i<=num;i++){
                sum=a+b;
                a = b;
                b = sum;
                printf("\n %d",sum);
            }
}
