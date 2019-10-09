// CS 153 PROGRAM ASSIGNMENT #1
//
// Quadratic Formula
//
// 9/8/18

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, determinant, r1,r2, rP, iP;

    printf("Input for a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    determinant = b*b-4*a*c;

    if (determinant > 0)
    {

        r1 = (-b+sqrt(determinant))/(2*a);
        r2 = (-b-sqrt(determinant))/(2*a);

        printf("r1 = %.2lf and r2 = %.2lf",r1 , r2);
    }

    else if (determinant == 0)
    {
        r1 = r2 = -b/(2*a);

        printf("r1 = r2 = %.2lf;", r1);
    }

    else
    {
        rP = -b/(2*a);
        iP = sqrt(-determinant)/(2*a);
        printf("r1 = %.2lf+%.2lfi and r2 = %.2f-%.2fi", rP, iP, rP, iP);
    }

    return 0;
}   
