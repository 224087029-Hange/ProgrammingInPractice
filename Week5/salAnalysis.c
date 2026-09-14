#include <stdio.h>

int main() {

    //declare variables
    double salary, totalSalary = 0, highestSalary = 0, lowestSalary = 0, averageSalary;

    for(int i = 1; i <= 50; i++) {

        //capture salary of each employee
        printf("Enter salary for employee %d: ", i);
        scanf("%lf", &salary);

        //calculate total salary
        totalSalary += salary;

        //determine highest and lowest salary
        if(i == 1) {
            highestSalary = salary;
            lowestSalary = salary;
        } else {
            if(salary > highestSalary) {
                highestSalary = salary;
            }
            if(salary < lowestSalary) {
                lowestSalary = salary;
            }
        }
    }

     //calculate average salary
        averageSalary = totalSalary / 50;

        //display results
        printf("\n--- Salary Report ---\n");
        printf("Total Salary: %.2lf\n", totalSalary);
        printf("Highest Salary: %.2lf\n", highestSalary);
        printf("Lowest Salary: %.2lf\n", lowestSalary);
        printf("Average Salary: %.2lf\n", averageSalary);

        return 0;

    }