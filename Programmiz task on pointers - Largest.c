#include <stdio.h>
#include <stdio.h>
/**
 * main - finds the largest value in an array of numbers.
 *
 *
 * Returns: Always(0) Success.
 */

int main()
{
    int arr[] = {34, 12, 21, 54, 48};
    int largest = *arr;
    for (int i = 0; i < 5; ++i)
    {
        if(largest < *(arr + i))
             largest = *(arr + i);
        printf("%d\n", largest);
    }
    printf("%d", largest);

    return (0);
}
