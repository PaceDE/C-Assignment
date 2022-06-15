// Sum of numbers up to N times

#include<stdio.h>
void main()
{
    int num, N, Sum=0, i=1;
    printf(" Enter any number : ");
    scanf("%d", &num);
    printf("\n Enter N : ");
    scanf("%d", &N);
    for(i;i<=N;i++){
        Sum= Sum + num;
    }
    printf("\n The sum of %d up to %d times : %d", num, N, Sum);



}
