#include<stdio.h>
void main()
{
    int a, b,sum, i, num;
    a=0, b=1,sum=0, i;
    printf("Enter the no of terms : ");
    scanf("%d", &num);
    printf("The fibonnaci series up to %d terms \n %d", num, a);
    for(i=2;i<=num;i++){
            if(i==2){
                sum=b;
              }
            else{
                sum=a+b;
                a = b;
                b = sum;
                }
              printf("\n %d", sum);
}
}
