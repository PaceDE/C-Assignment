#include<stdio.h>
void main()
{
    int a, b,c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
    if(a>=b && a>=c){

    printf("\n The greatest number is %d", a);
    }
    else if(b>=c){
        printf("\n The greatest number is %d", b);
    }
    else {
        printf("\n The greatest number is %d", c);
    }
}
