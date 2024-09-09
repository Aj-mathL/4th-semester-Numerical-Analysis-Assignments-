#include<stdio.h>
int main()
{
    int a, b, c, d, p, q, r, e, f;
    
    printf("Enter four value \n");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &p, &q, &r);
    e = (b*r - q*c)/(a*q - p*b);
    f = (a*r - p*c)/(a*q - p*b);
    printf("Point of intersection of %dx + %dy +%d and %dx + %dy + %d is (%d, %d)\n", a, b, c, p, q, r, e, f);

    return 0; 
}