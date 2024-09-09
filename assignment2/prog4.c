#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, det, r1, r2;
    printf("Give three value of a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);
    det = (b*b - (4*a*c));

    r1 = (-b + sqrt(det))/(2*a);
    r2 = (-b - sqrt(det))/(2*a);

    if(r1==r2)
    {
        printf("The roots are real and equal, the root is %.1f\n", r1);

    }
    else{
        if (det<0)
        {
            printf("(%.1f)+(%.1f)i and (%.1f)+(%.1f)i\n", (-b/(2*a)), ((sqrt(4*a*c - b*b))/(2*a)), (-b/(2*a)), (-(sqrt(4*a*c - b*b))/(2*a)));
        }
        else
            printf("The distinct roots are %.1f and %.1f \n", r2, r1);
        
    }

    printf("This programme is written by Abhijit Majumder  \n");
    return 0;
}