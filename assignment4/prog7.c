#include<stdio.h>
int main()
{
    int i, x, d, e, f, k;
    int sum =0; 
    int cout=0;
    printf("Enter a number ");
    scanf("%d", &x);
    printf("Enter factor number ");
    scanf("%d", &k);
    int a[100];
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            
            
            cout++;
            a[cout]=i;
            
            
        }
    }

    printf("The %d no. factor is %d\n",k, a[k] );
   
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}