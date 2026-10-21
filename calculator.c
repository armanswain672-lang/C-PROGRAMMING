#include <stdio.h>

int main() {
    int choice;
    float num1 = 20, num2 = 5;

    printf("================================\n");
    printf("       SMART CALCULATOR\n");
    printf("================================\n");

    printf("First Number  : %.2f\n", num1);
    printf("Second Number : %.2f\n", num2);

    printf("\nChoose Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    choice = 1;  // Change this to 1, 2, 3, or 4

    printf("\nSelected Operation: %d\n", choice);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;

        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;

        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;

        case 4:
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    printf("================================\n");
    printf("     CALCULATION COMPLETE\n");
    printf("================================\n");

    return 0;
}