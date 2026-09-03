#include <stdio.h>

int main() {
    char supplierName[50];
    double supplierPrice;
    double budget;
    int registrationStatus;
    int documentsComplete;

    printf("Enter supplier name: \n");
    scanf(" %49[^\n]", &supplierName);

    printf("Enter supplier price: %.2f\n");
    scanf("%lf", &supplierPrice);

    printf("Enter budget: %.2f\n");
    scanf("%lf", &budget);

    printf("Enter registration status (1 = Yes, 0 = No): \n");
    scanf("%d", &registrationStatus);

    printf("Enter documents complete status (1 = Yes, 0 = No): \n");
    scanf("%d", &documentsComplete);

    if (registrationStatus == 1 && documentsComplete == 1){
        
        if (supplierPrice <= budget){
            printf("Supplier %s is eligible for the contract.\n", supplierName);
        
        } else {
            printf("Supplier %s is not eligible for the contract due to budget constraints.\n", supplierName);
        }
     } else {
        printf("Supplier %s is not eligible for the contract due to registration or document issues.\n", supplierName);

    }

     return 0;

}