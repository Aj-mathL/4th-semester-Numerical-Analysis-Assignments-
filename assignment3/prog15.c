#include<stdio.h>
int main()
{
    int x, d, i;
    printf("Enter a digit: ");
    scanf("%d", &x);
    while (x>0)
    {
        d = x%10;
        if(d%3==0)
        {
            printf("%d\n", d);
            break;
        }
        
        
        x=x/10;
    }
    // d= x%10;
    
    
    printf("Multiple of 3 is %d\n", d);

    return 0;
}