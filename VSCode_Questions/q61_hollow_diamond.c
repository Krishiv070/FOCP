/*
 * Q61. Display a hollow diamond pattern of *.
 *
 * n is the number of rows in the upper half including the widest row.
 * For n = 5 the diamond has 9 rows.
 * Row k (distance from the top or bottom tip) has a star at the left edge,
 * and a second star after 2k-1 spaces, unless it is a tip (k = 0).
 */

#include <stdio.h>

int main(void) {
    int n, i, j, k;

    printf("Enter n (rows in the upper half): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) {
        printf("Invalid input (use 1 to 50)\n");
        return 1;
    }

    for (i = 0; i < 2 * n - 1; i++) {
        /* k grows from 0 to n-1 and then shrinks back to 0 */
        k = (i < n) ? i : 2 * n - 2 - i;

        for (j = 0; j < n - 1 - k; j++) {
            printf(" ");
        }
        printf("*");

        if (k > 0) {
            for (j = 0; j < 2 * k - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
