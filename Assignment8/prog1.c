#include<stdio.h>
int fun(int x, int *y, int *z)
{
int sum =0, e, p, count=0, d;
*y = x%10;
p = x;
while (x>0)
{
d = x%10;
count++;
sum = sum + d;
x = x/10;

}
while (p>10)
{
e = p%10;
p = p/10;
}
*z = e;
return d;
}

void main()
{
int a, b,c,d;
printf("Enter number: ");
scanf("%d", &a);
b = fun(a, &c, &d);
printf("The last digit is %d \n The first digit is %d \n The 2nd digit is %d \n ", c, b, d);
}

