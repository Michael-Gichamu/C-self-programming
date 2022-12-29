#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates two numbers by 
 * a given operator.
 * Return: Always(0) Success.
 */

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a Number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a Number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("%lf", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%lf", num1 - num2);
    }
    else if(op == '*')
    {
        printf("%lf", num1 * num2);
    }
    else if(op == '/')
    {
        printf("%lf", num1 / num2);
    }
    else
    {
        printf("Invalid operator"); 
    }
    return (0);
}