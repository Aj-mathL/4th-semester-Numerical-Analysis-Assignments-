#include<stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a%10;
    c= a/10;
    d = c*10 + 2*b;
    printf("Double the last digit of %d, is %d \n",a, d);
    return 0;
}