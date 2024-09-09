#include<stdio.h>
int main()
{
    int x, d, i;
    printf("Enter a digit: ");
    scanf("%d", &x);
    while(x>0)
    {
        d = x%10;
        x =x/10;
        
    }
    printf("The first digit is %d\n", d);
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}