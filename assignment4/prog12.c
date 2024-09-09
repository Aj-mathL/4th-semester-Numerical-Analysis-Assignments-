#include<stdio.h>
int main()
{
    int i, x, y;
    printf("Enter a number ");
    scanf("%d", &x);
    i=2;
    int cout=0;
    while (x%i!=0)
    {
        i++;
        
    }

    cout = 2;
    while((i+2)%cout!=0)
    {
        cout++;
    }
    printf("Smallest factor of %d and smallest factor of (%d +2 ) is %d\n", x, i, cout);
    
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}