#include<stdio.h>
int main()
{
    int x[20], sum, i, n; 
    printf("Number of digits to be entered ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Give %d numbers ", n);
        scanf("%d", &x[i]);
    }
    sum =0; 
    for(i=0; i<n; i++)
    {
        sum = sum + (x[i]* x[n-(i+1)]);
    }
    printf("Sum of %d numbers series sum %d \n",n,  sum );
    printf("\n This program is written by Abhijit Majumder \n "); 
    return 0; 
}