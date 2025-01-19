#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    first_digit = num;
    while (first_digit >= 10) {
        first_digit = first_digit / 10;
    }

    sum = first_digit + last_digit;

    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
