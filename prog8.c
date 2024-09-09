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
    
    f= ((e*10 + 2*d)*10 + b);

    printf("Double the second last digit of %d, is %d \n",a, f);
    printf("This program is written by Abhijit Majumder \n");
    return 0;
}