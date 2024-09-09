#include<stdio.h>
int main()
{
    int x[20], sum, i, n, t; 
    printf("Number of digits to be entered ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Give %d numbers ", n);
        scanf("%d", &x[i]);
    }
    sum =0; 
    for(i=1; i<=n-2; i++)
    {
        t = (x[i]-x[i+1])*(x[i+1]+x[i+2]);
        sum = sum + t;
    }
    printf("Sum of %d numbers %d",n,  sum );
    printf("\nThis program is written by Abhijit Majumder\n"); 

    return 0; 
}