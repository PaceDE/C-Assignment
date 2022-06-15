// Program to convert days into years months weeks and days

#include<stdio.h>
void main()
{
    int Days, Years, Months, Weeks;
    printf("\n Enter the total no of days : ");
    scanf("%d", &Days);
    Years = Days/365;
    Days = Days%365;
    Months = Days/30;
    Days = Days%30;
    Weeks = Days/7;
    Days = Days %7;
    printf("The given days = %d Years, %d Months, %d Weeks, %d Days", Years, Months, Weeks, Days);
}
