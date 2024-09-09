#include<stdio.h>
int main()
{
    int i, x;
    printf("Enter a number ");
    scanf("%d", &x);
    i=2;
    while (x%i!=0)
    {
        i++;
    }
    printf("The smallest factor is %d\n", i);
    
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}