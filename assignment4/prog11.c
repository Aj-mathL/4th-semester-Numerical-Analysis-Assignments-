#include<stdio.h>
int main()
{
    int i, x, y;
    printf("Enter two number ");
    scanf("%d%d", &x, &y);
    i=2;
    int cout=0;
    while (x%i!=0)
    {
        i++;
    }
    cout = 2;
    while(y%cout!=0)
    {
        cout++;
    }
    printf("The sum of smallest factors of two numbers %d and %d is (%d + %d)= %d\n", x, y,i, cout, (i+cout));
    printf("This program is written by Abhijit Majumder\n");
    return 0;
}