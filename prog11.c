#include<stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter three values: ");
    scanf("%f%f%f", &a, &b, &c);
    d = - (a / b);
    printf("The slope of %.1fx + %.1fy + %.1f is %.1f\n", a, b, c, d);

    return 0; 
}