#include<stdio.h>
int main()
{
    int x, d, i;
    printf("Enter a digit: ");
    scanf("%d", &x);
    while (x%2!=0)
    {
        x=x/10;
        // printf("%d\n", x);
        while(x%2==0)
        {
            x=x/10;
            // printf("%d\n", x);
            break;

        }
        // printf("%d\n", x);
        
        
    }
     d= x%10;
    
    
    printf("The second last even digit is %d\n", d);

    return 0;
}