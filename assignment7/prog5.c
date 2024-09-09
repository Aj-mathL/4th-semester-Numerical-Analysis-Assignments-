#include<stdio.h>
#include<math.h>
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
        sum = sum + pow((x[i] + x[i+1]), i);
        printf("(%d + %d)^%d and %d and pow %d sum %d  \n", x[i], x[i+1],i, x[i]+x[i+1], pow((x[i] + x[i+1]), i), sum);
    }
    printf("Sum of %d numbers series sum %d \n",n,  sum );

    return 0; 
}