#include <stdio.h>

/**
 * square_of_number - squares a number.
 *
 * @num: Parameter. of the function to be squared.
 *
 * Return: void.
 */

void square_of_number(int num)
{
    int square;
    square = num * num;
    printf("The square of %d: %d", num, square);
}

/**
 * main - gets input of the number to be squared.
 *
 * Return: Always(0) Success.
 */

int main()
{
    int num;

    printf("Enter your a number to be squared: ");
    scanf("%d", &num);
    square_of_number(num);

    return 0;
}
