#include<stdio.h>
int main()
{
    int i, x, d, e, f;
    printf("Enter a number ");
    scanf("%d", &x);
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            d=i%10;
            
            printf("%d\n", d);
        }
    }
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}