#include<stdio.h>
int main()
{

    int a, b, c, d;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    c= (a/10)*10 + (b%10);
    d= (b/10)*10 + (a%10);
    printf("Product of %d and %d after exchanging their last digits (%d * %d) = %d\n", a, b, c, d, c*d);
    return 0;
}

