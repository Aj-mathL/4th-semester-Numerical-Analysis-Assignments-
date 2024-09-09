#include<stdio.h>
int main()
{
    int a, b, c; 
    printf("give three number\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b && a>c)
        printf("The middle one is %d\n", a);
    else
        printf("");
    if(a<c && a>b)
        printf("The middle one is %d\n", a);
    else
        printf("");
    if(b<a && b>c)
        printf("The middle one is %d\n", b);
    else
        printf("");
    if(b<c && b>a)
        printf("The middle one is %d\n", b);
    else
        printf("");
    if(c<a && c>b)
        printf("The middle one is %d\n", c);
    else
        printf("");
    if(c<b && c>a)
        printf("The middle one is %d\n", c);
    else
        printf("");
    
    printf("This program is written by abhijit majumder\n");
    return 0;
}