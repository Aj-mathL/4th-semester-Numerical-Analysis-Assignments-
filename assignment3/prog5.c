#include<stdio.h>
int main()
{
    int i, x, k, d, sum=0; 
    printf("Enter a digit is: ");
    scanf("%d", &x);
    while(x>0)
    {
        d = x%10; 
        sum = sum + d; 
        
        x = x/10;
    }
    printf("The sum is %d\n", sum);
    printf("This program is written by Abhijit Majumder\n");

    return 0;
}