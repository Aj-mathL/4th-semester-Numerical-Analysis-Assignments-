#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c , radius;
    printf("Enter three values \n");
    scanf("%f%f%f", &a, &b, &c);

    radius = sqrt(((a/2)*(a/2)) + ((b/2)*(b/2)) - c);
    printf("The center of the circle is (%.1f, %.1f) and radius is %0.1f\n", (-a/2), (-b/2), radius);



    return 0;
}