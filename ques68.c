#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Length of an Array: %d\n", n);

    return 0;
}
