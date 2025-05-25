#include <stdio.h>

int main() {
    double num1, num2;
    int choice;
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        printf("\n Calculator Menu \n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");

        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
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
                    printf("Error! Division by zero is not allowed.\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &again); 
    }

    return 0;
}