#include <stdio.h>

int main() {
    int n = 5;  
    int i, j;

    for (i = 41; i <= 41 + n - 1; i++) {
        for (j = 41; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
