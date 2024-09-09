#include<stdio.h>
#include<math.h>

int main()
{
    // float a, b, c, d,  det, r1, r2;
    // printf("Give three value of a, b, c: \n");
    // scanf("%f%f%f%f", &a, &b, &c, &d);
    int i, x;
    float a[10];
    printf("Give four number: \n");
    for(i=1; i<=4; i++)
    {
        printf("a[%d]: ", i);
        scanf("%f", &a[i]);
        printf("\n");
    }
    printf("Give the value of x: \n");
    scanf("%d", &x);
    for(i=1; i<=5; i++)
    {
        if(a[i]!= x)
            printf("\n");
        else
            printf("x is equal to a[%d]=%.1f \n", i, a[i]);
    }
    

    printf("This programme is written by Abhijit Majumder  \n");
    return 0;
}