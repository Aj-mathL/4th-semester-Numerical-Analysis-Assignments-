#include<stdio.h>
#include<math.h>
int main()
{
    float  p,q,r,a,b,c, x, y, d;
    printf("Give the center, radius and value of the line: \n");
    scanf("%f%f%f%f%f%f", &p, &q, &r, &a, &b, &c);
    
    d = (a*p + b*q + c)/(sqrt((a*a) + (b*b)));
    
    if(d>r)
    {
        printf("No intersection\n");
    }
    else
    {
        printf("fuck you!");
    }
    
    printf("the distance %.1f\n", d);

    

    printf("This programme is written by abhijit majumder\n");
}