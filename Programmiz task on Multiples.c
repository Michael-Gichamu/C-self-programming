#include <stdio.h>
#include <math.h>
/**
 * main - gets input from user.
 * computes the factorial of a number.
 *
 * Returns: Always(0) Success.
 */
 
int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = multiple(number);

    printf("multiple = %d", result);
    return (0);
}
/**
 * multiple - multiplies a number recursively.
 * @n: is a parameter to which the number multiplied is passed.
 *
 *Return: Multiple if value > 1 and in the range of n.else it returns 0.
 */
int multiple(int n)
{
    if (n > 1)
    {
        return n * multiple(n - 1);
    }
    else
        return 1;
}