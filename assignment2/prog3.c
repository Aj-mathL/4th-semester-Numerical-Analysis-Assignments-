#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Give three value of a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("Slope of the equation is %.1f \n", (-a/b));

    if(b==0)
    {
        printf("The line is verticle\n");
    }
    else
        printf("The line is not verticle \n");

    printf("This programme is written by Abhijit Majumder  \n");
    return 0;
}