#include <stdio.h>

int main() {
    int n = 5;  
    int i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) {
            printf("  ");
        }

        for(j = n - i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
