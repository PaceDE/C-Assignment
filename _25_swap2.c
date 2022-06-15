// Program to swap two variable without using third variable

#include<stdio.h>
void main()
{
    int a, b;

    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n \t \t After swapping");
    printf("\n The value of a = %d \n The value of b = %d", a, b);


}
