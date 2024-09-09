#include<stdio.h>
#include<math.h>


int main()
{
    float h, k, r, s, cLen;
    printf("Enter the four value \n");
    scanf("%f%f%f%f", &h, &k, &r, &s);

    cLen = (sqrt((r*r) - ((s - h)*(s - h)) ))*2;
    printf("The length of Chord is %0.1f\n", cLen);


    return 0;
}