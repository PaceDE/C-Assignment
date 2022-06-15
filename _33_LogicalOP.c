// Logical Operator

#include<stdio.h>
void main()
{
    printf("1. And Operator");
    int a=2, b=3, c=4;
    printf("\n\n a<b&&b<c : %d", a<b&&b<c);
    printf("\n a<b&&b>c : %d", a<b&&b>c);
    printf("\n a>b&&b<c : %d", a>b&&b<c);
    printf("\n a>b&&b>c : %d", a>b&&b>c);

    printf("\n\n 2.Or Operator");
    printf("\n\n a<b||b<c : %d", a<b||b<c);
    printf("\n a<b||b>c : %d", a<b||b>c);
    printf("\n a>b||b<c : %d", a>b||b<c);
    printf("\n a>b||b>c : %d", a>b||b>c);

    printf("\n\n 3. Not Operator");
    printf("\n !a=a : %d", !a==a);
    printf("\n !(a>b) : %d ,  !(a<b) : %d", !(a>b), !(a<b));
}
