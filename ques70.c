#include <stdio.h>

int main() {
    int size, i;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arrayA[size], arrayB[size], arrayC[size];

    printf("Enter array A's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }

    printf("Enter array B's elements:\n");
    for (i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }

    for (i = 0; i < size; i++) {
        arrayC[i] = arrayA[i] + arrayB[i];
    }

    printf("Array C is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arrayC[i]);
    }
    printf("\n");

    return 0;
}
