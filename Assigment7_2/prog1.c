#include<stdio.h>
int factorial(int x);
int main()
{
    int a, b; 
    printf("Enter a number to find the factorial: ");
    scanf("%d", &a ); 
    b = factorial(a);
    printf("The factorial of %d is %d \n ", a, b ) ; 
    printf("\n This program is written by Abhijit Majumder \n ");

    return 0; 
}
int factorial(int x){
    int i; 
    int d=1; 
    for(i=2; i<=x; i++)
    {
        d = d*i; 
    }
    return d; 
}