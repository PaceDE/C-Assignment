// What happens

#include<stdio.h>
void main()
{
    unsigned char a= 'A';
    a= a+255;
    printf("\n %c %d", a, a);

    printf("\n\n Character with ASCII value %d is %c", 241, 241);
}
