#include <stdio.h>
int main()
{
    int x, i, p, n;
    int d[20];

    

    int cout = 0;
    int j = 1;
    printf("Enter the digit: ");
    scanf("%d", &x);

    while (x>0)
    {
        d[j] = x % 10;

        x = x / 10;
        cout++;

        j++;
    }
    p = 0;
    int t;
    int z= cout;
    
    for (t = 1; t <= cout-1; t++)
    {
       p=p + (d[z])*10+d[z-1];
       
       z--;
    }

    printf("Sum of numbers formed by consecutive digit is %d\n", p);
    printf("\n");

    return 0;
}