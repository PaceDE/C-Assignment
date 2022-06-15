// Program to swap two variable with using third variable

#include<stdio.h>
void main()
{
    int a, b, memory;

    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    memory=a;
    a=b;
    b=memory;
    printf("\n \t \t After swapping");
    printf("\n The value of a = %d \n The value of b = %d", a, b);


}
