#include <stdio.h>

int main() {
    int size;
    int i, j;
    int diagonal_sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int array[size][size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < size; i++) {
        diagonal_sum += array[i][i];
    }

    printf("The sum of diagonal elements of the array: %d\n", diagonal_sum);

    return 0;
}
