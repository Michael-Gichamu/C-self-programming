#include <stdio.h>
/**
 * multiplication - multiplies 2 numbers.
 * @num1: parameter of a number to be multiplied.
 * @num2: parameter of the second number to be multiplied.
 *
 * Return: multiple of the two numbers.
 */
int multiplication(int num1, int num2)
{
    int mp;
    mp = num1 * num2;
    return mp;
}
/**
 * main - gets input of the two numbers to be multiplied.
 *
 * Return: Always(0) Success.
 */
int main()
{
    int num1, num2;
    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);
    printf("Multiplication of %d by %d: %d", num1, num2, multiplication(num1, num2));
    return 0;
}
