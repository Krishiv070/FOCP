/*
 * Q107. Store a 3x3 matrix and compute its transpose.
 *
 * The transpose swaps rows and columns: transpose[j][i] = matrix[i][j].
 */

#include <stdio.h>

#define N 3

int main(void) {
    int matrix[N][N], transpose[N][N];
    int i, j;

    printf("Enter the %d elements of the %dx%d matrix:\n", N * N, N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input\n");
                return 1;
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
