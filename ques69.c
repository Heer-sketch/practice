#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    average = sum / n;

    printf("Average of an Array: %.2f\n", average);

    return 0;
}
