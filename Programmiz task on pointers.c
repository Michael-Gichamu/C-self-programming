#include <stdio.h>
#include <stdio.h>
/**
 * main - Gets input about users salary and assigns a new value 
 * less than 1000 using a pointer variable.
 *
 *
 * Returns: Always(0) Success.
 */

int main()
{
    double salary;
    double* salaryptr = &salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    *salaryptr = salary * 2;

    printf("Your salary is: %lf", *salaryptr);
    return (0);
}
