int gcf(int x , int y )
{
    while(y!=0 )
    {
        int temp = y; 
        y = x%y; 
        x  = temp ; 
    }
    return x; 
}

int lcm(int x, int y )
{
    return (x*y )/gcf(x, y);
}

