#include <stdio.h>

int main() {
    float maths, english, science, average;

    printf("Enter maths marks: ");
    scanf("%f", &maths);

    printf("Enter english marks: ");
    scanf("%f", &english);

    printf("Enter science marks: ");
    scanf("%f", &science);

    average = (maths + english + science) / 3;

    printf("Average mark: %.2f\n", average);

    return 0;
}
