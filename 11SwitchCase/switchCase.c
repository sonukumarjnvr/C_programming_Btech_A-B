#include <stdio.h>

int main() {
    char operator;
    double a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case '+':
            result = a + b;
            printf("Result: %lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %lf\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;

}