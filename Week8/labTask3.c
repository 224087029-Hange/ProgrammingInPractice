#include <stdio.h>

double  calculateSalary(double basicSalary, double housingAllowance, double transportAllowance) {
    return basicSalary + housingAllowance + transportAllowance;  
}

int main() {
    //declare variables
    double basicSalary = 50000;
    double housingAllowance = 10000;
    double transportAllowance = 5000;

    //call the function
    double totalSalary = calculateSalary(basicSalary, housingAllowance, transportAllowance);

    //display all results
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Housing Allowance: %.2f\n", housingAllowance);
    printf("Transport Allowance: %.2f\n", transportAllowance);
    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}