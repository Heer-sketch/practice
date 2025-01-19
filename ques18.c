#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("This number is Negative\n");
    } else if (number == 0) {
        printf("This number is Neutral\n");
    } else {
        printf("This number is Positive\n");
    }

    return 0;
}
