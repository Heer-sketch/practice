#include <stdio.h>

int main() {
    float firstAngle, secondAngle, thirdAngle;

    printf("Enter first angle: ");
    scanf("%f", &firstAngle);

    printf("Enter second angle: ");
    scanf("%f", &secondAngle);

    thirdAngle = 180.0 - (firstAngle + secondAngle);

    printf("Third angle: %.2f\n", thirdAngle);

    return 0;
}
