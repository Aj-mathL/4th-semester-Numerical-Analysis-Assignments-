#include<stdio.h>
int main()
{
    int i, x, d, e, f, k;
    int sum =0; 
    int cout=0;
    printf("Enter a number ");
    scanf("%d", &x);
   
    int a[100];
    printf("The factors divided by 5 and leave remainder 2 are \n");
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            cout++;
            a[cout]=i;
            if(i%5==2)
            {
                printf("%d\n", i);
            }
        }
    }
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}