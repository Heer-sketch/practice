#include <stdio.h>

int main() {
    int num = 5;
    int square = num * num;

    for (int i = 0; i < 10; i++) {
        printf("-"); 
    }
    printf("\n");

    printf("|           |\n");
    printf("| %d x %d = %d |\n", num, num, square);
    printf("|           |\n");

    for (int i = 0; i < 10; i++) {
        printf("-"); 
    }
    printf("\n");

    return 0;
}
