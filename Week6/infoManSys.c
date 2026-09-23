#include <stdio.h>
#include <string.h>

int main() {

    //declare variables
    double salaries[50], budgets[10];
    double highestSalary, lowestSalary, averageSalary;
    double totalBudget, averageBudget;
    char registration[20][20];

    //capture the 50 salaries
    for(int i = 0; i < 50; i++){
        printf("Enter salary %d: ", i + 1);
        scanf("%lf", &salaries[i]);
    }

    //display the salaries
    for(int i = 0; i < 50; i++){
        printf("Salary %d: %.2lf\n", i + 1, salaries[i]);
    }

    //calculate highest and lowest salary
    highestSalary = salaries[0];
    lowestSalary = salaries[0];
    averageSalary = 0;

    for(int i = 0; i < 50; i++){
        if(salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }
        if(salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }

    //calculate total salary
    for(int i = 0; i < 50; i++){
        averageSalary += salaries[i];
    }
    
    //calculate average salary
    averageSalary /= 50;

    //search for a specific salary
    double searchSalary;
    printf("Enter a salary to search for: ");
    scanf("%lf", &searchSalary);
    
    int found = 0;
    for(int i = 0; i < 50; i++){
        if(salaries[i] == searchSalary) {
            printf("Salary %.2lf found at position %d\n", searchSalary, i + 1);
            found = 1;
        }
    }
    if(!found) {
        printf("Salary %.2lf not found.\n", searchSalary);
    }

    //capture the 10 budgets
    for(int i = 0; i < 10; i++){
        printf("Enter budget %d: ", i + 1);
        scanf("%lf", &budgets[i]);
    }

    //display the budgets
    for(int i = 0; i < 10; i++){
        printf("Budget %d: %.2lf\n", i + 1, budgets[i]);
    }

    //calculate total budget
    totalBudget = 0;
    for(int i = 0; i < 10; i++){
        totalBudget += budgets[i];
    }
    
    //calculate average budget
    averageBudget = totalBudget / 10;

    //sort the budgets in ascending order
    for(int i = 0; i < 10 - 1; i++){
        for(int j = 0; j < 10 - i - 1; j++){
            if(budgets[j] > budgets[j + 1]){
                double temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    //capture the 20 registration numbers
    for(int i = 0; i < 20; i++){
        printf("Enter registration number %d: ", i + 1);
        scanf(" %19[^\n]", registration[i]);
    }

    //display the registration numbers
    for(int i = 0; i < 20; i++){
        printf("Registration number %d: %s\n", i + 1, registration[i]);
    }

    //search for a specific registration number
    char searchRegistration[20];
    printf("Enter a registration number to search for: ");
    scanf(" %19[^\n]", searchRegistration);

    found = 0;
    for(int i = 0; i < 20; i++){
        if(strcmp(registration[i], searchRegistration) == 0) {
            printf("Registration number %s found at position %d\n", searchRegistration, i + 1);
            found = 1;
        }
    }
    if(!found) {
        printf("Registration number %s not found.\n", searchRegistration);
    }

    return 0;
}