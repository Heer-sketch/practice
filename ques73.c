#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;

    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);
    columns = rows; 

    int array[rows][columns], transpose[columns][rows];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    printf("The transpose matrix of the array:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
