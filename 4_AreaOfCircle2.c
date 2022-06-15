// Program to find multiple area of circle using multiple radius

#include<stdio.h>
#define PI 3.14
void main()
{
    float r1, r2, r3;
    float a1, a2, a3;
    printf("Enter first radius : ");
    scanf("%f", &r1);
    printf("Enter second radius : ");
    scanf("%f", &r2);
    printf("Enter third radius : ");
    scanf("%f", &r3);
    a1= PI*r1*r1;
    a2= PI*r2*r2;
    a3= PI*r3*r3;
    printf("\nThe area of circle with radius %f = %f", r1, a1);
    printf("\nThe area of circle with radius %f = %f", r2, a2);
    printf("\nThe area of circle with radius %f = %f", r3, a3);

}
