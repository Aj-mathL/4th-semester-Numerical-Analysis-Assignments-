#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a numbers ");
    scanf("%d", &x );
    
    int i, j, t=0;
    
    printf("The factors are \n");
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d\n", i);
        }
    }
    

    
    
    



    printf("This program is written by Abhijit Majumder\n");
    return 0;
}