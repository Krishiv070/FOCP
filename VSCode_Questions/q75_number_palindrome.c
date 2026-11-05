/*
 * Q75. Check whether a number is a palindrome.
 *
 * Reverse the digits using % 10 and / 10, then compare with the original.
 * Negative numbers are not treated as palindromes.
 */

#include <stdio.h>

int main(void) {
    long long n, temp, reversed = 0;

    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (n < 0) {
        printf("%lld is not a palindrome\n", n);
        return 0;
    }

    temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp = temp / 10;
    }

    if (reversed == n) {
        printf("%lld is a palindrome\n", n);
    } else {
        printf("%lld is not a palindrome\n", n);
    }

    return 0;
}
