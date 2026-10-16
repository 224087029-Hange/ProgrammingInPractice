#include <stdio.h>

//function declarations
double calculateBudget(double revenue, double expenses);


int main() 
{
    double rev;
    double exp;

    printf("Enter total revenue: ");
    scanf("%lf", &rev);

    printf("Enter total expenses: ");
    scanf("%lf", &exp);

    //calling the function
    calculateBudget(rev, exp);

    return 0;
}

//function definitions
double calculateBudget(double revenue, double expenses) 
{
    double result = revenue - expenses;

    if (result > 0) 
    {
        printf("SURPLUS\n");
    } 
    else if (result < 0) 
    {
        printf("DEFICIT\n");
    } 
    else 
    {
        printf("BALANCED\n");
    }

    return result;
}
