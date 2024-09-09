#include<stdio.h>
int main()
{
    int x[20], sum, i, n; 
    int odd[20], even[20];
    int om=1, em=1; 
    int mul; 
    int j;
    printf("Number of digits to be entered ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Give %d numbers ", i);
        scanf("%d", &x[i]);
    }
    
    for(i=1; i<=n-2; i++)
    {
        if(i%2!=0)
        {
           odd[i]=x[i] + x[i+2];
           om = om * odd[i];
        }
    }
    for(i=1; i<=n-2; i++)
    {
        if(i%2==0)
        {
           even[i]=x[i] + x[i+2]; 
           em = em * even[i];
        }
    }
    mul = om * em; 
    printf("The multiplication of the series is %d\n", mul);
    printf("This program is written by Abhijit Majumder\n");
    return 0; 
}