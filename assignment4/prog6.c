#include<stdio.h>
int main()
{
    int i, x, d, e, f, k;
    int sum =0; 
    int cout=0;
    printf("Enter a number ");
    scanf("%d", &x);
    
    int a[100];
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            cout++;
            printf("(%d, %d)\n", i, cout);
            
            
        }
    }

    
   
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}