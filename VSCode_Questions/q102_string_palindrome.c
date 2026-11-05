/*
 * Q102. Check whether a string is a palindrome or not.
 *
 * Compare the first and last characters, then move inwards. The length is
 * counted with a loop, so no string.h function is needed.
 * The comparison is exact: case and spaces count as characters.
 */

#include <stdio.h>

#define MAX 100

int main(void) {
    char str[MAX];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        printf("Invalid input\n");
        return 1;
    }

    /* count characters and drop the newline that fgets keeps */
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    str[length] = '\0';

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome\n", str);
    } else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}
