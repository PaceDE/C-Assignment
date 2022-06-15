// Program to find root of Quadratic equation

#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c, D, Root1, Root2;
    printf("Enter the coeff of X2 = ");
    scanf("%f", &a);
    printf("Enter the coeff of X = ");
    scanf("%f", &b);
    printf("Enter the coeff of C = ");
    scanf("%f", &c);
    D=sqrt((b*b)-(4*a*c));
    Root1= (-b+D)/(2*a);
    Root2= (-b-D)/(2*a);
    printf("\n First Root = %f", Root1);
    printf("\n Second Root = %f", Root2);

}
