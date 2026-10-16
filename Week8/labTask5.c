#include <stdio.h>

//declaring the function
void displayMenu();

int main() 
{
    int choice;

    //calling the function
    displayMenu();
    
    //user choice
    scanf("%d", &choice);
    printf("You selected choice: %d\n", choice);

    return 0;
}

//function definitions
void displayMenu() 
{
    printf("\n==================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}
