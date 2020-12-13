#include <stdio.h>

int main(void)
{
    double base, perpedicular, hypotenuse;

    printf("Enter base side: \n");
    scanf("%lf", &base);

    printf("Enter perpendicular side: \n");
    scanf("%lf", &perpedicular);

    printf("Enter hypotenuse side: \n");
    scanf("%lf", &hypotenuse);

    double baseperpsquared = pow(base, 2) + pow(perpedicular, 2);
    //float step2 =
    double hypotsquared = pow(hypotenuse, 2);
    if (baseperpsquared == hypotsquared)
    {
        printf("This is a right triangle.\n");
    }
    else if (baseperpsquared > hypotsquared)
    {
        printf("This is an acute triangle.\n");
    }
    else if (baseperpsquared < hypotsquared)
    {
        printf("This is an obtuse triangle");
    }
    return 0;
}
