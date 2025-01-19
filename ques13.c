#include <stdio.h>

int main() {
    float baseSalary, grossSalary;
    float HRA, DA, TA;

    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    HRA = 10.0; 
    DA = 5.0;   
    TA = 8.0;   
    grossSalary = baseSalary + (baseSalary * HRA / 100) + (baseSalary * DA / 100) + (baseSalary * TA / 100);

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    return 0;
}
