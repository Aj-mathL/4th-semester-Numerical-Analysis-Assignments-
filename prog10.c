#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter four values: /n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    e = sqrt((c - a)*(c - a ) + (d - b)*(d - b));
    printf("\n The distance between (%d, %d) and (%d , %d) is %d\n", a, b, c, d, e);



    return 0;
}