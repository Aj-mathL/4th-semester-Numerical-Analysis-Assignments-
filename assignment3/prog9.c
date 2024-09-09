#include<stdio.h>
int main()
{
    int i, x, k, d, e, sum=0, t = 1; 
    printf("Enter a digit: ");
    scanf("%d", &x);
    while(x>0)
    {
        d = x%10;
        x=x/10;
        if(d%2==0)
        {
            sum = sum + d; 
        }
    }
    printf("The sum of even digit is %d\n", sum );

    printf("This program is written by Abhijit Majumder\n");
    return 0;
}