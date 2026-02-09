#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c is important

    if (op == '+')
    {
        printf("Addition = %d", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Subtraction = %d", num1 - num2);
    }
    else if (op == '*')
    {
        printf("Multiplication = %d", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 != 0)
            printf("Division = %d", num1 / num2);
        else
            printf("Error! Division by zero");
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}
