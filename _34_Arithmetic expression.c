// Arithmetic Expression

#include<stdio.h>
void main()
{
    int a=5, b=1, c=3, d=3, Result;
    Result= a+b*c/d;
    printf(" 1. a+b*c/d = %d", Result);

    a=4, b=5, c=7, d=3;
    Result= (a+b)*b*c/d%3;
    printf("\n\n 2. (a+b)*b*c/d%3 = %d", Result);

    a=2, b=3, c=4;
    Result= a+b*c<=b*a>=b*c;
    printf("\n\n 3. a+b*c<=b*a>=b*c = %d", Result);
}
