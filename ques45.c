#include <stdio.h>

int main() {
    int n = 5;  
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("%d ", j);
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("  ");
        }

        for (j = n - i; j >= 1; j--) {
            if (i != 0 || j != n - i) {  
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = 1; j <= n - i; j++) {
            printf("%d ", j);
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("  ");
        }

        for (j = n - i; j >= 1; j--) {
            if (i != 0 || j != n - i) { 
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
