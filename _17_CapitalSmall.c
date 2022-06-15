// Program to determine Capital and Small letter

#include<stdio.h>
void main()
{
    char Letter;
    printf("\n Enter the Letter : ");
    scanf("%c", &Letter);
    if(Letter>= 65 && Letter <=90){
        printf("\n %c is a Capital Letter", Letter);
    }
    if(Letter>=97 && Letter<= 122){
        printf("\n %c is a Small Letter", Letter);
    }

}
