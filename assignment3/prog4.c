#include<stdio.h>
int main()
{
    int i, x, k, d; 
    printf("Enter a digit is: ");
    scanf("%d", &x);
    while(x>10)
    {
        d = x%10;
        x = x/10;
    }
    printf("The digit is %d\n", d);

    printf("This program is written by Abhijit Majumder\n");
    return 0;
}