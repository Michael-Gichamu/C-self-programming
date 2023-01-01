#include <stdio.h>
#include <stdlib.h>

/**
 * main - verify expression getchar() != EOF is 0 or 1.
 * prints the value of EOF
 * 
 *Return: Always(0) Success.
 */

int main()
{

    int c;
    while ( c = getchar() != EOF ) {
        printf("%d\n", c);
    }
}