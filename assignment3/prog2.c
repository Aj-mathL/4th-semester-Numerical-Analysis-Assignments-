#include<stdio.h>
int main()
{
    int x, i, k, d;
    printf("Enter a digit: ");
    scanf("%d", &x);
    printf("Enter k: ");
    scanf("%d", &k);

    for(i= 1; i<=k-1; i++)
    {
        x = x/10;

    }

    d = x%10;
    printf("The %dth digit is %d\n", k, d);


    printf("This program is written by Abhijit Majumder\n");
    return 0;
}