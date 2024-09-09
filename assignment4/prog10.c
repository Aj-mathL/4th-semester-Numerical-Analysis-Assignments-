#include<stdio.h>
int main()
{
    int i, x;
    printf("Enter a number ");
    scanf("%d", &x);
    i=2;
    int cout=0;
    while (x%i!=0)
    {
        i++;
        
    }

    cout = i+1;
    while(x%cout!=0)
    {
        cout++;
    }
    printf("The smallest factor is %d and the second smallest factor is %d\n", i, cout);
    
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}