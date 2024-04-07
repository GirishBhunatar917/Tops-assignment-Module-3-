#include <stdio.h>

void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on user's choice
        switch(choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while(choice != 5);

    return 0;
}

// Function to perform addition
void addition() {
    float num1, num2, result;
    printf("Enter two numbers to add: ");
    scanf("%f %f", &num1, &num2);
    result = num1 + num2;
    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
}

// Function to perform subtraction
void subtraction() {
    float num1, num2, result;
    printf("Enter two numbers to subtract (num1 - num2): ");
    scanf("%f %f", &num1, &num2);
    result = num1 - num2;
    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
}

// Function to perform multiplication
void multiplication() {
    float num1, num2, result;
    printf("Enter two numbers to multiply: ");
    scanf("%f %f", &num1, &num2);
    result = num1 * num2;
    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
}

// Function to perform division
void division() {
    float num1, num2, result;
    printf("Enter two numbers to divide (num1 / num2): ");
    scanf("%f %f", &num1, &num2);
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
    }
}
