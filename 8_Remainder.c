// Program to find remainder

#include<stdio.h>
void main()
{
    int a, b, Remainder, Quotient;
    printf("Enter the Dividend : ");
    scanf("%d", &a);
    printf("Enter the Divisor : ");
    scanf("%d", &b);
    Remainder = a%b;
    Quotient = a/b;
    printf("\n Remainder = %d \n Quotient = %d", Remainder, Quotient);
    printf("\n\n\t Special cases");
    printf("\n REMAINDER = %d", 20%3);
    printf("\n REMAINDER = %d", -20%3);
    printf("\n REMAINDER = %d", 20%-3);
    printf("\n REMAINDER = %d", -20%-3);


}
