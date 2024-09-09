#include<stdio.h>
int main()
{
    int i, x, d, e, f, k;
    int temp =0; 
    int cout=0;
    printf("Enter a number ");
    scanf("%d", &x);
   
    int a[100];
    printf("The factors divided by 5 and leave remainder 2 are \n");
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            if(i>temp && i!=x)
            {
                temp = i; 
            }
        }
    }

    printf("The biggest factor is %d\n", temp);
   
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}