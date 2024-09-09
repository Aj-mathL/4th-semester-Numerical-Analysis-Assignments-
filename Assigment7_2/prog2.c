#include<stdio.h>
#include "function.h" 
int main()
{
    int x, y, b; 
    printf("Enter two digit to find lcm: "); 
    scanf(" %d%d", &x , &y ) ; 
    b = lcm(x, y );
    printf("The lcm of %d and %d is %d \n ", x, y, b); 
    return 0; 
}
