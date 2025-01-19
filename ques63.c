#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 3) {
            for (j = 1; j <= n; j++) {
                printf("* ");
            }
        } 
        else if (i == 2) {
            printf("* ");
            for (j = 2; j < n; j++) {
                printf("  ");
            }
            printf("* ");
        } 
        else if (i == 4 || i == 5) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
