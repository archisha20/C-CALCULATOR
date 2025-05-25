#include <stdio.h>

int main() {
    double num1, num2;
    char choice;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");

        printf("Enter your choice (1/2/3/4/5): ");
        int option;
        scanf("%d", &option);

        if (option == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (option) {
            case 1:
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to clear newline

    } while (choice == 'y' || choice == 'Y');

    return 0;
}