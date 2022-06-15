// Program to find Perimeter and Area of Rectangle

#include<stdio.h>
void main ()
{
    float l, b, P, A;
    printf("Enter the length of the rectangle : ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f", &b);
    P= 2*(l+b);
    A= l*b;
    printf("\n Perimeter = %f \n Area = %f", P, A);


}
