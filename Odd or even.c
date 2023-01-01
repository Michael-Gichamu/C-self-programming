#include <stdio.h>
/**
 * main - Checks if input number is odd or even.
 * 
 * Return: Always(0) Success.
 */
 
int main()
{
    int number;
    int divisible = 2;

    printf("Enter a Number: ");
    scanf("%d", &number);

    number % divisible == 0 ? printf("Number is even") : printf("Number is odd");
    return 0;
}
