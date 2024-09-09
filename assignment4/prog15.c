#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers ");
    scanf("%d%d", &x , &y);
    
    int i, j, t=0;
    
    i=2;
    while (x%i!=0 || y%i!=0)
    {
        i++;
    }
    printf("The smallest common factors is %d \n", i);

    
    
    



    printf("This program is written by Abhijit Majumder\n");
    return 0;
}