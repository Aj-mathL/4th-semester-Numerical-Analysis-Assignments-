#include<stdio.h>
int main()
{
    int a[20], x;
    printf("Enter a digit ");
    scanf("%d", &x);
    int i=1;
    int temp=0;
    int l=0;
    while(x>0)
    {
        a[i]=x%10;

        if(a[i]>temp)
        {
            temp = a[i];
            l=i;
        }
        

        
        x=x/10;
        i++;
    }
    int j= i - l;
    printf("The biggest digit is %d and the location is %d\n", temp, j);


    return 0;
}