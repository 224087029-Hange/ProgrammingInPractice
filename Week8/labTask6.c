#include <stdio.h>

//creating the function
int searchEmployee(int searchID, int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == searchID) {
            return i;
        }
    }
    return -1;
}

int main() {
    //declare variables
    int employees[] = {101, 102, 103, 104, 105};
    int searchID = 0;
    
    //ask user for input
    printf("Enter the employee ID to search: ");
    scanf("%d", &searchID);

    //call the function
    int index = searchEmployee(searchID, employees, 5);

    //dispaly index of the employee
    printf("Employee can be found at index: %d", index);
    
    return 0;
}