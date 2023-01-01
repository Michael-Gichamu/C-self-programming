#include <stdio.h>
/**
 * main - checks month number and outputs the month name.
 *
 * Return: Always(0) Success.
 */

int main()
{
    int monthNumber;

    printf("Month number must be between 1 and 12.");
    printf("Enter a month number to know the month: ");
    scanf("%d", &monthNumber);

    switch(monthNumber)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid input");
    }
    return (0);
}

