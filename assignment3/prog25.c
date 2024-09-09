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
        x=x/10;
        i++;
    }
    int j;
    int p=0;
    for(j=1; j<=i-1; j++)
    {
        p = p*10 + a[j];
    }
    printf("The reverse digit is %d and the double of the reverse %d \n", p, (p*2));


    return 0;
}