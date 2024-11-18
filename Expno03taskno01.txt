/* Aim :WAp to design a menu driver calculator using switch and goto.
  
*/
#include<stdio.h>

int main()
{
    float num1, num2, result;
    char op, choice;

    start: // Label for goto
    printf("\n----- Calculator Menu -----\n");
    printf("Enter Num1: ");
    scanf("%f", &num1);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to ignore newline character
    printf("Enter Num2: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
    }
    printf("\nDo you want to perform another calculation? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        goto start; // Jump to the start label
    }
    printf("Thank you for using the calculator!\n");
    return 0;
}
/*
----- Calculator Menu -----
Enter Num1: 3
Enter the operation (+, -, *, /): +
Enter Num2: 5
Result: 8.00

Do you want to perform another calculation? (y/n): n
Thank you for using the calculator!
*/
