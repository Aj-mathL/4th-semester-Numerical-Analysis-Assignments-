#include<stdio.h>
int main()
{
    int i, x, k, d, e, num=0, t = 1; 
    printf("Enter a digit: ");
    scanf("%d", &x);
    while(x>0)
    {
        d = x%10;
        x=x/10;
        if(d%2==0)
        {
            num++;
        }
    }
    printf("The number of even digit is %d\n", num );
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}