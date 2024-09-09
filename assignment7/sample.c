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
    for(i=1; i<=n; i++)
    {
        sum = sum + x[i];
    }
    printf("Sum of %d numbers %d",n,  sum );

    return 0; 
}