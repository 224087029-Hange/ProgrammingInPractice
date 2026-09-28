#include <stdio.h>
# include <string.h>

int main() {
    //declare variables
    char supplier[20];
    char email[30];
    char phoneNumber[15];
    char town[20];

    //prompt for supplier name
    printf("Enter supplier name: ");
    fgets(supplier, sizeof(supplier), stdin);

    //prompt for email
    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    //prompt for phone number
    printf("Enter phone number: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);

    //prompt for town
    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);

    //display everything
    printf("---- Supplier Information ----\n");
    printf("\nSupplier Name: %s", supplier);
    printf("Email: %s", email);
    printf("Phone Number: %s", phoneNumber);
    printf("Town: %s", town);

    //dispaly string length
    printf("Length of Supplier Name: %d\n", strlen(supplier));
    printf("Length of Email: %d\n", strlen(email));
    printf("Length of Phone Number: %d\n", strlen(phoneNumber));
    printf("Length of Town: %d\n", strlen(town));

    //searching for specific suppliers
    char supplier1[] = "ABC Supplies";
    char supplier2[] = "Namibia Stationary";
    char searchSupplier[40];

    printf("Enter supplier name to search: ");
    fgets(searchSupplier, sizeof(searchSupplier), stdin);
    searchSupplier[strcspn(searchSupplier, "\n")] = '\0';

    
    if(strcmp(searchSupplier, supplier1) == 0) {
        printf("Supplier found\n");
    } 
    else if (strcmp(searchSupplier, supplier2) == 0) {
            printf("Supplier found\n");
    } else {
            printf("Supplier not found\n");
    }

    //copying supplier information
    char copiedSupplier[20];
    strcpy(copiedSupplier, supplier);
    printf("Copied Supplier Name: %s", copiedSupplier);

    //supplier description
    char description[100];
    strcpy(description, supplier);
    strcat(description, "is located in ");
    strcat(description, town);

    printf("Supplier Description: %s", description);
    
    return 0;
}