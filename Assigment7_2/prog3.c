#include<stdio.h>
#include "function.h" 
int main()
{
    int x, y, b; 
    printf("Enter two digit to find gcf: "); 
    scanf(" %d%d", &x , &y ) ; 
    b =  gcf(x, y );
    printf("The gcf of %d and %d is %d \n ", x, y, b); 
    return 0; 
}
