#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 5; i >= 1; i--) {
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        for (k = 0; k < i; k++) {
            printf("%d ", (k % 2) ? 0 : 1);
        }
        printf("\n");
    }

    return 0;
}
