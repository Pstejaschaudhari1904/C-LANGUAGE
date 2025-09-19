#include <stdio.h>
void main()
{
    int a, b, res;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("a:%d and b:%d %d \n", a,b,res);
    res=a+b;

    printf("Addition of %d and %d : %d\n", a,b,res);
}