/*
 * Q18. Check whether a year is a leap year or not.
 *
 * Rule: a year is a leap year if it is divisible by 4,
 * except century years, which must be divisible by 400.
 */

#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year <= 0) {
        printf("Invalid year\n");
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
