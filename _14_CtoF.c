// Program to convert Celsius to Fahrenheit scale

#include<stdio.h>
void main()
{
    float C, F;
    printf("\n Enter the temperature in Celsius degree : ");
    scanf("%f", &C);
    F = (9*C+160)/5;
    printf("\n The temperature in Fahrenheit degree : %fF", F);
}
