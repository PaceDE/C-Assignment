// Program to find Area and Circumference of circle

#include<stdio.h>
#define PI 3.14
void main()
{
    float r, C, A;
    printf("Enter the radius of the circle : ");
    scanf("%f", &r);
    C= 2*PI*r;
    A= PI*r*r;
    printf("The circumference of the cirlce : %f ", C);
    printf("\nThe area of the cirlce : %f ", A);
}
