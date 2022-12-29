#include <stdio.h>
#include <stdlib.h>

/**
 * main - converts Temperature from Fahrenheit to Celsius
 *		from 0F to 300F
 *
 *Return: Always(0) Success.
 */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fahr;
    printf("Temperature Table\nCelsuis\tFahrenheit\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%0.1f\t%2.1f\n ", fahr, (5.0 * (fahr - 32)/9.0));
    return (0);
}
