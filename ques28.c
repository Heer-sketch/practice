#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;  
    }

    printf("The sum of all numbers: %d\n", sum);

    return 0;
}
