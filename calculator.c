#include <stdio.h>
#include <math.h>

// Function to display the menu
void displayMenu() {
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exponentiation (x^y)\n");
    printf("6. Square Root (sqrt)\n");
    printf("7. Trigonometric Functions (sin, cos, tan)\n");
    printf("8. Exit\n");
    printf("===========================\n");
}

// Function to handle trigonometric operations
void handleTrigFunctions() {
    int choice;
    double angle, result;

    printf("\nChoose Trigonometric Function:\n");
    printf("1. Sine (sin)\n");
    printf("2. Cosine (cos)\n");
    printf("3. Tangent (tan)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);

    // Convert to radians
    angle = angle *M_PI / 180.0;

    switch (choice) {
        case 1: result = sin(angle); break;
        case 2: result = cos(angle); break;
        case 3: result = tan(angle); break;
        default: printf("Invalid choice!\n"); return;
    }

    printf("Result: %.2lf\n", result);
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5: // Exponentiation
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 6: // Square Root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Negative input!\n");
                }
                break;
            case 7: // Trigonometric Functions
                handleTrigFunctions();
                break;
            case 8: // Exit
                printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}