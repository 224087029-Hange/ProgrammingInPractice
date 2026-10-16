#include <stdio.h>

//creating the function
double calculateVAT(double amount) {
    return amount * 0.15;
}

int main() {
    //declare variables
    double price = 7000;

    //call the function
    double vat = calculateVAT(price);
    printf("Price: %.2f\n VAT: %.2f\n", price, vat);
    
    return 0;
}