/*
 * Q23. Check whether the roots of a quadratic equation ax^2 + bx + c = 0 are
 *      i)   Real and Unequal
 *      ii)  Real and Equal
 *      iii) Imaginary
 *
 * The type of roots depends on the discriminant D = b*b - 4*a*c.
 */

#include <stdio.h>

int main(void) {
    double a, b, c, d;

    printf("Enter a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0)\n");
        return 1;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        printf("Roots are Real and Unequal\n");
    } else if (d == 0) {
        printf("Roots are Real and Equal\n");
    } else {
        printf("Roots are Imaginary\n");
    }

    return 0;
}
