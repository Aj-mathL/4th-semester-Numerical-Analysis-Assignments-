#include<stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a/10;
    printf("Delete the last digit of %d, is %d \n",a, b);
    return 0;
}