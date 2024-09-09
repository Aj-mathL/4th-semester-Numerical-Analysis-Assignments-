#include<stdio.h>
int main()
{

    int a, b, c, d,e,f,g,h;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a%10;
    c= a/10;
    d = c%10;
    e = c/10;
    g = e%10;
    h = e/10;
    f= ((h*10 + b)*10 + d)*10 + g;

    printf("Exchange the last digit and last third digit of %d, is %d \n",a, f);
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}