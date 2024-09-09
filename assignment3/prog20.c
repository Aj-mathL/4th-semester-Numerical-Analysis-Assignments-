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
    int z= 1;
    for (t = 1; t <= cout; t++)
    {
       p = (p*10)+d[z];
       z++;
    }
    int q;
    while(p%2!=0)
    {
        
        p=p/10;
    }
    q=p%10;
    printf("The first even digit is %d\n", q);
    printf("\n");
    return 0;
}