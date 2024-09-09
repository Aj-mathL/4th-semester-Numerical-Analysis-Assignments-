#include<stdio.h>
int fun(int x, int *y)
{
int d,e, t=0, p =11, q;
q = x;
while (x>0)
{
d=x%10;
if(d>t)
{
t = d;
}
x = x/10;
}
while (q>0)
{
e = q%10;
if(e<p)
p = e;
q = q/10;
}
*y = p;

return t;
}

void main()
{
int a, b,c,d;
printf("Enter number: ");
scanf("%d", &a);
b = fun(a, &c);
printf("The maximum digit is %d \n The minimum digit is %d\n", b, c);
printf("This program is written by Abhijit Majumder \n ");
}
