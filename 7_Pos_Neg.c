// Program to test whether the number is positive or negative

#include<stdio.h>
void main()
{
    float num;
    printf("Enter any number : ");
    scanf("%f", &num);
    if(num>0){
        printf("\n %f is a positive number ", num);
    }
    else if (num<0){
        printf("\n %f is a negative number ", num);
    }
}
