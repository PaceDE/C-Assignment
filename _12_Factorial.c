// Program to find Factorial of given number

#include<stdio.h>
void main()
{
    int num,Factorial=1, i=1;
    printf(" Enter any number : ");
    scanf("%d", &num);
    for(i;i<=num;i++){
        Factorial = Factorial*i;
    }
    printf("\n The Factorial of %d : %d", num, Factorial);
}
