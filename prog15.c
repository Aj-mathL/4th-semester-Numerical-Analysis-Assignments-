#include<stdio.h>
#include<math.h>
int main()
{
    float h, k, r, s, area, cLen;
    printf("Enter four values: \n");
    scanf("%f%f%f%f", &h, &k , &r, &s);
    cLen = (sqrt((r*r) - ((s - h)*(s - h)) ));
    area = ((0.5)*(s -2)*(cLen))*2;
    printf("The area of triangle formed by the point of intersection and center of the circle is %.1f*%.1f=%.f\n",cLen, r,  area);

    return 0;
}