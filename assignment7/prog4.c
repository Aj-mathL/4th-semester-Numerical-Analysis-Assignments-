#include<stdio.h>
int main()
{
    int x[20], sum, i, n; 
    printf("Number of digits to be entered ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Give %d numbers ", n);
        scanf("%d", &x[i]);
    }
    sum =0; 
    for(i=1; i<=n-1; i++)
    {
        sum = sum + i*(x[i] +  x[i+1]);
    }
    printf("Sum of %d numbers series sum %d \n",n,  sum );

    return 0; 
}