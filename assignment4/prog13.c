#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers ");
    scanf("%d%d", &x , &y);
    
    int i, j, t=0;
    printf("The common factors are \n");
    for(i=2;i<=x; i++)
    {
        if(x%i==0 && y%i==0)
        {
            
            printf("%d\n", i);
        }
    }
    



    printf("This program is written by Abhijit Majumder\n");
    return 0;
}