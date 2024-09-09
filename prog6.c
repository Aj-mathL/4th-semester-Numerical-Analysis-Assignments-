#include<stdio.h>
int main()
{

    int a, b, c, d,e,f;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a%10;
    c= a/10;
    d = c%10;
    e = c/10;
    f= (e*10 + b)*10 + d;

    printf("Exchange the last two digit of %d, is %d \n",a, f);
    return 0;
}