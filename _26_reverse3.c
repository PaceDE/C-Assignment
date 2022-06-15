// Program to reverse 3 digits number;

#include<stdio.h>
void main()
{
    int num, r1, r2, r3, sum;
    printf("Enter any three digit number : ");
    scanf("%d", &num);
    r1=num%10;
    num= num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    printf("\n \t After reversing the digits ");
    printf("\n\n The number = %d%d%d", r1, r2, r3);
    sum=r1+r2+r3;
    printf("\n The sum of three digits = %d", sum);
}
