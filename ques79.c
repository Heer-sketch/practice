#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {
    if (num2 != 0) {
        return (float)num1 / num2;
    } else {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
}

int modulus(int num1, int num2) {
    return num1 % num2;
}

int main() {
    int choice, num1, num2;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                printf("Division of %d and %d is %.2f\n", num1, num2, divide(num1, num2));
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
    }

    printf("Exiting the program. Goodbye!\n");
    return 0;
}
