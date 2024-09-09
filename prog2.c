#include<stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a/10;
    c = b%10;
    printf("Secod last digit of %d, is %d \n",a,c);
    return 0;
}