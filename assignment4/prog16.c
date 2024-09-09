#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers ");
    scanf("%d%d", &x , &y);
    
    int i, j, t=0;
    
    i=2;
    while (i%x!=0 && i%y!=0)
    {
        i++;
    }
    printf("The least common multiplier is %d \n", i);
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}