#include <stdio.h>
/**
 * main - simple calculator using switch statement.
 * 
 * Return: Always(0) Success.
 */
 
int main()
{
    char op;
    double num1,num2;

    printf("Invalid operators are:[ + , - , / , * ]\n");
    printf("Enter invalid operator: ");
    scanf("%c", &op);

    printf("Enter your first number: ");
    scanf("%lf", &num1);

    printf("Enter your second number: ");
    scanf("%lf", &num2);

    switch(op)
    {
        case '+':
            printf("%lf", num1 + num2);
            break;
        case '-':
            printf("%lf", num1 - num2);
            break;
        case '/':
            printf("%lf", num1 / num2);
            break;
        case '*':
            printf("%lf", num1 * num2);
            break;
        default:
            printf("Invalid operator: ");

    }
    return (0);
}
