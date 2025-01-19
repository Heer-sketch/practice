#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next;

    printf("Enter any number: ");
    scanf("%d", &N);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d, ", first); 
            continue;  
        }
        if (i == 2) {
            printf("%d, ", second);  
            continue;  
        }
        next = first + second;  
        printf("%d", next); 
        if (i != N) {
            printf(", ");  
        }
        first = second;  
        second = next;  
    }

    printf("\n");  

    return 0;
}
