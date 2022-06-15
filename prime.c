#include<stdio.h>
void main()
{
    int a, b;
    b=2;
    printf("Write any number : ");
    scanf("%d", &a);
    for(b;b<=a;b++){
        if(b==a){
            continue;
        }
        if(a%b==0){
            printf("The given number is not prime");
            break;
        }
    }
    if(a%b!=0){
        printf("The given number is prime");
    }


}


