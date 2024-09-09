#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers ");
    scanf("%d%d", &x , &y);
    
    int i, j, t=0;
    
    for(i=1;i<=x; i++)
    {
        if(x%i==0 && y%i==0)
        {
            if(i>t)
            {
                t=i; 
            }
        }
    }
    printf("The greatest common factors is %d \n", t);



    printf("This program is written by Abhijit Majumder\n");
    return 0;
}