#include<stdio.h>
int main()
{
    int i, x, y, k, d, e, sum=0; 
    printf("Enter two digits those must be same lenth: ");
    scanf("%d%d", &x, &y);
    while(x>0)
    {
        d = x%10;
        x=x/10;
        
        e = y %10; 
        y = y/10;  
        
        sum = sum + d*e;
         
        
        
        
    }
    printf("The product of consecutive digit is %d\n", sum);

    printf("This program is written by Abhijit Majumder\n");
    return 0;
}