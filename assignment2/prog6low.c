#include<stdio.h>

int main()
{
    int a, b, c, d, x, i=0;
    printf("give four value: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("Give the value of x: \n");
    scanf("%d", &x);
    if(x!=a)
        {
            printf("\n");
            i = i+1;
        }
    else
        printf("x is equal to a and the rank is %d\n", i+1);

    if(x!=b)
        {
            printf("\n");
            i= i+1;
        }
    else
        printf("x is equal to b and the rank is %d\n", i+1);

    if(x!=c)
        {
            printf("\n");
            i = i+1;
        }
    else
        printf("x is equal to c and the rank is %d\n", i+1);

    if(x!=d)
        {
            printf("\n");
            i = i+1;
        }
    else
        printf("x is equal to d and the rank is %d\n", i+1);


    printf("Thsi program is written by abhijit majumder\n");
    return 0;
}