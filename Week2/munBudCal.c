#include <stdio.h>

int main() {
    double revenue, expenses, balance;
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------------\n");

    printf("Enter total revenue: %.2f\n");
    scanf("%lf", &revenue);

    printf("Enter total expenses: %.2f\n");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("Municipal Budget Balance: %.2f\n\n\n", balance);

    
    printf("MUNICIPAL FINANCIAL SUMMARY\n");
    printf("---------------------------------\n");

    printf("Enter the number of departments: \n");
    scanf("%d", &departments);

    printf("Enter total payroll: %.2f\n");
    scanf("%lf", &payroll);

    printf("Enter total procurement: %.2f\n");
    scanf("%lf", &procurement);

    printf("Enter total assets: %.2f\n");
    scanf("%lf", &assets);


    return 0;
}