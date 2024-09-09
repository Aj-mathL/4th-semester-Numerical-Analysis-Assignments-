#include<stdio.h>
int main()
{
    int i, x;
    printf("Enter a number ");
    scanf("%d", &x);
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d\n", i);
        }
    }
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}