#include<stdio.h>
int main()
{
    int x, d, i;
    printf("Enter a digit: ");
    scanf("%d", &x);
    while (x%2!=0)
    {
        
        x=x/10;
    }
    x=x/10;
    d = x%10;
    printf("The digit immediately before the last even is %d\n", d);

    return 0;
}