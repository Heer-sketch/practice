#include <stdio.h>

int main() {
    int x, y;
    int result;

    printf("Enter value of x: ");
    scanf("%d", &x);
    
    printf("Enter value of y: ");
    scanf("%d", &y);

    result = (x - y) * (x - y);

    printf("The result of (%d - %d)^2 is: %d\n", x, y, result);

    return 0;
}
