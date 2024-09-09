#include<stdio.h>
int fun(int x, int *y)
{
int d,e,f;
f = x;
e = f/10;
d = x%10;
x =x/100;
x= x*10 + d;
*y = x;

return e;
}

void main()
{
int a, b,c,d;
printf("Enter number: ");
scanf("%d", &a);
b = fun(a, &c);
printf("%d deleting the last digit, %d \n %d deleting second last digit, %d\n", a, b, a, c);
printf("This program is written by Abhijit Majumder \n ");
}
