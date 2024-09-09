#include<stdio.h>
int main()
{
    int i, x, d, e, f;
    int sum =0; 
    printf("Enter a number ");
    scanf("%d", &x);
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            
            sum = sum + i;
            
        }
    }
    printf("Sum of all factors is %d\n", sum);
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}