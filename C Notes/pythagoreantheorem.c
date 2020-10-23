#include <stdio.h>

int main(void) {
    double base, perpedicular, hypotenuse;

    printf("What is the base side? : \n");
    scanf("%lf", &base);

    printf("What is the perpendicular side? : \n");
    scanf("%lf", &perpedicular);

    printf("What is the perpendicular side? : \n");
    scanf("%lf", &hypotenuse);

    double baseandperpsquared = pow(base, 2) + pow(perpedicular, 2);
    //float step2 = 
    double hypotenusesquared = pow(hypotenuse, 2);
    if (baseandperpsquared == hypotenusesquared){
        printf("It is a right triangle.\n");
    }
    else if (baseandperpsquared > hypotenusesquared){
        printf("It is an acute triangle.\n");
    }
    else if (baseandperpsquared < hypotenusesquared){
        printf("It is an obtuse triangle");
    }
    return 0;
}