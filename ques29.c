#include <stdio.h>

int main() 
{
    int N;
    long long factorial = 1;

    printf("Enter any number: ");
    scanf("%d", &N);

    if (N < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } else
     {
        for (int i = 1; i <= N; i++)
         {
            factorial *= i; 
        }

        printf("The factorial is: %lld\n", factorial);
    }

    return 0;
}
