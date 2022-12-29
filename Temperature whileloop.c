#include <stdio.h>
#include <stdlib.h>

/**
 * main - converts Temperature from Fahrenheit to Celsius
 *		from 0F to 300F
 *
 *Return: Always(0) Success.
 */
 
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Temperature Table");
    while(fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return (0);
}
