#include <stdio.h>

int main() {
    int array[5][5];
    int i, j, sum = 0;

    printf("Enter array's elements:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Boundary elements of the array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("The sum of boundary elements of the array: %d\n", sum);

    return 0;
}
