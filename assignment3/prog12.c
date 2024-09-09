#include<stdio.h>
int main()
{
    int i, x, k, d, e, sum=0, t = 1; 
    printf("Enter a digit: ");
    scanf("%d", &x);
    while (x%2!=0)
    {
       
        x = x/10; 
    }
     d = x%10;
    printf("The first even digit is %d\n", d);
    

    printf("This program is written by Abhijit Majumder\n");
    return 0;
}