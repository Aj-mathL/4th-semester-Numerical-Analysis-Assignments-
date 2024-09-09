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
        
        printf("%d\t", d*t);
        t = t*10;

        
        
        
        
    }
    
    printf("This program is written by Abhijit Majumder\n");

    return 0;
}