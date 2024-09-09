#include<stdio.h>
int main()
{
    int i, x, k, d, e, sum=0; 
    printf("Enter a digit is: ");
    scanf("%d", &x);
    while(x>0)
    {
        d = x%10;
        x=x/10;
        printf("x is %d\n", x);
        e = x %10;  
        printf(" %d * %d \n", d, e);
        sum = sum + d*e;
        printf("sum = %d\n", sum); 
        
        
        
    }
    printf("The sum is %d\n", sum);

    printf("This program is written by Abhijit Majumder\n");
    return 0;
}