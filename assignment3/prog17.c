#include<stdio.h>
int main()
{
    int x,  i, p, n;
    int d[20];
    
    
    int t;
    for(i=1; i<=3; i++)
    {
        int cout=0;
        int j=1;
        printf("Enter the digit: ");
        scanf("%d", &x);
        
        
        while(x%2==0)
        {
            d[j] = x%10;
            
            x=x/10;
            cout++;
           
            j++;
            
        
        }
       
        j=cout;
        for(t=1; t<=cout; t++)
        {
            x=(x*10)+(d[j]/2);
            
            j--;
        }
        

        
      
        printf("The half of number after last odd digit is %d\n", (x*3));
        printf("\n");

    }
    return 0;
}