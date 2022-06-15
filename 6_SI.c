// Program to find Simple Interest Compound interest Simple Amount Compound Amount

#include<stdio.h>
#include<math.h>
void main()
{
    float P, T, R, I, A, CI, CA;
    printf("Enter the Principal in RS : ");
    scanf("%f", &P);
    printf("Enter the time period in year : ");
    scanf("%f", &T);
    printf("Enter the rate of the interest per annum : ");
    scanf("%f", &R);
    I = (P*T*R)/100;
    A = P+I;
    CI = P*(pow(1+R/100,T)-1);
    CA = P + CI;
    printf("\n SI : %f \n Amount : %f \n CI : %f \n Compound Amount : %f", I, A, CI, CA);


}
