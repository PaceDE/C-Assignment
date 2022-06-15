// Program to find power of the number

#include<stdio.h>
#include<math.h>
void main()
{
    float x, a, result, square;
    printf("\n Enter any Number : ");
    scanf("%f", &x);
    printf("\n Enter the Power : ");
    scanf("%f", &a);
    result = pow(x,a);
    printf("\n %f^%f = %f", x, a, result);

    // square without using function
    square = x*x;
    printf("\n The square of %f = %f", x, square);
}
