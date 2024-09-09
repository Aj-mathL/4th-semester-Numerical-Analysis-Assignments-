#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a numbers ");
    scanf("%d", &x );
    
    int i, t=0;
    
    printf("The factors are \n");
    int a[100];
    int cout=0;
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d\n", i);
            a[cout]=i;
            printf("a[%d], %d\n", cout, i);
            cout++;
        }
        
        
        
        

    }
    printf("cout %d\n", cout);
    printf("i %d\n", i);
    int sum=0;
    int j;
    for(j=0; j<cout-1; j++)
    {
        sum = sum + a[j]*a[j+1];
        printf("%d %d \n", a[j], a[j+1]);
    }
    printf("The sum is %d\n", sum);
    

    
    
    



    printf("This program is written by Abhijit Majumder\n");
    return 0;
}