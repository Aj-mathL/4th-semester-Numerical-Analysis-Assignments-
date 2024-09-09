#include<stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    d = a%10;
    b = a/10;
    c = b%10;

    printf("Sum of last two digit digit of %d, is %d \n",a,d+c);
    return 0;
}