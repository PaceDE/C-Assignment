// Find Area of Triangle using Base And Height

#include<stdio.h>
void main()
{
    float b, h, A;
    printf("\n Enter the length of base of Triangle : ");
    scanf("%f", &b);
    printf("\n Enter the Perpendicular height of the triangle : ");
    scanf("%f", &h);
    A= b*h/2;
    printf("\n The area of the Triangle : %f", A);

}

