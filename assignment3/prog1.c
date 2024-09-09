#include<stdio.h>
int main()
{
    int x, k, i, del=0; 
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter the number howmuch you delete: ");
    scanf("%d",  &k);
    for(i=1; i<=k; i++)
    {
        


        x = x/10;
    }

    printf("The digit is %d\n", x);



    return 0;
}