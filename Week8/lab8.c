#include <stdio.h>

//declaring functions
void displayWelcome();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void displayMenu();
int searchEmployee(int id, int ids[], int size);

int main() {
    int choice;
    
    displayWelcome();
    
    do {
        displayMenu();
        scanf("%d", &choice);
        printf("\n");
        
        switch (choice) {
            case 1: {
                //Lab Task 2 - Calculate VAT
                float amount;
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("VAT: %.2f\n", calculateVAT(amount));
                break;
            }
            case 2: {
                //Lab Task 3 - Calculate Salary
                float basic, housing, transport;
                printf("Basic salary: ");
                scanf("%f", &basic);
                printf("Housing allowance: ");
                scanf("%f", &housing);
                printf("Transport allowance: ");
                scanf("%f", &transport);
                
                float gross = calculateSalary(basic, housing, transport);
                printf("Gross salary: %.2f\n", gross);
                break;
            }
            case 3: {
                //Lab Task 4 - Calculate Budget
                float revenue, expenses;
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);
                
                calculateBudget(revenue, expenses);
                break;
            }
            case 4: {
                //Lab Task 6 - Search Employee
                int employeeIDs[] = {101, 102, 103, 104, 105};
                int size = sizeof(employeeIDs) / sizeof(employeeIDs[0]);
                int searchID;
                
                printf("Enter employee ID to search: ");
                scanf("%d", &searchID);
                
                int position = searchEmployee(searchID, employeeIDs, size);
                if (position != -1) {
                    printf("Employee found at position %d.\n", position);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            }
            case 5:
                printf("Goodbye.\n");
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n"); //clear line formatting after each task
        
    } while (choice != 5);
    
    return 0;
}

//function definitions

//lab task 1
void displayWelcome() {
    printf("Welcome to the Municipal Financial Management System\n\n");
}

//lab task 2
float calculateVAT(float amount) {
    return amount * 0.15f;
}

//lab task 3
float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

//lab task 4
float calculateBudget(float revenue, float expenses) {
    float balance = revenue - expenses;
    if (balance > 0) {
        printf("Status: SURPLUS\n");
    } else if (balance < 0) {
        printf("Status: DEFICIT\n");
    } else {
        printf("Status: BALANCED\n");
    }
    return balance;
}

//lab task 5 
void displayMenu() {
    printf("--- MUNICIPAL FINANCIAL MANAGEMENT ---\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

//lab task 6
int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}
