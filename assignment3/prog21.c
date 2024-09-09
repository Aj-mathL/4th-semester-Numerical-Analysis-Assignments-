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
        p=x%10;
        if(p%3==0)
        {
            printf("The multiple of 3 are: %d\n", p);
        }
        x = x / 10;
        cout++;
        j++;
    }
    
    
    return 0;
}