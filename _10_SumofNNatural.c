// Program to find sum of Natural no up to N terms

#include<stdio.h>
void main()
{
    int N, i, Sum;
    i=1, Sum=0;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(i;i<=N;i++){
        Sum = Sum+i;

    }
    if(N==1){
        printf("\n Sum of Natural no up to 1st term : %d", Sum);
    }
    else if(N==2){
        printf("\n Sum of Natural no up to 2nd term : %d", Sum);
    }
     else if(N==3){
        printf("\n Sum of Natural no up to 3rd term : %d", Sum);
    }
    else{
    printf("\n Sum of Natural no up to %dth term : %d", N, Sum);

    }
}
