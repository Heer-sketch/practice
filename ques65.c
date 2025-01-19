#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int arrayA[rows][columns], arrayB[rows][columns], result[rows][columns];

    printf("Enter array A's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arrayA[i][j]);
        }
    }

    printf("Enter array B's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arrayB[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            result[i][j] = arrayA[i][j] + arrayB[i][j];
        }
    }

    printf("Resultant Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
