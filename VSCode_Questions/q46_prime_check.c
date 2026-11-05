/*
 * Q46. Accept a number and check whether it is prime.
 *
 * A prime number is greater than 1 and has no divisor other than 1 and itself.
 * It is enough to test divisors up to the square root of the number.
 */

#include <stdio.h>

int main(void) {
    long long n;
    long long i;
    int isPrime = 1;

    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (n < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%lld is a prime number\n", n);
    } else {
        printf("%lld is not a prime number\n", n);
    }

    return 0;
}
