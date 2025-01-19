#include <stdio.h>

int main() {
    int num1 = 12, num2 = 6;
    int addition, subtraction, multiplication, division, modulo;

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    modulo = num1 % num2;

    printf("Addition of %d and %d is %d\n", num1, num2, addition);
    printf("Subtraction of %d and %d is %d\n", num1, num2, subtraction);
    printf("Multiplication of %d and %d is %d\n", num1, num2, multiplication);
    printf("Division of %d and %d is %d\n", num1, num2, division);
    printf("Modulo of %d and %d is %d\n", num1, num2, modulo);

    printf("\n%d + %d = %d\n", num1, num2, addition);
    printf("%d - %d = %d\n", num1, num2, subtraction);
    printf("%d * %d = %d\n", num1, num2, multiplication);
    printf("%d / %d = %d\n", num1, num2, division);
    printf("%d %% %d = %d\n", num1, num2, modulo);

    return 0;
}
