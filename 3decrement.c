#include <stdio.h>
void main()
{
    int a=10, b;
    b=a;
    printf("a: %d \n",a);
    printf("b: %d \n");

    b= a--;
    printf("a: %d \n",a);
    printf("b: %d \n",b);

    b= --a;
    printf("a: %d \n",a);
    printf("b: %d \n",b);
}