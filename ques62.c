#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        for (k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
