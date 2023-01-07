#include <stdio.h>
/**
 * main - multiplication table.
 * input from user is used to get its multiples from 0 to 10.
 *
 * Return: Always(0) Success.
 */

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int count = 1;
    while(count <= 10)
    {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);
        count = count + 1;

    }


    return (0);
}
