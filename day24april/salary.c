#include <stdio.h>
//calculating gross salary using float

float grossincome(float baseSalary, float hraPercentage, float daPercentage, float taPercentage);

int main() {
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary;

    printf("Enter base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercentage);
    printf("Enter DA percentage: ");
    scanf("%f", &daPercentage);
    printf("Enter TA percentage: ");
    scanf("%f", &taPercentage);

    grossSalary = grossincome(baseSalary, hraPercentage, daPercentage, taPercentage);
    printf("Gross salary: %.2f\n", grossSalary);

    return 0;
}

float grossincome(float baseSalary, float hraPercentage, float daPercentage, float taPercentage) {
    return baseSalary + (baseSalary * hraPercentage / 100) + (baseSalary * daPercentage / 100) + (baseSalary * taPercentage / 100);
}
