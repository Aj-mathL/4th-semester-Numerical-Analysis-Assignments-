#include<stdio.h>
int main()
{
    int i, x, d, e, f;
    int sum =0; 
    int cout=0;
    printf("Enter a number to check prime or not ");
    scanf("%d", &x);
    i=2; 
    while(x%i!=0)
    {
        i=i+1;
    }
    if(i==x)
        printf("Yes!\n");
    else
        printf("No!\n");
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}