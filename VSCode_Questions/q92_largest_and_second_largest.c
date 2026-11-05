/*
 * Q92. Find the largest and second largest number in an array of size 5.
 *
 * Single pass over the array. The second largest is the largest value that is
 * strictly smaller than the largest, so repeated values are counted once.
 */

#include <stdio.h>

#define SIZE 5

int main(void) {
    int arr[SIZE];
    int i;
    int largest, second = 0;
    int hasSecond = 0;

    printf("Enter %d numbers: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    largest = arr[0];
    for (i = 1; i < SIZE; i++) {
        if (arr[i] > largest) {
            second = largest;
            hasSecond = 1;
            largest = arr[i];
        } else if (arr[i] < largest && (!hasSecond || arr[i] > second)) {
            second = arr[i];
            hasSecond = 1;
        }
    }

    printf("Largest number: %d\n", largest);
    if (hasSecond) {
        printf("Second largest number: %d\n", second);
    } else {
        printf("There is no second largest number (all values are equal)\n");
    }

    return 0;
}
