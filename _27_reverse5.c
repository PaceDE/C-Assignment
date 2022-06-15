// Program to reverse 5 digits number;

#include<stdio.h>
void main()
{
    int num, r1, r2, r3, r4, r5, sum;
    printf("Enter any five digit number : ");
    scanf("%d", &num);
    r1=num%10;
    num= num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    num=num/10;
    r4=num%10;
    num=num/10;
    r5=num%10;
    printf("\n \t After reversing the digits ");
    printf("\n\n The number = %d%d%d%d%d", r1, r2, r3, r4, r5);
    sum=r1+r2+r3+r4+r5;
    printf("\n The sum of five digits = %d", sum);
}
