#include <stdio.h>

int main()
 {
    char ch = 'a'; 

    do 
    {
        printf("%c ", ch); 
        ch = ch + 4; 
    } while (ch <= 'z');  
    printf("\n"); 
    return 0;
}
