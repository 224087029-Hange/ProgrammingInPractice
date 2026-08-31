#include <stdio.h>

int main() {
    double basicSalary, housingAllowance, transportAllowance, tax, grossSalary, netSalary;

    printf("Enter basic salary: %.2f\n");
    scanf("%lf", &basicSalary);

    printf("Enter housing allowance: %.2f\n");
    scanf("%lf", &housingAllowance);

    printf("Enter transport allowance: %.2f\n");
    scanf("%lf", &transportAllowance);

    tax = 0.15;

    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - (grossSalary * tax);

    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}