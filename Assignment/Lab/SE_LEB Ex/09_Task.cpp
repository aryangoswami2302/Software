#include<stdio.h>

int main()
{
    int num1, num2;
    char op;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Performing operation using switch
    switch(op)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            printf("Result = %d", num1 / num2);
            break;

        case '%':
            printf("Result = %d", num1 % num2);
            break;

        default:
            printf("Invalid Operator!");
    }

    return 0;
}
