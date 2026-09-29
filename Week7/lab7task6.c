#include <stdio.h>
#include <string.h>

int main() {
    //declaring variables
    char supplierName[100] = "";
    char email[100] = "";
    char phone[30] = "";
    char town[50] = "";
    
    char searchName[100];
    int choice;
    int hasSupplier = 0; //checking if a supplier has been added

    do {
        //displaying the menu
        printf("--- MUNICIPAL FINANCIAL MANAGEMENT ---\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        //consume the leftover newline character from scanf
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter supplier name: ");
                fgets(supplierName, sizeof(supplierName), stdin);
                //removing the newline
                supplierName[strcspn(supplierName, "\n")] = '\0';

                printf("Enter email: ");
                fgets(email, sizeof(email), stdin);
                email[strcspn(email, "\n")] = '\0';

                printf("Enter phone: ");
                fgets(phone, sizeof(phone), stdin);
                phone[strcspn(phone, "\n")] = '\0';

                printf("Enter town: ");
                fgets(town, sizeof(town), stdin);
                town[strcspn(town, "\n")] = '\0';

                hasSupplier = 1;
                printf("Supplier added successfully!\n");
                break;

            case 2:
                if (!hasSupplier) {
                    printf("No supplier data available. Please add a supplier first.\n");
                } else {
                    printf("\n--- SUPPLIER DETAILS ---\n");
                    printf("Name : %s\n", supplierName);
                    printf("Email: %s\n", email);
                    printf("Phone: %s\n", phone);
                    printf("Town : %s\n", town);
                }
                break;

            case 3:
                if (!hasSupplier) {
                    printf("No supplier available to search.\n");
                } else {
                    printf("Enter supplier name to search: ");
                    fgets(searchName, sizeof(searchName), stdin);
                    searchName[strcspn(searchName, "\n")] = '\0';

                    //comparing names
                    if (strcmp(supplierName, searchName) == 0) {
                        printf("Supplier found.\n");
                    } else {
                        printf("Supplier not found.\n");
                    }
                }
                break;

            case 4:
                if (!hasSupplier) {
                    printf("No supplier data available.\n");
                } else {
                    //displaying string length
                    printf("\nSupplier name length: %zu\n", strlen(supplierName));
                }
                break;

            case 5:
                printf("Goodbye\n");
                break;

            default:
                printf("Invalid choice. Please choose between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
