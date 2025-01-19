#include <stdio.h>

int main() {
    for (int i = 1; i <= 8; i++) {
        if (i == 1 || i == 2 || i == 3) {
            printf("*\n");
        } else if (i == 4) {
            printf("*                     *    *                       *\n");
        } else if (i == 5) {
            printf("*              *              *                  *\n");
        } else if (i == 6) {
            printf("*            *                   *            *\n");
        } else if (i == 7) {
            printf("*         *                         *    *\n");
        } else if (i == 8) {
            printf("*      *\n");
        }
    }

    return 0;
}
