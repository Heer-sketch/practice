#include <stdio.h>

int string_length(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;  
    }

    return length;  
}

int main() {
    char str[100];

 
    printf("Enter any string: ");
    scanf("%s", str);

    int length = string_length(str);

    printf("Length is: %d\n", length);

    return 0;
}
